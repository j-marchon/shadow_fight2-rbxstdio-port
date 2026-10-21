// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesCell$$NPODNPOEIJD @ RVA 0x355454C

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell__NPODNPOEIJD
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *pNVar1;
  UnityEngine_RectTransform_o *rt;
  UnityEngine_RectTransform_o *pUVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  UnityEngine_Vector3_o UVar4;
  UnityEngine_Vector2_o UVar5;
  UnityEngine_Vector2_o UVar6;
  
  pNVar1 = (__this->fields)._pointsImage;
  if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    rt = UnityEngine_UI_Graphic__get_rectTransform
                   ((UnityEngine_UI_Graphic_o *)pNVar1,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._pointsImage;
                    /* try { // try from 03654574 to 03754593 has its CatchHandler @ 03654624 */
    if ((pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
       (pUVar2 = UnityEngine_UI_Graphic__get_rectTransform
                           ((UnityEngine_UI_Graphic_o *)pNVar1,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
      UVar5 = UnityEngine_RectTransform__get_sizeDelta(pUVar2,(MethodInfo *)0x0);
      pNVar3 = (__this->fields)._points;
      if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        UVar4 = Nekki_SF2_GUI_TextPic__LocalTextMeshBounds_Anchored
                          ((Nekki_SF2_GUI_TextPic_o *)pNVar3,3,(MethodInfo *)0x0);
        pNVar3 = (__this->fields)._points;
                    /* try { // try from 036545b0 to 037545b7 has its CatchHandler @ 0365461c */
                    /* try { // try from 036545b8 to 03754617 has its CatchHandler @ 03654500 */
        if ((pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
           (pUVar2 = UnityEngine_UI_Graphic__get_rectTransform
                               ((UnityEngine_UI_Graphic_o *)pNVar3,(MethodInfo *)0x0),
           pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
          UVar6 = UnityEngine_RectTransform__get_anchoredPosition(pUVar2,(MethodInfo *)0x0);
          UnityEngine_TransformExtensions__SetAnchoredPositionX
                    (rt,UVar5.fields.x * -0.5 + 5.0 + UVar4.fields.x + UVar6.fields.x,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

