// Nekki.SF2.GUI.Profile.AchievementSubItem$$UpdatePositions @ RVA 0x338F2EC

void Nekki_SF2_GUI_Profile_AchievementSubItem__UpdatePositions
               (Nekki_SF2_GUI_Profile_AchievementSubItem_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *pNVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_RectTransform_o *pUVar3;
  ProgressBar_o *pPVar4;
  UnityEngine_Vector3_o UVar5;
  UnityEngine_Rect_o UVar6;
  UnityEngine_Rect_o UVar7;
  
  if ((DAT_04567c0c & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<RectTransform>__);
    DAT_04567c0c = 1;
  }
  pNVar1 = (__this->fields).super._icon;
  if ((pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_Transform_o *)0x0)) {
    UVar5 = UnityEngine_Transform__get_localPosition(pUVar2,(MethodInfo *)0x0);
    pNVar1 = (__this->fields).super._icon;
    if ((pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
       (pUVar3 = UnityEngine_UI_Graphic__get_rectTransform
                           ((UnityEngine_UI_Graphic_o *)pNVar1,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_RectTransform_o *)0x0)) {
      UVar6 = UnityEngine_RectTransform__get_rect(pUVar3,(MethodInfo *)0x0);
      pPVar4 = (__this->fields)._progress;
      if ((pPVar4 != (ProgressBar_o *)0x0) &&
         (pUVar3 = (UnityEngine_RectTransform_o *)
                   UnityEngine_Component__GetComponent<object>
                             ((UnityEngine_Component_o *)pPVar4,
                              Method_UnityEngine_Component_GetComponent<RectTransform>__),
         pUVar3 != (UnityEngine_RectTransform_o *)0x0)) {
        UVar7 = UnityEngine_RectTransform__get_rect(pUVar3,(MethodInfo *)0x0);
        pPVar4 = (__this->fields)._progress;
        if (pPVar4 != (ProgressBar_o *)0x0) {
          pUVar2 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)pPVar4,(MethodInfo *)0x0);
          UnityEngine_TransformExtensions__SetLocalPositionX
                    (pUVar2,UVar5.fields.x + UVar6.fields.m_Width * 0.5 + 0.0 + 43.0 +
                            UVar7.fields.m_Width * 0.5,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

