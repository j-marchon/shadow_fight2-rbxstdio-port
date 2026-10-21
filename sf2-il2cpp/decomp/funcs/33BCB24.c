// KHFOHGKPBFN$$Dispose @ RVA 0x33BCB24

void KHFOHGKPBFN__Dispose(KHFOHGKPBFN_o *__this,MethodInfo *method)

{
  TapjoyUnity_TJPlacement_OnRequestSuccessHandler_o *value;
  TapjoyUnity_TJPlacement_OnRequestFailureHandler_o *value_00;
  TapjoyUnity_TJPlacement_OnContentShowHandler_o *value_01;
  TapjoyUnity_TJPlacement_OnContentDismissHandler_o *value_02;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567db1 & 1) == 0) {
    FUN_01bab630(&Method_KHFOHGKPBFN_EAGPILFCOGF__);
    FUN_01bab630(&Method_KHFOHGKPBFN_KAMECPNAAIA__);
    FUN_01bab630(&Method_KHFOHGKPBFN_NEPFHCEJIOI__);
    FUN_01bab630(&Method_KHFOHGKPBFN_PIPGLBKDGCB__);
    FUN_01bab630(&TapjoyUnity_TJPlacement_OnContentDismissHandler_TypeInfo);
    FUN_01bab630(&TapjoyUnity_TJPlacement_OnContentShowHandler_TypeInfo);
    FUN_01bab630(&TapjoyUnity_TJPlacement_OnRequestFailureHandler_TypeInfo);
    FUN_01bab630(&TapjoyUnity_TJPlacement_OnRequestSuccessHandler_TypeInfo);
    FUN_01bab630(&TapjoyUnity_TJPlacement_TypeInfo);
    DAT_04567db1 = 1;
    method = extraout_x1;
  }
  value = (TapjoyUnity_TJPlacement_OnRequestSuccessHandler_o *)
          thunk_FUN_01bda818(TapjoyUnity_TJPlacement_OnRequestSuccessHandler_TypeInfo,method);
  TapjoyUnity_TJPlacement_OnRequestSuccessHandler___ctor();
  if ((TapjoyUnity_TJPlacement_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  TapjoyUnity_TJPlacement__remove_OnRequestSuccess(value,(MethodInfo *)0x0);
  value_00 = (TapjoyUnity_TJPlacement_OnRequestFailureHandler_o *)
             thunk_FUN_01bda818(TapjoyUnity_TJPlacement_OnRequestFailureHandler_TypeInfo);
  TapjoyUnity_TJPlacement_OnRequestFailureHandler___ctor();
  TapjoyUnity_TJPlacement__remove_OnRequestFailure(value_00,(MethodInfo *)0x0);
  value_01 = (TapjoyUnity_TJPlacement_OnContentShowHandler_o *)
             thunk_FUN_01bda818(TapjoyUnity_TJPlacement_OnContentShowHandler_TypeInfo);
  TapjoyUnity_TJPlacement_OnContentShowHandler___ctor();
  TapjoyUnity_TJPlacement__remove_OnContentShow(value_01,(MethodInfo *)0x0);
  value_02 = (TapjoyUnity_TJPlacement_OnContentDismissHandler_o *)
             thunk_FUN_01bda818(TapjoyUnity_TJPlacement_OnContentDismissHandler_TypeInfo);
  TapjoyUnity_TJPlacement_OnContentDismissHandler___ctor();
  TapjoyUnity_TJPlacement__remove_OnContentDismiss(value_02,(MethodInfo *)0x0);
  return;
}

