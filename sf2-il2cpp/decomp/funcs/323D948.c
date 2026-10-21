// Nekki.SF2.GUI.SFScrollRect$$StopMovement @ RVA 0x323D948

void Nekki_SF2_GUI_SFScrollRect__StopMovement
               (Nekki_SF2_GUI_SFScrollRect_o *__this,MethodInfo *method)

{
  if (DAT_0455fa75 == '\0') {
    FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
    DAT_0455fa75 = '\x01';
  }
  (__this->fields).CDHNBOKGCCN.fields =
       (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields;
  return;
}

