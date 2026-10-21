// Nekki.SF2.GUI.Profile.ItemsSelectionManager$$set_SubItemsContainer @ RVA 0x318E2C0

void Nekki_SF2_GUI_Profile_ItemsSelectionManager__set_SubItemsContainer
               (Nekki_SF2_GUI_Profile_ItemsSelectionManager_o *__this,JEIEEMKCNOJ_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  VirtualInvokeData *pVVar3;
  JEIEEMKCNOJ_c *pJVar4;
  ulong uVar5;
  int32_t *piVar6;
  JEIEEMKCNOJ_o **ppJVar7;
  JEIEEMKCNOJ_o *pJVar8;
  
                    /* try { // try from 0328e2c8 to 0338e2cb has its CatchHandler @ 0328e2ec */
                    /* try { // try from 0328e2cc to 0338e2f3 has its CatchHandler @ 0328e164 */
  if ((DAT_04566a29 & 1) == 0) {
    FUN_01bab630(&JEIEEMKCNOJ_TypeInfo);
                    /* catch() { ... } // from try @ 0328e2c8 with catch @ 0328e2ec */
    DAT_04566a29 = 1;
  }
                    /* try { // try from 0328e2f4 to 0338e2fb has its CatchHandler @ 0328e310 */
  ppJVar7 = &(__this->fields)._SubItemsContainer;
  pJVar8 = *ppJVar7;
                    /* try { // try from 0328e2fc to 0338e307 has its CatchHandler @ 0328e164 */
  if (pJVar8 != (JEIEEMKCNOJ_o *)0x0) {
    pJVar4 = pJVar8->klass;
    uVar1._0_1_ = (pJVar4->_2).rank;
    uVar1._1_1_ = (pJVar4->_2).minimumAlignment;
                    /* try { // try from 0328e308 to 0338e30f has its CatchHandler @ 0328e310 */
    uVar5 = (ulong)uVar1;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0328e2f4 with catch @ 0328e310
                       catch(type#2 @ 00000000) { ... } // from try @ 0328e308 with catch @ 0328e310
                        */
    if (uVar5 != 0) {
      piVar6 = &((pJVar4->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
            (Il2CppClass *)JEIEEMKCNOJ_TypeInfo) {
          pVVar3 = pJVar4->vtable + (*piVar6 + 1);
          goto LAB_0328e354;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    pVVar3 = (VirtualInvokeData *)FUN_01b81914(pJVar8,JEIEEMKCNOJ_TypeInfo,1);
LAB_0328e354:
    (*pVVar3->methodPtr)(pJVar8,0,pVVar3->method);
  }
  *ppJVar7 = CJNHFNHJHPE;
  thunk_FUN_01c20e04(ppJVar7,CJNHFNHJHPE);
  pJVar8 = *ppJVar7;
  if (pJVar8 == (JEIEEMKCNOJ_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pJVar4 = pJVar8->klass;
  uVar2._0_1_ = (pJVar4->_2).rank;
  uVar2._1_1_ = (pJVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar2;
  if (uVar5 != 0) {
    piVar6 = &((pJVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)JEIEEMKCNOJ_TypeInfo) {
        pVVar3 = pJVar4->vtable + (*piVar6 + 1);
        goto LAB_0328e3cc;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pJVar8,JEIEEMKCNOJ_TypeInfo,1);
LAB_0328e3cc:
                    /* try { // try from 0328e3cc to 0338e497 has its CatchHandler @ 0328e3cc
                       catch() { ... } // from try @ 0328e3cc with catch @ 0328e3cc
                       catch() { ... } // from try @ 0328e4a0 with catch @ 0328e3cc
                       catch() { ... } // from try @ 0328e4f8 with catch @ 0328e3cc
                       catch() { ... } // from try @ 0328e538 with catch @ 0328e3cc */
                    /* WARNING: Could not recover jumptable at 0x0328e3e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar3->methodPtr)(pJVar8,1,pVVar3->method);
  return;
}

