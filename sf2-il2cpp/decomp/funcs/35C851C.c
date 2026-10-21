// Core.Appsflyer.BanzaiAppsFlyer$$EBIAIHOGEEG @ RVA 0x35C851C

void Core_Appsflyer_BanzaiAppsFlyer__EBIAIHOGEEG(System_String_o *EEENOGBEICG,MethodInfo *method)

{
  bool bVar1;
  System_String_o *FEPLAGOGJNL;
  MethodInfo *method_00;
  
  if ((DAT_04568f7c & 1) == 0) {
    FUN_01bab630(&AppsFlyerSDK_AppsFlyer_TypeInfo);
    FUN_01bab630(&StringLiteral_11924);
    FUN_01bab630(&StringLiteral_14624);
    FUN_01bab630(&StringLiteral_11925);
    DAT_04568f7c = 1;
  }
  method_00 = (MethodInfo *)0x0;
  FEPLAGOGJNL = System_String__Concat(StringLiteral_11925,EEENOGBEICG,(MethodInfo *)0x0);
  Core_Appsflyer_BanzaiAppsFlyer__JHEIGLGFONB(FEPLAGOGJNL,StringLiteral_11924,method_00);
  bVar1 = System_String__IsNullOrWhiteSpace(EEENOGBEICG,(MethodInfo *)0x0);
  if (bVar1) {
    Core_Appsflyer_BanzaiAppsFlyer__MCJHDFDBCHK(StringLiteral_14624,StringLiteral_11924,method_00);
    return;
  }
  if ((AppsFlyerSDK_AppsFlyer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  AppsFlyerSDK_AppsFlyer__setCustomerUserId(EEENOGBEICG,(MethodInfo *)0x0);
  return;
}

