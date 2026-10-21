// MatchingDialog$$DAKEBOMPALG @ RVA 0x342C420

void MatchingDialog__DAKEBOMPALG(MatchingDialog_o *__this,MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  VirtualInvokeData *pVVar3;
  PBAKFOBIHEG_c *pPVar4;
  ulong uVar5;
  int32_t *piVar6;
  System_Collections_IEnumerator_o **ppSVar7;
  System_Collections_IEnumerator_o *pSVar8;
  
                    /* try { // try from 0352c424 to 0362c42f has its CatchHandler @ 0352c650 */
  if ((DAT_04568145 & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04568145 = 1;
  }
  ppSVar7 = &(__this->fields).PHELMNCGAKF;
                    /* try { // try from 0352c44c to 0362c44f has its CatchHandler @ 0352c618 */
                    /* try { // try from 0352c450 to 0362c457 has its CatchHandler @ 0352c61c */
  if (*ppSVar7 == (System_Collections_IEnumerator_o *)0x0) {
                    /* try { // try from 0352c4b0 to 0362c4b7 has its CatchHandler @ 0352c63c */
    return;
  }
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  if (pPVar2 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar4 = pPVar2->klass;
  pSVar8 = *ppSVar7;
  uVar1._0_1_ = (pPVar4->_2).rank;
  uVar1._1_1_ = (pPVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
                    /* try { // try from 0352c484 to 0362c48b has its CatchHandler @ 0352c648 */
    piVar6 = &((pPVar4->_1).interfaceOffsets)->offset;
    do {
                    /* try { // try from 0352c490 to 0362c497 has its CatchHandler @ 0352c624 */
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
                    /* try { // try from 0352c4c0 to 0362c4cf has its CatchHandler @ 0352c630 */
        pVVar3 = pPVar4->vtable + (*piVar6 + 1);
        goto LAB_0352c4cc;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
                    /* try { // try from 0352c4a4 to 0362c4ab has its CatchHandler @ 0352c628 */
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,1);
LAB_0352c4cc:
  (*pVVar3->methodPtr)(pPVar2,pSVar8,pVVar3->method);
  *ppSVar7 = (System_Collections_IEnumerator_o *)0x0;
  thunk_FUN_01c20e04(ppSVar7,0);
  return;
}

