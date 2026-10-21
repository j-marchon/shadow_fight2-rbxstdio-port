// Nekki.SF2.GUI.Profile.ItemsSelectionManager$$SelectLeftSubItem @ RVA 0x318ED28

void Nekki_SF2_GUI_Profile_ItemsSelectionManager__SelectLeftSubItem
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
                    /* catch() { ... } // from try @ 0328ec00 with catch @ 0328ed28
                       catch() { ... } // from try @ 0328ec14 with catch @ 0328ed28
                       catch() { ... } // from try @ 0328ec9c with catch @ 0328ed28
                       catch() { ... } // from try @ 0328ed14 with catch @ 0328ed28 */
  if ((DAT_04566a33 & 1) == 0) {
    auVar10 = FUN_01bab630(&JEIEEMKCNOJ_TypeInfo);
    DAT_04566a33 = 1;
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
        goto LAB_0328edb4;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  pVVar5 = (VirtualInvokeData *)FUN_01b81914(pJVar9,JEIEEMKCNOJ_TypeInfo,8);
LAB_0328edb4:
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
      piVar8 = &((pJVar6->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)JEIEEMKCNOJ_TypeInfo) {
          pVVar5 = pJVar6->vtable + (*piVar8 + 0xb);
          goto LAB_0328ee1c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pJVar9,JEIEEMKCNOJ_TypeInfo,0xb);
LAB_0328ee1c:
    uVar7 = (*pVVar5->methodPtr)(pJVar9,pVVar5->method);
    if ((uVar7 & 1) == 0) {
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
            pVVar5 = pJVar6->vtable + (*piVar8 + 6);
            goto LAB_0328ee90;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(pJVar9,JEIEEMKCNOJ_TypeInfo,6);
LAB_0328ee90:
      (*pVVar5->methodPtr)(pJVar9,pVVar5->method);
    }
  }
  return;
}

