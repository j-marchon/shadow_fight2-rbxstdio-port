// FCJBEKHDLAF$$PFDEGJLLBLC @ RVA 0x33EDC70

void FCJBEKHDLAF__PFDEGJLLBLC(bool CJNHFNHJHPE,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567ee5 & 1) == 0) {
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    DAT_04567ee5 = 1;
    method = extraout_x1;
  }
  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(IFAMAAGNCBJ_TypeInfo,method);
  }
  pIVar1 = IFAMAAGNCBJ__GPBMELHDADN<object>(Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
                    /* try { // try from 034edcd0 to 035edd5b has its CatchHandler @ 034edcd0
                       catch() { ... } // from try @ 034edcd0 with catch @ 034edcd0
                       catch() { ... } // from try @ 034edd80 with catch @ 034edcd0
                       catch() { ... } // from try @ 034eddc8 with catch @ 034edcd0
                       catch() { ... } // from try @ 034eddf0 with catch @ 034edcd0
                       catch() { ... } // from try @ 034ede38 with catch @ 034edcd0 */
  if (pIVar1 != (Il2CppObject *)0x0) {
    *(bool *)((long)&pIVar1[2].klass + 2) = CJNHFNHJHPE;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

