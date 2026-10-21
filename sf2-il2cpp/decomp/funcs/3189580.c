// BEPJMNAHCAD$$OPDIEGGCJAL @ RVA 0x3189580

void BEPJMNAHCAD__OPDIEGGCJAL(BEPJMNAHCAD_o *__this,MethodInfo *method)

{
  int iVar1;
  MethodInfo *extraout_x1;
  float fVar2;
  
  if ((__this->fields).MHNMALPDJFL != false) {
    fVar2 = (__this->fields).NLIBJEPHLNK;
    if (fVar2 <= 0.0) {
      (__this->fields).MHNMALPDJFL = false;
      BEPJMNAHCAD__GDNLJLFIHFE(__this,method);
      fVar2 = (__this->fields).NLIBJEPHLNK;
      method = extraout_x1;
    }
    (__this->fields).NLIBJEPHLNK = fVar2 + -1.0;
  }
  if ((__this->fields).ANNBPCDGAHJ != false) {
    fVar2 = (__this->fields).CDCDGKDNDAL;
    if (fVar2 <= 0.0) {
      (__this->fields).ANNBPCDGAHJ = false;
      BEPJMNAHCAD__MOOLAJIPEGE(__this,method);
      fVar2 = (__this->fields).CDCDGKDNDAL;
    }
    (__this->fields).CDCDGKDNDAL = fVar2 + -1.0;
  }
  if ((__this->fields).DLEANEAEAFF != false) {
    iVar1 = (__this->fields).OFPNGACGGLK;
    if (iVar1 < 1) {
      (__this->fields).DLEANEAEAFF = false;
    }
    (__this->fields).OFPNGACGGLK = iVar1 + -1;
  }
  return;
}

