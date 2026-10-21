// Core.Appsflyer.BanzaiAppsFlyer.<>c$$CCNADDCPJLL @ RVA 0x35C927C

void Core_Appsflyer_BanzaiAppsFlyer_<>c__CCNADDCPJLL
               (Core_Appsflyer_BanzaiAppsFlyer___c_o *__this,System_EventHandler_o *handler,
               MethodInfo *method)

{
  if ((DAT_04568f7f & 1) == 0) {
    FUN_01bab630(&AppsFlyerSDK_AppsFlyer_TypeInfo);
    DAT_04568f7f = 1;
  }
  if ((AppsFlyerSDK_AppsFlyer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  AppsFlyerSDK_AppsFlyer__remove_OnInAppResponse(handler,(MethodInfo *)0x0);
  return;
}

