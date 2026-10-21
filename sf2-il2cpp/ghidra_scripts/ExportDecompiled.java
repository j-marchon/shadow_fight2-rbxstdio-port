// Decompiles the functions at the RVAs listed in a file (one hex RVA per line) and writes
// each result to <outDir>/<rva>.c. Already-written files are skipped, so reruns resume.
// Args: <rva list file> <out dir> [timeout seconds]
//@category Il2Cpp

import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.*;
import java.util.*;
import java.util.concurrent.atomic.AtomicInteger;

import ghidra.app.decompiler.*;
import ghidra.app.decompiler.parallel.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.util.task.TaskMonitor;

public class ExportDecompiled extends GhidraScript {

	@Override
	protected void run() throws Exception {
		String[] args = getScriptArgs();
		List<String> rvas = Files.readAllLines(Path.of(args[0]));
		Path out = Path.of(args[1]);
		int timeout = args.length > 2 ? Integer.parseInt(args[2]) : 120;
		Files.createDirectories(out);

		Address base = currentProgram.getImageBase();
		List<Function> todo = new ArrayList<>();
		int missing = 0;
		for (String line : rvas) {
			String rva = line.trim();
			if (rva.isEmpty() || Files.exists(out.resolve(rva + ".c"))) continue;
			Function f = getFunctionAt(base.add(Long.parseLong(rva, 16)));
			if (f == null) { missing++; continue; }
			todo.add(f);
		}
		println("to decompile: " + todo.size() + ", no function at RVA: " + missing);

		AtomicInteger done = new AtomicInteger(), failed = new AtomicInteger();
		long t0 = System.currentTimeMillis();
		DecompileConfigurer cfg = d -> {
			DecompileOptions o = new DecompileOptions();
			o.grabFromProgram(currentProgram);
			d.setOptions(o);
			d.toggleCCode(true);
			d.toggleSyntaxTree(false);
			d.setSimplificationStyle("decompile");
		};
		DecompilerCallback<Void> cb = new DecompilerCallback<>(currentProgram, cfg) {
			@Override
			public Void process(DecompileResults r, TaskMonitor m) throws Exception {
				Function f = r.getFunction();
				String rva = Long.toHexString(f.getEntryPoint().subtract(base)).toUpperCase();
				String body;
				if (r.decompileCompleted() && r.getDecompiledFunction() != null) {
					body = r.getDecompiledFunction().getC();
				}
				else {
					failed.incrementAndGet();
					body = "/* DECOMPILE FAILED: " + r.getErrorMessage() + " */\n";
				}
				String header = "// " + f.getName() + " @ RVA 0x" + rva + "\n";
				Files.writeString(out.resolve(rva + ".c"), header + body, StandardCharsets.UTF_8);
				int n = done.incrementAndGet();
				if (n % 500 == 0) {
					println(String.format("%d/%d decompiled, %d failed, %ds", n, todo.size(), failed.get(),
						(System.currentTimeMillis() - t0) / 1000));
				}
				return null;
			}
		};
		cb.setTimeout(timeout);
		try {
			ParallelDecompiler.decompileFunctions(cb, todo, monitor);
		}
		finally {
			cb.dispose();
		}
		println("finished: " + done.get() + " written, " + failed.get() + " failed");
	}
}
