// Core.Network.ServerProvider$$get_DumpGetURL @ RVA 0x3575E10

System_String_o * Core_Network_ServerProvider__get_DumpGetURL(MethodInfo *method)

{
  if ((DAT_04568c84 & 1) == 0) {
    FUN_01bab630(&Core_Network_ServerProvider_TypeInfo);
    DAT_04568c84 = 1;
  }
  return Core_Network_ServerProvider_TypeInfo->static_fields->_MAOLGMALNPJ_k__BackingField;
}

