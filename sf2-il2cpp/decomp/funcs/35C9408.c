// Core.Appsflyer.BanzaiAppsFlyer.<>c$$MAHFBMMPLHE @ RVA 0x35C9408

void Core_Appsflyer_BanzaiAppsFlyer_<>c__MAHFBMMPLHE
               (Core_Appsflyer_BanzaiAppsFlyer___c_o *__this,System_String_o *deviceToken,
               MethodInfo *method)

{
  System_String_o *FEPLAGOGJNL;
  MethodInfo *method_00;
  
  if ((DAT_04568f82 & 1) == 0) {
    FUN_01bab630(&AppsFlyerSDK_AppsFlyer_TypeInfo);
    FUN_01bab630(&StringLiteral_11161);
    FUN_01bab630(&StringLiteral_802);
    FUN_01bab630(&StringLiteral_11164);
    DAT_04568f82 = 1;
  }
  method_00 = StringLiteral_802;
  FEPLAGOGJNL = System_String__Concat
                          (StringLiteral_11161,deviceToken,(System_String_o *)StringLiteral_802,
                           (MethodInfo *)0x0);
  Core_Appsflyer_BanzaiAppsFlyer__JHEIGLGFONB(FEPLAGOGJNL,StringLiteral_11164,method_00);
  if ((AppsFlyerSDK_AppsFlyer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  AppsFlyerSDK_AppsFlyer__updateServerUninstallToken(deviceToken,(MethodInfo *)0x0);
  return;
}

