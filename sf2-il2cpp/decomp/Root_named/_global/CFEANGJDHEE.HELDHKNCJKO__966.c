// TypeDefIndex 966
// Namespace: 
// [CompilerGenerated]
// private sealed class Console.HELDHKNCJKO
// Fields:
//   public GHACLGGJIKK.BGNKGENMMMO cbs; // 0x10

// ===== public void .ctor()  [RVA 0x30B09C4]
// Console.HELDHKNCJKO$$.ctor @ RVA 0x30B09C4

void Console_HELDHKNCJKO___ctor(Console_HELDHKNCJKO_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal void OHKHOIPKGFG(string[] args)  [RVA 0x30B09CC]
// Console.HELDHKNCJKO$$OHKHOIPKGFG @ RVA 0x30B09CC

void Console_HELDHKNCJKO__OHKHOIPKGFG
               (Console_HELDHKNCJKO_o *__this,System_String_array *args,MethodInfo *method)

{
  GHACLGGJIKK_BGNKGENMMMO_o *pGVar1;
  
  pGVar1 = (__this->fields).cbs;
  if (pGVar1 != (GHACLGGJIKK_BGNKGENMMMO_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x031b09e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pGVar1->fields).super.super.invoke_impl)
              ((pGVar1->fields).super.super.method_code,(pGVar1->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

