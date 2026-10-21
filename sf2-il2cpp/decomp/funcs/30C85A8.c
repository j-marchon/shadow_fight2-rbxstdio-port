// ADAHHFAPLLM$$BOBEFJCOAIM @ RVA 0x30C85A8

LNADBMOHMKN_o * ADAHHFAPLLM__BOBEFJCOAIM(ADAHHFAPLLM_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  FDFGGHMGLIB_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_045662ca & 1) == 0) {
    FUN_01bab630(&ABIIOMHCLOI_TypeInfo);
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&FDFGGHMGLIB_TypeInfo);
                    /* try { // try from 031c85f0 to 032c86ab has its CatchHandler @ 031c85f0
                       catch() { ... } // from try @ 031c85f0 with catch @ 031c85f0
                       catch() { ... } // from try @ 031c8704 with catch @ 031c85f0
                       catch() { ... } // from try @ 031c8790 with catch @ 031c85f0
                       catch() { ... } // from try @ 031c8830 with catch @ 031c85f0 */
    FUN_01bab630(&JJHOKPKFIIO_TypeInfo);
    DAT_045662ca = 1;
    method = extraout_x1;
  }
  if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Application_TypeInfo,method);
  }
  iVar1 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
  if (iVar1 == 0xb) {
    __this_00 = (FDFGGHMGLIB_o *)thunk_FUN_01bda818(FDFGGHMGLIB_TypeInfo);
    FDFGGHMGLIB___ctor(__this_00,(MethodInfo *)0x0);
  }
  else if (iVar1 == 8) {
    __this_00 = (FDFGGHMGLIB_o *)thunk_FUN_01bda818(JJHOKPKFIIO_TypeInfo);
    JJHOKPKFIIO___ctor((JJHOKPKFIIO_o *)__this_00,(MethodInfo *)0x0);
  }
  else {
    __this_00 = (FDFGGHMGLIB_o *)thunk_FUN_01bda818(ABIIOMHCLOI_TypeInfo);
    ABIIOMHCLOI___ctor((ABIIOMHCLOI_o *)__this_00,(MethodInfo *)0x0);
  }
  return (LNADBMOHMKN_o *)__this_00;
}

