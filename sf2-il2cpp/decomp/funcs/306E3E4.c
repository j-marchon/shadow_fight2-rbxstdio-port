// GMGALNFPLPA.GPAPFODFLNH$$IIICOPBMALH @ RVA 0x306E3E4

bool GMGALNFPLPA_GPAPFODFLNH__IIICOPBMALH
               (GMGALNFPLPA_GPAPFODFLNH_o *__this,float CJNHFNHJHPE,float *HPACPFLKHPK,
               MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  if ((__this->fields).BLOGOHKEPHI == false) {
    return false;
  }
  fVar2 = (__this->fields).PEOMJHJICCM;
  fVar1 = (__this->fields).GKBCJOEFFCP;
  if (CJNHFNHJHPE <= fVar1) {
    if (fVar2 <= CJNHFNHJHPE) {
      return false;
    }
    fVar2 = fVar1 - fVar2;
  }
  else {
    fVar2 = fVar2 - fVar1;
  }
  *HPACPFLKHPK = fVar2 + CJNHFNHJHPE;
  return true;
}

