// Core.Network.ServerProvider$$get_ConfigURL @ RVA 0x357A044

System_String_o * Core_Network_ServerProvider__get_ConfigURL(MethodInfo *method)

{
  if ((DAT_04568ca2 & 1) == 0) {
    FUN_01bab630(&Core_Network_ServerProvider_TypeInfo);
    DAT_04568ca2 = 1;
  }
  return Core_Network_ServerProvider_TypeInfo->static_fields->_PICLJDNEBIN_k__BackingField;
}

