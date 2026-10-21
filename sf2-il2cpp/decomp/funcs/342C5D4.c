// MatchingDialog$$OJCPMPCFPJM @ RVA 0x342C5D4

void MatchingDialog__OJCPMPCFPJM(MatchingDialog_o *__this,MethodInfo *method)

{
  System_Collections_IEnumerator_o **ppSVar1;
  ushort uVar2;
  PBAKFOBIHEG_o *pPVar3;
  VirtualInvokeData *pVVar4;
  PBAKFOBIHEG_c *pPVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_IEnumerator_o *pSVar8;
  
                    /* try { // try from 0352c5e4 to 0362c5e7 has its CatchHandler @ 0352c670 */
                    /* try { // try from 0352c5e8 to 0362c5eb has its CatchHandler @ 0352c66c */
  if ((DAT_04568142 & 1) == 0) {
                    /* try { // try from 0352c5ec to 0362c5ef has its CatchHandler @ 0352c668 */
                    /* try { // try from 0352c5f0 to 0362c5f3 has its CatchHandler @ 0352c660 */
                    /* try { // try from 0352c5f4 to 0362c5f7 has its CatchHandler @ 0352c658 */
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
                    /* try { // try from 0352c5f8 to 0362c5fb has its CatchHandler @ 0352c64c */
                    /* try { // try from 0352c5fc to 0362c5ff has its CatchHandler @ 0352c644 */
    DAT_04568142 = 1;
  }
                    /* try { // try from 0352c600 to 0362c603 has its CatchHandler @ 0352c640 */
                    /* try { // try from 0352c604 to 0362c607 has its CatchHandler @ 0352c634 */
  if ((__this->fields).NDMPDEEBOHL == (System_Collections_IEnumerator_o *)0x0) {
                    /* catch() { ... } // from try @ 0352c5ec with catch @ 0352c668 */
                    /* catch() { ... } // from try @ 0352c5e8 with catch @ 0352c66c */
                    /* catch() { ... } // from try @ 0352c5e4 with catch @ 0352c670 */
    return;
  }
                    /* try { // try from 0352c608 to 0362c60b has its CatchHandler @ 0352c62c */
                    /* try { // try from 0352c60c to 0362c613 has its CatchHandler @ 0352c638 */
  pPVar3 = CoroutineManager__get_Current((MethodInfo *)0x0);
  if (pPVar3 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 0352c614 to 0362c68b has its CatchHandler @ 0352c2a8 */
                    /* catch() { ... } // from try @ 0352c44c with catch @ 0352c618 */
  pPVar5 = pPVar3->klass;
                    /* catch() { ... } // from try @ 0352c450 with catch @ 0352c61c */
                    /* catch() { ... } // from try @ 0352c510 with catch @ 0352c620 */
  ppSVar1 = &(__this->fields).NDMPDEEBOHL;
                    /* catch() { ... } // from try @ 0352c490 with catch @ 0352c624 */
  pSVar8 = *ppSVar1;
  uVar2._0_1_ = (pPVar5->_2).rank;
  uVar2._1_1_ = (pPVar5->_2).minimumAlignment;
                    /* catch() { ... } // from try @ 0352c4a4 with catch @ 0352c628 */
  uVar6 = (ulong)uVar2;
                    /* catch() { ... } // from try @ 0352c608 with catch @ 0352c62c */
                    /* catch() { ... } // from try @ 0352c4c0 with catch @ 0352c630 */
                    /* catch() { ... } // from try @ 0352c604 with catch @ 0352c634 */
  if (uVar6 != 0) {
                    /* catch() { ... } // from try @ 0352c60c with catch @ 0352c638 */
                    /* catch() { ... } // from try @ 0352c4b0 with catch @ 0352c63c */
    piVar7 = &((pPVar5->_1).interfaceOffsets)->offset;
    do {
                    /* catch() { ... } // from try @ 0352c600 with catch @ 0352c640 */
                    /* catch() { ... } // from try @ 0352c5fc with catch @ 0352c644 */
                    /* catch() { ... } // from try @ 0352c484 with catch @ 0352c648 */
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
                    /* catch() { ... } // from try @ 0352c3d4 with catch @ 0352c674 */
        pVVar4 = pPVar5->vtable + (*piVar7 + 1);
        goto LAB_0352c684;
      }
                    /* catch() { ... } // from try @ 0352c5f8 with catch @ 0352c64c */
      uVar6 = uVar6 - 1;
                    /* catch() { ... } // from try @ 0352c424 with catch @ 0352c650 */
      piVar7 = piVar7 + 4;
                    /* catch() { ... } // from try @ 0352c414 with catch @ 0352c654 */
    } while (uVar6 != 0);
  }
                    /* catch() { ... } // from try @ 0352c5f4 with catch @ 0352c658 */
                    /* catch() { ... } // from try @ 0352c408 with catch @ 0352c65c */
                    /* catch() { ... } // from try @ 0352c5f0 with catch @ 0352c660 */
  pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar3,PBAKFOBIHEG_TypeInfo,1);
                    /* catch() { ... } // from try @ 0352c588 with catch @ 0352c664 */
LAB_0352c684:
                    /* try { // try from 0352c68c to 0362c68f has its CatchHandler @ 0352c6b0 */
                    /* try { // try from 0352c690 to 0362c6b7 has its CatchHandler @ 0352c2a8 */
  (*pVVar4->methodPtr)(pPVar3,pSVar8,pVVar4->method);
  *ppSVar1 = (System_Collections_IEnumerator_o *)0x0;
  thunk_FUN_01c20e04(ppSVar1,0);
  return;
}

