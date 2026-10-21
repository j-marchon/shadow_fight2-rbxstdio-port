// MatchingDialog$$DILGDEAECBG @ RVA 0x342C4F8

void MatchingDialog__DILGDEAECBG(MatchingDialog_o *__this,MethodInfo *method)

{
  System_Collections_IEnumerator_o **ppSVar1;
  ushort uVar2;
  PBAKFOBIHEG_o *pPVar3;
  VirtualInvokeData *pVVar4;
  PBAKFOBIHEG_c *pPVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_IEnumerator_o *pSVar8;
  
  if ((DAT_04568147 & 1) == 0) {
                    /* try { // try from 0352c510 to 0362c533 has its CatchHandler @ 0352c620 */
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04568147 = 1;
  }
  if ((__this->fields).MMODCAPKNDF == (System_Collections_IEnumerator_o *)0x0) {
    return;
  }
  pPVar3 = CoroutineManager__get_Current((MethodInfo *)0x0);
                    /* try { // try from 0352c534 to 0362c56b has its CatchHandler @ 0352c2a8 */
  if (pPVar3 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar5 = pPVar3->klass;
  ppSVar1 = &(__this->fields).MMODCAPKNDF;
  pSVar8 = *ppSVar1;
  uVar2._0_1_ = (pPVar5->_2).rank;
  uVar2._1_1_ = (pPVar5->_2).minimumAlignment;
  uVar6 = (ulong)uVar2;
  if (uVar6 != 0) {
    piVar7 = &((pPVar5->_1).interfaceOffsets)->offset;
    do {
                    /* try { // try from 0352c56c to 0362c573 has its CatchHandler @ 0352c6cc */
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
                    /* try { // try from 0352c59c to 0362c5af has its CatchHandler @ 0352c6d0 */
        pVVar4 = pPVar5->vtable + (*piVar7 + 1);
        goto LAB_0352c5a8;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar3,PBAKFOBIHEG_TypeInfo,1);
                    /* try { // try from 0352c588 to 0362c58f has its CatchHandler @ 0352c664 */
LAB_0352c5a8:
                    /* try { // try from 0352c5b0 to 0362c5e3 has its CatchHandler @ 0352c2a8 */
  (*pVVar4->methodPtr)(pPVar3,pSVar8,pVVar4->method);
  *ppSVar1 = (System_Collections_IEnumerator_o *)0x0;
  thunk_FUN_01c20e04(ppSVar1,0);
  return;
}

