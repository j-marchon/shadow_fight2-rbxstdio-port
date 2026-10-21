// Nekki.SF2.GUI.BaseScrollContent$$Update @ RVA 0x35CD6A4

void Nekki_SF2_GUI_BaseScrollContent__Update
               (Nekki_SF2_GUI_BaseScrollContent_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_BaseScrollItem_o *x;
  Nekki_SF2_GUI_BaseScrollContent_SelectItemEvent_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  UnityEngine_RectTransform_o *x_00;
  Nekki_SF2_GUI_BaseScrollItem_o **ppNVar2;
  Nekki_SF2_GUI_BaseScrollItem_o *y;
  
  if ((DAT_04568fbc & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<BaseScrollItem>_Invoke__);
    DAT_04568fbc = 1;
    method = extraout_x1;
  }
  x_00 = (__this->fields)._Center_k__BackingField;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    x = Nekki_SF2_GUI_BaseScrollContent__GetNearestItem(__this,0.0,method_00);
    ppNVar2 = &(__this->fields)._SelectedItem_k__BackingField;
    y = *ppNVar2;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
    if (bVar1) {
      (__this->fields)._SelectedItem_k__BackingField = x;
      thunk_FUN_01c20e04(ppNVar2,x);
      __this_00 = (__this->fields).onSelectItem;
      if (__this_00 != (Nekki_SF2_GUI_BaseScrollContent_SelectItemEvent_o *)0x0) {
        UnityEngine_Events_UnityEvent<object>__Invoke
                  ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,(Il2CppObject *)*ppNVar2,
                   Method_UnityEngine_Events_UnityEvent<BaseScrollItem>_Invoke__);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}

