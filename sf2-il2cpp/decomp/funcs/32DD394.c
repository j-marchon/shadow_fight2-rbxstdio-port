// LJBDMDHNKFM$$EPEEGNGDGMH @ RVA 0x32DD394

void LJBDMDHNKFM__EPEEGNGDGMH(LJBDMDHNKFM_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045675d0 & 1) == 0) {
    FUN_01bab630(&MKFAKELPPAC_TypeInfo);
    DAT_045675d0 = 1;
    method = extraout_x1;
  }
  if ((MKFAKELPPAC_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MKFAKELPPAC_TypeInfo,method);
  }
  bVar1 = MKFAKELPPAC__EAONJAHHPDM((MethodInfo *)0x0);
  if (!bVar1) {
    if ((MKFAKELPPAC_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    MKFAKELPPAC__CKBMGIOBIFN((MethodInfo *)0x0);
  }
  IKBGLDJFIJH__OEHBFKCJMFA((IKBGLDJFIJH_o *)__this,(MethodInfo *)0x0);
  return;
}

