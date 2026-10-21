// Core.Network.ServerProvider$$get_DumpSendInterval @ RVA 0x35762B0

float Core_Network_ServerProvider__get_DumpSendInterval(MethodInfo *method)

{
  if ((DAT_04568c8a & 1) == 0) {
    FUN_01bab630(&Core_Network_ServerProvider_TypeInfo);
    DAT_04568c8a = 1;
  }
  return Core_Network_ServerProvider_TypeInfo->static_fields->_CMEFOAOOLIK_k__BackingField;
}

