// TypeDefIndex 1113
// Namespace: 
// [CompilerGenerated]
// private sealed class HOOAAGABMBL.LLGACDCGDJB
// Fields:
//   public int maxUpgradeLevel; // 0x10

// ===== public void .ctor()  [RVA 0x30EE5D8]
// HOOAAGABMBL.LLGACDCGDJB$$.ctor @ RVA 0x30EE5D8

void HOOAAGABMBL_LLGACDCGDJB___ctor(HOOAAGABMBL_LLGACDCGDJB_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal void MBLFJGKKDIO(PONNKDFAMFM x)  [RVA 0x30F175C]
// HOOAAGABMBL.LLGACDCGDJB$$MBLFJGKKDIO @ RVA 0x30F175C

void HOOAAGABMBL_LLGACDCGDJB__MBLFJGKKDIO
               (HOOAAGABMBL_LLGACDCGDJB_o *__this,PONNKDFAMFM_o *x,MethodInfo *method)

{
  int32_t iVar1;
  PONNKDFAMFM_IBOIJJKIIAJ_o *pPVar2;
  
  if ((x != (PONNKDFAMFM_o *)0x0) &&
     (pPVar2 = (x->fields).JDHAHDALAOA, pPVar2 != (PONNKDFAMFM_IBOIJJKIIAJ_o *)0x0)) {
    iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                       (pPVar2->fields).AEIJFFBOBCP.fields,(MethodInfo *)0x0);
    if ((__this->fields).maxUpgradeLevel < iVar1) {
      pPVar2 = (x->fields).JDHAHDALAOA;
      if (pPVar2 == (PONNKDFAMFM_IBOIJJKIIAJ_o *)0x0) goto LAB_031f17b4;
      iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         (pPVar2->fields).AEIJFFBOBCP.fields,(MethodInfo *)0x0);
      (__this->fields).maxUpgradeLevel = iVar1;
    }
    return;
  }
LAB_031f17b4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

