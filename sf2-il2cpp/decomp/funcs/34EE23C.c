// OLKKAIFGGAK$$INNOCFHJLHO @ RVA 0x34EE23C

void OLKKAIFGGAK__INNOCFHJLHO
               (OLKKAIFGGAK_o *__this,System_Action_OLKKAIFGGAK__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_OLKKAIFGGAK__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_OLKKAIFGGAK__o *pSVar5;
  System_Action_OLKKAIFGGAK__o **ppSVar6;
  System_Action_OLKKAIFGGAK__o *a;
  
  if ((DAT_045687a1 & 1) == 0) {
    FUN_01bab630(&System_Action<OLKKAIFGGAK>_TypeInfo);
    DAT_045687a1 = 1;
  }
  ppSVar6 = &(__this->fields).EOBODCMALHN;
                    /* try { // try from 035ee27c to 036ee283 has its CatchHandler @ 035ee314 */
  a = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<OLKKAIFGGAK>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
                    /* try { // try from 035ee294 to 036ee2a3 has its CatchHandler @ 035ee30c */
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<OLKKAIFGGAK>_TypeInfo);
                    /* try { // try from 035ee2a4 to 036ee32b has its CatchHandler @ 035ee08c */
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_OLKKAIFGGAK__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}

