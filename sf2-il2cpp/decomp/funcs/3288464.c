// Nekki.SF2.GUI.Dialogs.LotteryDialog$$GCOBGDGKBFN @ RVA 0x3288464

void Nekki_SF2_GUI_Dialogs_LotteryDialog__GCOBGDGKBFN
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,System_String_o *IMJHEANBDDA,
               System_String_o *DFEGBKMFBMM,System_String_o *MEJEDBBGECM,int32_t HGDGDPODNLL,
               System_Int32_array *IMMNELPBGIF,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *pNVar1;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_RectOffset_o *pUVar2;
  UnityEngine_UI_HorizontalLayoutGroup_o *pUVar3;
  
  pNVar1 = (__this->fields).ScrollBackLeft;
  if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar1,IMJHEANBDDA,(MethodInfo *)0x0);
    pNVar1 = (__this->fields).ScrollBackRight;
    if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar1,DFEGBKMFBMM,(MethodInfo *)0x0);
      pNVar1 = (__this->fields).ScrollSelector;
      if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
        Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar1,MEJEDBBGECM,(MethodInfo *)0x0);
        pNVar1 = (__this->fields).ScrollSelector;
        if ((pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
           (__this_00 = UnityEngine_UI_Graphic__get_rectTransform
                                  ((UnityEngine_UI_Graphic_o *)pNVar1,(MethodInfo *)0x0),
           __this_00 != (UnityEngine_RectTransform_o *)0x0)) {
          UnityEngine_RectTransform__set_anchoredPosition
                    (__this_00,(UnityEngine_Vector2_o)((ulong)(uint)(float)HGDGDPODNLL << 0x20),
                     (MethodInfo *)0x0);
          pUVar3 = (__this->fields).ScrollBack;
          if ((pUVar3 != (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) &&
             (IMMNELPBGIF != (System_Int32_array *)0x0)) {
            if ((int)IMMNELPBGIF->max_length == 0) {
LAB_03388590:
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            pUVar2 = (pUVar3->fields).super.super.m_Padding;
            if (pUVar2 != (UnityEngine_RectOffset_o *)0x0) {
              UnityEngine_RectOffset__set_left(pUVar2,IMMNELPBGIF->m_Items[0],(MethodInfo *)0x0);
              pUVar3 = (__this->fields).ScrollBack;
              if (pUVar3 != (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) {
                if ((uint)IMMNELPBGIF->max_length < 2) goto LAB_03388590;
                pUVar2 = (pUVar3->fields).super.super.m_Padding;
                if (pUVar2 != (UnityEngine_RectOffset_o *)0x0) {
                  UnityEngine_RectOffset__set_right
                            (pUVar2,IMMNELPBGIF->m_Items[1],(MethodInfo *)0x0);
                  pUVar3 = (__this->fields).ScrollBack;
                  if (pUVar3 != (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) {
                    if ((uint)IMMNELPBGIF->max_length < 3) goto LAB_03388590;
                    pUVar2 = (pUVar3->fields).super.super.m_Padding;
                    if (pUVar2 != (UnityEngine_RectOffset_o *)0x0) {
                      UnityEngine_RectOffset__set_top
                                (pUVar2,IMMNELPBGIF->m_Items[2],(MethodInfo *)0x0);
                      pUVar3 = (__this->fields).ScrollBack;
                      if (pUVar3 != (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) {
                        if ((uint)IMMNELPBGIF->max_length < 4) goto LAB_03388590;
                        pUVar2 = (pUVar3->fields).super.super.m_Padding;
                        if (pUVar2 != (UnityEngine_RectOffset_o *)0x0) {
                          UnityEngine_RectOffset__set_bottom
                                    (pUVar2,IMMNELPBGIF->m_Items[3],(MethodInfo *)0x0);
                          return;
                        }
                      }
                    }
                  }
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

