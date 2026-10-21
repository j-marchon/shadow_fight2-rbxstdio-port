// Nekki.SF2.GUI.Common.TwoAxisControlHandler$$OnEnable @ RVA 0x33B0F7C

void Nekki_SF2_GUI_Common_TwoAxisControlHandler__OnEnable
               (Nekki_SF2_GUI_Common_TwoAxisControlHandler_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  UnityEngine_Vector2_Fields UVar1;
  
  if (DAT_0455fa75 == '\0') {
    FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
    DAT_0455fa75 = '\x01';
    method = extraout_x1;
  }
  UVar1 = (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields;
  (__this->fields).FPIJAPOMEHL = false;
  (__this->fields).EMIDKCNCPLC = false;
  (__this->fields).MHEMJOAINGI.fields = UVar1;
  Nekki_SF2_GUI_Common_TwoAxisControlHandler__FIAHBLBGOEP(__this,method);
  return;
}

