// Core.Network.ServerProvider$$Init @ RVA 0x35798A4

void Core_Network_ServerProvider__Init
               (System_String_o *PMACBPAMPJA,System_TimeSpan_o LLGMFHBMLKB,MethodInfo *method)

{
  Core_Network_ServerProvider_StaticFields *pCVar1;
  
  if ((DAT_04568c9e & 1) == 0) {
    FUN_01bab630(&ServerProviderBase_BNPEHNICKPJ_TypeInfo);
    FUN_01bab630(&Core_Network_ServerProvider_TypeInfo);
    DAT_04568c9e = 1;
  }
  pCVar1 = Core_Network_ServerProvider_TypeInfo->static_fields;
  if (pCVar1->KDJHJKMAKKH != false) {
    return;
  }
  (pCVar1->KBKPDCHPDAD).fields._ticks = (int64_t)LLGMFHBMLKB.fields._ticks;
  pCVar1->KDJHJKMAKKH = true;
  if ((ServerProviderBase_BNPEHNICKPJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04568d24 == '\0') {
    FUN_01bab630(&ServerProviderBase_BNPEHNICKPJ_TypeInfo);
    DAT_04568d24 = '\x01';
  }
  if ((ServerProviderBase_BNPEHNICKPJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  ServerProviderBase_BNPEHNICKPJ_TypeInfo->static_fields->NCGMJGHPHKE = PMACBPAMPJA;
  thunk_FUN_01c20e04(ServerProviderBase_BNPEHNICKPJ_TypeInfo->static_fields,PMACBPAMPJA);
  return;
}

