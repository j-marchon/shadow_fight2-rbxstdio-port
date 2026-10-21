// Core.Network.ServerProvider$$get_DumpPutURL @ RVA 0x357C8BC

System_String_o * Core_Network_ServerProvider__get_DumpPutURL(MethodInfo *method)

{
  if ((DAT_04568cb3 & 1) == 0) {
    FUN_01bab630(&Core_Network_ServerProvider_TypeInfo);
    DAT_04568cb3 = 1;
  }
  return Core_Network_ServerProvider_TypeInfo->static_fields->_DHIMEKHHLLB_k__BackingField;
}

