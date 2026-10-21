// KJFHBENFBBO$$OBECCOPBADO @ RVA 0x3557C78

bool KJFHBENFBBO__OBECCOPBADO(KJFHBENFBBO_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568b7a & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_5690);
    DAT_04568b7a = 1;
    method = extraout_x1;
  }
  if (((((__this->fields).COMHMGPAIHH == 0) || ((__this->fields).DEIHDDMJOFG == 0)) ||
      ((__this->fields).BLONJALILMO == 0)) || ((__this->fields).MOALNGPLPIK == 0)) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo,method);
    }
    UnityEngine_Debug__Log(StringLiteral_5690,(MethodInfo *)0x0);
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

