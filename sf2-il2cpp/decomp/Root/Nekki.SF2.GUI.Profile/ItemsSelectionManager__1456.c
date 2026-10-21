// TypeDefIndex 1456
// Namespace: Nekki.SF2.GUI.Profile
// public class ItemsSelectionManager : MonoBehaviour
// Fields:
//   private JEIEEMKCNOJ _SubItemsContainer; // 0x20

// ===== public JEIEEMKCNOJ get_SubItemsContainer()  [RVA 0x318E2B8]
// Nekki.SF2.GUI.Profile.ItemsSelectionManager$$get_SubItemsContainer @ RVA 0x318E2B8

JEIEEMKCNOJ_o *
Nekki_SF2_GUI_Profile_ItemsSelectionManager__get_SubItemsContainer
          (Nekki_SF2_GUI_Profile_ItemsSelectionManager_o *__this,MethodInfo *method)

{
  return (__this->fields)._SubItemsContainer;
}


// ===== public void set_SubItemsContainer(JEIEEMKCNOJ CJNHFNHJHPE)  [RVA 0x318E2C0]
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


// ===== public SubItem get_SelectedSubItem()  [RVA 0x318E3EC]
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


// ===== public void set_SelectedSubItem(SubItem CJNHFNHJHPE)  [RVA 0x318E490]
// Nekki.SF2.GUI.Profile.ItemsSelectionManager$$set_SelectedSubItem @ RVA 0x318E490

