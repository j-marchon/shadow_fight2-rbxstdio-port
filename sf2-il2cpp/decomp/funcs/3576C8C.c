// Core.Network.ServerProvider$$set_DumpSendInterval @ RVA 0x3576C8C

void Core_Network_ServerProvider__set_DumpSendInterval(float CJNHFNHJHPE,MethodInfo *method)

{
  if ((DAT_04568c8f & 1) == 0) {
    FUN_01bab630(&Core_Network_ServerProvider_TypeInfo);
    DAT_04568c8f = 1;
  }
  Core_Network_ServerProvider_TypeInfo->static_fields->_CMEFOAOOLIK_k__BackingField = CJNHFNHJHPE;
  return;
}

