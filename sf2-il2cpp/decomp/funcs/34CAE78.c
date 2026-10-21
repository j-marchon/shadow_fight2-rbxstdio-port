// Nekki.SF2.GUI.BaseScrollItem$$.ctor @ RVA 0x34CAE78

void Nekki_SF2_GUI_BaseScrollItem___ctor(Nekki_SF2_GUI_BaseScrollItem_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_00;
  
  if ((DAT_04568667 & 1) == 0) {
    FUN_01bab630(&UnityEngine_UI_Button_ButtonClickedEvent_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    DAT_04568667 = 1;
  }
  (__this->fields)._COIPKAKHDFP_k__BackingField = string_TypeInfo->static_fields->Empty;
  thunk_FUN_01c20e04(&(__this->fields)._COIPKAKHDFP_k__BackingField);
  __this_00 = (UnityEngine_UI_Button_ButtonClickedEvent_o *)
              thunk_FUN_01bda818(UnityEngine_UI_Button_ButtonClickedEvent_TypeInfo);
  UnityEngine_UI_Button_ButtonClickedEvent___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields)._HCMPFAOMMHO_k__BackingField = __this_00;
  thunk_FUN_01c20e04(&(__this->fields)._HCMPFAOMMHO_k__BackingField,__this_00);
  (__this->fields).PEFNNFJCCNG = 1.0;
  (__this->fields).FHIIIPEBDLE = 1.0;
  UnityEngine_UI_Button___ctor((UnityEngine_UI_Button_o *)__this,(MethodInfo *)0x0);
  return;
}

