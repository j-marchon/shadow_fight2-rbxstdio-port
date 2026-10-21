// Nekki.SF2.GUI.TimerLabel$$set_DaysStringAlias @ RVA 0x33BB82C

void Nekki_SF2_GUI_TimerLabel__set_DaysStringAlias
               (Nekki_SF2_GUI_TimerLabel_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  ushort uVar1;
  Il2CppObject *pIVar2;
  long lVar3;
  VirtualInvokeData *pVVar4;
  long lVar5;
  Il2CppClass *pIVar6;
  ulong uVar7;
  int32_t *piVar8;
  System_String_o *pSVar9;
  undefined8 uVar10;
  
  if ((DAT_04567da6 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    DAT_04567da6 = 1;
  }
                    /* try { // try from 034bb888 to 035bb88b has its CatchHandler @ 034bb8d4 */
                    /* try { // try from 034bb88c to 035bb88f has its CatchHandler @ 034bb8d0 */
  (__this->fields).FFNCOGLLCND = CJNHFNHJHPE;
  thunk_FUN_01c20e04(&(__this->fields).FFNCOGLLCND,CJNHFNHJHPE);
                    /* catch() { ... } // from try @ 034bb700 with catch @ 034bb89c */
  pIVar2 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  lVar3 = Method_System_Array_Empty<string>__;
                    /* try { // try from 034bb8a4 to 035bb8ab has its CatchHandler @ 034bb948 */
  pSVar9 = (__this->fields).FFNCOGLLCND;
                    /* try { // try from 034bb8ac to 035bb8b7 has its CatchHandler @ 034bb368 */
  lVar5 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
  if (lVar5 == 0) {
                    /* try { // try from 034bb8b8 to 035bb8bf has its CatchHandler @ 034bb948 */
    FUN_01b8167c(Method_System_Array_Empty<string>__);
    lVar5 = *(long *)(lVar3 + 0x38);
  }
                    /* catch() { ... } // from try @ 034bb7b0 with catch @ 034bb8c0
                       try { // try from 034bb8c0 to 035bb8f7 has its CatchHandler @ 034bb368 */
  lVar5 = *(long *)(lVar5 + 0x10);
                    /* catch() { ... } // from try @ 034bb810 with catch @ 034bb8c4 */
                    /* catch() { ... } // from try @ 034bb7f4 with catch @ 034bb8c8 */
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
                    /* catch() { ... } // from try @ 034bb800 with catch @ 034bb8cc */
    lVar5 = FUN_01b81620();
  }
                    /* catch() { ... } // from try @ 034bb88c with catch @ 034bb8d0 */
                    /* catch() { ... } // from try @ 034bb888 with catch @ 034bb8d4 */
  if (*(int *)(lVar5 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 034bb7c4 with catch @ 034bb8d8 */
    thunk_FUN_01ba7564();
  }
                    /* catch() { ... } // from try @ 034bb78c with catch @ 034bb8dc */
                    /* catch() { ... } // from try @ 034bb778 with catch @ 034bb8e0 */
  lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01b81620();
  }
  if (pIVar2 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 034bb8f8 to 035bb8fb has its CatchHandler @ 034bb924 */
                    /* try { // try from 034bb8fc to 035bb933 has its CatchHandler @ 034bb368 */
  pIVar6 = pIVar2->klass;
  uVar10 = **(undefined8 **)(lVar3 + 0xb8);
  uVar1._0_1_ = (pIVar6->_2).rank;
  uVar1._1_1_ = (pIVar6->_2).minimumAlignment;
  uVar7 = (ulong)uVar1;
  if (uVar7 != 0) {
    piVar8 = &((pIVar6->_1).interfaceOffsets)->offset;
    do {
                    /* catch() { ... } // from try @ 034bb8f8 with catch @ 034bb924 */
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
          (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                    /* catch() { ... } // from try @ 034bb8a4 with catch @ 034bb948
                       catch() { ... } // from try @ 034bb8b8 with catch @ 034bb948
                       catch() { ... } // from try @ 034bb934 with catch @ 034bb948 */
        pVVar4 = pIVar6->vtable + (*piVar8 + 0xc);
        goto LAB_034bb954;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
                    /* try { // try from 034bb934 to 035bb947 has its CatchHandler @ 034bb948 */
  pVVar4 = (VirtualInvokeData *)FUN_01b81914(pIVar2,BLEFOFGCKEF_TypeInfo,0xc);
LAB_034bb954:
  pSVar9 = (System_String_o *)(*pVVar4->methodPtr)(pIVar2,pSVar9,uVar10,pVVar4->method);
  (__this->fields).Delimiter = pSVar9;
  thunk_FUN_01c20e04(&(__this->fields).Delimiter);
  return;
}

