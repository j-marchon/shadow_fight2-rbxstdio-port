// BNAIBAODKAK$$AAAMBLLDPHJ @ RVA 0x35A8F20

bool BNAIBAODKAK__AAAMBLLDPHJ(BNAIBAODKAK_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568e2e & 1) == 0) {
    FUN_01bab630(&DKEOKAONIIB_TypeInfo);
    DAT_04568e2e = 1;
    method = extraout_x1;
  }
  if ((DKEOKAONIIB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(DKEOKAONIIB_TypeInfo,method);
  }
  if ((DKEOKAONIIB_TypeInfo->static_fields->LDBHFHDLBND == false) &&
     ((__this->fields).MIIEAMDLCJA != (System_String_o *)0x0)) {
    bVar1 = (__this->fields).JFAEKJELFFN != false;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}

