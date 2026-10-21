// KGFBAIBBNNH$$BIIMJHGLNGO @ RVA 0x33A364C

System_String_o *
KGFBAIBBNNH__BIIMJHGLNGO(System_String_o *IMMNELPBGIF,bool PFNHAKDMNOF,MethodInfo *method)

{
  ushort uVar1;
  Il2CppObject *pIVar2;
  long lVar3;
  VirtualInvokeData *pVVar4;
  System_String_o *pSVar5;
  long lVar6;
  Il2CppClass *pIVar7;
  ulong uVar8;
  int32_t *piVar9;
  undefined8 uVar10;
  
                    /* try { // try from 034a3668 to 035a368f has its CatchHandler @ 034a3744 */
  if ((DAT_04567cd2 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
                    /* try { // try from 034a3690 to 035a36a7 has its CatchHandler @ 034a32b4 */
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    DAT_04567cd2 = 1;
  }
                    /* try { // try from 034a36a8 to 035a36ab has its CatchHandler @ 034a36d0 */
  pIVar2 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  lVar3 = Method_System_Array_Empty<string>__;
                    /* try { // try from 034a36b8 to 035a372f has its CatchHandler @ 034a3744 */
  lVar6 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
  if (lVar6 == 0) {
                    /* catch() { ... } // from try @ 034a3628 with catch @ 034a36c0 */
    FUN_01b8167c(Method_System_Array_Empty<string>__);
    lVar6 = *(long *)(lVar3 + 0x38);
  }
  lVar6 = *(long *)(lVar6 + 0x10);
                    /* catch() { ... } // from try @ 034a36a8 with catch @ 034a36d0 */
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_01b81620();
  }
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01ba7564();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01b81620();
  }
  if (pIVar2 != (Il2CppObject *)0x0) {
    pIVar7 = pIVar2->klass;
    uVar10 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1._0_1_ = (pIVar7->_2).rank;
    uVar1._1_1_ = (pIVar7->_2).minimumAlignment;
    uVar8 = (ulong)uVar1;
    if (uVar8 != 0) {
      piVar9 = &((pIVar7->_1).interfaceOffsets)->offset;
      do {
                    /* try { // try from 034a3730 to 035a373b has its CatchHandler @ 034a32b4 */
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
          pVVar4 = pIVar7->vtable + (*piVar9 + 0xc);
          goto LAB_034a3760;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
                    /* try { // try from 034a373c to 035a3743 has its CatchHandler @ 034a3744 */
      } while (uVar8 != 0);
    }
                    /* catch() { ... } // from try @ 034a35b0 with catch @ 034a3744
                       catch() { ... } // from try @ 034a3668 with catch @ 034a3744
                       catch() { ... } // from try @ 034a36b8 with catch @ 034a3744
                       catch() { ... } // from try @ 034a373c with catch @ 034a3744 */
                    /* try { // try from 034a3748 to 035a37d7 has its CatchHandler @ 034a3748
                       catch() { ... } // from try @ 034a3748 with catch @ 034a3748
                       catch() { ... } // from try @ 034a38e0 with catch @ 034a3748
                       catch() { ... } // from try @ 034a397c with catch @ 034a3748
                       catch() { ... } // from try @ 034a3a20 with catch @ 034a3748
                       catch() { ... } // from try @ 034a3ae0 with catch @ 034a3748
                       catch() { ... } // from try @ 034a3b7c with catch @ 034a3748 */
    pVVar4 = (VirtualInvokeData *)FUN_01b81914(pIVar2,BLEFOFGCKEF_TypeInfo,0xc);
LAB_034a3760:
    pSVar5 = (System_String_o *)(*pVVar4->methodPtr)(pIVar2,IMMNELPBGIF,uVar10,pVVar4->method);
    if (!PFNHAKDMNOF) {
      return pSVar5;
    }
    if (pSVar5 != (System_String_o *)0x0) {
      pSVar5 = System_String__ToUpper(pSVar5,(MethodInfo *)0x0);
      return pSVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

