// LPGPNBGHDBD$$ELADHNOAPBC @ RVA 0x3229784

System_String_o * LPGPNBGHDBD__ELADHNOAPBC(int32_t ACCIHBHMFPN,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  long lVar1;
  
  if ((DAT_04566f8e & 1) == 0) {
    FUN_01bab630(&LPGPNBGHDBD_TypeInfo);
    DAT_04566f8e = 1;
    method = extraout_x1;
  }
  if (ACCIHBHMFPN == 3) {
    if ((LPGPNBGHDBD_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(LPGPNBGHDBD_TypeInfo,method);
    }
    lVar1 = 0x18;
  }
  else if (ACCIHBHMFPN == 2) {
    if ((LPGPNBGHDBD_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(LPGPNBGHDBD_TypeInfo,method);
    }
    lVar1 = 0x10;
  }
  else {
    if (ACCIHBHMFPN != 1) {
      return (System_String_o *)0x0;
    }
    if ((LPGPNBGHDBD_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(LPGPNBGHDBD_TypeInfo,method);
    }
    lVar1 = 8;
  }
  return *(System_String_o **)((long)&LPGPNBGHDBD_TypeInfo->static_fields->FPAFPJONEFP + lVar1);
}

