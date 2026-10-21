// FJNIPMODEPO$$HBFCADLMGIN @ RVA 0x30351F8

void FJNIPMODEPO__HBFCADLMGIN(FJNIPMODEPO_o *__this,System_String_o *MPMJDINCJNH,MethodInfo *method)

{
  if ((DAT_04565d3a & 1) == 0) {
    FUN_01bab630(&FJNIPMODEPO_AIMMBNHMBFL_TypeInfo);
    DAT_04565d3a = 1;
  }
  if ((__this->fields).ECCPBJGMNPE != false) {
    Firebase_Crashlytics_Crashlytics__SetUserId(MPMJDINCJNH,(MethodInfo *)0x0);
    return;
  }
  if ((FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->static_fields->IBNPINKJBPI = MPMJDINCJNH;
  thunk_FUN_01c20e04(FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->static_fields,MPMJDINCJNH);
  return;
}

