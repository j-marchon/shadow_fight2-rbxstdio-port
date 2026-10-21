// TypeDefIndex 1915
// Namespace: 
// [CompilerGenerated]
// private sealed class AAPGCAPGBLG.JDHOBHDIPHO
// Fields:
//   public string name; // 0x10

// ===== public void .ctor()  [RVA 0x3260EE8]
// AAPGCAPGBLG.JDHOBHDIPHO$$.ctor @ RVA 0x3260EE8

void AAPGCAPGBLG_JDHOBHDIPHO___ctor(AAPGCAPGBLG_JDHOBHDIPHO_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal bool MPCECPHDEJD(CCLKPGBIBOP x)  [RVA 0x3260FC8]
// AAPGCAPGBLG.JDHOBHDIPHO$$MPCECPHDEJD @ RVA 0x3260FC8

bool AAPGCAPGBLG_JDHOBHDIPHO__MPCECPHDEJD
               (AAPGCAPGBLG_JDHOBHDIPHO_o *__this,CCLKPGBIBOP_o *x,MethodInfo *method)

{
  bool bVar1;
  
  if (x != (CCLKPGBIBOP_o *)0x0) {
                    /* try { // try from 03360fd4 to 03460fe3 has its CatchHandler @ 03361820 */
    bVar1 = System_String__op_Equality
                      ((x->fields)._COIPKAKHDFP_k__BackingField,(__this->fields).name,
                       (MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

