// LHKALFIIJKB$$PANAPLBCOCH @ RVA 0x3500CD0

void LHKALFIIJKB__PANAPLBCOCH(bool CJNHFNHJHPE,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04568855 & 1) == 0) {
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    DAT_04568855 = 1;
    method = extraout_x1;
  }
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(LHKALFIIJKB_TypeInfo,method);
  }
  LHKALFIIJKB_TypeInfo->static_fields->_IKKBHKLDJLD_k__BackingField = CJNHFNHJHPE;
  return;
}

