// Core.Appsflyer.BanzaiAppsFlyer$$FAKGPIAEEBB @ RVA 0x35C7C88

void Core_Appsflyer_BanzaiAppsFlyer__FAKGPIAEEBB
               (Core_Appsflyer_BanzaiAppsFlyer_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04568f73 & 1) == 0) {
    FUN_01bab630(&AppsFlyerSDK_AppsFlyer_TypeInfo);
    FUN_01bab630(&StringLiteral_12371);
    FUN_01bab630(&StringLiteral_4541);
    DAT_04568f73 = 1;
    method = extraout_x1;
  }
  if ((AppsFlyerSDK_AppsFlyer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(AppsFlyerSDK_AppsFlyer_TypeInfo,method);
  }
  AppsFlyerSDK_AppsFlyer__startSDK((MethodInfo *)0x0);
  Core_Appsflyer_BanzaiAppsFlyer__JHEIGLGFONB(StringLiteral_4541,StringLiteral_12371,in_x2);
  return;
}

