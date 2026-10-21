// BFAEMDAPOBD$$HBGEHJCEIFL @ RVA 0x33E2A74

/* WARNING: Type propagation algorithm not settling */

void BFAEMDAPOBD__HBGEHJCEIFL(POIMHOOPGIP_o *IMLCKIOGJAG,MethodInfo *method)

{
  long lVar1;
  int32_t iVar2;
  System_Type_o *pSVar3;
  OMOBOPOEBGH_o *__this;
  MethodInfo *extraout_x1;
  System_RuntimeTypeHandle_Fields *pSVar4;
  System_RuntimeTypeHandle_o handle;
  
  if ((DAT_04567eb6 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&Method_EGICHKIAAGK_BJNHCHILEMM<IPODBIAMIGB>__);
    DAT_04567eb6 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 034e2ab8 to 035e2adf has its CatchHandler @ 034e2b8c */
  if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Application_TypeInfo,method);
  }
  iVar2 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
  lVar1 = Method_EGICHKIAAGK_BJNHCHILEMM<IPODBIAMIGB>__;
  if ((iVar2 != 0xb) && (iVar2 != 8)) {
    return;
  }
                    /* try { // try from 034e2ae4 to 035e2aef has its CatchHandler @ 034e2b88 */
  pSVar4 = *(System_RuntimeTypeHandle_Fields **)
            (Method_EGICHKIAAGK_BJNHCHILEMM<IPODBIAMIGB>__ + 0x38);
  if (pSVar4 == (System_RuntimeTypeHandle_Fields *)0x0) {
                    /* try { // try from 034e2af0 to 035e2b6b has its CatchHandler @ 034e294c */
    FUN_01bab630(&System_Type_TypeInfo);
    pSVar4 = *(System_RuntimeTypeHandle_Fields **)(lVar1 + 0x38);
    if (pSVar4 == (System_RuntimeTypeHandle_Fields *)0x0) {
      FUN_01b8167c(lVar1);
      pSVar4 = *(System_RuntimeTypeHandle_Fields **)(lVar1 + 0x38);
    }
  }
  handle.fields.value = (System_RuntimeTypeHandle_Fields)pSVar4->value;
  if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar3 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  __this = (OMOBOPOEBGH_o *)FUN_01f91e0c(IMLCKIOGJAG,pSVar3,1,0);
  if (__this != (OMOBOPOEBGH_o *)0x0) {
    OMOBOPOEBGH__BEBKKFGLNFE(__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 034e2b6c to 035e2b6f has its CatchHandler @ 034e2b84 */
  FUN_01bab8c8();
}

