// Nekki.SF2.GUI.Shop.Scroll$$GetCurrentItem @ RVA 0x34AA88C

Nekki_SF2_GUI_BaseScrollItem_o *
Nekki_SF2_GUI_Shop_Scroll__GetCurrentItem(Nekki_SF2_GUI_Shop_Scroll_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_BaseScrollItem_o *pNVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_BaseScrollContent_o *pNVar3;
  
  if ((DAT_04568525 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568525 = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields).ECEJKFAFODM;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pNVar2 = (Nekki_SF2_GUI_BaseScrollItem_o *)0x0;
  if (bVar1) {
    pNVar3 = (__this->fields).ECEJKFAFODM;
    if (pNVar3 == (Nekki_SF2_GUI_BaseScrollContent_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pNVar2 = (pNVar3->fields)._SelectedItem_k__BackingField;
  }
  return pNVar2;
}