void Nekki_SF2_GUI_Profile_ItemsSelectionManager__set_SelectedSubItem
               (Nekki_SF2_GUI_Profile_ItemsSelectionManager_o *__this,
               Nekki_SF2_GUI_Profile_SubItem_o *CJNHFNHJHPE,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  JEIEEMKCNOJ_c *pJVar3;
  ulong uVar4;
  int32_t *piVar5;
  JEIEEMKCNOJ_o *pJVar6;
  
                    /* try { // try from 0328e498 to 0338e49f has its CatchHandler @ 0328e4dc */
                    /* try { // try from 0328e4a0 to 0338e4f3 has its CatchHandler @ 0328e3cc */
  if ((DAT_04566a2b & 1) == 0) {
    FUN_01bab630(&JEIEEMKCNOJ_TypeInfo);
    DAT_04566a2b = 1;
  }
  pJVar6 = (__this->fields)._SubItemsContainer;
  if (pJVar6 == (JEIEEMKCNOJ_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0328e538 to 0338e543 has its CatchHandler @ 0328e3cc */
    FUN_01bab8c8();
  }
  pJVar3 = pJVar6->klass;
  uVar1._0_1_ = (pJVar3->_2).rank;
  uVar1._1_1_ = (pJVar3->_2).minimumAlignment;
  uVar4 = (ulong)uVar1;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0328e498 with catch @ 0328e4dc
                        */
  if (uVar4 != 0) {
    piVar5 = &((pJVar3->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)JEIEEMKCNOJ_TypeInfo) {
        pVVar2 = pJVar3->vtable + (*piVar5 + 3);
        goto LAB_0328e520;
      }
                    /* try { // try from 0328e4f4 to 0338e4f7 has its CatchHandler @ 0328e520 */
      uVar4 = uVar4 - 1;
                    /* try { // try from 0328e4f8 to 0338e52f has its CatchHandler @ 0328e3cc */
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pJVar6,JEIEEMKCNOJ_TypeInfo,3);
LAB_0328e520:
                    /* catch() { ... } // from try @ 0328e4f4 with catch @ 0328e520 */
                    /* try { // try from 0328e530 to 0338e537 has its CatchHandler @ 0328e54c */
                    /* WARNING: Could not recover jumptable at 0x0328e534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pJVar6,CJNHFNHJHPE,pVVar2->method);
  return;
}


// ===== public bool get_IsTopSubItemSelected()  [RVA 0x318E53C]
// Nekki.SF2.GUI.Profile.ItemsSelectionManager$$get_IsTopSubItemSelected @ RVA 0x318E53C

bool Nekki_SF2_GUI_Profile_ItemsSelectionManager__get_IsTopSubItemSelected
               (Nekki_SF2_GUI_Profile_ItemsSelectionManager_o *__this,MethodInfo *method)

{
  ushort uVar1;
  undefined1 uVar2;
  VirtualInvokeData *pVVar3;
  JEIEEMKCNOJ_c *pJVar4;
  ulong uVar5;
  int32_t *piVar6;
  JEIEEMKCNOJ_o *pJVar7;
  
                    /* try { // try from 0328e544 to 0338e54b has its CatchHandler @ 0328e54c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0328e530 with catch @ 0328e54c
                       catch(type#2 @ 00000000) { ... } // from try @ 0328e544 with catch @ 0328e54c
                        */
  if ((DAT_04566a2c & 1) == 0) {
    FUN_01bab630(&JEIEEMKCNOJ_TypeInfo);
    DAT_04566a2c = 1;
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
        pVVar3 = pJVar4->vtable + (*piVar6 + 9);
        goto LAB_0328e5d8;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pJVar7,JEIEEMKCNOJ_TypeInfo,9);
LAB_0328e5d8:
                    /* WARNING: Could not recover jumptable at 0x0328e5e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*pVVar3->methodPtr)(pJVar7,pVVar3->method);
  return (bool)uVar2;
}


// ===== public bool get_IsBottomSubItemSelected()  [RVA 0x318E5EC]
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


// ===== public bool get_IsLeftSubItemSelected()  [RVA 0x318E69C]
// Nekki.SF2.GUI.Profile.ItemsSelectionManager$$get_IsLeftSubItemSelected @ RVA 0x318E69C

bool Nekki_SF2_GUI_Profile_ItemsSelectionManager__get_IsLeftSubItemSelected
               (Nekki_SF2_GUI_Profile_ItemsSelectionManager_o *__this,MethodInfo *method)

{
  ushort uVar1;
  undefined1 uVar2;
  VirtualInvokeData *pVVar3;
  JEIEEMKCNOJ_c *pJVar4;
  ulong uVar5;
  int32_t *piVar6;
  JEIEEMKCNOJ_o *pJVar7;
  
  if ((DAT_04566a2e & 1) == 0) {
    FUN_01bab630(&JEIEEMKCNOJ_TypeInfo);
    DAT_04566a2e = 1;
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
        pVVar3 = pJVar4->vtable + (*piVar6 + 0xb);
        goto LAB_0328e738;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pJVar7,JEIEEMKCNOJ_TypeInfo,0xb);
LAB_0328e738:
                    /* WARNING: Could not recover jumptable at 0x0328e748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*pVVar3->methodPtr)(pJVar7,pVVar3->method);
  return (bool)uVar2;
}


// ===== public bool get_IsRightSubItemSelected()  [RVA 0x318E74C]
// Nekki.SF2.GUI.Profile.ItemsSelectionManager$$get_IsRightSubItemSelected @ RVA 0x318E74C

bool Nekki_SF2_GUI_Profile_ItemsSelectionManager__get_IsRightSubItemSelected
               (Nekki_SF2_GUI_Profile_ItemsSelectionManager_o *__this,MethodInfo *method)

{
  ushort uVar1;
  undefined1 uVar2;
  VirtualInvokeData *pVVar3;
  JEIEEMKCNOJ_c *pJVar4;
  ulong uVar5;
  int32_t *piVar6;
  JEIEEMKCNOJ_o *pJVar7;
  
  if ((DAT_04566a2f & 1) == 0) {
    FUN_01bab630(&JEIEEMKCNOJ_TypeInfo);
    DAT_04566a2f = 1;
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
                    /* try { // try from 0328e7a8 to 0338e95b has its CatchHandler @ 0328e7a8
                       catch() { ... } // from try @ 0328e7a8 with catch @ 0328e7a8
                       catch() { ... } // from try @ 0328ea1c with catch @ 0328e7a8
                       catch() { ... } // from try @ 0328ea94 with catch @ 0328e7a8
                       catch() { ... } // from try @ 0328eb0c with catch @ 0328e7a8
                       catch() { ... } // from try @ 0328eb7c with catch @ 0328e7a8
                       catch() { ... } // from try @ 0328eb9c with catch @ 0328e7a8
                       catch() { ... } // from try @ 0328ec08 with catch @ 0328e7a8
                       catch() { ... } // from try @ 0328ec1c with catch @ 0328e7a8
                       catch() { ... } // from try @ 0328ec50 with catch @ 0328e7a8
                       catch() { ... } // from try @ 0328ecb0 with catch @ 0328e7a8
                       catch() { ... } // from try @ 0328ece0 with catch @ 0328e7a8 */
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)JEIEEMKCNOJ_TypeInfo) {
        pVVar3 = pJVar4->vtable + (*piVar6 + 0xc);
        goto LAB_0328e7e8;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pJVar7,JEIEEMKCNOJ_TypeInfo,0xc);
