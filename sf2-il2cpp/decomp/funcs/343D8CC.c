// Nekki.SF2.GUI.Glyphs.ImageGlyph$$Awake @ RVA 0x343D8CC

void Nekki_SF2_GUI_Glyphs_ImageGlyph__Awake
               (Nekki_SF2_GUI_Glyphs_ImageGlyph_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *__this_00;
  UnityEngine_GameObject_o *pUVar1;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar2;
  UnityEngine_RectTransform_o *pUVar3;
  Nekki_SF2_GUI_ResolutionImage_o **ppNVar4;
  UnityEngine_RectTransform_o **ppUVar5;
  
  if ((DAT_045681f4 & 1) == 0) {
    FUN_01bab630(&Method_Util_OHBILOGJCLA<ResolutionImage>__);
    FUN_01bab630(&StringLiteral_6864);
    DAT_045681f4 = 1;
  }
  Nekki_SF2_GUI_Glyphs_Glyph__Awake((Nekki_SF2_GUI_Glyphs_Glyph_o *)__this,(MethodInfo *)0x0);
  __this_00 = (UnityEngine_Object_o *)
              UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Object_o *)0x0) {
    UnityEngine_Object__set_name(__this_00,StringLiteral_6864,(MethodInfo *)0x0);
    pUVar1 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pNVar2 = (Nekki_SF2_GUI_ResolutionImage_o *)
             Util__OHBILOGJCLA<object>(pUVar1,Method_Util_OHBILOGJCLA<ResolutionImage>__);
    ppNVar4 = &(__this->fields)._IANGGJCONIH_k__BackingField;
    *ppNVar4 = pNVar2;
    thunk_FUN_01c20e04(ppNVar4,pNVar2);
    pNVar2 = *ppNVar4;
    if (pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      (*(pNVar2->klass->vtable)._25_set_raycastTarget.methodPtr)
                (pNVar2,0,(pNVar2->klass->vtable)._25_set_raycastTarget.method);
      if (*ppNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
        pUVar3 = UnityEngine_UI_Graphic__get_rectTransform
                           ((UnityEngine_UI_Graphic_o *)*ppNVar4,(MethodInfo *)0x0);
        ppUVar5 = &(__this->fields).super._MPAMHJJKABE_k__BackingField;
        *ppUVar5 = pUVar3;
        thunk_FUN_01c20e04(ppUVar5,pUVar3);
        pUVar3 = *ppUVar5;
        if (DAT_0455fa77 == '\0') {
          FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
          DAT_0455fa77 = '\x01';
        }
        if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
          UnityEngine_Transform__set_localPosition
                    ((UnityEngine_Transform_o *)pUVar3,
                     (UnityEngine_Vector3_o)
                     (UnityEngine_Vector3_TypeInfo->static_fields->zeroVector).fields,
                     (MethodInfo *)0x0);
          pUVar3 = *ppUVar5;
          if (DAT_0455fa7f == '\0') {
            FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
            DAT_0455fa7f = '\x01';
          }
          if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
            UnityEngine_Transform__set_localScale
                      ((UnityEngine_Transform_o *)pUVar3,
                       (UnityEngine_Vector3_o)
                       (UnityEngine_Vector3_TypeInfo->static_fields->oneVector).fields,
                       (MethodInfo *)0x0);
            if (*ppUVar5 != (UnityEngine_RectTransform_o *)0x0) {
              UnityEngine_RectTransform__set_sizeDelta
                        (*ppUVar5,(UnityEngine_Vector2_o)0x4248000042480000,(MethodInfo *)0x0);
              pUVar1 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
              if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
                UnityEngine_GameObject__SetActive(pUVar1,false,(MethodInfo *)0x0);
                return;
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

