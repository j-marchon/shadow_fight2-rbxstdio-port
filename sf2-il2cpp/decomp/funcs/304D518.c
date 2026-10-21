// Nekki.SF2.GUI.Dialogs.Raids.RaidTopClanCell$$ACOAGJEJKMO @ RVA 0x304D518

void Nekki_SF2_GUI_Dialogs_Raids_RaidTopClanCell__ACOAGJEJKMO
               (Nekki_SF2_GUI_Dialogs_Raids_RaidTopClanCell_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *pNVar1;
  UnityEngine_RectTransform_o *rt;
  UnityEngine_RectTransform_o *pUVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  UnityEngine_Vector2_o UVar4;
  UnityEngine_Vector2_o UVar5;
  UnityEngine_Vector3_o UVar6;
  
  pNVar1 = (__this->fields)._ratingImage;
  if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    rt = UnityEngine_UI_Graphic__get_rectTransform
                   ((UnityEngine_UI_Graphic_o *)pNVar1,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._ratingImage;
    if ((pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
       (pUVar2 = UnityEngine_UI_Graphic__get_rectTransform
                           ((UnityEngine_UI_Graphic_o *)pNVar1,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
      UVar4 = UnityEngine_RectTransform__get_sizeDelta(pUVar2,(MethodInfo *)0x0);
      pNVar3 = (__this->fields)._ratingLabel;
      if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        UVar6 = Nekki_SF2_GUI_TextPic__LocalTextMeshBounds_Anchored
                          ((Nekki_SF2_GUI_TextPic_o *)pNVar3,3,(MethodInfo *)0x0);
        pNVar3 = (__this->fields)._ratingLabel;
        if ((pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
           (pUVar2 = UnityEngine_UI_Graphic__get_rectTransform
                               ((UnityEngine_UI_Graphic_o *)pNVar3,(MethodInfo *)0x0),
           pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
          UVar5 = UnityEngine_RectTransform__get_anchoredPosition(pUVar2,(MethodInfo *)0x0);
          UnityEngine_TransformExtensions__SetAnchoredPositionX
                    (rt,UVar4.fields.x * -0.5 + 5.0 + UVar6.fields.x + UVar5.fields.x,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