LAB_0328e7e8:
                    /* WARNING: Could not recover jumptable at 0x0328e7f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*pVVar3->methodPtr)(pJVar7,pVVar3->method);
  return (bool)uVar2;
}


// ===== public void RestoreSelection(bool OFKBEIFPFMN = True)  [RVA 0x318E7FC]
// Nekki.SF2.GUI.Profile.ItemsSelectionManager$$RestoreSelection @ RVA 0x318E7FC

void Nekki_SF2_GUI_Profile_ItemsSelectionManager__RestoreSelection
               (Nekki_SF2_GUI_Profile_ItemsSelectionManager_o *__this,bool OFKBEIFPFMN,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Profile_SubItem_o *x;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  
  method_00 = (MethodInfo *)(ulong)OFKBEIFPFMN;
  if ((DAT_04566a30 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566a30 = 1;
    method_00 = extraout_x1;
  }
  if (OFKBEIFPFMN) {
    EDFDANKEBGF__EBPFDOEIBEH(1.0,(MethodInfo *)0x0);
    method_00 = extraout_x1_00;
  }
  x = Nekki_SF2_GUI_Profile_ItemsSelectionManager__get_SelectedSubItem(__this,method_00);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (x != (Nekki_SF2_GUI_Profile_SubItem_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0328e894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(x->klass->vtable)._59_Choose.methodPtr)(x,(x->klass->vtable)._59_Choose.method);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void SelectTopSubItem()  [RVA 0x318E8A8]
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


// ===== public void SelectBottomSubItem()  [RVA 0x318EAE8]
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


// ===== public void SelectLeftSubItem()  [RVA 0x318ED28]
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


// ===== public void SelectRightSubItem()  [RVA 0x318EF68]
// Nekki.SF2.GUI.Profile.ItemsSelectionManager$$SelectRightSubItem @ RVA 0x318EF68

void Nekki_SF2_GUI_Profile_ItemsSelectionManager__SelectRightSubItem
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
  if ((DAT_04566a34 & 1) == 0) {
    auVar10 = FUN_01bab630(&JEIEEMKCNOJ_TypeInfo);
    DAT_04566a34 = 1;
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
        goto LAB_0328eff4;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  pVVar5 = (VirtualInvokeData *)FUN_01b81914(pJVar9,JEIEEMKCNOJ_TypeInfo,8);
LAB_0328eff4:
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
          pVVar5 = pJVar6->vtable + (*piVar8 + 0xc);
          goto LAB_0328f05c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pJVar9,JEIEEMKCNOJ_TypeInfo,0xc);
LAB_0328f05c:
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
            pVVar5 = pJVar6->vtable + (*piVar8 + 7);
            goto LAB_0328f0d0;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(pJVar9,JEIEEMKCNOJ_TypeInfo,7);
LAB_0328f0d0:
      (*pVVar5->methodPtr)(pJVar9,pVVar5->method);
    }
  }
  return;
}


// ===== public void .ctor()  [RVA 0x318F1A8]
// Nekki.SF2.GUI.Profile.ItemsSelectionManager$$.ctor @ RVA 0x318F1A8

void Nekki_SF2_GUI_Profile_ItemsSelectionManager___ctor
               (Nekki_SF2_GUI_Profile_ItemsSelectionManager_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

