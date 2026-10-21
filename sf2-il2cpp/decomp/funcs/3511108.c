// AMIINPEKKFB$$PFDBFCFBCAN @ RVA 0x3511108

void AMIINPEKKFB__PFDBFCFBCAN(System_Action_HOOAAGABMBL__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_HOOAAGABMBL__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_HOOAAGABMBL__o *pSVar5;
  System_Action_HOOAAGABMBL__o *source;
  
  if ((DAT_045688ef & 1) == 0) {
    FUN_01bab630(&AMIINPEKKFB_TypeInfo);
    FUN_01bab630(&System_Action<HOOAAGABMBL>_TypeInfo);
    DAT_045688ef = 1;
  }
                    /* try { // try from 03611154 to 0371117f has its CatchHandler @ 03611390 */
  source = AMIINPEKKFB_TypeInfo->static_fields->PEFBFMPBJAA;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<HOOAAGABMBL>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<HOOAAGABMBL>_TypeInfo);
                    /* try { // try from 03611188 to 037111cf has its CatchHandler @ 03611398 */
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_HOOAAGABMBL__o *)
             FUN_01c07368(AMIINPEKKFB_TypeInfo->static_fields,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}

