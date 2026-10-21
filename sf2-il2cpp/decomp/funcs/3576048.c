// Core.Network.ServerProvider$$get_VerifyURL @ RVA 0x3576048

System_String_o * Core_Network_ServerProvider__get_VerifyURL(MethodInfo *method)

{
  if ((DAT_04568c88 & 1) == 0) {
    FUN_01bab630(&Core_Network_ServerProvider_TypeInfo);
    DAT_04568c88 = 1;
  }
  return Core_Network_ServerProvider_TypeInfo->static_fields->_GELOLLPJMDE_k__BackingField;
}

