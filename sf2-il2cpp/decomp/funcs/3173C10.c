// IBILBKNKKDG$$ADLLFHPKFIB @ RVA 0x3173C10

EOJBGBDLBKJ_o * IBILBKNKKDG__ADLLFHPKFIB(MethodInfo *method)

{
  int32_t iVar1;
  CPHBJEDCAEO_o *LPBPGPJICKO;
  FJNIPMODEPO_o *__this;
  EOJBGBDLBKJ_o *__this_00;
  
  if ((DAT_04566945 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&FJNIPMODEPO_TypeInfo);
    FUN_01bab630(&IKFKOKJKJNN_TypeInfo);
    DAT_04566945 = 1;
  }
  if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  iVar1 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
  if (iVar1 != 8) {
    if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar1 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
    if (iVar1 != 0xb) {
      __this_00 = (EOJBGBDLBKJ_o *)thunk_FUN_01bda818(IKFKOKJKJNN_TypeInfo);
      IKFKOKJKJNN___ctor((IKFKOKJKJNN_o *)__this_00,(MethodInfo *)0x0);
      return __this_00;
    }
  }
  LPBPGPJICKO = LLDOMGIEPNE__AIHNLLGNBLC((MethodInfo *)0x0);
  __this = (FJNIPMODEPO_o *)thunk_FUN_01bda818(FJNIPMODEPO_TypeInfo);
  FJNIPMODEPO___ctor(__this,LPBPGPJICKO,(MethodInfo *)0x0);
  return (EOJBGBDLBKJ_o *)__this;
}

