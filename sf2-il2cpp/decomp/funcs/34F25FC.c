// OLKKAIFGGAK$$LIHKGFLLBIG @ RVA 0x34F25FC

void OLKKAIFGGAK__LIHKGFLLBIG
               (OLKKAIFGGAK_o *__this,System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  System_Action_OLKKAIFGGAK_EAOIGPODIAI__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *pSVar5;
  System_Action_OLKKAIFGGAK_EAOIGPODIAI__o **ppSVar6;
  System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *source;
  
  if ((DAT_045687b5 & 1) == 0) {
                    /* try { // try from 035f2620 to 036f2627 has its CatchHandler @ 035f2884 */
    FUN_01bab630(&System_Action<OLKKAIFGGAK_EAOIGPODIAI>_TypeInfo);
    DAT_045687b5 = 1;
  }
                    /* try { // try from 035f2634 to 036f263b has its CatchHandler @ 035f2818 */
  ppSVar6 = &(__this->fields).ABHHEJBJLPC;
                    /* try { // try from 035f263c to 036f26a3 has its CatchHandler @ 035f209c */
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<OLKKAIFGGAK_EAOIGPODIAI>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<OLKKAIFGGAK_EAOIGPODIAI>_TypeInfo);
      if (lVar4 == 0) {
                    /* try { // try from 035f26a4 to 036f26ab has its CatchHandler @ 035f2820 */
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}

