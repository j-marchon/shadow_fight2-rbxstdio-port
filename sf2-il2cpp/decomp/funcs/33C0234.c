// CUDLR.Server$$get_Instance @ RVA 0x33C0234

OJPIGIGLPNC_o * CUDLR_Server__get_Instance(MethodInfo *method)

{
  if ((DAT_04567dc7 & 1) == 0) {
    method = (MethodInfo *)FUN_01bab630(&CUDLR_Server_TypeInfo);
    DAT_04567dc7 = 1;
  }
  CUDLR_Server__Init(method);
  return CUDLR_Server_TypeInfo->static_fields->CBDMFFMCJBK;
}

