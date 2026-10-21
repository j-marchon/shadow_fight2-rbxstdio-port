// IEHDDOIHPNI$$NDNPGAKJLHM @ RVA 0x336DBAC

void IEHDDOIHPNI__NDNPGAKJLHM(MethodInfo *method)

{
  System_Action_o *CJNHFNHJHPE;
  
  if ((DAT_04567af8 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&Method_IEHDDOIHPNI_LPAEJFCBMMF__);
    FUN_01bab630(&IEHDDOIHPNI_TypeInfo);
    DAT_04567af8 = 1;
  }
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_Utils_GlobalTimer__remove_OnTick(CJNHFNHJHPE,(MethodInfo *)0x0);
  if ((IEHDDOIHPNI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  IEHDDOIHPNI_TypeInfo->static_fields->NMFCCFJDDNN = false;
  return;
}

