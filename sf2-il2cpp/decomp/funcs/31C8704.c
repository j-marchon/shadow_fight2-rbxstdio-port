// CNLBMDGLFCJ$$LLCONNGHGKD @ RVA 0x31C8704

void CNLBMDGLFCJ__LLCONNGHGKD(CNLBMDGLFCJ_o *__this,MethodInfo *method)

{
  float fVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  double dVar5;
  
  if ((__this->fields)._EDHPAKAJEPA_k__BackingField != false) {
    fVar4 = (__this->fields).HLKLNOFGKLH;
    fVar1 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar4 = fVar4 + fVar1;
    (__this->fields).HLKLNOFGKLH = fVar4;
    if (0.016666668 <= fVar4) {
      dVar5 = (__this->fields).MNONGNEOHNO;
      fVar1 = (__this->fields).LLEINPKAANH + fVar4 * (__this->fields).FHAPLEDFDHM;
      (__this->fields).LLEINPKAANH = fVar1;
      fVar1 = expf(fVar1);
      dVar2 = (__this->fields)._BOHDHKPNOCA_k__BackingField;
      dVar3 = (__this->fields)._JPNBHEPPPNP_k__BackingField;
      dVar5 = dVar5 + (double)fVar1;
      (__this->fields).MNONGNEOHNO = dVar5;
      if (dVar2 <= dVar3) {
        (__this->fields)._JPNBHEPPPNP_k__BackingField = dVar3 - dVar5;
        if (dVar2 < dVar3 - dVar5) {
          return;
        }
      }
      else {
        (__this->fields)._JPNBHEPPPNP_k__BackingField = dVar3 + dVar5;
        if (dVar3 + dVar5 < dVar2) {
          return;
        }
      }
      (__this->fields).HLKLNOFGKLH = 0.0;
      (__this->fields)._EDHPAKAJEPA_k__BackingField = false;
      (__this->fields)._JPNBHEPPPNP_k__BackingField = dVar2;
    }
  }
  return;
}

