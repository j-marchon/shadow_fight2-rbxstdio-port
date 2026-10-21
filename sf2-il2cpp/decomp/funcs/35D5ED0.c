// GGLDGAAPKCF$$DOFKHDEBDBF @ RVA 0x35D5ED0

void GGLDGAAPKCF__DOFKHDEBDBF(GGLDGAAPKCF_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *a;
  
                    /* try { // try from 036d5ed0 to 037d5eeb has its CatchHandler @ 036d5f30 */
  if ((DAT_04568ff8 & 1) == 0) {
                    /* try { // try from 036d5ef8 to 037d5eff has its CatchHandler @ 036d6094 */
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04568ff8 = 1;
  }
  ppSVar4 = &(__this->fields).ODCAOCGHMPN;
                    /* try { // try from 036d5f08 to 037d5f0b has its CatchHandler @ 036d5f38 */
  a = *ppSVar4;
                    /* try { // try from 036d5f10 to 037d5f13 has its CatchHandler @ 036d5f34 */
                    /* try { // try from 036d5f18 to 037d5f23 has its CatchHandler @ 036d5f3c */
                    /* try { // try from 036d5f24 to 037d5f5b has its CatchHandler @ 036d5a40 */
                    /* catch() { ... } // from try @ 036d5e80 with catch @ 036d5f28 */
                    /* catch() { ... } // from try @ 036d5e4c with catch @ 036d5f2c */
                    /* catch() { ... } // from try @ 036d5ed0 with catch @ 036d5f30 */
                    /* catch() { ... } // from try @ 036d5f10 with catch @ 036d5f34 */
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
                    /* catch() { ... } // from try @ 036d5f08 with catch @ 036d5f38 */
                    /* catch() { ... } // from try @ 036d5f18 with catch @ 036d5f3c */
                    /* catch() { ... } // from try @ 036d5e6c with catch @ 036d5f40 */
                    /* catch() { ... } // from try @ 036d5e30 with catch @ 036d5f44 */
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,a);
    bVar1 = a == pSVar3;
    a = pSVar3;
    if (bVar1) {
                    /* try { // try from 036d5f5c to 037d5f5f has its CatchHandler @ 036d6074 */
                    /* try { // try from 036d5f60 to 037d6007 has its CatchHandler @ 036d5a40 */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}

