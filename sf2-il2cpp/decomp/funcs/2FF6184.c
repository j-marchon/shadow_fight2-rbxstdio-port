// Nekki.SF2.GUI.Dialogs.ScrollDialogLine$$UpdateHeightOrLocalization @ RVA 0x2FF6184

void Nekki_SF2_GUI_Dialogs_ScrollDialogLine__UpdateHeightOrLocalization
               (Nekki_SF2_GUI_Dialogs_ScrollDialogLine_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  UnityEngine_RectTransform_o *t;
  float y;
  
  pNVar1 = (__this->fields)._text;
  if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    t = UnityEngine_UI_Graphic__get_rectTransform
                  ((UnityEngine_UI_Graphic_o *)pNVar1,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._text;
    if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      y = (float)(*(pNVar1->klass->vtable)._82_get_preferredHeight.methodPtr)
                           (pNVar1,(pNVar1->klass->vtable)._82_get_preferredHeight.method);
      UnityEngine_TransformExtensions__SetSizeDeltaY(t,y,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

