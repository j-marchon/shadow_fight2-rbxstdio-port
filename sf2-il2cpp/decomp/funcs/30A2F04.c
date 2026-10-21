// IGFGDDANEPE$$JPNNODJPOCL @ RVA 0x30A2F04

HOOAAGABMBL_o * IGFGDDANEPE__JPNNODJPOCL(IGFGDDANEPE_o *__this,bool CMBICCILAEF,MethodInfo *method)

{
  long lVar1;
  bool bVar2;
  int32_t iVar3;
  HOOAAGABMBL_o *pHVar4;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  
  method_00 = (MethodInfo *)(ulong)CMBICCILAEF;
  if ((((!CMBICCILAEF) || ((__this->fields).GOJELHDHCDP == false)) ||
      (iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                         ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                          (__this->fields).DHPCMDOLAHE.fields,(MethodInfo *)0x0),
      method_00 = extraout_x1, iVar3 < 1)) ||
     (pHVar4 = (__this->fields).LFPOIAJDMBK, pHVar4 == (HOOAAGABMBL_o *)0x0)) {
    bVar2 = IGFGDDANEPE__DABHOGHGNBB(__this,method_00);
    if (bVar2) {
      lVar1 = 0x18;
      if ((__this->fields).EGAAAFHLNOE != (HOOAAGABMBL_o *)0x0) {
        lVar1 = 0x90;
      }
      pHVar4 = *(HOOAAGABMBL_o **)((long)&__this->klass + lVar1);
      if (pHVar4 != (HOOAAGABMBL_o *)0x0) {
        return pHVar4;
      }
    }
    pHVar4 = (__this->fields).PCBECBEFJOI;
  }
  return pHVar4;
}

