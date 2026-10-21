// Core.Network.ServerProvider$$get_GetURL @ RVA 0x357B4BC

System_String_o * Core_Network_ServerProvider__get_GetURL(MethodInfo *method)

{
  if ((DAT_04568cab & 1) == 0) {
    FUN_01bab630(&Core_Network_ServerProvider_TypeInfo);
    DAT_04568cab = 1;
  }
  return Core_Network_ServerProvider_TypeInfo->static_fields->_APNMIFJBPAP_k__BackingField;
}

