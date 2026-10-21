// Core.Appsflyer.BanzaiAppsFlyer$$didReceivePurchaseRevenueValidationInfo @ RVA 0x35C73E0

void Core_Appsflyer_BanzaiAppsFlyer__didReceivePurchaseRevenueValidationInfo
               (Core_Appsflyer_BanzaiAppsFlyer_o *__this,System_String_o *KIGGHBECNJN,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__object__o *value;
  UniRx_ReactiveEvent_Dictionary_string__object___o *__this_00;
  
  if ((DAT_04568f69 & 1) == 0) {
    FUN_01bab630(&AppsFlyerSDK_AppsFlyer_TypeInfo);
    FUN_01bab630(&Method_UniRx_ReactiveEvent<Dictionary<string,_object>>_Invoke__);
    FUN_01bab630(&StringLiteral_17726);
    DAT_04568f69 = 1;
  }
  Core_Appsflyer_BanzaiAppsFlyer__JHEIGLGFONB(KIGGHBECNJN,StringLiteral_17726,method);
  if ((AppsFlyerSDK_AppsFlyer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  value = AppsFlyerSDK_AppsFlyer__CallbackStringToDictionary(KIGGHBECNJN,(MethodInfo *)0x0);
  __this_00 = (__this->fields).HDLIGAPCCAN;
  if (__this_00 != (UniRx_ReactiveEvent_Dictionary_string__object___o *)0x0) {
    UniRx_ReactiveEvent<object>__Invoke
              ((UniRx_ReactiveEvent_T__o *)__this_00,(Il2CppObject *)value,
               Method_UniRx_ReactiveEvent<Dictionary<string,_object>>_Invoke__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

