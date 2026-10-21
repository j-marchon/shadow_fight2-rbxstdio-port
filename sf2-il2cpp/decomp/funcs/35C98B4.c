// Core.Appsflyer.BanzaiAppsFlyer.<>c$$PHKGAEECBCO @ RVA 0x35C98B4

void Core_Appsflyer_BanzaiAppsFlyer_<>c__PHKGAEECBCO
               (Core_Appsflyer_BanzaiAppsFlyer___c_o *__this,System_EventHandler_o *handler,
               MethodInfo *method)

{
  if ((DAT_04568f89 & 1) == 0) {
    FUN_01bab630(&AppsFlyerSDK_AppsFlyer_TypeInfo);
    DAT_04568f89 = 1;
  }
  if ((AppsFlyerSDK_AppsFlyer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  AppsFlyerSDK_AppsFlyer__remove_OnRequestResponse(handler,(MethodInfo *)0x0);
  return;
}

