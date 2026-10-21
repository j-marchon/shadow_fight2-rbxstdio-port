// Nekki.SF2.GUI.Profile.ItemsSelectionManager$$SelectBottomSubItem @ RVA 0x318EAE8

void Nekki_SF2_GUI_Profile_ItemsSelectionManager__SelectBottomSubItem
               (Nekki_SF2_GUI_Profile_ItemsSelectionManager_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int32_t iVar4;
  VirtualInvokeData *pVVar5;
  JEIEEMKCNOJ_c *pJVar6;
  ulong uVar7;
  int32_t *piVar8;
  JEIEEMKCNOJ_o *pJVar9;
  undefined1 auVar10 [16];
  
  auVar10._8_8_ = method;
  auVar10._0_8_ = __this;
  if ((DAT_04566a32 & 1) == 0) {
                    /* try { // try from 0328eb04 to 0338eb0b has its CatchHandler @ 0328eb88 */
    auVar10 = FUN_01bab630(&JEIEEMKCNOJ_TypeInfo);
                    /* try { // try from 0328eb0c to 0338eb6f has its CatchHandler @ 0328e7a8 */
    DAT_04566a32 = 1;
  }
  pJVar9 = (__this->fields)._SubItemsContainer;
  if (pJVar9 == (JEIEEMKCNOJ_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(auVar10._0_8_,auVar10._8_8_);
  }
  pJVar6 = pJVar9->klass;
  uVar1._0_1_ = (pJVar6->_2).rank;
  uVar1._1_1_ = (pJVar6->_2).minimumAlignment;
  uVar7 = (ulong)uVar1;
  if (uVar7 != 0) {
    piVar8 = &((pJVar6->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
          (Il2CppClass *)JEIEEMKCNOJ_TypeInfo) {
                    /* try { // try from 0328eb70 to 0338eb73 has its CatchHandler @ 0328eb84 */
        pVVar5 = pJVar6->vtable + (*piVar8 + 8);
        goto LAB_0328eb74;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  pVVar5 = (VirtualInvokeData *)FUN_01b81914(pJVar9,JEIEEMKCNOJ_TypeInfo,8);
LAB_0328eb74:
                    /* try { // try from 0328eb78 to 0338eb7b has its CatchHandler @ 0328eb80 */
                    /* try { // try from 0328eb7c to 0338eb97 has its CatchHandler @ 0328e7a8 */
  uVar7 = (*pVVar5->methodPtr)(pJVar9,pVVar5->method);
                    /* catch() { ... } // from try @ 0328eb78 with catch @ 0328eb80 */
  if ((uVar7 & 1) == 0) {
                    /* catch() { ... } // from try @ 0328eb70 with catch @ 0328eb84 */
    pJVar9 = (__this->fields)._SubItemsContainer;
                    /* catch() { ... } // from try @ 0328eb04 with catch @ 0328eb88 */
    if (pJVar9 == (JEIEEMKCNOJ_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pJVar6 = pJVar9->klass;
    uVar2._0_1_ = (pJVar6->_2).rank;
    uVar2._1_1_ = (pJVar6->_2).minimumAlignment;
    uVar7 = (ulong)uVar2;
                    /* try { // try from 0328eb98 to 0338eb9b has its CatchHandler @ 0328ebf0 */
    if (uVar7 != 0) {
                    /* try { // try from 0328eb9c to 0338ebd7 has its CatchHandler @ 0328e7a8 */
      piVar8 = &((pJVar6->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)JEIEEMKCNOJ_TypeInfo) {
                    /* try { // try from 0328ebd8 to 0338ebdb has its CatchHandler @ 0328ec24 */
          pVVar5 = pJVar6->vtable + (*piVar8 + 10);
          goto LAB_0328ebdc;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pJVar9,JEIEEMKCNOJ_TypeInfo,10);
LAB_0328ebdc:
                    /* try { // try from 0328ebdc to 0338ebe3 has its CatchHandler @ 0328ec20 */
    uVar7 = (*pVVar5->methodPtr)(pJVar9,pVVar5->method);
    if ((uVar7 & 1) == 0) {
                    /* catch() { ... } // from try @ 0328eb98 with catch @ 0328ebf0 */
      iVar4 = EDFDANKEBGF__EBPFDOEIBEH(1.0,(MethodInfo *)0x0);
      pJVar9 = (__this->fields)._SubItemsContainer;
      if (pJVar9 == (JEIEEMKCNOJ_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8(iVar4);
      }
                    /* try { // try from 0328ec00 to 0338ec07 has its CatchHandler @ 0328ed28 */
      pJVar6 = pJVar9->klass;
      uVar3._0_1_ = (pJVar6->_2).rank;
      uVar3._1_1_ = (pJVar6->_2).minimumAlignment;
                    /* try { // try from 0328ec08 to 0338ec13 has its CatchHandler @ 0328e7a8 */
      uVar7 = (ulong)uVar3;
      if (uVar7 != 0) {
                    /* try { // try from 0328ec14 to 0338ec1b has its CatchHandler @ 0328ed28 */
        piVar8 = &((pJVar6->_1).interfaceOffsets)->offset;
        do {
                    /* catch() { ... } // from try @ 0328ea14 with catch @ 0328ec1c
                       try { // try from 0328ec1c to 0338ec4b has its CatchHandler @ 0328e7a8 */
                    /* catch() { ... } // from try @ 0328ebdc with catch @ 0328ec20 */
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
              (Il2CppClass *)JEIEEMKCNOJ_TypeInfo) {
                    /* try { // try from 0328ec4c to 0338ec4f has its CatchHandler @ 0328ec8c */
            pVVar5 = pJVar6->vtable + (*piVar8 + 5);
            goto LAB_0328ec50;
          }
                    /* catch() { ... } // from try @ 0328ebd8 with catch @ 0328ec24 */
          uVar7 = uVar7 - 1;
                    /* catch() { ... } // from try @ 0328e9ac with catch @ 0328ec28 */
          piVar8 = piVar8 + 4;
                    /* catch() { ... } // from try @ 0328ea8c with catch @ 0328ec2c */
        } while (uVar7 != 0);
      }
                    /* catch() { ... } // from try @ 0328e95c with catch @ 0328ec30 */
                    /* catch() { ... } // from try @ 0328ea7c with catch @ 0328ec34 */
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(pJVar9,JEIEEMKCNOJ_TypeInfo,5);
LAB_0328ec50:
                    /* try { // try from 0328ec50 to 0338ec9b has its CatchHandler @ 0328e7a8 */
      (*pVVar5->methodPtr)(pJVar9,pVVar5->method);
    }
  }
  return;
}

