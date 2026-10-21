// Core.Appsflyer.BanzaiAppsFlyer$$.ctor @ RVA 0x35C7158

void Core_Appsflyer_BanzaiAppsFlyer___ctor
               (Core_Appsflyer_BanzaiAppsFlyer_o *__this,MethodInfo *method)

{
  UniRx_ReactiveProperty_string__o *__this_00;
  UniRx_ReactiveProperty_string__o **ppUVar1;
  UniRx_ReactiveEvent_Dictionary_string__object___o *pUVar2;
  UniRx_ReactiveEvent_Dictionary_string__object___o **ppUVar3;
  UniRx_ReactiveProperty_IEOKPOCAOKN__o *__this_01;
  UniRx_ReactiveProperty_IEOKPOCAOKN__o **ppUVar4;
  UniRx_ReactiveProperty_bool__o *__this_02;
  UniRx_ReactiveProperty_bool__o **ppUVar5;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568f67 & 1) == 0) {
    FUN_01bab630(&AppsFlyerSDK_AppsFlyer_TypeInfo);
    FUN_01bab630(&Method_UniRx_ReactiveEvent<Dictionary<string,_object>>__ctor__);
    FUN_01bab630(&UniRx_ReactiveEvent<Dictionary<string,_object>>_TypeInfo);
    FUN_01bab630(&Method_UniRx_ReactiveProperty<bool>__ctor__);
    FUN_01bab630(&Method_UniRx_ReactiveProperty<string>__ctor__);
    FUN_01bab630(&Method_UniRx_ReactiveProperty<IEOKPOCAOKN>__ctor__);
    FUN_01bab630(&UniRx_ReactiveProperty<IEOKPOCAOKN>_TypeInfo);
    FUN_01bab630(&UniRx_ReactiveProperty<string>_TypeInfo);
    FUN_01bab630(&UniRx_ReactiveProperty<bool>_TypeInfo);
    DAT_04568f67 = 1;
    method = extraout_x1;
  }
  __this_00 = (UniRx_ReactiveProperty_string__o *)
              thunk_FUN_01bda818(UniRx_ReactiveProperty<string>_TypeInfo,method);
  UniRx_ReactiveProperty<object>___ctor
            ((UniRx_ReactiveProperty_T__o *)__this_00,Method_UniRx_ReactiveProperty<string>__ctor__)
  ;
  ppUVar1 = &(__this->fields).ABBACAKGAAF;
  *ppUVar1 = __this_00;
  thunk_FUN_01c20e04(ppUVar1,__this_00);
  pUVar2 = (UniRx_ReactiveEvent_Dictionary_string__object___o *)
           thunk_FUN_01bda818(UniRx_ReactiveEvent<Dictionary<string,_object>>_TypeInfo);
  UniRx_ReactiveEvent<object>___ctor
            ((UniRx_ReactiveEvent_T__o *)pUVar2,
             Method_UniRx_ReactiveEvent<Dictionary<string,_object>>__ctor__);
  ppUVar3 = &(__this->fields).HOJDFONEEJL;
  *ppUVar3 = pUVar2;
  thunk_FUN_01c20e04(ppUVar3,pUVar2);
  __this_01 = (UniRx_ReactiveProperty_IEOKPOCAOKN__o *)
              thunk_FUN_01bda818(UniRx_ReactiveProperty<IEOKPOCAOKN>_TypeInfo);
  UniRx_ReactiveProperty<object>___ctor
            ((UniRx_ReactiveProperty_T__o *)__this_01,
             Method_UniRx_ReactiveProperty<IEOKPOCAOKN>__ctor__);
  ppUVar4 = &(__this->fields).PLNAMMLBJAH;
  *ppUVar4 = __this_01;
  thunk_FUN_01c20e04(ppUVar4,__this_01);
  pUVar2 = (UniRx_ReactiveEvent_Dictionary_string__object___o *)
           thunk_FUN_01bda818(UniRx_ReactiveEvent<Dictionary<string,_object>>_TypeInfo);
  UniRx_ReactiveEvent<object>___ctor
            ((UniRx_ReactiveEvent_T__o *)pUVar2,
             Method_UniRx_ReactiveEvent<Dictionary<string,_object>>__ctor__);
  ppUVar3 = &(__this->fields).HDLIGAPCCAN;
  *ppUVar3 = pUVar2;
  thunk_FUN_01c20e04(ppUVar3,pUVar2);
  __this_02 = (UniRx_ReactiveProperty_bool__o *)
              thunk_FUN_01bda818(UniRx_ReactiveProperty<bool>_TypeInfo);
  UniRx_ReactiveProperty<bool>___ctor(__this_02,Method_UniRx_ReactiveProperty<bool>__ctor__);
  ppUVar5 = &(__this->fields).ECCPBJGMNPE;
  *ppUVar5 = __this_02;
  thunk_FUN_01c20e04(ppUVar5,__this_02);
  if ((AppsFlyerSDK_AppsFlyer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  AppsFlyerSDK_AppsFlyer___ctor((AppsFlyerSDK_AppsFlyer_o *)__this,(MethodInfo *)0x0);
  return;
}

