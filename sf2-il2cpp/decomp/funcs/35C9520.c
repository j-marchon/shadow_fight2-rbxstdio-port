// Core.Appsflyer.BanzaiAppsFlyer.<>c$$OKDCPONBMGK @ RVA 0x35C9520

void Core_Appsflyer_BanzaiAppsFlyer_<>c__OKDCPONBMGK
               (Core_Appsflyer_BanzaiAppsFlyer___c_o *__this,System_EventHandler_o *h,
               MethodInfo *method)

{
  if ((DAT_04568f84 & 1) == 0) {
    FUN_01bab630(&AppsFlyerSDK_AppsFlyer_TypeInfo);
    DAT_04568f84 = 1;
  }
  if ((AppsFlyerSDK_AppsFlyer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  AppsFlyerSDK_AppsFlyer__add_OnDeepLinkReceived(h,(MethodInfo *)0x0);
  return;
}

