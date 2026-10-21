// MBECFJKMDCF$$.cctor @ RVA 0x344AEA0

void MBECFJKMDCF___cctor(MethodInfo *method)

{
  System_DateTime_o SVar1;
  
  if ((DAT_04568270 & 1) == 0) {
    FUN_01bab630(&System_DateTime_TypeInfo);
    FUN_01bab630(&MBECFJKMDCF_TypeInfo);
    DAT_04568270 = 1;
  }
  if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  SVar1 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
  (MBECFJKMDCF_TypeInfo->static_fields->JEJAHBDPAFO).fields._dateData =
       (uint64_t)SVar1.fields._dateData;
  return;
}

