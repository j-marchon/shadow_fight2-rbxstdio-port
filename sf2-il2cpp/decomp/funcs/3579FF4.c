// Core.Network.ServerProvider$$set_UserID @ RVA 0x3579FF4

void Core_Network_ServerProvider__set_UserID(System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  System_String_o **ppSVar1;
  
  if ((DAT_04568ca1 & 1) == 0) {
    FUN_01bab630(&Core_Network_ServerProvider_TypeInfo);
    DAT_04568ca1 = 1;
  }
  ppSVar1 = &Core_Network_ServerProvider_TypeInfo->static_fields->_AKNFNLAEOHB_k__BackingField;
  *ppSVar1 = CJNHFNHJHPE;
  thunk_FUN_01c20e04(ppSVar1,CJNHFNHJHPE);
  return;
}

