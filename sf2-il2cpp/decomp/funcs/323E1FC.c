// Nekki.SF2.GUI.SFScrollRect$$get_verticalNormalizedPosition @ RVA 0x323E1FC

/* WARNING: Type propagation algorithm not settling */

float Nekki_SF2_GUI_SFScrollRect__get_verticalNormalizedPosition
                (Nekki_SF2_GUI_SFScrollRect_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  Nekki_SF2_GUI_SFScrollRect__PGMHINIGNID(__this,method);
  fVar3 = (__this->fields).GOOOAGHGBPJ.fields.m_Extents.fields.y;
  fVar1 = (__this->fields).JOKCKGCCNNP.fields.m_Extents.fields.y;
  fVar2 = (__this->fields).JOKCKGCCNNP.fields.m_Center.fields.y - fVar1;
  fVar4 = (__this->fields).GOOOAGHGBPJ.fields.m_Center.fields.y - fVar3;
  if (fVar1 + fVar1 < fVar3 + fVar3) {
    return (fVar2 - fVar4) / ((fVar3 + fVar3) - (fVar1 + fVar1));
  }
  fVar1 = 1.0;
  if (fVar2 <= fVar4) {
    fVar1 = 0.0;
  }
  return fVar1;
}

