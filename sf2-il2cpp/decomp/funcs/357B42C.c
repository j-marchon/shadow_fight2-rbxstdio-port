// Core.Network.ServerProvider$$get_TimeServerURL @ RVA 0x357B42C

System_String_o * Core_Network_ServerProvider__get_TimeServerURL(MethodInfo *method)

{
  if ((DAT_04568ca9 & 1) == 0) {
    FUN_01bab630(&Core_Network_ServerProvider_TypeInfo);
    DAT_04568ca9 = 1;
  }
  return Core_Network_ServerProvider_TypeInfo->static_fields->_HNFPKIABMIJ_k__BackingField;
}

