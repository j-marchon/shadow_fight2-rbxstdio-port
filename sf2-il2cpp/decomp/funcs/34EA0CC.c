// OLKKAIFGGAK$$PKHCMGKJHKI @ RVA 0x34EA0CC

void OLKKAIFGGAK__PKHCMGKJHKI
               (OLKKAIFGGAK_o *__this,System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  System_Action_OLKKAIFGGAK_EAOIGPODIAI__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *pSVar5;
  System_Action_OLKKAIFGGAK_EAOIGPODIAI__o **ppSVar6;
  System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *a;
  
  if ((DAT_04568782 & 1) == 0) {
                    /* try { // try from 035ea0f0 to 036ea0ff has its CatchHandler @ 035ea124 */
    FUN_01bab630(&System_Action<OLKKAIFGGAK_EAOIGPODIAI>_TypeInfo);
                    /* try { // try from 035ea100 to 036ea13f has its CatchHandler @ 035ea01c */
    DAT_04568782 = 1;
  }
  ppSVar6 = &(__this->fields).CMHIICAGBMH;
  a = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<OLKKAIFGGAK_EAOIGPODIAI>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
                    /* try { // try from 035ea140 to 036ea143 has its CatchHandler @ 035ea164 */
      lVar4 = 0;
    }
    else {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035ea0f0 with catch @ 035ea124
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035ea0b4 with catch @ 035ea128
                        */
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<OLKKAIFGGAK_EAOIGPODIAI>_TypeInfo);
      if (lVar4 == 0) {
                    /* try { // try from 035ea174 to 036ea17f has its CatchHandler @ 035ea01c */
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
                    /* try { // try from 035ea144 to 036ea16b has its CatchHandler @ 035ea01c */
    pSVar5 = (System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
                    /* catch() { ... } // from try @ 035ea140 with catch @ 035ea164 */
                    /* try { // try from 035ea16c to 036ea173 has its CatchHandler @ 035ea188 */
  return;
}

