// OLKKAIFGGAK$$JGEDPDDLBFO @ RVA 0x34F1D30

void OLKKAIFGGAK__JGEDPDDLBFO
               (OLKKAIFGGAK_o *__this,System_Action_FGDNDHOEMND__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_FGDNDHOEMND__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_FGDNDHOEMND__o *pSVar5;
  System_Action_FGDNDHOEMND__o **ppSVar6;
  System_Action_FGDNDHOEMND__o *a;
  
                    /* try { // try from 035f1d34 to 036f1d37 has its CatchHandler @ 035f1d60 */
                    /* try { // try from 035f1d38 to 036f1d6f has its CatchHandler @ 035f1bac */
  if ((DAT_045687ac & 1) == 0) {
    FUN_01bab630(&System_Action<FGDNDHOEMND>_TypeInfo);
                    /* catch() { ... } // from try @ 035f1d34 with catch @ 035f1d60 */
    DAT_045687ac = 1;
  }
  ppSVar6 = &(__this->fields).BEHHBIHGFHK;
                    /* try { // try from 035f1d70 to 036f1d77 has its CatchHandler @ 035f1d8c */
  a = *ppSVar6;
  do {
                    /* try { // try from 035f1d78 to 036f1d83 has its CatchHandler @ 035f1bac */
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<FGDNDHOEMND>_TypeInfo;
                    /* try { // try from 035f1d84 to 036f1d8b has its CatchHandler @ 035f1d8c */
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035f1d70 with catch @ 035f1d8c
                       catch(type#2 @ 00000000) { ... } // from try @ 035f1d84 with catch @ 035f1d8c
                        */
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<FGDNDHOEMND>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_FGDNDHOEMND__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}

