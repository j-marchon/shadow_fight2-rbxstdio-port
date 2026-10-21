// Nekki.SF2.GUI.Map.RaidKey$$GetBoundingSize @ RVA 0x31B3C74

UnityEngine_Vector2_o
Nekki_SF2_GUI_Map_RaidKey__GetBoundingSize(Nekki_SF2_GUI_Map_RaidKey_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  UnityEngine_RectTransform_o *pUVar1;
  Nekki_SF2_GUI_LabelAlias_o *__this_01;
  UnityEngine_UI_HorizontalLayoutGroup_o *pUVar2;
  float fVar3;
  UnityEngine_Rect_o UVar4;
  UnityEngine_Rect_o UVar5;
  UnityEngine_Vector2_o UVar6;
  
  __this_00 = (__this->fields)._image;
  if ((__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (pUVar1 = UnityEngine_UI_Graphic__get_rectTransform
                         ((UnityEngine_UI_Graphic_o *)__this_00,(MethodInfo *)0x0),
     pUVar1 != (UnityEngine_RectTransform_o *)0x0)) {
    UVar4 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
    __this_01 = (__this->fields)._alias;
    if ((__this_01 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (pUVar1 = UnityEngine_UI_Graphic__get_rectTransform
                           ((UnityEngine_UI_Graphic_o *)__this_01,(MethodInfo *)0x0),
       pUVar1 != (UnityEngine_RectTransform_o *)0x0)) {
      UVar5 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
      pUVar2 = (__this->fields)._contentLayout;
      if (pUVar2 != (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) {
        fVar3 = UVar4.fields.m_Height;
        if (UVar4.fields.m_Height <= UVar5.fields.m_Height) {
          fVar3 = UVar5.fields.m_Height;
        }
        UVar6.fields.x =
             UVar5.fields.m_Width +
             UVar4.fields.m_Width + *(float *)&(pUVar2->fields).super.m_ChildScaleWidth;
        UVar6.fields.y = fVar3;
        return (UnityEngine_Vector2_o)UVar6.fields;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

