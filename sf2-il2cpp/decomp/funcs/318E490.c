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

