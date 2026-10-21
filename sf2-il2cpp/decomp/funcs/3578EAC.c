// Core.Network.ServerProvider$$get_UserID @ RVA 0x3578EAC

System_String_o * Core_Network_ServerProvider__get_UserID(MethodInfo *method)

{
  if ((DAT_04568c95 & 1) == 0) {
    FUN_01bab630(&Core_Network_ServerProvider_TypeInfo);
    DAT_04568c95 = 1;
  }
  return Core_Network_ServerProvider_TypeInfo->static_fields->_AKNFNLAEOHB_k__BackingField;
}

