// Core.Network.ServerProvider$$Reset @ RVA 0x3578EF4

void Core_Network_ServerProvider__Reset(MethodInfo *method)

{
  if (DAT_04566746 == '\0') {
    FUN_01bab630(&Core_Network_ServerProvider_TypeInfo);
    DAT_04566746 = '\x01';
  }
  Core_Network_ServerProvider_TypeInfo->static_fields->_EFPEEJBPIDE_k__BackingField = 0;
  return;
}

