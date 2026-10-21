// FCJBEKHDLAF$$HDHNCDJLPMF @ RVA 0x33E363C

void FCJBEKHDLAF__HDHNCDJLPMF(FCJBEKHDLAF_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,MethodInfo *method)

{
  FCJBEKHDLAF_PCLDCLMFIPD_o *pFVar1;
  
  if ((DAT_04567ec2 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_6328);
    DAT_04567ec2 = 1;
  }
                    /* try { // try from 034e3678 to 035e369f has its CatchHandler @ 034e3cdc */
  if (BCKBBGCOMJD != (OLKKAIFGGAK_o *)0x0) {
    pFVar1 = (__this->fields).KANNOIOMJEJ;
    if (pFVar1 != (FCJBEKHDLAF_PCLDCLMFIPD_o *)0x0) {
      OLKKAIFGGAK__FDDFPMCLCGM(BCKBBGCOMJD,(pFVar1->fields).EOGMGDGBOOD,(MethodInfo *)0x0);
      pFVar1 = (__this->fields).KANNOIOMJEJ;
      if (pFVar1 != (FCJBEKHDLAF_PCLDCLMFIPD_o *)0x0) {
        OLKKAIFGGAK__NJDCEAPMLJP(BCKBBGCOMJD,(pFVar1->fields).CGKADLMPODA,(MethodInfo *)0x0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 034e36d8 to 035e3703 has its CatchHandler @ 034e3cd8 */
  UnityEngine_Debug__LogError(StringLiteral_6328,(MethodInfo *)0x0);
  return;
}

