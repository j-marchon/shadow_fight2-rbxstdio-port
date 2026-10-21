// ADAHHFAPLLM$$MIJJAMJMNBD @ RVA 0x30C84F0

EAPFCMCJBAG_o * ADAHHFAPLLM__MIJJAMJMNBD(ADAHHFAPLLM_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  KPLJFEEMAOH_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_045662c8 & 1) == 0) {
    FUN_01bab630(&AJNFLEPFBJG_TypeInfo);
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&KPLJFEEMAOH_TypeInfo);
    DAT_045662c8 = 1;
    method = extraout_x1;
  }
  if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Application_TypeInfo,method);
  }
  iVar1 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
  if (iVar1 == 0xb) {
    __this_00 = (KPLJFEEMAOH_o *)thunk_FUN_01bda818(KPLJFEEMAOH_TypeInfo);
    KPLJFEEMAOH___ctor(__this_00,(MethodInfo *)0x0);
  }
  else {
    __this_00 = (KPLJFEEMAOH_o *)thunk_FUN_01bda818(AJNFLEPFBJG_TypeInfo);
    AJNFLEPFBJG___ctor((AJNFLEPFBJG_o *)__this_00,(MethodInfo *)0x0);
  }
  return (EAPFCMCJBAG_o *)__this_00;
}

