// Nekki.SF2.GUI.Dialogs.SettingsDialog$$GLANJNFACKI @ RVA 0x3482FD8

void Nekki_SF2_GUI_Dialogs_SettingsDialog__GLANJNFACKI
               (Nekki_SF2_GUI_Dialogs_SettingsDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *pNVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
  UnityEngine_Rect_o UVar4;
  
  Nekki_SF2_GUI_Dialogs_BaseDialog__GLANJNFACKI
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
  pNVar1 = (__this->fields).super._topStripe;
  if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    pUVar2 = UnityEngine_UI_Graphic__get_rectTransform
                       ((UnityEngine_UI_Graphic_o *)pNVar1,(MethodInfo *)0x0);
    pNVar1 = (__this->fields).super._topStripe;
    if ((pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
       (pUVar3 = UnityEngine_UI_Graphic__get_rectTransform
                           ((UnityEngine_UI_Graphic_o *)pNVar1,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_RectTransform_o *)0x0)) {
      UVar4 = UnityEngine_RectTransform__get_rect(pUVar3,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
        value.fields.y = UVar4.fields.m_Height;
        value.fields.x = 1078.0;
        UnityEngine_RectTransform__set_sizeDelta(pUVar2,value,(MethodInfo *)0x0);
        pNVar1 = (__this->fields).super._bottomStripe;
        if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
          pUVar2 = UnityEngine_UI_Graphic__get_rectTransform
                             ((UnityEngine_UI_Graphic_o *)pNVar1,(MethodInfo *)0x0);
          pNVar1 = (__this->fields).super._bottomStripe;
          if ((pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
             (pUVar3 = UnityEngine_UI_Graphic__get_rectTransform
                                 ((UnityEngine_UI_Graphic_o *)pNVar1,(MethodInfo *)0x0),
             pUVar3 != (UnityEngine_RectTransform_o *)0x0)) {
            UVar4 = UnityEngine_RectTransform__get_rect(pUVar3,(MethodInfo *)0x0);
            if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
              value_00.fields.y = UVar4.fields.m_Height;
              value_00.fields.x = 1000.99994;
              UnityEngine_RectTransform__set_sizeDelta(pUVar2,value_00,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x035830a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(__this->klass->vtable)._38_CHNHJAJGLLO.methodPtr)
                        (__this,(__this->klass->vtable)._38_CHNHJAJGLLO.method);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

