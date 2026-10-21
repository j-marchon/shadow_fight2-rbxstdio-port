// LPAPAMPGDFN$$OJMMJBJOPKK @ RVA 0x347B8C4

void LPAPAMPGDFN__OJMMJBJOPKK(LPAPAMPGDFN_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *source;
  
  if ((DAT_0456834e & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_0456834e = 1;
  }
                    /* try { // try from 0357b8f8 to 0367b8fb has its CatchHandler @ 0357b96c */
  ppSVar4 = &(__this->fields).JKPKAMGOAAB;
                    /* try { // try from 0357b8fc to 0367b8ff has its CatchHandler @ 0357b95c */
                    /* try { // try from 0357b900 to 0367b903 has its CatchHandler @ 0357b958 */
  source = *ppSVar4;
                    /* try { // try from 0357b904 to 0367b907 has its CatchHandler @ 0357b92c */
                    /* try { // try from 0357b908 to 0367b90f has its CatchHandler @ 0357b980 */
                    /* try { // try from 0357b910 to 0367b913 has its CatchHandler @ 0357b3e8 */
                    /* try { // try from 0357b914 to 0367b917 has its CatchHandler @ 0357b920 */
                    /* try { // try from 0357b918 to 0367b99b has its CatchHandler @ 0357b3e8 */
                    /* catch() { ... } // from try @ 0357b914 with catch @ 0357b920 */
                    /* catch() { ... } // from try @ 0357b848 with catch @ 0357b924 */
                    /* catch() { ... } // from try @ 0357b7a0 with catch @ 0357b928 */
  while ((pSVar2 = System_Delegate__Remove
                             ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
                    /* catch() { ... } // from try @ 0357b904 with catch @ 0357b92c */
                    /* catch() { ... } // from try @ 0357b77c with catch @ 0357b930 */
                    /* catch() { ... } // from try @ 0357b7d0 with catch @ 0357b934 */
                    /* catch() { ... } // from try @ 0357b794 with catch @ 0357b938 */
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,source);
                    /* catch() { ... } // from try @ 0357b7b0 with catch @ 0357b93c */
    bVar1 = source == pSVar3;
    source = pSVar3;
                    /* catch() { ... } // from try @ 0357b7b8 with catch @ 0357b940 */
                    /* catch() { ... } // from try @ 0357b728 with catch @ 0357b944 */
    if (bVar1) {
                    /* catch() { ... } // from try @ 0357b6e4 with catch @ 0357b948 */
                    /* catch() { ... } // from try @ 0357b6d4 with catch @ 0357b94c */
                    /* catch() { ... } // from try @ 0357b76c with catch @ 0357b950 */
                    /* catch() { ... } // from try @ 0357b740 with catch @ 0357b954 */
      return;
    }
  }
                    /* catch() { ... } // from try @ 0357b900 with catch @ 0357b958 */
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0357b8fc with catch @ 0357b95c */
  FUN_01babc64(pSVar2);
}

