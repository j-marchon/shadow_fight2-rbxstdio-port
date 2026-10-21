// Nekki.SF2.GUI.MultiImageButton$$OFMHHIPAGPH @ RVA 0x3251284

/* WARNING: Type propagation algorithm not settling */

UnityEngine_Color_o
Nekki_SF2_GUI_MultiImageButton__OFMHHIPAGPH
          (Nekki_SF2_GUI_MultiImageButton_o *__this,int32_t ICJLHMDFMKG,MethodInfo *method)

{
  UnityEngine_Color_Fields UVar1;
  
                    /* try { // try from 03351294 to 0345135f has its CatchHandler @ 03351294
                       catch() { ... } // from try @ 03351294 with catch @ 03351294
                       catch() { ... } // from try @ 0335139c with catch @ 03351294
                       catch() { ... } // from try @ 033513f8 with catch @ 03351294
                       catch() { ... } // from try @ 03351420 with catch @ 03351294
                       catch() { ... } // from try @ 03351460 with catch @ 03351294 */
  if ((DAT_04567134 & 1) == 0) {
    FUN_01bab630(&UnityEngine_UI_ColorBlock_TypeInfo);
    DAT_04567134 = 1;
  }
  UVar1 = (UnityEngine_Color_Fields)NEON_fmov(0x3f800000,4);
  switch(ICJLHMDFMKG) {
  case 0:
    UVar1 = (__this->fields).super.super.m_Colors.fields.m_NormalColor.fields;
    break;
  case 1:
    UVar1 = (__this->fields).super.super.m_Colors.fields.m_HighlightedColor.fields;
    break;
  case 2:
    UVar1 = (__this->fields).super.super.m_Colors.fields.m_PressedColor.fields;
    break;
  default:
    goto switchD_033512dc_caseD_3;
  case 4:
    UVar1 = (__this->fields).super.super.m_Colors.fields.m_DisabledColor.fields;
  }
  if ((UnityEngine_UI_ColorBlock_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
switchD_033512dc_caseD_3:
  return (UnityEngine_Color_o)UVar1;
}

