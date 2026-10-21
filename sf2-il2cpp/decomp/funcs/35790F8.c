// Core.Network.ServerProvider$$set_LoginIntervalSeconds @ RVA 0x35790F8

void Core_Network_ServerProvider__set_LoginIntervalSeconds(int32_t CJNHFNHJHPE,MethodInfo *method)

{
  if ((DAT_04568c97 & 1) == 0) {
    FUN_01bab630(&Core_Network_ServerProvider_TypeInfo);
    DAT_04568c97 = 1;
  }
  Core_Network_ServerProvider_TypeInfo->static_fields->_EFPEEJBPIDE_k__BackingField = CJNHFNHJHPE;
  return;
}

