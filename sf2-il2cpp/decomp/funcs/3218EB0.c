// Nekki.SF2.GUI.Map.BattlePrize$$ODOKFKCAILG @ RVA 0x3218EB0

void Nekki_SF2_GUI_Map_BattlePrize__ODOKFKCAILG
               (Nekki_SF2_GUI_Map_BattlePrize_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_UI_HorizontalLayoutGroup_o *__this_00;
  UnityEngine_RectTransform_o *pUVar2;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar3;
  UnityEngine_Vector2_o value;
  UnityEngine_Rect_o UVar4;
  UnityEngine_Rect_o UVar5;
  
  if ((DAT_04566ee8 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    DAT_04566ee8 = 1;
  }
  __this_00 = (__this->fields)._layoutGroup;
  if (((__this_00 != (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) &&
      (pUVar2 = (UnityEngine_RectTransform_o *)
                UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
      pUVar2 != (UnityEngine_RectTransform_o *)0x0)) &&
     (pUVar2->klass == UnityEngine_RectTransform_TypeInfo)) {
    UVar4 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
    pUVar2 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if ((pUVar2 != (UnityEngine_RectTransform_o *)0x0) &&
       (pUVar2->klass == UnityEngine_RectTransform_TypeInfo)) {
      UVar5 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
      (__this->fields).KBIMEFPOLJB = UVar5.fields.m_Width < UVar4.fields.m_Width;
      pNVar3 = (__this->fields)._itemIcon;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UVar5.fields.m_XMin,UVar5.fields.m_YMin,UVar5.fields.m_Width,
                           UVar5.fields.m_Height);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)0x0,(UnityEngine_Object_o *)pNVar3,
                         (MethodInfo *)0x0);
      if (!bVar1) {
        return;
      }
      pNVar3 = (__this->fields)._itemIcon;
      if ((pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
         (pUVar2 = UnityEngine_UI_Graphic__get_rectTransform
                             ((UnityEngine_UI_Graphic_o *)pNVar3,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
        value.fields.y = (__this->fields).MOOOFNAMCME;
        value.fields.x = 500.0;
        UnityEngine_RectTransform__set_sizeDelta(pUVar2,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

