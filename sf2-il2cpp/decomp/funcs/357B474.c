// Core.Network.ServerProvider$$get_PutURL @ RVA 0x357B474

System_String_o * Core_Network_ServerProvider__get_PutURL(MethodInfo *method)

{
  if ((DAT_04568caa & 1) == 0) {
    FUN_01bab630(&Core_Network_ServerProvider_TypeInfo);
    DAT_04568caa = 1;
  }
  return Core_Network_ServerProvider_TypeInfo->static_fields->_JJPIPNDJDDC_k__BackingField;
}

