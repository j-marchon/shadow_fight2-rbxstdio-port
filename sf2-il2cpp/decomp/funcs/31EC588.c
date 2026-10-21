// KGLCGFMIEGI$$ALBGFPHDHHH @ RVA 0x31EC588

void KGLCGFMIEGI__ALBGFPHDHHH(KGLCGFMIEGI_o *__this,MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  System_Collections_IEnumerator_o *pSVar3;
  VirtualInvokeData *pVVar4;
  MethodInfo *method_00;
  PBAKFOBIHEG_c *pPVar5;
  ulong uVar6;
  int32_t *piVar7;
  
                    /* try { // try from 032ec5b0 to 033ec5b7 has its CatchHandler @ 032eca5c */
  if ((DAT_04566dab & 1) == 0) {
    FUN_01bab630(&Facebook_Unity_FB_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
                    /* try { // try from 032ec5cc to 033ec5d3 has its CatchHandler @ 032eca54 */
    FUN_01bab630(&StringLiteral_8662);
    DAT_04566dab = 1;
  }
                    /* try { // try from 032ec5e0 to 033ec5e7 has its CatchHandler @ 032eca44 */
                    /* try { // try from 032ec5ec to 033ec5f3 has its CatchHandler @ 032eca48 */
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_8662,(MethodInfo *)0x0);
  if ((Facebook_Unity_FB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 032ec600 to 033ec62b has its CatchHandler @ 032eca58 */
  Facebook_Unity_FB__LogOut((MethodInfo *)0x0);
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  pSVar3 = KGLCGFMIEGI__LMFDDFLBEOH(__this,method_00);
  if (pPVar2 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar5 = pPVar2->klass;
  uVar1._0_1_ = (pPVar5->_2).rank;
  uVar1._1_1_ = (pPVar5->_2).minimumAlignment;
                    /* try { // try from 032ec62c to 033eca2f has its CatchHandler @ 032eaab8 */
  uVar6 = (ulong)uVar1;
  if (uVar6 != 0) {
    piVar7 = &((pPVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
        pVVar4 = pPVar5->vtable + *piVar7;
        goto LAB_032ec678;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,0);
LAB_032ec678:
                    /* WARNING: Could not recover jumptable at 0x032ec694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar4->methodPtr)(pPVar2,pSVar3,1,pVVar4->method);
  return;
}

