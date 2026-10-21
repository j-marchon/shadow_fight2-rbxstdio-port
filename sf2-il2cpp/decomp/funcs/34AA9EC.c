// Nekki.SF2.GUI.Shop.Scroll$$GetNextItem @ RVA 0x34AA9EC

Nekki_SF2_GUI_BaseScrollItem_o *
Nekki_SF2_GUI_Shop_Scroll__GetNextItem
          (Nekki_SF2_GUI_Shop_Scroll_o *__this,Nekki_SF2_GUI_BaseScrollItem_o *ANMFBABEMFD,
          MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  Nekki_SF2_GUI_BaseScrollItem_o *pNVar3;
  MethodInfo *method_00;
  Nekki_SF2_GUI_BaseScrollContent_o *pNVar4;
  System_Collections_Generic_List_BaseScrollItem__o *pSVar5;
  
  if ((DAT_04568528 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_get_Count__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568528 = 1;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)ANMFBABEMFD,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (!bVar1) {
    iVar2 = Nekki_SF2_GUI_Shop_Scroll__GetIndexOfItem(__this,ANMFBABEMFD,method_00);
    pNVar4 = (__this->fields).ECEJKFAFODM;
    if ((pNVar4 == (Nekki_SF2_GUI_BaseScrollContent_o *)0x0) ||
       (pSVar5 = (pNVar4->fields)._Items,
       pSVar5 == (System_Collections_Generic_List_BaseScrollItem__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (iVar2 + 1 < (pSVar5->fields)._size) {
      pNVar3 = Nekki_SF2_GUI_Shop_Scroll__GetItem(__this,iVar2 + 1,method_00);
      return pNVar3;
    }
  }
  return (Nekki_SF2_GUI_BaseScrollItem_o *)0x0;
}

