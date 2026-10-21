// LLDOMGIEPNE$$BIEFPKNCHOG @ RVA 0x3379EE8

void LLDOMGIEPNE__BIEFPKNCHOG(LLDOMGIEPNE_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *source;
  
                    /* catch() { ... } // from try @ 034781e4 with catch @ 03479f04
                       try { // try from 03479f04 to 03579f3b has its CatchHandler @ 03477bc4 */
  if ((DAT_04567b71 & 1) == 0) {
                    /* catch() { ... } // from try @ 034781f0 with catch @ 03479f08 */
                    /* catch() { ... } // from try @ 03479884 with catch @ 03479f0c
                       catch() { ... } // from try @ 0347988c with catch @ 03479f0c */
                    /* catch() { ... } // from try @ 03479860 with catch @ 03479f10 */
    FUN_01bab630(&System_Action_TypeInfo);
                    /* catch() { ... } // from try @ 03478474 with catch @ 03479f14 */
                    /* catch() { ... } // from try @ 03478418 with catch @ 03479f18 */
    DAT_04567b71 = 1;
  }
                    /* catch() { ... } // from try @ 03479858 with catch @ 03479f1c */
  ppSVar4 = &(__this->fields).BIFPFOCAPFD;
  source = *ppSVar4;
                    /* try { // try from 03479f3c to 03579f3f has its CatchHandler @ 03479f50 */
  while ((pSVar2 = System_Delegate__Remove
                             ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
                    /* catch() { ... } // from try @ 03479f3c with catch @ 03479f50 */
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,source);
                    /* try { // try from 03479f60 to 03579fdb has its CatchHandler @ 0347a0ac */
    bVar1 = source == pSVar3;
    source = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}

