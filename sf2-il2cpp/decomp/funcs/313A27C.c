// NJNCPNBIPCD$$OGJOKMNNBPK @ RVA 0x313A27C

void NJNCPNBIPCD__OGJOKMNNBPK(NJNCPNBIPCD_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  
  if ((DAT_0456671e & 1) == 0) {
    FUN_01bab630(&NJNCPNBIPCD_TypeInfo);
    DAT_0456671e = 1;
    method = extraout_x1;
  }
  if ((NJNCPNBIPCD_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NJNCPNBIPCD_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565ff1 == '\0') {
    FUN_01bab630(&NJNCPNBIPCD_TypeInfo);
    DAT_04565ff1 = '\x01';
    method = extraout_x1_01;
  }
  if ((NJNCPNBIPCD_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NJNCPNBIPCD_TypeInfo,method);
  }
  if (NJNCPNBIPCD_TypeInfo->static_fields->_EGONDPGBNLJ_k__BackingField != false) {
    UnityEngine_Time__set_timeScale((__this->fields).PACHINKIODC,(MethodInfo *)0x0);
    return;
  }
  return;
}

