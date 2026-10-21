// Nekki.SF2.GUI.SFScrollRect$$get_normalizedPosition @ RVA 0x323E1CC

UnityEngine_Vector2_o
Nekki_SF2_GUI_SFScrollRect__get_normalizedPosition
          (Nekki_SF2_GUI_SFScrollRect_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  float fVar1;
  UnityEngine_Vector2_o UVar2;
  
  UVar2.fields.x = Nekki_SF2_GUI_SFScrollRect__get_horizontalNormalizedPosition(__this,method);
  fVar1 = Nekki_SF2_GUI_SFScrollRect__get_verticalNormalizedPosition(__this,method_00);
  UVar2.fields.y = fVar1;
  return (UnityEngine_Vector2_o)UVar2.fields;
}

