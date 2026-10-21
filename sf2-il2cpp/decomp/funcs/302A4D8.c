// Nekki.SF2.GUI.SimpleScroll$$DJPCFEGDNJN @ RVA 0x302A4D8

UnityEngine_Vector2_o
Nekki_SF2_GUI_SimpleScroll__DJPCFEGDNJN(Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  MethodInfo *method_00;
  UnityEngine_Vector2_o UVar2;
  UnityEngine_Vector2_Fields UVar3;
  UnityEngine_Rect_o UVar4;
  
  if (DAT_0455fa75 == '\0') {
    FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
    DAT_0455fa75 = '\x01';
  }
  pUVar1 = (__this->fields).super.m_Viewport;
  if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
    UVar3 = (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields;
    UVar4 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
    pUVar1 = (__this->fields).super.m_Viewport;
    if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
      UVar2 = UnityEngine_RectTransform__get_pivot(pUVar1,(MethodInfo *)0x0);
      UVar2.fields.y = (float)((ulong)UVar2.fields >> 0x20);
      UVar3 = (UnityEngine_Vector2_Fields)
              Nekki_SF2_GUI_SimpleScroll__OGKNNMEDGGO
                        (__this,(UnityEngine_Vector2_o)UVar3,
                         (UnityEngine_Vector2_o)UVar4.fields._8_8_,UVar2,method_00);
      return (UnityEngine_Vector2_o)UVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

