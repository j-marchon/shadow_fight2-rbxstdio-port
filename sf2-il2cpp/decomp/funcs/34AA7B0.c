// Nekki.SF2.GUI.Shop.Scroll$$GetCurrentItemIndex @ RVA 0x34AA7B0

int32_t Nekki_SF2_GUI_Shop_Scroll__GetCurrentItemIndex
                  (Nekki_SF2_GUI_Shop_Scroll_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Collections_Generic_List_BaseScrollItem__o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  Nekki_SF2_GUI_BaseScrollContent_o *pNVar3;
  Nekki_SF2_GUI_BaseScrollItem_o *x;
  
  if ((DAT_04568524 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_IndexOf__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568524 = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields).ECEJKFAFODM;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return 0;
  }
  pNVar3 = (__this->fields).ECEJKFAFODM;
  if (pNVar3 != (Nekki_SF2_GUI_BaseScrollContent_o *)0x0) {
    x = (pNVar3->fields)._SelectedItem_k__BackingField;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      return 0;
    }
    __this_00 = Nekki_SF2_GUI_Shop_Scroll__GetItems(__this,method_00);
    pNVar3 = (__this->fields).ECEJKFAFODM;
    if ((pNVar3 != (Nekki_SF2_GUI_BaseScrollContent_o *)0x0) &&
       (__this_00 != (System_Collections_Generic_List_BaseScrollItem__o *)0x0)) {
      iVar2 = System_Collections_Generic_List<object>__IndexOf
                        ((System_Collections_Generic_List_object__o *)__this_00,
                         (Il2CppObject *)(pNVar3->fields)._SelectedItem_k__BackingField,
                         Method_System_Collections_Generic_List<BaseScrollItem>_IndexOf__);
      return iVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

