// Nekki.SF2.GUI.Profile.ItemsSelectionManager$$get_IsBottomSubItemSelected @ RVA 0x318E5EC

bool Nekki_SF2_GUI_Profile_ItemsSelectionManager__get_IsBottomSubItemSelected
               (Nekki_SF2_GUI_Profile_ItemsSelectionManager_o *__this,MethodInfo *method)

{
  ushort uVar1;
  undefined1 uVar2;
  VirtualInvokeData *pVVar3;
  JEIEEMKCNOJ_c *pJVar4;
  ulong uVar5;
  int32_t *piVar6;
  JEIEEMKCNOJ_o *pJVar7;
  
  if ((DAT_04566a2d & 1) == 0) {
    FUN_01bab630(&JEIEEMKCNOJ_TypeInfo);
    DAT_04566a2d = 1;
  }
  pJVar7 = (__this->fields)._SubItemsContainer;
  if (pJVar7 == (JEIEEMKCNOJ_o *)0x0) {
    return false;
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
        pVVar3 = pJVar4->vtable + (*piVar6 + 10);
        goto LAB_0328e688;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pJVar7,JEIEEMKCNOJ_TypeInfo,10);
LAB_0328e688:
                    /* WARNING: Could not recover jumptable at 0x0328e698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*pVVar3->methodPtr)(pJVar7,pVVar3->method);
  return (bool)uVar2;
}

