// AMIINPEKKFB$$KANIFNEGABC @ RVA 0x3510678

void AMIINPEKKFB__KANIFNEGABC(System_Action_HOOAAGABMBL__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_HOOAAGABMBL__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_HOOAAGABMBL__o *pSVar5;
  System_Action_HOOAAGABMBL__o *a;
  
                    /* try { // try from 03610678 to 0371067b has its CatchHandler @ 03610684 */
                    /* try { // try from 0361067c to 037106ab has its CatchHandler @ 03610364 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03610678 with catch @ 03610684
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036105ac with catch @ 03610688
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03610664 with catch @ 0361068c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036104f0 with catch @ 03610690
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03610494 with catch @ 03610694
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0361066c with catch @ 03610698
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03610524 with catch @ 0361069c
                        */
  if ((DAT_045688e9 & 1) == 0) {
    FUN_01bab630(&AMIINPEKKFB_TypeInfo);
                    /* try { // try from 036106ac to 037106af has its CatchHandler @ 036106c0 */
    FUN_01bab630(&System_Action<HOOAAGABMBL>_TypeInfo);
    DAT_045688e9 = 1;
  }
                    /* catch() { ... } // from try @ 036106ac with catch @ 036106c0 */
                    /* try { // try from 036106c8 to 0371072f has its CatchHandler @ 03610744 */
  a = AMIINPEKKFB_TypeInfo->static_fields->PEFBFMPBJAA;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<HOOAAGABMBL>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<HOOAAGABMBL>_TypeInfo);
      if (lVar4 == 0) {
                    /* try { // try from 0361073c to 03710743 has its CatchHandler @ 03610744 */
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_HOOAAGABMBL__o *)
             FUN_01c07368(AMIINPEKKFB_TypeInfo->static_fields,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
                    /* try { // try from 03610730 to 0371073b has its CatchHandler @ 03610364 */
  return;
}

