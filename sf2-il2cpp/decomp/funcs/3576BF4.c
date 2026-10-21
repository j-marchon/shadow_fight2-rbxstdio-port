// Core.Network.ServerProvider$$get_LoginIntervalSeconds @ RVA 0x3576BF4

int32_t Core_Network_ServerProvider__get_LoginIntervalSeconds(MethodInfo *method)

{
  if ((DAT_04568c8d & 1) == 0) {
    FUN_01bab630(&Core_Network_ServerProvider_TypeInfo);
    DAT_04568c8d = 1;
  }
  return Core_Network_ServerProvider_TypeInfo->static_fields->_EFPEEJBPIDE_k__BackingField;
}

