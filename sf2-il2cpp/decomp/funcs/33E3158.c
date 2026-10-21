// FCJBEKHDLAF$$PJGJIAGADOM @ RVA 0x33E3158

void FCJBEKHDLAF__PJGJIAGADOM(FCJBEKHDLAF_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,MethodInfo *method)

{
  int32_t iVar1;
  FCJBEKHDLAF_PCLDCLMFIPD_o *pFVar2;
  float fVar3;
  
  if ((DAT_04567f36 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_6320);
    DAT_04567f36 = 1;
  }
  if (BCKBBGCOMJD != (OLKKAIFGGAK_o *)0x0) {
    pFVar2 = (__this->fields).KANNOIOMJEJ;
    iVar1 = OLKKAIFGGAK__BAJGPELJMFG(BCKBBGCOMJD,(MethodInfo *)0x0);
    if (pFVar2 != (FCJBEKHDLAF_PCLDCLMFIPD_o *)0x0) {
      (pFVar2->fields).EOGMGDGBOOD = iVar1;
      pFVar2 = (__this->fields).KANNOIOMJEJ;
      fVar3 = OLKKAIFGGAK__HCLKOCBDKEJ(BCKBBGCOMJD,(MethodInfo *)0x0);
      if (pFVar2 != (FCJBEKHDLAF_PCLDCLMFIPD_o *)0x0) {
        (pFVar2->fields).CGKADLMPODA = fVar3;
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__LogError(StringLiteral_6320,(MethodInfo *)0x0);
  return;
}

