// NJNCPNBIPCD$$LLCONNGHGKD @ RVA 0x31383E8

void NJNCPNBIPCD__LLCONNGHGKD(NJNCPNBIPCD_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  
  if ((DAT_04566711 & 1) == 0) {
    FUN_01bab630(&NJNCPNBIPCD_TypeInfo);
    DAT_04566711 = 1;
    method = extraout_x1;
  }
  if ((NJNCPNBIPCD_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method = extraout_x1_00;
  }
  if (DAT_04565ff1 == '\0') {
    FUN_01bab630(&NJNCPNBIPCD_TypeInfo);
    DAT_04565ff1 = '\x01';
    method = extraout_x1_01;
  }
  if ((NJNCPNBIPCD_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method = extraout_x1_02;
  }
  if (NJNCPNBIPCD_TypeInfo->static_fields->_EGONDPGBNLJ_k__BackingField != false) {
    NJNCPNBIPCD__JFHKDNJOIGN((NJNCPNBIPCD_o *)NJNCPNBIPCD_TypeInfo,method);
    return;
  }
  return;
}

