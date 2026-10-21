// Core.Appsflyer.BanzaiAppsFlyer$$SendEvent @ RVA 0x35C7764

void Core_Appsflyer_BanzaiAppsFlyer__SendEvent
               (Core_Appsflyer_BanzaiAppsFlyer_o *__this,System_String_o *ANIALDFEENL,
               System_Collections_Generic_Dictionary_string__string__o *KNLHDOAJDFE,
               MethodInfo *method)

{
  if ((DAT_04568f70 & 1) == 0) {
    FUN_01bab630(&AppsFlyerSDK_AppsFlyer_TypeInfo);
    DAT_04568f70 = 1;
  }
  if ((AppsFlyerSDK_AppsFlyer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  AppsFlyerSDK_AppsFlyer__sendEvent(ANIALDFEENL,KNLHDOAJDFE,(MethodInfo *)0x0);
  return;
}

