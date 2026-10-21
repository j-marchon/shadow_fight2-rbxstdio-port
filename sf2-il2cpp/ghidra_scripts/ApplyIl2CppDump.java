// Headless port of Il2CppDumper's ghidra_with_struct.py (Jython is not bundled with Ghidra 12).
// Args: <dump dir containing script.json and il2cpp_ghidra.h>
//@category Il2Cpp

import java.io.*;
import java.nio.charset.StandardCharsets;

import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonToken;

import ghidra.app.cmd.function.ApplyFunctionSignatureCmd;
import ghidra.app.cmd.function.FunctionRenameOption;
import ghidra.app.script.GhidraScript;
import ghidra.app.util.cparser.C.CParser;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.*;
import ghidra.program.model.symbol.SourceType;

public class ApplyIl2CppDump extends GhidraScript {

	private Address base;
	private DataTypeManager dtm;
	private long t0;

	private void log(String msg) {
		println(String.format("[il2cpp %6ds] %s", (System.currentTimeMillis() - t0) / 1000, msg));
	}

	@Override
	protected void run() throws Exception {
		t0 = System.currentTimeMillis();
		File dir = new File(getScriptArgs()[0]);
		base = currentProgram.getImageBase();
		dtm = currentProgram.getDataTypeManager();

		// Analysis option: parameter ID is very slow on ~190k functions and signatures come from the dump.
		setAnalysisOption(currentProgram, "Decompiler Parameter ID", "false");

		parseHeader(new File(dir, "il2cpp_ghidra.h"));

		File json = new File(dir, "script.json");
		// Pass 1: functions, names, strings, metadata. Pass 2: signatures (needs functions to exist).
		walk(json, false);
		walk(json, true);
		log("done");
	}

	private void parseHeader(File header) {
		log("parsing " + header.getName());
		try (InputStream in = new BufferedInputStream(new FileInputStream(header))) {
			CParser parser = new CParser(dtm, true, null);
			parser.parse(in);
			log("header parsed, composites in DTM: " + dtm.getDataTypeCount(true));
		}
		catch (Exception e) {
			log("HEADER PARSE FAILED (continuing with names only): " + e);
		}
	}

	private void walk(File json, boolean signatures) throws Exception {
		try (JsonReader r = new JsonReader(new InputStreamReader(new FileInputStream(json), StandardCharsets.UTF_8))) {
			r.beginObject();
			while (r.hasNext()) {
				String key = r.nextName();
				r.beginArray();
				int n = 0;
				log((signatures ? "signatures: " : "") + key);
				while (r.hasNext()) {
					if (monitor.isCancelled()) return;
					n++;
					if (key.equals("Addresses")) {
						long a = r.nextLong();
						if (!signatures) makeFunction(base.add(a));
						continue;
					}
					Entry e = readEntry(r);
					if (signatures) {
						if (key.equals("ScriptMethod")) applySignature(e);
						continue;
					}
					switch (key) {
						case "ScriptMethod" -> label(base.add(e.address), e.name);
						case "ScriptString" -> {
							Address a = base.add(e.address);
							label(a, "StringLiteral_" + n);
							setEOLComment(a, e.value);
						}
						case "ScriptMetadata" -> {
							Address a = base.add(e.address);
							label(a, e.name);
							setEOLComment(a, e.name);
							if (e.signature != null && !e.signature.isEmpty()) setType(a, e.signature);
						}
						case "ScriptMetadataMethod" -> {
							Address a = base.add(e.address);
							label(a, e.name);
							setEOLComment(a, e.name);
						}
						default -> { }
					}
				}
				r.endArray();
				log("  " + key + ": " + n);
			}
			r.endObject();
		}
	}

	private static class Entry {
		long address;
		String name, value, signature;
	}

	private Entry readEntry(JsonReader r) throws IOException {
		Entry e = new Entry();
		r.beginObject();
		while (r.hasNext()) {
			String k = r.nextName();
			if (r.peek() == JsonToken.NULL) { r.nextNull(); continue; }
			switch (k) {
				case "Address" -> e.address = r.nextLong();
				case "Name" -> e.name = r.nextString();
				case "Value" -> e.value = r.nextString();
				case "Signature" -> e.signature = r.nextString();
				default -> r.skipValue();
			}
		}
		r.endObject();
		return e;
	}

	private void label(Address a, String name) {
		try {
			createLabel(a, name.replace(' ', '-'), true, SourceType.USER_DEFINED);
		}
		catch (Exception ex) {
			// invalid symbol chars or overlapping labels; skip
		}
	}

	private void makeFunction(Address a) {
		if (getFunctionAt(a) == null) {
			try {
				createFunction(a, null);
			}
			catch (Exception ex) {
				// skip
			}
		}
	}

	private void setType(Address a, String type) {
		String t = type.replace("*", " *").replace("  ", " ").trim();
		try {
			DataType dt;
			if (t.endsWith(" *")) {
				DataType baseType = findType(t.substring(0, t.length() - 2));
				dt = baseType == null ? null : dtm.getPointer(baseType);
			}
			else {
				dt = findType(t);
			}
			if (dt != null) {
				clearListing(a, a.add(dt.getLength() - 1));
				createData(a, dt);
			}
		}
		catch (Exception ex) {
			// skip
		}
	}

	private DataType findType(String name) {
		java.util.List<DataType> out = new java.util.ArrayList<>();
		dtm.findDataTypes(name, out);
		return out.size() == 1 ? out.get(0) : null;
	}

	private int sigFail = 0;

	private void applySignature(Entry e) {
		String sig = e.signature;
		if (sig == null) return;
		if (sig.endsWith(";")) sig = sig.substring(0, sig.length() - 1);
		Address a = base.add(e.address);
		if (getFunctionAt(a) == null) return;
		try {
			CParser p = new CParser(dtm, false, null);
			DataType dt = p.parse(sig + ";");
			if (dt instanceof FunctionDefinitionDataType fd) {
				fd.setName(e.name.replace(' ', '-'));
				new ApplyFunctionSignatureCmd(a, fd, SourceType.USER_DEFINED, false, false,
						DataTypeConflictHandler.DEFAULT_HANDLER, FunctionRenameOption.RENAME)
						.applyTo(currentProgram);
			}
		}
		catch (Exception ex) {
			if (sigFail++ < 20) log("sig parse failed: " + sig);
		}
	}
}
