// TypeDefIndex 893
// Namespace: 
// [Extension]
// public static class HBKGOPHFNPO
// Fields:

// ===== public static void HCDHLKIHDJD(POIMHOOPGIP IMLCKIOGJAG)  [RVA 0x3094A14]
// HBKGOPHFNPO$$HCDHLKIHDJD @ RVA 0x3094A14

/* WARNING: Type propagation algorithm not settling */

void HBKGOPHFNPO__HCDHLKIHDJD(POIMHOOPGIP_o *IMLCKIOGJAG,MethodInfo *method)

{
  long lVar1;
  System_Type_o *pSVar2;
  OMOBOPOEBGH_o *pOVar3;
  MethodInfo *extraout_x1;
  System_RuntimeTypeHandle_Fields *pSVar4;
  System_RuntimeTypeHandle_o SVar5;
  
                    /* try { // try from 03194a20 to 03294a5f has its CatchHandler @ 03194ccc */
  if ((DAT_045660c5 & 1) == 0) {
    FUN_01bab630(&Method_EGICHKIAAGK_BJNHCHILEMM<IGMGMOPCGPK>__);
    FUN_01bab630(&Method_EGICHKIAAGK_BJNHCHILEMM<AdvertisingRetryService>__);
    DAT_045660c5 = 1;
    method = extraout_x1;
  }
  lVar1 = Method_EGICHKIAAGK_BJNHCHILEMM<AdvertisingRetryService>__;
  pSVar4 = *(System_RuntimeTypeHandle_Fields **)
            (Method_EGICHKIAAGK_BJNHCHILEMM<AdvertisingRetryService>__ + 0x38);
  if (pSVar4 == (System_RuntimeTypeHandle_Fields *)0x0) {
    FUN_01bab630(&System_Type_TypeInfo,method);
    pSVar4 = *(System_RuntimeTypeHandle_Fields **)(lVar1 + 0x38);
    if (pSVar4 == (System_RuntimeTypeHandle_Fields *)0x0) {
      FUN_01b8167c(lVar1);
      pSVar4 = *(System_RuntimeTypeHandle_Fields **)(lVar1 + 0x38);
    }
  }
                    /* try { // try from 03194a84 to 03294a87 has its CatchHandler @ 03194c98 */
                    /* try { // try from 03194a88 to 03294a93 has its CatchHandler @ 03194cb4 */
  SVar5.fields.value = (System_RuntimeTypeHandle_Fields)pSVar4->value;
  if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = System_Type__GetTypeFromHandle(SVar5,(MethodInfo *)0x0);
                    /* try { // try from 03194aa8 to 03294aab has its CatchHandler @ 03194ca0 */
                    /* try { // try from 03194ab8 to 03294abf has its CatchHandler @ 03194ca4 */
  pOVar3 = (OMOBOPOEBGH_o *)FUN_01f91e0c(IMLCKIOGJAG,pSVar2,1,0);
  if (pOVar3 != (OMOBOPOEBGH_o *)0x0) {
    OMOBOPOEBGH__BEBKKFGLNFE(pOVar3,(MethodInfo *)0x0);
    lVar1 = Method_EGICHKIAAGK_BJNHCHILEMM<IGMGMOPCGPK>__;
                    /* try { // try from 03194ad0 to 03294aef has its CatchHandler @ 03194cb8 */
    pSVar4 = *(System_RuntimeTypeHandle_Fields **)
              (Method_EGICHKIAAGK_BJNHCHILEMM<IGMGMOPCGPK>__ + 0x38);
    if (pSVar4 == (System_RuntimeTypeHandle_Fields *)0x0) {
      FUN_01bab630(&System_Type_TypeInfo);
      pSVar4 = *(System_RuntimeTypeHandle_Fields **)(lVar1 + 0x38);
      if (pSVar4 == (System_RuntimeTypeHandle_Fields *)0x0) {
        FUN_01b8167c(lVar1);
        pSVar4 = *(System_RuntimeTypeHandle_Fields **)(lVar1 + 0x38);
      }
    }
                    /* try { // try from 03194afc to 03294b07 has its CatchHandler @ 03194cb0 */
    SVar5.fields.value = (System_RuntimeTypeHandle_Fields)pSVar4->value;
    if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = System_Type__GetTypeFromHandle(SVar5,(MethodInfo *)0x0);
    pOVar3 = (OMOBOPOEBGH_o *)FUN_01f91e0c(IMLCKIOGJAG,pSVar2,1,0);
    if (pOVar3 != (OMOBOPOEBGH_o *)0x0) {
      OMOBOPOEBGH__BEBKKFGLNFE(pOVar3,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

