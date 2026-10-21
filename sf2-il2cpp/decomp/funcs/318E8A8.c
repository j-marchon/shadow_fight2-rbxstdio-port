// Nekki.SF2.GUI.Profile.ItemsSelectionManager$$SelectTopSubItem @ RVA 0x318E8A8

void Nekki_SF2_GUI_Profile_ItemsSelectionManager__SelectTopSubItem
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
  if ((DAT_04566a31 & 1) == 0) {
    auVar10 = FUN_01bab630(&JEIEEMKCNOJ_TypeInfo);
    DAT_04566a31 = 1;
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
        pVVar5 = pJVar6->vtable + (*piVar8 + 8);
        goto LAB_0328e934;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  pVVar5 = (VirtualInvokeData *)FUN_01b81914(pJVar9,JEIEEMKCNOJ_TypeInfo,8);
LAB_0328e934:
  uVar7 = (*pVVar5->methodPtr)(pJVar9,pVVar5->method);
  if ((uVar7 & 1) == 0) {
    pJVar9 = (__this->fields)._SubItemsContainer;
    if (pJVar9 == (JEIEEMKCNOJ_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pJVar6 = pJVar9->klass;
    uVar2._0_1_ = (pJVar6->_2).rank;
    uVar2._1_1_ = (pJVar6->_2).minimumAlignment;
    uVar7 = (ulong)uVar2;
    if (uVar7 != 0) {
                    /* try { // try from 0328e95c to 0338e963 has its CatchHandler @ 0328ec30 */
      piVar8 = &((pJVar6->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)JEIEEMKCNOJ_TypeInfo) {
                    /* try { // try from 0328e990 to 0338e9a7 has its CatchHandler @ 0328ecb0 */
          pVVar5 = pJVar6->vtable + (*piVar8 + 9);
          goto LAB_0328e99c;
        }
                    /* try { // try from 0328e970 to 0338e97f has its CatchHandler @ 0328ecb4 */
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pJVar9,JEIEEMKCNOJ_TypeInfo,9);
LAB_0328e99c:
    uVar7 = (*pVVar5->methodPtr)(pJVar9,pVVar5->method);
    if ((uVar7 & 1) == 0) {
                    /* try { // try from 0328e9ac to 0338e9b7 has its CatchHandler @ 0328ec28 */
      iVar4 = EDFDANKEBGF__EBPFDOEIBEH(1.0,(MethodInfo *)0x0);
      pJVar9 = (__this->fields)._SubItemsContainer;
      if (pJVar9 == (JEIEEMKCNOJ_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8(iVar4);
      }
      pJVar6 = pJVar9->klass;
      uVar3._0_1_ = (pJVar6->_2).rank;
      uVar3._1_1_ = (pJVar6->_2).minimumAlignment;
      uVar7 = (ulong)uVar3;
      if (uVar7 != 0) {
        piVar8 = &((pJVar6->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
              (Il2CppClass *)JEIEEMKCNOJ_TypeInfo) {
            pVVar5 = pJVar6->vtable + (*piVar8 + 4);
            goto LAB_0328ea10;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(pJVar9,JEIEEMKCNOJ_TypeInfo,4);
LAB_0328ea10:
                    /* try { // try from 0328ea14 to 0338ea1b has its CatchHandler @ 0328ec1c */
      (*pVVar5->methodPtr)(pJVar9,pVVar5->method);
    }
  }
                    /* try { // try from 0328ea1c to 0338ea7b has its CatchHandler @ 0328e7a8 */
  return;
}

