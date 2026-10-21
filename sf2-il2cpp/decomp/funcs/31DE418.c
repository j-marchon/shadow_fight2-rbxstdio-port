// ONEDJCACCGM$$EFMHCCPKGMG @ RVA 0x31DE418

System_String_o * ONEDJCACCGM__EFMHCCPKGMG(int32_t MNPKIDDPNBM,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Enum_o local_38;
  int32_t local_28;
  
  if ((DAT_04566d2d & 1) == 0) {
    FUN_01bab630(&ONEDJCACCGM_JOBKOFBMHLM_TypeInfo);
    DAT_04566d2d = 1;
  }
  local_38.klass = (System_Enum_c *)ONEDJCACCGM_JOBKOFBMHLM_TypeInfo;
  local_38.monitor = (void *)0xffffffffffffffff;
  local_28 = MNPKIDDPNBM;
  pSVar1 = System_Enum__ToString(&local_38,(MethodInfo *)0x0);
  if (pSVar1 != (System_String_o *)0x0) {
    pSVar1 = System_String__ToLower(pSVar1,(MethodInfo *)0x0);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

