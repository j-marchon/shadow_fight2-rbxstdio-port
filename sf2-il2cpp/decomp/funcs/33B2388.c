// BOGDEGPCIJI$$IAIOGBPAABH @ RVA 0x33B2388

void BOGDEGPCIJI__IAIOGBPAABH(BOGDEGPCIJI_o *__this,float LIKMOBLLLBP,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  float fVar2;
  UnityEngine_Vector2_Fields UVar3;
  
  fVar2 = (__this->fields)._DNEIPDBFPIA_k__BackingField.fields.y;
  if (LIKMOBLLLBP < fVar2) {
    UVar3 = (__this->fields)._NMFGNNFJOIE_k__BackingField.fields;
    fVar2 = LIKMOBLLLBP / fVar2;
    UVar1.y = UVar3.y * fVar2;
    UVar1.x = UVar3.x * fVar2;
    (__this->fields)._NMFGNNFJOIE_k__BackingField.fields = UVar1;
  }
  return;
}

