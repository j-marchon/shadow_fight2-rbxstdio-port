// Nekki.SF2.GUI.SimpleScroll$$LILEFCCDGNB @ RVA 0x302D8B4

void Nekki_SF2_GUI_SimpleScroll__LILEFCCDGNB
               (Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  
  Nekki_SF2_GUI_SimpleScroll__CCPABLFBFFA(__this,method);
  __this_00 = (__this->fields).super.m_Content;
  if (DAT_0455fa75 == '\0') {
    FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
    DAT_0455fa75 = '\x01';
  }
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    UnityEngine_RectTransform__set_anchoredPosition
              (__this_00,
               (UnityEngine_Vector2_o)
               (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields,(MethodInfo *)0x0);
    if (DAT_0455fa75 == '\0') {
      FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
      DAT_0455fa75 = '\x01';
    }
    (__this->fields).super.m_ContentStartPosition.fields =
         (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields;
    UnityEngine_UI_ScrollRect__UpdatePrevData
              ((UnityEngine_UI_ScrollRect_o *)__this,(MethodInfo *)0x0);
    *(undefined1 *)((long)&(__this->fields).NMIHOKCDLMP + 3) = 0;
    if (DAT_0455fa75 == '\0') {
      FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
      DAT_0455fa75 = '\x01';
    }
    (__this->fields).IFDBJFNPOEK.fields =
         (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields;
    UnityEngine_UI_ScrollRect__UpdateBounds((UnityEngine_UI_ScrollRect_o *)__this,(MethodInfo *)0x0)
    ;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

