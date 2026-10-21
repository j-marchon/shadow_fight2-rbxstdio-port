// Core.Network.ServerProvider$$get_Instance @ RVA 0x3579728

Core_Network_ServerProvider_o * Core_Network_ServerProvider__get_Instance(MethodInfo *method)

{
  if ((DAT_04568c9c & 1) == 0) {
    method = (MethodInfo *)FUN_01bab630(&Core_Network_ServerProvider_TypeInfo);
    DAT_04568c9c = 1;
  }
  Core_Network_ServerProvider__Create(method);
  return Core_Network_ServerProvider_TypeInfo->static_fields->KNOHKIKFEBL;
}

