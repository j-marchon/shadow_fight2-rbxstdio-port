// NJNCPNBIPCD$$PJNBPBDDCEH @ RVA 0x313A320

bool NJNCPNBIPCD__PJNBPBDDCEH(MethodInfo *method)

{
  if ((DAT_04566720 & 1) == 0) {
    FUN_01bab630(&NJNCPNBIPCD_TypeInfo);
    DAT_04566720 = 1;
  }
  if ((NJNCPNBIPCD_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return NJNCPNBIPCD_TypeInfo->static_fields->_EGONDPGBNLJ_k__BackingField;
}

