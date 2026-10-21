// Nekki.SF2.GUI.BaseScrollContent$$get_SelectedItemRect @ RVA 0x35CD210

UnityEngine_RectTransform_o *
Nekki_SF2_GUI_BaseScrollContent__get_SelectedItemRect
          (Nekki_SF2_GUI_BaseScrollContent_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_RectTransform_o *pUVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_BaseScrollItem_o *pNVar3;
  
  if ((DAT_04568fb1 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    DAT_04568fb1 = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields)._SelectedItem_k__BackingField;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pUVar2 = (UnityEngine_RectTransform_o *)0x0;
  if (bVar1) {
    pNVar3 = (__this->fields)._SelectedItem_k__BackingField;
    if (pNVar3 == (Nekki_SF2_GUI_BaseScrollItem_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pUVar2 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
    if ((pUVar2 != (UnityEngine_RectTransform_o *)0x0) &&
       (pUVar2->klass != UnityEngine_RectTransform_TypeInfo)) {
      pUVar2 = (UnityEngine_RectTransform_o *)0x0;
    }
  }
  return pUVar2;
}

