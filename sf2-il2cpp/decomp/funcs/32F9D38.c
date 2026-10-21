// EEOMEMBBGNA$$DLOJCINMBIO @ RVA 0x32F9D38

void EEOMEMBBGNA__DLOJCINMBIO
               (EEOMEMBBGNA_o *__this,System_Action_long__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_long__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_long__o *pSVar5;
  System_Action_long__o **ppSVar6;
  System_Action_long__o *a;
  
                    /* try { // try from 033f9d44 to 034f9d4b has its CatchHandler @ 033f9fb0 */
  if ((DAT_045676c0 & 1) == 0) {
    FUN_01bab630(&System_Action<long>_TypeInfo);
                    /* try { // try from 033f9d68 to 034f9d7f has its CatchHandler @ 033f9f8c */
    DAT_045676c0 = 1;
  }
  ppSVar6 = &(__this->fields).KBBECJNEHBM;
  a = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<long>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
                    /* try { // try from 033f9d94 to 034f9da3 has its CatchHandler @ 033f9e10 */
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<long>_TypeInfo);
                    /* try { // try from 033f9da4 to 034f9ddb has its CatchHandler @ 033f950c */
      if (lVar4 == 0) {
                    /* try { // try from 033f9ddc to 034f9ddf has its CatchHandler @ 033f9f98 */
                    /* try { // try from 033f9de0 to 034f9de3 has its CatchHandler @ 033f9f94 */
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 033f9de4 to 034f9de7 has its CatchHandler @ 033f9f90 */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_long__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}

