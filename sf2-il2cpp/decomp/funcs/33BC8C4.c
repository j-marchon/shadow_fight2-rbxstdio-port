// KHFOHGKPBFN$$.ctor @ RVA 0x33BC8C4

void KHFOHGKPBFN___ctor(KHFOHGKPBFN_o *__this,OCKCFHKADLN_o *FIOLDFEBONA,
                       System_String_o *HHNBKECFFPJ,MethodInfo *method)

{
  OCKCFHKADLN_o **ppOVar1;
  System_String_o **ppSVar2;
  TapjoyUnity_TJPlacement_OnRequestSuccessHandler_o *value;
  TapjoyUnity_TJPlacement_OnRequestFailureHandler_o *value_00;
  TapjoyUnity_TJPlacement_OnContentShowHandler_o *value_01;
  TapjoyUnity_TJPlacement_OnContentDismissHandler_o *value_02;
  
  if ((DAT_04567db0 & 1) == 0) {
    FUN_01bab630(&Method_KHFOHGKPBFN_EAGPILFCOGF__);
    FUN_01bab630(&Method_KHFOHGKPBFN_KAMECPNAAIA__);
    FUN_01bab630(&Method_KHFOHGKPBFN_NEPFHCEJIOI__);
    FUN_01bab630(&Method_KHFOHGKPBFN_PIPGLBKDGCB__);
    FUN_01bab630(&TapjoyUnity_TJPlacement_OnContentDismissHandler_TypeInfo);
    FUN_01bab630(&TapjoyUnity_TJPlacement_OnContentShowHandler_TypeInfo);
    FUN_01bab630(&TapjoyUnity_TJPlacement_OnRequestFailureHandler_TypeInfo);
    FUN_01bab630(&TapjoyUnity_TJPlacement_OnRequestSuccessHandler_TypeInfo);
    FUN_01bab630(&TapjoyUnity_TJPlacement_TypeInfo);
    DAT_04567db0 = 1;
  }
  FCMAKNBEJDA___ctor((FCMAKNBEJDA_o *)__this,(MethodInfo *)0x0);
  ppOVar1 = &(__this->fields).BDFFBHLCFOP;
  *ppOVar1 = FIOLDFEBONA;
  thunk_FUN_01c20e04(ppOVar1,FIOLDFEBONA);
  ppSVar2 = &(__this->fields).super._DGPEEKHPKHO_k__BackingField;
  *ppSVar2 = HHNBKECFFPJ;
  thunk_FUN_01c20e04(ppSVar2,HHNBKECFFPJ);
  value = (TapjoyUnity_TJPlacement_OnRequestSuccessHandler_o *)
          thunk_FUN_01bda818(TapjoyUnity_TJPlacement_OnRequestSuccessHandler_TypeInfo);
  TapjoyUnity_TJPlacement_OnRequestSuccessHandler___ctor();
  if ((TapjoyUnity_TJPlacement_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  TapjoyUnity_TJPlacement__add_OnRequestSuccess(value,(MethodInfo *)0x0);
  value_00 = (TapjoyUnity_TJPlacement_OnRequestFailureHandler_o *)
             thunk_FUN_01bda818(TapjoyUnity_TJPlacement_OnRequestFailureHandler_TypeInfo);
  TapjoyUnity_TJPlacement_OnRequestFailureHandler___ctor();
  TapjoyUnity_TJPlacement__add_OnRequestFailure(value_00,(MethodInfo *)0x0);
  value_01 = (TapjoyUnity_TJPlacement_OnContentShowHandler_o *)
             thunk_FUN_01bda818(TapjoyUnity_TJPlacement_OnContentShowHandler_TypeInfo);
  TapjoyUnity_TJPlacement_OnContentShowHandler___ctor();
  TapjoyUnity_TJPlacement__add_OnContentShow(value_01,(MethodInfo *)0x0);
  value_02 = (TapjoyUnity_TJPlacement_OnContentDismissHandler_o *)
             thunk_FUN_01bda818(TapjoyUnity_TJPlacement_OnContentDismissHandler_TypeInfo);
  TapjoyUnity_TJPlacement_OnContentDismissHandler___ctor();
  TapjoyUnity_TJPlacement__add_OnContentDismiss(value_02,(MethodInfo *)0x0);
  return;
}

