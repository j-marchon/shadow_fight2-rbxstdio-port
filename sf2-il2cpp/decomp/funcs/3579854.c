// Core.Network.ServerProvider$$set_GetURL @ RVA 0x3579854

void Core_Network_ServerProvider__set_GetURL(System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  System_String_o **ppSVar1;
  
  if ((DAT_04568c9d & 1) == 0) {
    FUN_01bab630(&Core_Network_ServerProvider_TypeInfo);
    DAT_04568c9d = 1;
  }
  ppSVar1 = &Core_Network_ServerProvider_TypeInfo->static_fields->_APNMIFJBPAP_k__BackingField;
  *ppSVar1 = CJNHFNHJHPE;
  thunk_FUN_01c20e04(ppSVar1,CJNHFNHJHPE);
  return;
}

