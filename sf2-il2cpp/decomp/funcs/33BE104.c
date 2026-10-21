// CUDLR.Server$$get_IsInited @ RVA 0x33BE104

bool CUDLR_Server__get_IsInited(MethodInfo *method)

{
  if ((DAT_04567db7 & 1) == 0) {
    FUN_01bab630(&CUDLR_Server_TypeInfo);
    DAT_04567db7 = 1;
  }
  return CUDLR_Server_TypeInfo->static_fields->CBDMFFMCJBK != (OJPIGIGLPNC_o *)0x0;
}

