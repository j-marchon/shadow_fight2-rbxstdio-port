// NDPMLPGANCI$$LLKODNOJFPJ @ RVA 0x344976C

void NDPMLPGANCI__LLKODNOJFPJ(NDPMLPGANCI_o *__this,bool AHCMAIOOIKM,MethodInfo *method)

{
  bool bVar1;
  NDPMLPGANCI_o *extraout_x0;
  bool_conflict OOGPLJBADCD;
  MethodInfo *in_x3;
  
  if (((__this->fields).BCCMIAOKPBI == false) && ((__this->fields).BNHCMDDLIPB == false)) {
    bVar1 = (__this->fields).JCPABCJKJMC != false;
  }
  else {
    bVar1 = true;
  }
  if ((__this->fields).MBMMKMMJODA == bVar1) {
    if ((bVar1 == false) || ((__this->fields).JDNPDPLDNAL == AHCMAIOOIKM)) {
      return;
    }
    (__this->fields).JDNPDPLDNAL = AHCMAIOOIKM;
    NDPMLPGANCI__APBBAFIMHHC(__this,true,true,in_x3);
    AHCMAIOOIKM = (__this->fields).JDNPDPLDNAL;
    OOGPLJBADCD = (__this->fields).MBMMKMMJODA;
    __this = extraout_x0;
  }
  else {
    (__this->fields).MBMMKMMJODA = bVar1;
    (__this->fields).JDNPDPLDNAL = AHCMAIOOIKM;
    if (bVar1 == false) {
      AHCMAIOOIKM = true;
      OOGPLJBADCD = false;
    }
    else {
      OOGPLJBADCD = true;
    }
  }
  NDPMLPGANCI__APBBAFIMHHC(__this,OOGPLJBADCD,AHCMAIOOIKM,in_x3);
  return;
}

