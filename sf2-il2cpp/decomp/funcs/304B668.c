// EGMONPGHHDP$$BKANCKFIINC @ RVA 0x304B668

void EGMONPGHHDP__BKANCKFIINC(EGMONPGHHDP_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *a;
  
                    /* catch() { ... } // from try @ 0314b65c with catch @ 0314b66c */
                    /* try { // try from 0314b678 to 0324b683 has its CatchHandler @ 0314b698 */
                    /* try { // try from 0314b684 to 0324b68f has its CatchHandler @ 0314b53c */
  if ((DAT_04565e05 & 1) == 0) {
                    /* try { // try from 0314b690 to 0324b697 has its CatchHandler @ 0314b698 */
    FUN_01bab630(&System_Action_TypeInfo);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0314b678 with catch @ 0314b698
                       catch(type#2 @ 00000000) { ... } // from try @ 0314b690 with catch @ 0314b698
                        */
    DAT_04565e05 = 1;
  }
                    /* try { // try from 0314b69c to 0324b6ff has its CatchHandler @ 0314b69c
                       catch() { ... } // from try @ 0314b69c with catch @ 0314b69c
                       catch() { ... } // from try @ 0314b744 with catch @ 0314b69c
                       catch() { ... } // from try @ 0314b77c with catch @ 0314b69c
                       catch() { ... } // from try @ 0314b7c4 with catch @ 0314b69c */
  ppSVar4 = &(__this->fields).DOHDFNOOGAH;
  a = *ppSVar4;
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,a);
    bVar1 = a == pSVar3;
    a = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0314b700 to 0324b71f has its CatchHandler @ 0314b784 */
  FUN_01babc64(pSVar2);
}

