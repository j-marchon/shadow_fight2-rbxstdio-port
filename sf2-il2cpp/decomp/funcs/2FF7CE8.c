// JMDPBFOCHHP$$AGBJDHHPIPL @ RVA 0x2FF7CE8

void JMDPBFOCHHP__AGBJDHHPIPL(JMDPBFOCHHP_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *source;
  
                    /* try { // try from 030f7ce8 to 031f7d1f has its CatchHandler @ 030f7db0 */
  if ((DAT_04565aab & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04565aab = 1;
  }
  ppSVar4 = &(__this->fields).FHJBJEIIMOB;
  source = *ppSVar4;
                    /* try { // try from 030f7d28 to 031f7d4f has its CatchHandler @ 030f7dc8 */
  while ((pSVar2 = System_Delegate__Remove
                             ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
                    /* try { // try from 030f7d50 to 031f7d67 has its CatchHandler @ 030f7db4 */
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,source);
    bVar1 = source == pSVar3;
    source = pSVar3;
    if (bVar1) {
                    /* try { // try from 030f7d6c to 031f7da3 has its CatchHandler @ 030f7dac */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}

