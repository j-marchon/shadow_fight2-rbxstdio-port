// Nekki.SF2.GUI.Profile.ItemsSelectionManager$$get_SelectedSubItem @ RVA 0x318E3EC

Nekki_SF2_GUI_Profile_SubItem_o *
Nekki_SF2_GUI_Profile_ItemsSelectionManager__get_SelectedSubItem
          (Nekki_SF2_GUI_Profile_ItemsSelectionManager_o *__this,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Nekki_SF2_GUI_Profile_SubItem_o *pNVar3;
  JEIEEMKCNOJ_c *pJVar4;
  ulong uVar5;
  int32_t *piVar6;
  JEIEEMKCNOJ_o *pJVar7;
  undefined1 auVar8 [16];
  
  auVar8._8_8_ = method;
  auVar8._0_8_ = __this;
  if ((DAT_04566a2a & 1) == 0) {
    auVar8 = FUN_01bab630(&JEIEEMKCNOJ_TypeInfo);
    DAT_04566a2a = 1;
  }
  pJVar7 = (__this->fields)._SubItemsContainer;
  if (pJVar7 == (JEIEEMKCNOJ_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(auVar8._0_8_,auVar8._8_8_);
  }
  pJVar4 = pJVar7->klass;
  uVar1._0_1_ = (pJVar4->_2).rank;
  uVar1._1_1_ = (pJVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pJVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)JEIEEMKCNOJ_TypeInfo) {
        pVVar2 = pJVar4->vtable + (*piVar6 + 2);
        goto LAB_0328e478;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pJVar7,JEIEEMKCNOJ_TypeInfo,2);
LAB_0328e478:
                    /* WARNING: Could not recover jumptable at 0x0328e488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pNVar3 = (Nekki_SF2_GUI_Profile_SubItem_o *)(*pVVar2->methodPtr)(pJVar7,pVVar2->method);
  return pNVar3;
}

