// Nekki.SF2.GUI.Dialogs.SettingsAdvancedDialog$$CHNHJAJGLLO @ RVA 0x358E4C4

void Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__CHNHJAJGLLO
               (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *pNVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_RectTransform_o *pUVar4;
  UnityEngine_Rect_o UVar5;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
  
  pNVar1 = (__this->fields).super.super._topStripe;
  if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    pUVar2 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0);
    UnityEngine_TransformExtensions__SetLocalPositionY(pUVar2,650.0,(MethodInfo *)0x0);
    pNVar1 = (__this->fields).super.super._topStripe;
    if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      pUVar3 = UnityEngine_UI_Graphic__get_rectTransform
                         ((UnityEngine_UI_Graphic_o *)pNVar1,(MethodInfo *)0x0);
      pNVar1 = (__this->fields).super.super._topStripe;
      if ((pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
         (pUVar4 = UnityEngine_UI_Graphic__get_rectTransform
                             ((UnityEngine_UI_Graphic_o *)pNVar1,(MethodInfo *)0x0),
         pUVar4 != (UnityEngine_RectTransform_o *)0x0)) {
        UVar5 = UnityEngine_RectTransform__get_rect(pUVar4,(MethodInfo *)0x0);
        if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
          value.fields.y = UVar5.fields.m_Height;
          value.fields.x = 1078.0;
          UnityEngine_RectTransform__set_sizeDelta(pUVar3,value,(MethodInfo *)0x0);
          pNVar1 = (__this->fields).super.super._bottomStripe;
          if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
            pUVar2 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0);
            UnityEngine_TransformExtensions__SetLocalPositionY(pUVar2,-680.0,(MethodInfo *)0x0);
            pNVar1 = (__this->fields).super.super._bottomStripe;
            if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
              pUVar3 = UnityEngine_UI_Graphic__get_rectTransform
                                 ((UnityEngine_UI_Graphic_o *)pNVar1,(MethodInfo *)0x0);
              pNVar1 = (__this->fields).super.super._bottomStripe;
              if ((pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
                 (pUVar4 = UnityEngine_UI_Graphic__get_rectTransform
                                     ((UnityEngine_UI_Graphic_o *)pNVar1,(MethodInfo *)0x0),
                 pUVar4 != (UnityEngine_RectTransform_o *)0x0)) {
                UVar5 = UnityEngine_RectTransform__get_rect(pUVar4,(MethodInfo *)0x0);
                if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
                  value_00.fields.y = UVar5.fields.m_Height;
                  value_00.fields.x = 1000.0;
                  UnityEngine_RectTransform__set_sizeDelta(pUVar3,value_00,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

