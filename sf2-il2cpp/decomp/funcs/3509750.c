// FKDLCJJOGIP$$DAGFKDGOBBF @ RVA 0x3509750

void FKDLCJJOGIP__DAGFKDGOBBF(FKDLCJJOGIP_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *source;
  
  if ((DAT_045688bc & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
                    /* try { // try from 03609780 to 03709787 has its CatchHandler @ 0360a7d4 */
    DAT_045688bc = 1;
  }
  ppSVar4 = &(__this->fields).NLKPBBPPKCJ;
  source = *ppSVar4;
  while ((pSVar2 = System_Delegate__Remove
                             ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,source);
    bVar1 = source == pSVar3;
    source = pSVar3;
    if (bVar1) {
                    /* try { // try from 036097dc to 037097df has its CatchHandler @ 0360a5f8 */
                    /* try { // try from 036097e0 to 037097e7 has its CatchHandler @ 0360a624 */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}

