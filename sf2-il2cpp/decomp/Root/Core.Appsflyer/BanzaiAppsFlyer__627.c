// TypeDefIndex 627
// Namespace: Core.Appsflyer
// public class BanzaiAppsFlyer : AppsFlyer, MEMHIINCGGE, NMNKNNLKFJP, FAAIAHIFFNG, HEFALINEJDP, NEBMFFFBHKC, MKFEBHDNAPH
// Fields:
//   private readonly ReactiveProperty<string> ABBACAKGAAF; // 0x20
//   private readonly ReactiveEvent<Dictionary<string, object>> HOJDFONEEJL; // 0x28
//   private readonly ReactiveProperty<IEOKPOCAOKN> PLNAMMLBJAH; // 0x30
//   private readonly ReactiveEvent<Dictionary<string, object>> HDLIGAPCCAN; // 0x38
//   private HMEJGGGPIPL KAPMLAAGDAI; // 0x40
//   private bool HHBJPFMJEHK; // 0x48
//   private readonly ReactiveProperty<bool> ECCPBJGMNPE; // 0x50

// ===== private void BLPABBKBKDK()  [RVA 0x35C66EC]
// Core.Appsflyer.BanzaiAppsFlyer$$BLPABBKBKDK @ RVA 0x35C66EC

void Core_Appsflyer_BanzaiAppsFlyer__BLPABBKBKDK
               (Core_Appsflyer_BanzaiAppsFlyer_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  VirtualInvokeData *pVVar3;
  HMEJGGGPIPL_o *pHVar4;
  NOCMDCMLGPN_c *pNVar5;
  ulong uVar6;
  int32_t *piVar7;
  NOCMDCMLGPN_o *pNVar8;
  
  if ((DAT_04568f63 & 1) == 0) {
    FUN_01bab630(&AppsFlyerSDK_AppsFlyer_TypeInfo);
    FUN_01bab630(&NOCMDCMLGPN_TypeInfo);
    DAT_04568f63 = 1;
  }
  pHVar4 = (__this->fields).KAPMLAAGDAI;
  if ((pHVar4 != (HMEJGGGPIPL_o *)0x0) &&
     (pNVar8 = (pHVar4->fields).CKIDHLLMFHL, pNVar8 != (NOCMDCMLGPN_o *)0x0)) {
    pNVar5 = pNVar8->klass;
    uVar1._0_1_ = (pNVar5->_2).rank;
    uVar1._1_1_ = (pNVar5->_2).minimumAlignment;
    uVar6 = (ulong)uVar1;
    if (uVar6 != 0) {
      piVar7 = &((pNVar5->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
            (Il2CppClass *)NOCMDCMLGPN_TypeInfo) {
          pVVar3 = pNVar5->vtable + *piVar7;
          goto LAB_036c6788;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    pVVar3 = (VirtualInvokeData *)FUN_01b81914(pNVar8,NOCMDCMLGPN_TypeInfo,0);
LAB_036c6788:
    uVar6 = (*pVVar3->methodPtr)(pNVar8,pVVar3->method);
    if ((uVar6 & 1) == 0) {
      return;
    }
    if ((AppsFlyerSDK_AppsFlyer_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    AppsFlyerSDK_AppsFlyer__waitForATTUserAuthorizationWithTimeoutInterval(0x3c,(MethodInfo *)0x0);
    pHVar4 = (__this->fields).KAPMLAAGDAI;
    if ((pHVar4 != (HMEJGGGPIPL_o *)0x0) &&
       (pNVar8 = (pHVar4->fields).CKIDHLLMFHL, pNVar8 != (NOCMDCMLGPN_o *)0x0)) {
      pNVar5 = pNVar8->klass;
      uVar2._0_1_ = (pNVar5->_2).rank;
      uVar2._1_1_ = (pNVar5->_2).minimumAlignment;
      uVar6 = (ulong)uVar2;
      if (uVar6 != 0) {
        piVar7 = &((pNVar5->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
              (Il2CppClass *)NOCMDCMLGPN_TypeInfo) {
            pVVar3 = pNVar5->vtable + (*piVar7 + 1);
            goto LAB_036c6828;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      pVVar3 = (VirtualInvokeData *)FUN_01b81914(pNVar8,NOCMDCMLGPN_TypeInfo,1);
LAB_036c6828:
                    /* WARNING: Could not recover jumptable at 0x036c683c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pVVar3->methodPtr)(pNVar8,0,pVVar3->method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void JHEIGLGFONB(string FEPLAGOGJNL, string LGKENDNKLOM = "")  [RVA 0x35C6844]
// Core.Appsflyer.BanzaiAppsFlyer$$JHEIGLGFONB @ RVA 0x35C6844

void Core_Appsflyer_BanzaiAppsFlyer__JHEIGLGFONB
               (System_String_o *FEPLAGOGJNL,System_String_o *LGKENDNKLOM,MethodInfo *method)

{
  System_String_o *JLNPKGGFFDD;
  
  if ((DAT_04568f64 & 1) == 0) {
    FUN_01bab630(&Method_KFJJHMDIFIG_DHAAGKPHJLA<BanzaiAppsFlyer>__);
    FUN_01bab630(&StringLiteral_2088/*": "*/);
    DAT_04568f64 = 1;
  }
  JLNPKGGFFDD = System_String__Concat(LGKENDNKLOM,StringLiteral_2088/*": "*/,FEPLAGOGJNL,(MethodInfo *)0x0);
  KFJJHMDIFIG__DHAAGKPHJLA<object>(JLNPKGGFFDD,Method_KFJJHMDIFIG_DHAAGKPHJLA<BanzaiAppsFlyer>__);
  return;
}


// ===== public IObservable<Unit> get_InitializationComplete()  [RVA 0x35C68BC]
// Core.Appsflyer.BanzaiAppsFlyer$$get_InitializationComplete @ RVA 0x35C68BC

System_IObservable_Unit__o *
Core_Appsflyer_BanzaiAppsFlyer__get_InitializationComplete
          (Core_Appsflyer_BanzaiAppsFlyer_o *__this,MethodInfo *method)

{
  System_Func_bool__bool__o **ppSVar1;
  System_IObservable_T__o *source;
  System_IObservable_Unit__o *pSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  UniRx_ReactiveProperty_bool__o *source_00;
  System_Func_bool__bool__o *predicate;
  
  if ((DAT_04568f65 & 1) == 0) {
    FUN_01bab630(&System_Func<bool,_bool>_TypeInfo);
    FUN_01bab630(&Method_UniRx_Observable_AsUnitObservable<bool>__);
    FUN_01bab630(&Method_UniRx_Observable_Where<bool>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    FUN_01bab630(&Method_Core_Appsflyer_BanzaiAppsFlyer_<>c_HNDELEMJOFO__);
    FUN_01bab630(&Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo);
    DAT_04568f65 = 1;
    method = extraout_x1;
  }
  source_00 = (__this->fields).ECCPBJGMNPE;
  if ((Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  predicate = Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->static_fields->__9__1_0;
  if (predicate == (System_Func_bool__bool__o *)0x0) {
    if ((Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo,method);
    }
    predicate = (System_Func_bool__bool__o *)thunk_FUN_01bda818(System_Func<bool,_bool>_TypeInfo);
    System_Func<bool,_bool>___ctor();
    ppSVar1 = &Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->static_fields->__9__1_0;
    *ppSVar1 = predicate;
    thunk_FUN_01c20e04(ppSVar1,predicate);
    method = extraout_x1_01;
  }
  if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UniRx_Observable_TypeInfo,method);
  }
  source = UniRx_Observable__Where<bool>
                     ((System_IObservable_T__o *)source_00,(System_Func_T__bool__o *)predicate,
                      Method_UniRx_Observable_Where<bool>__);
  pSVar2 = UniRx_Observable__AsUnitObservable<bool>
                     (source,Method_UniRx_Observable_AsUnitObservable<bool>__);
  return pSVar2;
}


// ===== private void EBPAPDBEPKM()  [RVA 0x35C69F8]
// Core.Appsflyer.BanzaiAppsFlyer$$EBPAPDBEPKM @ RVA 0x35C69F8

void Core_Appsflyer_BanzaiAppsFlyer__EBPAPDBEPKM
               (Core_Appsflyer_BanzaiAppsFlyer_o *__this,MethodInfo *method)

{
  ushort uVar1;
  int32_t iVar2;
  VirtualInvokeData *pVVar3;
  System_Action_Action_T___o *addHandler;
  System_Action_Action_T___o *removeHandler;
  System_Func_string__bool__o **ppSVar4;
  System_Action_string__o **ppSVar5;
  System_IObservable_T__o *pSVar6;
  System_Func_HCBNEFEHCBM__bool__o **ppSVar7;
  System_Func_HCBNEFEHCBM__string__o **ppSVar8;
  System_IObservable_TR__o *source;
  System_Action_T__o *onNext;
  Il2CppObject *disposable;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  HMEJGGGPIPL_o *pHVar9;
  EAPFCMCJBAG_c *pEVar10;
  undefined8 *puVar11;
  ulong uVar12;
  int32_t *piVar13;
  EAPFCMCJBAG_o *pEVar14;
  System_Func_string__bool__o *predicate;
  System_Func_HCBNEFEHCBM__bool__o *predicate_00;
  System_Func_HCBNEFEHCBM__string__o *selector;
  
  if ((DAT_04568f66 & 1) == 0) {
    FUN_01bab630(&System_Action<string>_TypeInfo);
    FUN_01bab630(&System_Action<Action<string>>_TypeInfo);
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&Method_Core_Appsflyer_BanzaiAppsFlyer_DFLDGIMKFDO__);
    FUN_01bab630(&Method_Core_Appsflyer_BanzaiAppsFlyer_HGGMNGPOBIO__);
    FUN_01bab630(&Method_Core_Appsflyer_BanzaiAppsFlyer_JGMECBJEPDL__);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&EAPFCMCJBAG_TypeInfo);
    FUN_01bab630(&System_Func<HCBNEFEHCBM,_string>_TypeInfo);
    FUN_01bab630(&System_Func<HCBNEFEHCBM,_bool>_TypeInfo);
    FUN_01bab630(&System_Func<string,_bool>_TypeInfo);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<string>__);
    FUN_01bab630(&Method_UniRx_Observable_FromEvent<string>__);
    FUN_01bab630(&Method_UniRx_Observable_Select<HCBNEFEHCBM,_string>__);
    FUN_01bab630(&Method_UniRx_Observable_Where<HCBNEFEHCBM>__);
    FUN_01bab630(&Method_UniRx_Observable_Where<string>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    FUN_01bab630(&Method_Core_Appsflyer_BanzaiAppsFlyer_<>c_JGDMOCDBIID__);
    FUN_01bab630(&Method_Core_Appsflyer_BanzaiAppsFlyer_<>c_JPBACBDMAOF__);
    FUN_01bab630(&Method_Core_Appsflyer_BanzaiAppsFlyer_<>c_KAFICFLLEDO__);
    FUN_01bab630(&Method_Core_Appsflyer_BanzaiAppsFlyer_<>c_MAHFBMMPLHE__);
    FUN_01bab630(&Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_5403/*"Disabled by RegisterUninstall parameter!"*/);
    FUN_01bab630(&StringLiteral_11196/*"RemoteNotificationsManager parameter is null!"*/);
    FUN_01bab630(&StringLiteral_5404/*"Disabled due unsupported platform!"*/);
    FUN_01bab630(&StringLiteral_9632/*"NotificationsPermissionRequestHandler parameter is null!"*/);
    FUN_01bab630(&StringLiteral_11164/*"RegisterUninstall"*/);
    DAT_04568f66 = 1;
    method = extraout_x1;
  }
  pHVar9 = (__this->fields).KAPMLAAGDAI;
  if (pHVar9 != (HMEJGGGPIPL_o *)0x0) {
    if ((pHVar9->fields).EBPAPDBEPKM == false) {
      Core_Appsflyer_BanzaiAppsFlyer__JHEIGLGFONB(StringLiteral_5403/*"Disabled by RegisterUninstall parameter!"*/,StringLiteral_11164/*"RegisterUninstall"*/,in_x2);
      return;
    }
    if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Application_TypeInfo,method);
    }
    iVar2 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
    if (iVar2 == 8) {
      pHVar9 = (__this->fields).KAPMLAAGDAI;
      if (pHVar9 == (HMEJGGGPIPL_o *)0x0) goto LAB_036c7064;
      pEVar14 = (pHVar9->fields).FHGJNLGDAMD;
      if (pEVar14 == (EAPFCMCJBAG_o *)0x0) {
        puVar11 = &StringLiteral_9632/*"NotificationsPermissionRequestHandler parameter is null!"*/;
LAB_036c7040:
        Core_Appsflyer_BanzaiAppsFlyer__FPILEMBEIDC
                  ((System_String_o *)*puVar11,StringLiteral_11164/*"RegisterUninstall"*/,in_x2);
        return;
      }
      pEVar10 = pEVar14->klass;
      uVar1._0_1_ = (pEVar10->_2).rank;
      uVar1._1_1_ = (pEVar10->_2).minimumAlignment;
      uVar12 = (ulong)uVar1;
      if (uVar12 != 0) {
        piVar13 = &((pEVar10->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
              (Il2CppClass *)EAPFCMCJBAG_TypeInfo) {
            pVVar3 = pEVar10->vtable + (*piVar13 + 1);
            goto LAB_036c6e54;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      pVVar3 = (VirtualInvokeData *)FUN_01b81914(pEVar14,EAPFCMCJBAG_TypeInfo,1);
LAB_036c6e54:
      pSVar6 = (System_IObservable_T__o *)(*pVVar3->methodPtr)(pEVar14,pVVar3->method);
      if ((Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo);
      }
      predicate_00 = Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->static_fields->__9__24_0;
      if (predicate_00 == (System_Func_HCBNEFEHCBM__bool__o *)0x0) {
        if ((Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo);
        }
        predicate_00 = (System_Func_HCBNEFEHCBM__bool__o *)
                       thunk_FUN_01bda818(System_Func<HCBNEFEHCBM,_bool>_TypeInfo);
        System_Func<object,_bool>___ctor();
        ppSVar7 = &Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->static_fields->__9__24_0;
        *ppSVar7 = predicate_00;
        thunk_FUN_01c20e04(ppSVar7,predicate_00);
      }
      if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar6 = UniRx_Observable__Where<object>
                         (pSVar6,(System_Func_T__bool__o *)predicate_00,
                          Method_UniRx_Observable_Where<HCBNEFEHCBM>__);
      if ((Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo);
      }
      selector = Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->static_fields->__9__24_1;
      if (selector == (System_Func_HCBNEFEHCBM__string__o *)0x0) {
        if ((Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo);
        }
        selector = (System_Func_HCBNEFEHCBM__string__o *)
                   thunk_FUN_01bda818(System_Func<HCBNEFEHCBM,_string>_TypeInfo);
        System_Func<object,_object>___ctor();
        ppSVar8 = &Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->static_fields->__9__24_1;
        *ppSVar8 = selector;
        thunk_FUN_01c20e04(ppSVar8,selector);
      }
      if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      source = UniRx_Observable__Select<object,_object>
                         (pSVar6,(System_Func_T__TR__o *)selector,
                          Method_UniRx_Observable_Select<HCBNEFEHCBM,_string>__);
      onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<string>_TypeInfo);
      System_Action<object>___ctor();
    }
    else {
      if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar2 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
      if (iVar2 != 0xb) {
        Core_Appsflyer_BanzaiAppsFlyer__MCJHDFDBCHK(StringLiteral_5404/*"Disabled due unsupported platform!"*/,StringLiteral_11164/*"RegisterUninstall"*/,in_x2);
        return;
      }
      pHVar9 = (__this->fields).KAPMLAAGDAI;
      if (pHVar9 == (HMEJGGGPIPL_o *)0x0) goto LAB_036c7064;
      if ((pHVar9->fields).LODCOBPDCIB == (CPHBJEDCAEO_o *)0x0) {
        puVar11 = &StringLiteral_11196/*"RemoteNotificationsManager parameter is null!"*/;
        goto LAB_036c7040;
      }
      addHandler = (System_Action_Action_T___o *)
                   thunk_FUN_01bda818(System_Action<Action<string>>_TypeInfo);
      System_Action<object>___ctor();
      removeHandler =
           (System_Action_Action_T___o *)thunk_FUN_01bda818(System_Action<Action<string>>_TypeInfo);
      System_Action<object>___ctor();
      if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar6 = UniRx_Observable__FromEvent<object>
                         (addHandler,removeHandler,Method_UniRx_Observable_FromEvent<string>__);
      if ((Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo);
      }
      predicate = Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->static_fields->__9__24_5;
      if (predicate == (System_Func_string__bool__o *)0x0) {
        if ((Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo);
        }
        predicate = (System_Func_string__bool__o *)
                    thunk_FUN_01bda818(System_Func<string,_bool>_TypeInfo);
        System_Func<object,_bool>___ctor();
        ppSVar4 = &Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->static_fields->__9__24_5;
        *ppSVar4 = predicate;
        thunk_FUN_01c20e04(ppSVar4,predicate);
      }
      if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      source = (System_IObservable_TR__o *)
               UniRx_Observable__Where<object>
                         (pSVar6,(System_Func_T__bool__o *)predicate,
                          Method_UniRx_Observable_Where<string>__);
      if ((Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo);
      }
      onNext = (System_Action_T__o *)
               Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->static_fields->__9__24_6;
      if (onNext == (System_Action_T__o *)0x0) {
        if ((Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo);
        }
        onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<string>_TypeInfo);
        System_Action<object>___ctor();
        ppSVar5 = &Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->static_fields->__9__24_6;
        *ppSVar5 = (System_Action_string__o *)onNext;
        thunk_FUN_01c20e04(ppSVar5,onNext);
      }
    }
    disposable = (Il2CppObject *)
                 UniRx_ObservableExtensions__Subscribe<object>
                           ((System_IObservable_T__o *)source,onNext,
                            Method_UniRx_ObservableExtensions_Subscribe<string>__);
    UniRx_DisposableExtensions__AddTo<object>
              (disposable,(UnityEngine_Component_o *)__this,
               Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    return;
  }
LAB_036c7064:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x35C7158]
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


// ===== private void HGGMNGPOBIO(Action<string> JLPMKKKMANE)  [RVA 0x35C7324]
// Core.Appsflyer.BanzaiAppsFlyer$$HGGMNGPOBIO @ RVA 0x35C7324

void Core_Appsflyer_BanzaiAppsFlyer__HGGMNGPOBIO
               (Core_Appsflyer_BanzaiAppsFlyer_o *__this,System_Action_string__o *JLPMKKKMANE,
               MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  HMEJGGGPIPL_o *pHVar3;
  CPHBJEDCAEO_c *pCVar4;
  ulong uVar5;
  int32_t *piVar6;
  CPHBJEDCAEO_o *pCVar7;
  
  if ((DAT_04568f68 & 1) == 0) {
    FUN_01bab630(&CPHBJEDCAEO_TypeInfo);
    DAT_04568f68 = 1;
  }
  pHVar3 = (__this->fields).KAPMLAAGDAI;
  if ((pHVar3 == (HMEJGGGPIPL_o *)0x0) ||
     (pCVar7 = (pHVar3->fields).LODCOBPDCIB, pCVar7 == (CPHBJEDCAEO_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pCVar4 = pCVar7->klass;
  uVar1._0_1_ = (pCVar4->_2).rank;
  uVar1._1_1_ = (pCVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pCVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)CPHBJEDCAEO_TypeInfo) {
        pVVar2 = pCVar4->vtable + (*piVar6 + 5);
        goto LAB_036c73bc;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pCVar7,CPHBJEDCAEO_TypeInfo,5);
LAB_036c73bc:
                    /* WARNING: Could not recover jumptable at 0x036c73d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pCVar7,JLPMKKKMANE,pVVar2->method);
  return;
}


// ===== public IObservable<Dictionary<string, object>> get_AppOpenAttribution()  [RVA 0x35C73D8]
// Core.Appsflyer.BanzaiAppsFlyer$$get_AppOpenAttribution @ RVA 0x35C73D8

System_IObservable_Dictionary_string__object___o *
Core_Appsflyer_BanzaiAppsFlyer__get_AppOpenAttribution
          (Core_Appsflyer_BanzaiAppsFlyer_o *__this,MethodInfo *method)

{
  return (System_IObservable_Dictionary_string__object___o *)(__this->fields).HOJDFONEEJL;
}


// ===== public void didReceivePurchaseRevenueValidationInfo(string KIGGHBECNJN)  [RVA 0x35C73E0]
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
    FUN_01bab630(&StringLiteral_17726/*"didReceivePurchaseRevenueValidationInfo"*/);
    DAT_04568f69 = 1;
  }
  Core_Appsflyer_BanzaiAppsFlyer__JHEIGLGFONB(KIGGHBECNJN,StringLiteral_17726/*"didReceivePurchaseRevenueValidationInfo"*/,method);
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


// ===== public void onAppOpenAttributionFailure(string EHKEOHNBLCK)  [RVA 0x35C7494]
// Core.Appsflyer.BanzaiAppsFlyer$$onAppOpenAttributionFailure @ RVA 0x35C7494

void Core_Appsflyer_BanzaiAppsFlyer__onAppOpenAttributionFailure
               (Core_Appsflyer_BanzaiAppsFlyer_o *__this,System_String_o *EHKEOHNBLCK,
               MethodInfo *method)

{
  if ((DAT_04568f6a & 1) == 0) {
    FUN_01bab630(&StringLiteral_19996/*"onAppOpenAttributionFailure"*/);
    DAT_04568f6a = 1;
  }
  Core_Appsflyer_BanzaiAppsFlyer__JHEIGLGFONB(EHKEOHNBLCK,StringLiteral_19996/*"onAppOpenAttributionFailure"*/,method);
  return;
}


// ===== private void DFLDGIMKFDO(string ACBDKJMJMNJ)  [RVA 0x35C74DC]
// Core.Appsflyer.BanzaiAppsFlyer$$DFLDGIMKFDO @ RVA 0x35C74DC

void Core_Appsflyer_BanzaiAppsFlyer__DFLDGIMKFDO
               (Core_Appsflyer_BanzaiAppsFlyer_o *__this,System_String_o *ACBDKJMJMNJ,
               MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *FEPLAGOGJNL;
  System_Byte_array *ACBDKJMJMNJ_00;
  MethodInfo *method_00;
  HMEJGGGPIPL_o *pHVar2;
  
  if ((DAT_04568f6b & 1) == 0) {
    FUN_01bab630(&AppsFlyerSDK_AppsFlyer_TypeInfo);
    FUN_01bab630(&LJHJJHEFBDD_TypeInfo);
    FUN_01bab630(&StringLiteral_11161/*"Register uninstall with deviceToken: '"*/);
    FUN_01bab630(&StringLiteral_802/*"'"*/);
    FUN_01bab630(&StringLiteral_11164/*"RegisterUninstall"*/);
    DAT_04568f6b = 1;
  }
  method_00 = StringLiteral_802/*"'"*/;
  FEPLAGOGJNL = System_String__Concat
                          (StringLiteral_11161/*"Register uninstall with deviceToken: '"*/,ACBDKJMJMNJ,(System_String_o *)StringLiteral_802/*"'"*/,
                           (MethodInfo *)0x0);
  Core_Appsflyer_BanzaiAppsFlyer__JHEIGLGFONB(FEPLAGOGJNL,StringLiteral_11164/*"RegisterUninstall"*/,method_00);
  pHVar2 = (__this->fields).KAPMLAAGDAI;
  if (pHVar2 != (HMEJGGGPIPL_o *)0x0) {
    bVar1 = (pHVar2->fields).KGIDNENGGEO;
    if ((AppsFlyerSDK_AppsFlyer_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    AppsFlyerSDK_AppsFlyer__setUseUninstallSandbox(bVar1 != false,(MethodInfo *)0x0);
    if ((LJHJJHEFBDD_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    ACBDKJMJMNJ_00 = LJHJJHEFBDD__HPBCENEFAMD(ACBDKJMJMNJ,(MethodInfo *)0x0);
    AppsFlyerSDK_AppsFlyer__registerUninstall(ACBDKJMJMNJ_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void didReceivePurchaseRevenueError(string EHKEOHNBLCK)  [RVA 0x35C75EC]
// Core.Appsflyer.BanzaiAppsFlyer$$didReceivePurchaseRevenueError @ RVA 0x35C75EC

void Core_Appsflyer_BanzaiAppsFlyer__didReceivePurchaseRevenueError
               (Core_Appsflyer_BanzaiAppsFlyer_o *__this,System_String_o *EHKEOHNBLCK,
               MethodInfo *method)

{
  if ((DAT_04568f6c & 1) == 0) {
    FUN_01bab630(&StringLiteral_17725/*"didReceivePurchaseRevenueError"*/);
    DAT_04568f6c = 1;
  }
  Core_Appsflyer_BanzaiAppsFlyer__JHEIGLGFONB(EHKEOHNBLCK,StringLiteral_17725/*"didReceivePurchaseRevenueError"*/,method);
  return;
}


// ===== private static void MCJHDFDBCHK(string FEPLAGOGJNL, string LGKENDNKLOM = "")  [RVA 0x35C70E0]
// Core.Appsflyer.BanzaiAppsFlyer$$MCJHDFDBCHK @ RVA 0x35C70E0

void Core_Appsflyer_BanzaiAppsFlyer__MCJHDFDBCHK
               (System_String_o *FEPLAGOGJNL,System_String_o *LGKENDNKLOM,MethodInfo *method)

{
  System_String_o *JLNPKGGFFDD;
  
  if ((DAT_04568f6d & 1) == 0) {
    FUN_01bab630(&Method_KFJJHMDIFIG_AFEFCBEAJIN<BanzaiAppsFlyer>__);
    FUN_01bab630(&StringLiteral_2088/*": "*/);
    DAT_04568f6d = 1;
  }
  JLNPKGGFFDD = System_String__Concat(LGKENDNKLOM,StringLiteral_2088/*": "*/,FEPLAGOGJNL,(MethodInfo *)0x0);
  KFJJHMDIFIG__AFEFCBEAJIN<object>(JLNPKGGFFDD,Method_KFJJHMDIFIG_AFEFCBEAJIN<BanzaiAppsFlyer>__);
  return;
}


// ===== public void onAppOpenAttribution(string FGHHLNMENAA)  [RVA 0x35C7634]
// Core.Appsflyer.BanzaiAppsFlyer$$onAppOpenAttribution @ RVA 0x35C7634

void Core_Appsflyer_BanzaiAppsFlyer__onAppOpenAttribution
               (Core_Appsflyer_BanzaiAppsFlyer_o *__this,System_String_o *FGHHLNMENAA,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__object__o *value;
  UniRx_ReactiveEvent_Dictionary_string__object___o *__this_00;
  
  if ((DAT_04568f6e & 1) == 0) {
    FUN_01bab630(&AppsFlyerSDK_AppsFlyer_TypeInfo);
    FUN_01bab630(&Method_UniRx_ReactiveEvent<Dictionary<string,_object>>_Invoke__);
    FUN_01bab630(&StringLiteral_19995/*"onAppOpenAttribution"*/);
    DAT_04568f6e = 1;
  }
  Core_Appsflyer_BanzaiAppsFlyer__JHEIGLGFONB(FGHHLNMENAA,StringLiteral_19995/*"onAppOpenAttribution"*/,method);
  if ((AppsFlyerSDK_AppsFlyer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  value = AppsFlyerSDK_AppsFlyer__CallbackStringToDictionary(FGHHLNMENAA,(MethodInfo *)0x0);
  __this_00 = (__this->fields).HOJDFONEEJL;
  if (__this_00 != (UniRx_ReactiveEvent_Dictionary_string__object___o *)0x0) {
    UniRx_ReactiveEvent<object>__Invoke
              ((UniRx_ReactiveEvent_T__o *)__this_00,(Il2CppObject *)value,
               Method_UniRx_ReactiveEvent<Dictionary<string,_object>>_Invoke__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void EPKAEDHPBDE()  [RVA 0x35C76E8]
// Core.Appsflyer.BanzaiAppsFlyer$$EPKAEDHPBDE @ RVA 0x35C76E8

void Core_Appsflyer_BanzaiAppsFlyer__EPKAEDHPBDE
               (Core_Appsflyer_BanzaiAppsFlyer_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  HMEJGGGPIPL_o *pHVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
  if ((DAT_04568f6f & 1) == 0) {
    FUN_01bab630(&StringLiteral_5402/*"Disabled by EnablePurchaseConnector parameter! IAPRevenue will be sent via AF events."*/);
    auVar2 = FUN_01bab630(&StringLiteral_12367/*"StartPurchaseConnectorSDK"*/);
    DAT_04568f6f = 1;
  }
  pHVar1 = (__this->fields).KAPMLAAGDAI;
  if (pHVar1 != (HMEJGGGPIPL_o *)0x0) {
    if ((pHVar1->fields).INIMAINJABF != false) {
      return;
    }
    Core_Appsflyer_BanzaiAppsFlyer__JHEIGLGFONB(StringLiteral_5402/*"Disabled by EnablePurchaseConnector parameter! IAPRevenue will be sent via AF events."*/,StringLiteral_12367/*"StartPurchaseConnectorSDK"*/,in_x2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}


// ===== public void SendEvent(string ANIALDFEENL, Dictionary<string, string> KNLHDOAJDFE)  [RVA 0x35C7764]
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


// ===== public void onConversionDataSuccess(string CCMKMKGJKGE)  [RVA 0x35C77CC]
// Core.Appsflyer.BanzaiAppsFlyer$$onConversionDataSuccess @ RVA 0x35C77CC

void Core_Appsflyer_BanzaiAppsFlyer__onConversionDataSuccess
               (Core_Appsflyer_BanzaiAppsFlyer_o *__this,System_String_o *CCMKMKGJKGE,
               MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  DPEEIIAMANO_o *__this_00;
  MethodInfo *pMVar3;
  System_String_o *pSVar4;
  System_String_array *values;
  System_Globalization_CultureInfo_o *pSVar5;
  UniRx_ReactiveProperty_IEOKPOCAOKN__o *__this_01;
  System_Nullable_DateTime__o SVar6;
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  System_DateTime_Fields local_48;
  
  if ((DAT_04568f71 & 1) == 0) {
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&System_Globalization_CultureInfo_TypeInfo);
    FUN_01bab630(&DPEEIIAMANO_TypeInfo);
    FUN_01bab630(&System_DateTime_TypeInfo);
    FUN_01bab630(&Method_Newtonsoft_Json_JsonConvert_DeserializeObject<Dictionary<string,_object>>__
                );
    FUN_01bab630(&Newtonsoft_Json_JsonConvert_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<DateTime>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<DateTime>_get_HasValue__);
    FUN_01bab630(&Method_UniRx_ReactiveProperty<IEOKPOCAOKN>_set_Value__);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_20003/*"onConversionDataSuccess"*/);
    FUN_01bab630(&StringLiteral_2129/*"; InstallType: "*/);
    FUN_01bab630(&StringLiteral_2121/*"; Campaign: "*/);
    FUN_01bab630(&StringLiteral_15425/*"[AppsFlyer] InstallTime: "*/);
    FUN_01bab630(&StringLiteral_7963/*"IsFirstLaunch: {0};IsOrganic: {1};"*/);
    FUN_01bab630(&StringLiteral_2122/*"; ClickTime: "*/);
    FUN_01bab630(&StringLiteral_2131/*"; MediaSource: "*/);
    DAT_04568f71 = 1;
  }
  local_48._dateData = 0;
  Core_Appsflyer_BanzaiAppsFlyer__JHEIGLGFONB(CCMKMKGJKGE,StringLiteral_20003/*"onConversionDataSuccess"*/,method);
  if ((Newtonsoft_Json_JsonConvert_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pIVar2 = Newtonsoft_Json_JsonConvert__DeserializeObject<object>
                     (CCMKMKGJKGE,
                      Method_Newtonsoft_Json_JsonConvert_DeserializeObject<Dictionary<string,_object>>__
                     );
  if (pIVar2 == (Il2CppObject *)0x0) {
    return;
  }
  __this_00 = (DPEEIIAMANO_o *)thunk_FUN_01bda818(DPEEIIAMANO_TypeInfo);
  DPEEIIAMANO___ctor(__this_00,(System_Collections_Generic_IDictionary_string__object__o *)pIVar2,
                     (MethodInfo *)0x0);
  if (__this_00 != (DPEEIIAMANO_o *)0x0) {
    local_4c[0] = DPEEIIAMANO__DFLFJJIGABK(__this_00,(MethodInfo *)0x0);
    pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(bool_TypeInfo,local_4c);
    local_50[0] = DPEEIIAMANO__BJFKKEHOHAA(__this_00,(MethodInfo *)0x0);
    pMVar3 = (MethodInfo *)thunk_FUN_01bda448(bool_TypeInfo,local_50);
    pSVar4 = System_String__Format
                       (StringLiteral_7963/*"IsFirstLaunch: {0};IsOrganic: {1};"*/,pIVar2,(Il2CppObject *)pMVar3,(MethodInfo *)0x0);
    Core_Appsflyer_BanzaiAppsFlyer__JHEIGLGFONB(pSVar4,StringLiteral_20003/*"onConversionDataSuccess"*/,pMVar3);
    bVar1 = DPEEIIAMANO__BJFKKEHOHAA(__this_00,(MethodInfo *)0x0);
    if (!bVar1) {
      values = (System_String_array *)FUN_01bab718(string___TypeInfo,10);
      if (values == (System_String_array *)0x0) goto LAB_036c7c6c;
      if ((int)values->max_length == 0) {
LAB_036c7c68:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      values->m_Items[0] = StringLiteral_15425/*"[AppsFlyer] InstallTime: "*/;
      thunk_FUN_01c20e04();
      local_48._dateData = (uint64_t)DPEEIIAMANO__LPFMPDCPBDI(__this_00,(MethodInfo *)0x0);
      if ((System_Globalization_CultureInfo_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(System_Globalization_CultureInfo_TypeInfo);
      }
      pSVar5 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(System_DateTime_TypeInfo);
      }
      pMVar3 = (MethodInfo *)0x0;
      pSVar4 = System_DateTime__ToString
                         ((System_DateTime_o)&local_48,(System_IFormatProvider_o *)pSVar5,
                          (MethodInfo *)0x0);
      if ((uint)values->max_length < 2) goto LAB_036c7c68;
      values->m_Items[1] = pSVar4;
      thunk_FUN_01c20e04(values->m_Items + 1,pSVar4);
      if ((uint)values->max_length < 3) goto LAB_036c7c68;
      values->m_Items[2] = StringLiteral_2122/*"; ClickTime: "*/;
      thunk_FUN_01c20e04();
      SVar6 = DPEEIIAMANO__MEOPENGPLPL(__this_00,(MethodInfo *)0x0);
      if ((SVar6.fields._0_8_ & 0xff) == 0) {
        pSVar4 = (System_String_o *)0x0;
      }
      else {
        local_48 = SVar6.fields.value.fields._dateData.fields;
        if ((System_Globalization_CultureInfo_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar5 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
        if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(System_DateTime_TypeInfo);
        }
        pMVar3 = (MethodInfo *)0x0;
        pSVar4 = System_DateTime__ToString
                           ((System_DateTime_o)&local_48,(System_IFormatProvider_o *)pSVar5,
                            (MethodInfo *)0x0);
      }
      if ((uint)values->max_length < 4) goto LAB_036c7c68;
      values->m_Items[3] = pSVar4;
      thunk_FUN_01c20e04(values->m_Items + 3);
      if ((uint)values->max_length < 5) goto LAB_036c7c68;
      values->m_Items[4] = StringLiteral_2131/*"; MediaSource: "*/;
      thunk_FUN_01c20e04(values->m_Items + 4);
      pSVar4 = DPEEIIAMANO__BEDENMMHPAI(__this_00,(MethodInfo *)0x0);
      if ((uint)values->max_length < 6) goto LAB_036c7c68;
      values->m_Items[5] = pSVar4;
      thunk_FUN_01c20e04(values->m_Items + 5,pSVar4);
      if ((uint)values->max_length < 7) goto LAB_036c7c68;
      values->m_Items[6] = StringLiteral_2121/*"; Campaign: "*/;
      thunk_FUN_01c20e04(values->m_Items + 6);
      pSVar4 = DPEEIIAMANO__CFAPDJDKLEG(__this_00,(MethodInfo *)0x0);
      if ((uint)values->max_length < 8) goto LAB_036c7c68;
      values->m_Items[7] = pSVar4;
      thunk_FUN_01c20e04(values->m_Items + 7,pSVar4);
      if ((uint)values->max_length < 9) goto LAB_036c7c68;
      values->m_Items[8] = StringLiteral_2129/*"; InstallType: "*/;
      thunk_FUN_01c20e04(values->m_Items + 8);
      pSVar4 = DPEEIIAMANO__HMHBJILDFEI(__this_00,(MethodInfo *)0x0);
      if ((uint)values->max_length < 10) goto LAB_036c7c68;
      values->m_Items[9] = pSVar4;
      thunk_FUN_01c20e04();
      pSVar4 = System_String__Concat(values,(MethodInfo *)0x0);
      Core_Appsflyer_BanzaiAppsFlyer__JHEIGLGFONB(pSVar4,StringLiteral_20003/*"onConversionDataSuccess"*/,pMVar3);
    }
    __this_01 = (__this->fields).PLNAMMLBJAH;
    if (__this_01 != (UniRx_ReactiveProperty_IEOKPOCAOKN__o *)0x0) {
      UniRx_ReactiveProperty<object>__set_Value
                ((UniRx_ReactiveProperty_T__o *)__this_01,(Il2CppObject *)__this_00,
                 Method_UniRx_ReactiveProperty<IEOKPOCAOKN>_set_Value__);
      return;
    }
  }
LAB_036c7c6c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public IObservable<Dictionary<string, object>> get_PurchaseRevenueValidationInfoReceived()  [RVA 0x35C7C70]
// Core.Appsflyer.BanzaiAppsFlyer$$get_PurchaseRevenueValidationInfoReceived @ RVA 0x35C7C70

System_IObservable_Dictionary_string__object___o *
Core_Appsflyer_BanzaiAppsFlyer__get_PurchaseRevenueValidationInfoReceived
          (Core_Appsflyer_BanzaiAppsFlyer_o *__this,MethodInfo *method)

{
  return (System_IObservable_Dictionary_string__object___o *)(__this->fields).HDLIGAPCCAN;
}


// ===== public IObservable<string> get_DeepLink()  [RVA 0x35C7C78]
// Core.Appsflyer.BanzaiAppsFlyer$$get_DeepLink @ RVA 0x35C7C78

System_IObservable_string__o *
Core_Appsflyer_BanzaiAppsFlyer__get_DeepLink
          (Core_Appsflyer_BanzaiAppsFlyer_o *__this,MethodInfo *method)

{
  return (System_IObservable_string__o *)(__this->fields).ABBACAKGAAF;
}


// ===== public IObservable<IEOKPOCAOKN> get_ConversionData()  [RVA 0x35C7C80]
// Core.Appsflyer.BanzaiAppsFlyer$$get_ConversionData @ RVA 0x35C7C80

System_IObservable_IEOKPOCAOKN__o *
Core_Appsflyer_BanzaiAppsFlyer__get_ConversionData
          (Core_Appsflyer_BanzaiAppsFlyer_o *__this,MethodInfo *method)

{
  return (System_IObservable_IEOKPOCAOKN__o *)(__this->fields).PLNAMMLBJAH;
}


// ===== private static void FPILEMBEIDC(string FEPLAGOGJNL, string LGKENDNKLOM = "")  [RVA 0x35C7068]
// Core.Appsflyer.BanzaiAppsFlyer$$FPILEMBEIDC @ RVA 0x35C7068

void Core_Appsflyer_BanzaiAppsFlyer__FPILEMBEIDC
               (System_String_o *FEPLAGOGJNL,System_String_o *LGKENDNKLOM,MethodInfo *method)

{
  System_String_o *JLNPKGGFFDD;
  
  if ((DAT_04568f72 & 1) == 0) {
    FUN_01bab630(&Method_KFJJHMDIFIG_ONCJPMNKDIM<BanzaiAppsFlyer>__);
    FUN_01bab630(&StringLiteral_2088/*": "*/);
    DAT_04568f72 = 1;
  }
  JLNPKGGFFDD = System_String__Concat(LGKENDNKLOM,StringLiteral_2088/*": "*/,FEPLAGOGJNL,(MethodInfo *)0x0);
  KFJJHMDIFIG__ONCJPMNKDIM<object>(JLNPKGGFFDD,Method_KFJJHMDIFIG_ONCJPMNKDIM<BanzaiAppsFlyer>__);
  return;
}


// ===== private void FAKGPIAEEBB()  [RVA 0x35C7C88]
// Core.Appsflyer.BanzaiAppsFlyer$$FAKGPIAEEBB @ RVA 0x35C7C88

void Core_Appsflyer_BanzaiAppsFlyer__FAKGPIAEEBB
               (Core_Appsflyer_BanzaiAppsFlyer_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04568f73 & 1) == 0) {
    FUN_01bab630(&AppsFlyerSDK_AppsFlyer_TypeInfo);
    FUN_01bab630(&StringLiteral_12371/*"StartSDK"*/);
    FUN_01bab630(&StringLiteral_4541/*"Completed"*/);
    DAT_04568f73 = 1;
    method = extraout_x1;
  }
  if ((AppsFlyerSDK_AppsFlyer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(AppsFlyerSDK_AppsFlyer_TypeInfo,method);
  }
  AppsFlyerSDK_AppsFlyer__startSDK((MethodInfo *)0x0);
  Core_Appsflyer_BanzaiAppsFlyer__JHEIGLGFONB(StringLiteral_4541/*"Completed"*/,StringLiteral_12371/*"StartSDK"*/,in_x2);
  return;
}


// ===== private void LHNEBIPNIGD()  [RVA 0x35C7D0C]
// Core.Appsflyer.BanzaiAppsFlyer$$LHNEBIPNIGD @ RVA 0x35C7D0C

void Core_Appsflyer_BanzaiAppsFlyer__LHNEBIPNIGD
               (Core_Appsflyer_BanzaiAppsFlyer_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  HMEJGGGPIPL_o *pHVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
  if ((DAT_04568f74 & 1) == 0) {
    FUN_01bab630(&StringLiteral_12351/*"StartAdRevenueConnectorSDK"*/);
    auVar2 = FUN_01bab630(&StringLiteral_5401/*"Disabled by EnableAdRevenueConnector parameter! AdRevenue will be sent via AF events."*/);
    DAT_04568f74 = 1;
  }
  pHVar1 = (__this->fields).KAPMLAAGDAI;
  if (pHVar1 != (HMEJGGGPIPL_o *)0x0) {
    if ((pHVar1->fields).JJDKCNBKPBE != false) {
      return;
    }
    Core_Appsflyer_BanzaiAppsFlyer__JHEIGLGFONB(StringLiteral_5401/*"Disabled by EnableAdRevenueConnector parameter! AdRevenue will be sent via AF events."*/,StringLiteral_12351/*"StartAdRevenueConnectorSDK"*/,in_x2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}


// ===== public void SendAdRevenue(LADHIKFIKCJ OPAEPDIIOEB)  [RVA 0x35C7D88]
// Core.Appsflyer.BanzaiAppsFlyer$$SendAdRevenue @ RVA 0x35C7D88

void Core_Appsflyer_BanzaiAppsFlyer__SendAdRevenue
               (Core_Appsflyer_BanzaiAppsFlyer_o *__this,LADHIKFIKCJ_o *OPAEPDIIOEB,
               MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_String_o *pSVar2;
  HMEJGGGPIPL_o *pHVar3;
  System_Enum_o local_60;
  int32_t local_50;
  Il2CppMethodPointer local_48;
  
  if ((DAT_04568f75 & 1) == 0) {
    FUN_01bab630(&AppsFlyerSDK_AppsFlyer_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_string>_TypeInfo);
    FUN_01bab630(&ENMDKAIJNGC_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<double>_GetValueOrDefault__);
    FUN_01bab630(&StringLiteral_16318/*"ad_unit"*/);
    FUN_01bab630(&StringLiteral_16366/*"af_currency"*/);
    FUN_01bab630(&StringLiteral_17973/*"ecpm_payload"*/);
    FUN_01bab630(&StringLiteral_19737/*"monetization_network"*/);
    FUN_01bab630(&StringLiteral_17405/*"country"*/);
    FUN_01bab630(&StringLiteral_19641/*"mediation_network"*/);
    FUN_01bab630(&StringLiteral_16371/*"af_revenue"*/);
    FUN_01bab630(&StringLiteral_16317/*"ad_type"*/);
    FUN_01bab630(&StringLiteral_16363/*"af_ad_revenue"*/);
    FUN_01bab630(&StringLiteral_20215/*"placement"*/);
    DAT_04568f75 = 1;
  }
  local_48 = (Il2CppMethodPointer)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_string>_TypeInfo);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this_00,Method_System_Collections_Generic_Dictionary<string,_string>__ctor__);
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this_00,StringLiteral_17405/*"country"*/,(Il2CppObject *)(OPAEPDIIOEB->fields).CEMIOJCCGLJ,
               Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this_00,StringLiteral_16318/*"ad_unit"*/,(Il2CppObject *)(OPAEPDIIOEB->fields).CHJCLDMEGKG,
               Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this_00,StringLiteral_16317/*"ad_type"*/,(Il2CppObject *)(OPAEPDIIOEB->fields).CHGKLFADPLD,
               Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this_00,StringLiteral_20215/*"placement"*/,(Il2CppObject *)(OPAEPDIIOEB->fields).IDHKJLAMGJD,
               Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
    bVar1 = PCOEHCPGBBG__EDHHJAMCOJH((OPAEPDIIOEB->fields).FDBMKCCNBNI,(MethodInfo *)0x0);
    if (!bVar1) {
      System_Collections_Generic_Dictionary<object,_object>__Add
                (__this_00,StringLiteral_17973/*"ecpm_payload"*/,(Il2CppObject *)(OPAEPDIIOEB->fields).FDBMKCCNBNI,
                 Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
    }
    pHVar3 = (__this->fields).KAPMLAAGDAI;
    if (pHVar3 != (HMEJGGGPIPL_o *)0x0) {
      if ((pHVar3->fields).JJDKCNBKPBE == false) {
        local_60.klass = (System_Enum_c *)ENMDKAIJNGC_TypeInfo;
        local_60.monitor = (void *)0xffffffffffffffff;
        local_50 = (OPAEPDIIOEB->fields).JNKLGAJMIDI;
        pSVar2 = System_Enum__ToString(&local_60,(MethodInfo *)0x0);
        System_Collections_Generic_Dictionary<object,_object>__Add
                  (__this_00,StringLiteral_19641/*"mediation_network"*/,(Il2CppObject *)pSVar2,
                   Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
        System_Collections_Generic_Dictionary<object,_object>__Add
                  (__this_00,StringLiteral_19737/*"monetization_network"*/,(Il2CppObject *)(OPAEPDIIOEB->fields).LKLPHMLAFFH,
                   Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
        local_48 = (Il2CppMethodPointer)(OPAEPDIIOEB->fields).IHEKPOBGEJC.fields.value;
        pSVar2 = System_Double__ToString((double)local_48,(MethodInfo *)&stack0xffffffffffffffb8);
        System_Collections_Generic_Dictionary<object,_object>__Add
                  (__this_00,StringLiteral_16371/*"af_revenue"*/,(Il2CppObject *)pSVar2,
                   Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
        System_Collections_Generic_Dictionary<object,_object>__Add
                  (__this_00,StringLiteral_16366/*"af_currency"*/,(Il2CppObject *)(OPAEPDIIOEB->fields).IEINLOAOCLD,
                   Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
        if ((AppsFlyerSDK_AppsFlyer_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        AppsFlyerSDK_AppsFlyer__sendEvent
                  (StringLiteral_16363/*"af_ad_revenue"*/,
                   (System_Collections_Generic_Dictionary_string__string__o *)__this_00,
                   (MethodInfo *)0x0);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void onConversionDataFail(string EHKEOHNBLCK)  [RVA 0x35C8050]
// Core.Appsflyer.BanzaiAppsFlyer$$onConversionDataFail @ RVA 0x35C8050

void Core_Appsflyer_BanzaiAppsFlyer__onConversionDataFail
               (Core_Appsflyer_BanzaiAppsFlyer_o *__this,System_String_o *EHKEOHNBLCK,
               MethodInfo *method)

{
  if ((DAT_04568f76 & 1) == 0) {
    FUN_01bab630(&StringLiteral_20002/*"onConversionDataFail"*/);
    DAT_04568f76 = 1;
  }
  Core_Appsflyer_BanzaiAppsFlyer__JHEIGLGFONB(EHKEOHNBLCK,StringLiteral_20002/*"onConversionDataFail"*/,method);
  return;
}


// ===== private void JGMECBJEPDL(Action<string> JLPMKKKMANE)  [RVA 0x35C8098]
// Core.Appsflyer.BanzaiAppsFlyer$$JGMECBJEPDL @ RVA 0x35C8098

void Core_Appsflyer_BanzaiAppsFlyer__JGMECBJEPDL
               (Core_Appsflyer_BanzaiAppsFlyer_o *__this,System_Action_string__o *JLPMKKKMANE,
               MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  HMEJGGGPIPL_o *pHVar3;
  CPHBJEDCAEO_c *pCVar4;
  ulong uVar5;
  int32_t *piVar6;
  CPHBJEDCAEO_o *pCVar7;
  
  if ((DAT_04568f77 & 1) == 0) {
    FUN_01bab630(&CPHBJEDCAEO_TypeInfo);
    DAT_04568f77 = 1;
  }
  pHVar3 = (__this->fields).KAPMLAAGDAI;
  if ((pHVar3 == (HMEJGGGPIPL_o *)0x0) ||
     (pCVar7 = (pHVar3->fields).LODCOBPDCIB, pCVar7 == (CPHBJEDCAEO_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pCVar4 = pCVar7->klass;
  uVar1._0_1_ = (pCVar4->_2).rank;
  uVar1._1_1_ = (pCVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pCVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)CPHBJEDCAEO_TypeInfo) {
        pVVar2 = pCVar4->vtable + (*piVar6 + 1);
        goto LAB_036c8130;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pCVar7,CPHBJEDCAEO_TypeInfo,1);
LAB_036c8130:
                    /* WARNING: Could not recover jumptable at 0x036c8144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pCVar7,JLPMKKKMANE,pVVar2->method);
  return;
}


// ===== private void PHDNKLHEHLB(HKIFKIPAKPD OPAEPDIIOEB)  [RVA 0x35C814C]
// Core.Appsflyer.BanzaiAppsFlyer$$PHDNKLHEHLB @ RVA 0x35C814C

void Core_Appsflyer_BanzaiAppsFlyer__PHDNKLHEHLB
               (Core_Appsflyer_BanzaiAppsFlyer_o *__this,HKIFKIPAKPD_o *OPAEPDIIOEB,
               MethodInfo *method)

{
  int iVar1;
  System_String_o *pSVar2;
  System_String_o *FEPLAGOGJNL;
  UniRx_ReactiveProperty_string__o *__this_00;
  Il2CppObject *arg0;
  MethodInfo *pMVar3;
  undefined8 *puVar4;
  int32_t local_34;
  
  if ((DAT_04568f78 & 1) == 0) {
    FUN_01bab630(&KMJOGOLBCGM_TypeInfo);
    FUN_01bab630(&Method_UniRx_ReactiveProperty<string>_set_Value__);
    FUN_01bab630(&StringLiteral_7529/*"Initialize"*/);
    FUN_01bab630(&StringLiteral_5244/*"Deeplink event args is null"*/);
    FUN_01bab630(&StringLiteral_9612/*"Not found"*/);
    FUN_01bab630(&StringLiteral_9861/*"OnDeepLinkReceived called"*/);
    FUN_01bab630(&StringLiteral_17755/*"dl: "*/);
    FUN_01bab630(&StringLiteral_5239/*"Deep link error: {0}"*/);
    DAT_04568f78 = 1;
  }
  Core_Appsflyer_BanzaiAppsFlyer__JHEIGLGFONB(StringLiteral_9861/*"OnDeepLinkReceived called"*/,StringLiteral_7529/*"Initialize"*/,method);
  if (OPAEPDIIOEB == (HKIFKIPAKPD_o *)0x0) {
    puVar4 = &StringLiteral_5244/*"Deeplink event args is null"*/;
  }
  else {
    iVar1 = (OPAEPDIIOEB->fields)._LJLAFDKAGDO_k__BackingField;
    if (iVar1 != 1) {
      if (iVar1 != 0) {
        local_34 = (OPAEPDIIOEB->fields)._MOJCLOIDJFG_k__BackingField;
        arg0 = (Il2CppObject *)thunk_FUN_01bda448(KMJOGOLBCGM_TypeInfo,&local_34);
        pMVar3 = (MethodInfo *)0x0;
        pSVar2 = System_String__Format(StringLiteral_5239/*"Deep link error: {0}"*/,arg0,(MethodInfo *)0x0);
        Core_Appsflyer_BanzaiAppsFlyer__JHEIGLGFONB(pSVar2,StringLiteral_7529/*"Initialize"*/,pMVar3);
        return;
      }
      pSVar2 = HKIFKIPAKPD__FGIBCKHKLMN(OPAEPDIIOEB,(MethodInfo *)0x0);
      pMVar3 = (MethodInfo *)0x0;
      FEPLAGOGJNL = System_String__Concat(StringLiteral_17755/*"dl: "*/,pSVar2,(MethodInfo *)0x0);
      Core_Appsflyer_BanzaiAppsFlyer__JHEIGLGFONB(FEPLAGOGJNL,StringLiteral_7529/*"Initialize"*/,pMVar3);
      __this_00 = (__this->fields).ABBACAKGAAF;
      if (__this_00 != (UniRx_ReactiveProperty_string__o *)0x0) {
        UniRx_ReactiveProperty<object>__set_Value
                  ((UniRx_ReactiveProperty_T__o *)__this_00,(Il2CppObject *)pSVar2,
                   Method_UniRx_ReactiveProperty<string>_set_Value__);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    puVar4 = &StringLiteral_9612/*"Not found"*/;
  }
  Core_Appsflyer_BanzaiAppsFlyer__JHEIGLGFONB((System_String_o *)*puVar4,StringLiteral_7529/*"Initialize"*/,method);
  return;
}


// ===== private void AKNCLCJGNHB()  [RVA 0x35C82F0]
// Core.Appsflyer.BanzaiAppsFlyer$$AKNCLCJGNHB @ RVA 0x35C82F0

void Core_Appsflyer_BanzaiAppsFlyer__AKNCLCJGNHB
               (Core_Appsflyer_BanzaiAppsFlyer_o *__this,MethodInfo *method)

{
  System_String_o *IPOFCPDLEIO;
  KPKMEEIPCJA_o *pKVar1;
  System_String_o *KJANCFIINNI;
  MJPJANJNDCI_KDKLBPLOHJL__o *pMVar2;
  ushort uVar3;
  ushort uVar4;
  VirtualInvokeData *pVVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  HMEJGGGPIPL_o *pHVar8;
  MJPJANJNDCI_KDKLBPLOHJL__c *pMVar9;
  KPKMEEIPCJA_c *pKVar10;
  ulong uVar11;
  int32_t *piVar12;
  
  if ((DAT_04568f79 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&AppsFlyerSDK_AppsFlyer_TypeInfo);
    FUN_01bab630(&Method_Core_Appsflyer_BanzaiAppsFlyer_ODJCOCHEAIN__);
    FUN_01bab630(&KPKMEEIPCJA_TypeInfo);
    FUN_01bab630(&MJPJANJNDCI<KDKLBPLOHJL>_TypeInfo);
    DAT_04568f79 = 1;
    method = extraout_x1;
  }
  pHVar8 = (__this->fields).KAPMLAAGDAI;
  if (pHVar8 != (HMEJGGGPIPL_o *)0x0) {
    IPOFCPDLEIO = (pHVar8->fields).HLJHFHJDNKL;
    KJANCFIINNI = (pHVar8->fields).FBCCIDDHLPP;
    if ((AppsFlyerSDK_AppsFlyer_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(AppsFlyerSDK_AppsFlyer_TypeInfo,method);
    }
    AppsFlyerSDK_AppsFlyer__initSDK
              (IPOFCPDLEIO,KJANCFIINNI,(UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
    pHVar8 = (__this->fields).KAPMLAAGDAI;
    if (pHVar8 != (HMEJGGGPIPL_o *)0x0) {
      AppsFlyerSDK_AppsFlyer__setIsDebug((pHVar8->fields).KGIDNENGGEO,(MethodInfo *)0x0);
      pHVar8 = (__this->fields).KAPMLAAGDAI;
      if (pHVar8 != (HMEJGGGPIPL_o *)0x0) {
        Core_Appsflyer_BanzaiAppsFlyer__EBIAIHOGEEG((pHVar8->fields).OGEJHINLEND,method_00);
        pHVar8 = (__this->fields).KAPMLAAGDAI;
        if (pHVar8 != (HMEJGGGPIPL_o *)0x0) {
          if ((pHVar8->fields).BOGHJANCLLO == (KPKMEEIPCJA_o *)0x0) {
            Core_Appsflyer_BanzaiAppsFlyer__ODJCOCHEAIN(__this,method_01);
            return;
          }
          if ((AppsFlyerSDK_AppsFlyer_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          AppsFlyerSDK_AppsFlyer__enableTCFDataCollection(true,(MethodInfo *)0x0);
          pHVar8 = (__this->fields).KAPMLAAGDAI;
          if (pHVar8 != (HMEJGGGPIPL_o *)0x0) {
            pKVar1 = (pHVar8->fields).BOGHJANCLLO;
            pMVar2 = (pHVar8->fields).AEPDHPHNMMG;
            if (pMVar2 == (MJPJANJNDCI_KDKLBPLOHJL__o *)0x0) {
              uVar6 = 0;
            }
            else {
              pMVar9 = pMVar2->klass;
              uVar3._0_1_ = (pMVar9->_2).rank;
              uVar3._1_1_ = (pMVar9->_2).minimumAlignment;
              uVar11 = (ulong)uVar3;
              if (uVar11 != 0) {
                piVar12 = &((pMVar9->_1).interfaceOffsets)->offset;
                do {
                  if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
                      (Il2CppClass *)MJPJANJNDCI<KDKLBPLOHJL>_TypeInfo) {
                    pVVar5 = pMVar9->vtable + *piVar12;
                    goto LAB_036c8470;
                  }
                  uVar11 = uVar11 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar11 != 0);
              }
              pVVar5 = (VirtualInvokeData *)FUN_01b81914(pMVar2,MJPJANJNDCI<KDKLBPLOHJL>_TypeInfo,0)
              ;
LAB_036c8470:
              uVar6 = (*pVVar5->methodPtr)(pMVar2,pVVar5->method);
            }
            uVar7 = thunk_FUN_01bda818(System_Action_TypeInfo);
            System_Action___ctor();
            if (pKVar1 != (KPKMEEIPCJA_o *)0x0) {
              pKVar10 = pKVar1->klass;
              uVar4._0_1_ = (pKVar10->_2).rank;
              uVar4._1_1_ = (pKVar10->_2).minimumAlignment;
              uVar11 = (ulong)uVar4;
              if (uVar11 != 0) {
                piVar12 = &((pKVar10->_1).interfaceOffsets)->offset;
                do {
                  if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
                      (Il2CppClass *)KPKMEEIPCJA_TypeInfo) {
                    pVVar5 = pKVar10->vtable + (*piVar12 + 3);
                    goto LAB_036c84f8;
                  }
                  uVar11 = uVar11 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar11 != 0);
              }
              pVVar5 = (VirtualInvokeData *)FUN_01b81914(pKVar1,KPKMEEIPCJA_TypeInfo,3);
LAB_036c84f8:
                    /* WARNING: Could not recover jumptable at 0x036c8514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pVVar5->methodPtr)(pKVar1,uVar6,uVar7,pVVar5->method);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Setup(HMEJGGGPIPL COJAKLBIHGG)  [RVA 0x35C86FC]
// Core.Appsflyer.BanzaiAppsFlyer$$Setup @ RVA 0x35C86FC

void Core_Appsflyer_BanzaiAppsFlyer__Setup
               (Core_Appsflyer_BanzaiAppsFlyer_o *__this,HMEJGGGPIPL_o *COJAKLBIHGG,
               MethodInfo *method)

{
  (__this->fields).KAPMLAAGDAI = COJAKLBIHGG;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void SendIAPRevenue(HNOIHFFENNC OPAEPDIIOEB)  [RVA 0x35C8704]
// Core.Appsflyer.BanzaiAppsFlyer$$SendIAPRevenue @ RVA 0x35C8704

void Core_Appsflyer_BanzaiAppsFlyer__SendIAPRevenue
               (Core_Appsflyer_BanzaiAppsFlyer_o *__this,HNOIHFFENNC_o *OPAEPDIIOEB,
               MethodInfo *method)

{
  undefined8 *puVar1;
  bool bVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_String_o *pSVar3;
  HMEJGGGPIPL_o *pHVar4;
  
  if ((DAT_04568f7a & 1) == 0) {
    FUN_01bab630(&AppsFlyerSDK_AppsFlyer_TypeInfo);
    FUN_01bab630(&System_Decimal_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_string>_TypeInfo);
    FUN_01bab630(&StringLiteral_16368/*"af_purchase"*/);
    FUN_01bab630(&StringLiteral_16366/*"af_currency"*/);
    FUN_01bab630(&StringLiteral_16364/*"af_content_id"*/);
    FUN_01bab630(&StringLiteral_16365/*"af_content_type"*/);
    FUN_01bab630(&StringLiteral_16369/*"af_purchase_sub"*/);
    FUN_01bab630(&StringLiteral_16370/*"af_receipt_id"*/);
    FUN_01bab630(&StringLiteral_16371/*"af_revenue"*/);
    DAT_04568f7a = 1;
  }
  pHVar4 = (__this->fields).KAPMLAAGDAI;
  if (pHVar4 != (HMEJGGGPIPL_o *)0x0) {
    if (((pHVar4->fields).INIMAINJABF != false) &&
       (((ulong)(OPAEPDIIOEB->fields).IEINLOAOCLD & 1) == 0)) {
      return;
    }
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_string>_TypeInfo);
    System_Collections_Generic_Dictionary<object,_object>___ctor
              (__this_00,Method_System_Collections_Generic_Dictionary<string,_string>__ctor__);
    if ((System_Decimal_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar3 = System_Decimal__ToString(&(OPAEPDIIOEB->fields).IHEKPOBGEJC,(MethodInfo *)0x0);
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object,_object>__Add
                (__this_00,StringLiteral_16371/*"af_revenue"*/,(Il2CppObject *)pSVar3,
                 Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
      System_Collections_Generic_Dictionary<object,_object>__Add
                (__this_00,StringLiteral_16365/*"af_content_type"*/,(Il2CppObject *)(OPAEPDIIOEB->fields).ODNJEBGJAAD,
                 Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
      System_Collections_Generic_Dictionary<object,_object>__Add
                (__this_00,StringLiteral_16364/*"af_content_id"*/,(Il2CppObject *)(OPAEPDIIOEB->fields).IIHFLLPKBJI,
                 Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
      System_Collections_Generic_Dictionary<object,_object>__Add
                (__this_00,StringLiteral_16366/*"af_currency"*/,
                 (Il2CppObject *)(OPAEPDIIOEB->fields).IHEKPOBGEJC.fields.ulomidLE,
                 Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
      bVar2 = PCOEHCPGBBG__EDHHJAMCOJH((OPAEPDIIOEB->fields).AIKDONIPAMF,(MethodInfo *)0x0);
      if (!bVar2) {
        System_Collections_Generic_Dictionary<object,_object>__Add
                  (__this_00,StringLiteral_16370/*"af_receipt_id"*/,(Il2CppObject *)(OPAEPDIIOEB->fields).AIKDONIPAMF,
                   Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
      }
      puVar1 = &StringLiteral_16369/*"af_purchase_sub"*/;
      if ((OPAEPDIIOEB->fields).PIGNHMJGDHM != 2) {
        puVar1 = &StringLiteral_16368/*"af_purchase"*/;
      }
      pSVar3 = (System_String_o *)*puVar1;
      if ((AppsFlyerSDK_AppsFlyer_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      AppsFlyerSDK_AppsFlyer__sendEvent
                (pSVar3,(System_Collections_Generic_Dictionary_string__string__o *)__this_00,
                 (MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void ODJCOCHEAIN()  [RVA 0x35C85F8]
// Core.Appsflyer.BanzaiAppsFlyer$$ODJCOCHEAIN @ RVA 0x35C85F8

void Core_Appsflyer_BanzaiAppsFlyer__ODJCOCHEAIN
               (Core_Appsflyer_BanzaiAppsFlyer_o *__this,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  undefined8 extraout_x0;
  UniRx_ReactiveProperty_bool__o *__this_00;
  undefined8 extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  HMEJGGGPIPL_o *pHVar3;
  KPKMEEIPCJA_c *pKVar4;
  ulong uVar5;
  int32_t *piVar6;
  KPKMEEIPCJA_o *pKVar7;
  undefined1 auVar8 [16];
  
  auVar8._8_8_ = method;
  auVar8._0_8_ = __this;
  if ((DAT_04568f7b & 1) == 0) {
    FUN_01bab630(&KPKMEEIPCJA_TypeInfo);
    auVar8 = FUN_01bab630(&Method_UniRx_ReactiveProperty<bool>_set_Value__);
    DAT_04568f7b = 1;
  }
  pHVar3 = (__this->fields).KAPMLAAGDAI;
  if (pHVar3 != (HMEJGGGPIPL_o *)0x0) {
    pKVar7 = (pHVar3->fields).BOGHJANCLLO;
    if (pKVar7 != (KPKMEEIPCJA_o *)0x0) {
      pKVar4 = pKVar7->klass;
      uVar1._0_1_ = (pKVar4->_2).rank;
      uVar1._1_1_ = (pKVar4->_2).minimumAlignment;
      uVar5 = (ulong)uVar1;
      if (uVar5 != 0) {
        piVar6 = &((pKVar4->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
              (Il2CppClass *)KPKMEEIPCJA_TypeInfo) {
            pVVar2 = pKVar4->vtable + (*piVar6 + 1);
            goto LAB_036c8698;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      pVVar2 = (VirtualInvokeData *)FUN_01b81914(pKVar7,KPKMEEIPCJA_TypeInfo,1);
LAB_036c8698:
      auVar8 = (*pVVar2->methodPtr)(pKVar7,pVVar2->method);
      if ((auVar8._0_4_ | 2) == 3) {
        Core_Appsflyer_BanzaiAppsFlyer__BLPABBKBKDK(__this,auVar8._8_8_);
        auVar8._8_8_ = extraout_x1;
        auVar8._0_8_ = extraout_x0;
      }
    }
    Core_Appsflyer_BanzaiAppsFlyer__FAKGPIAEEBB(auVar8._0_8_,auVar8._8_8_);
    Core_Appsflyer_BanzaiAppsFlyer__LHNEBIPNIGD(__this,method_00);
    Core_Appsflyer_BanzaiAppsFlyer__EPKAEDHPBDE(__this,method_01);
    Core_Appsflyer_BanzaiAppsFlyer__EBPAPDBEPKM(__this,method_02);
    __this_00 = (__this->fields).ECCPBJGMNPE;
    if (__this_00 != (UniRx_ReactiveProperty_bool__o *)0x0) {
      UniRx_ReactiveProperty<bool>__set_Value
                (__this_00,true,Method_UniRx_ReactiveProperty<bool>_set_Value__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void EBIAIHOGEEG(string EEENOGBEICG)  [RVA 0x35C851C]
// Core.Appsflyer.BanzaiAppsFlyer$$EBIAIHOGEEG @ RVA 0x35C851C

void Core_Appsflyer_BanzaiAppsFlyer__EBIAIHOGEEG(System_String_o *EEENOGBEICG,MethodInfo *method)

{
  bool bVar1;
  System_String_o *FEPLAGOGJNL;
  MethodInfo *method_00;
  
  if ((DAT_04568f7c & 1) == 0) {
    FUN_01bab630(&AppsFlyerSDK_AppsFlyer_TypeInfo);
    FUN_01bab630(&StringLiteral_11924/*"SetUserIdentifier"*/);
    FUN_01bab630(&StringLiteral_14624/*"User ID must be set to avoid losing of events!"*/);
    FUN_01bab630(&StringLiteral_11925/*"SetUserIdentifier: "*/);
    DAT_04568f7c = 1;
  }
  method_00 = (MethodInfo *)0x0;
  FEPLAGOGJNL = System_String__Concat(StringLiteral_11925/*"SetUserIdentifier: "*/,EEENOGBEICG,(MethodInfo *)0x0);
  Core_Appsflyer_BanzaiAppsFlyer__JHEIGLGFONB(FEPLAGOGJNL,StringLiteral_11924/*"SetUserIdentifier"*/,method_00);
  bVar1 = System_String__IsNullOrWhiteSpace(EEENOGBEICG,(MethodInfo *)0x0);
  if (bVar1) {
    Core_Appsflyer_BanzaiAppsFlyer__MCJHDFDBCHK(StringLiteral_14624/*"User ID must be set to avoid losing of events!"*/,StringLiteral_11924/*"SetUserIdentifier"*/,method_00);
    return;
  }
  if ((AppsFlyerSDK_AppsFlyer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  AppsFlyerSDK_AppsFlyer__setCustomerUserId(EEENOGBEICG,(MethodInfo *)0x0);
  return;
}


// ===== public void Initialize()  [RVA 0x35C8948]
// Core.Appsflyer.BanzaiAppsFlyer$$Initialize @ RVA 0x35C8948

void Core_Appsflyer_BanzaiAppsFlyer__Initialize
               (Core_Appsflyer_BanzaiAppsFlyer_o *__this,MethodInfo *method)

{
  System_Func_Action_GAHKDMDKMBP___EventHandler__o **ppSVar1;
  System_Action_EventHandler__o **ppSVar2;
  System_IObservable_TEventArgs__o *pSVar3;
  System_IObservable_T__array *seconds;
  System_IObservable_TEventArgs__o *pSVar4;
  long lVar5;
  System_IObservable_T__o *pSVar6;
  System_Action_GAHKDMDKMBP__o **ppSVar7;
  Il2CppObject *pIVar8;
  System_Func_Action_HKIFKIPAKPD___EventHandler__o **ppSVar9;
  System_Action_T__o *onNext;
  undefined8 uVar10;
  MethodInfo *method_00;
  MethodInfo *in_x2;
  System_Func_Action_GAHKDMDKMBP___EventHandler__o *pSVar11;
  System_Func_Action_HKIFKIPAKPD___EventHandler__o *conversion;
  System_Action_EventHandler__o *pSVar12;
  System_Action_GAHKDMDKMBP__o *onNext_00;
  System_Action_EventHandler__o *pSVar13;
  
  if ((DAT_04568f7d & 1) == 0) {
    FUN_01bab630(&System_Action<GAHKDMDKMBP>_TypeInfo);
    FUN_01bab630(&System_Action<HKIFKIPAKPD>_TypeInfo);
    FUN_01bab630(&System_Action<EventHandler>_TypeInfo);
    FUN_01bab630(&Method_Core_Appsflyer_BanzaiAppsFlyer_PHDNKLHEHLB__);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<ReactiveProperty<IEOKPOCAOKN>>__);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<ReactiveProperty<string>>__);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<ReactiveProperty<bool>>__);
    FUN_01bab630(&System_Func<Action<GAHKDMDKMBP>,_EventHandler>_TypeInfo);
    FUN_01bab630(&System_Func<Action<HKIFKIPAKPD>,_EventHandler>_TypeInfo);
    FUN_01bab630(&System_IObservable<GAHKDMDKMBP>___TypeInfo);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<GAHKDMDKMBP>__);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<HKIFKIPAKPD>__);
    FUN_01bab630(&Method_UniRx_Observable_FromEvent<EventHandler,_GAHKDMDKMBP>__);
    FUN_01bab630(&Method_UniRx_Observable_FromEvent<EventHandler,_HKIFKIPAKPD>__);
    FUN_01bab630(&Method_UniRx_Observable_Merge<GAHKDMDKMBP>__);
    FUN_01bab630(&Method_UniRx_Observable_ObserveOnMainThread<GAHKDMDKMBP>__);
    FUN_01bab630(&Method_UniRx_Observable_ObserveOnMainThread<HKIFKIPAKPD>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    FUN_01bab630(&Method_Core_Appsflyer_BanzaiAppsFlyer_<>c_AHIJIKNDNIH__);
    FUN_01bab630(&Method_Core_Appsflyer_BanzaiAppsFlyer_<>c_CCNADDCPJLL__);
    FUN_01bab630(&Method_Core_Appsflyer_BanzaiAppsFlyer_<>c_EDOLMADOILP__);
    FUN_01bab630(&Method_Core_Appsflyer_BanzaiAppsFlyer_<>c_JJOFPPIABIN__);
    FUN_01bab630(&Method_Core_Appsflyer_BanzaiAppsFlyer_<>c_JOOFMCDPKNJ__);
    FUN_01bab630(&Method_Core_Appsflyer_BanzaiAppsFlyer_<>c_LMCCPOFOLJP__);
    FUN_01bab630(&Method_Core_Appsflyer_BanzaiAppsFlyer_<>c_MJFMJGDCOJN__);
    FUN_01bab630(&Method_Core_Appsflyer_BanzaiAppsFlyer_<>c_OKDCPONBMGK__);
    FUN_01bab630(&Method_Core_Appsflyer_BanzaiAppsFlyer_<>c_PGJBENOICCH__);
    FUN_01bab630(&Method_Core_Appsflyer_BanzaiAppsFlyer_<>c_PHKGAEECBCO__);
    FUN_01bab630(&Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_7529/*"Initialize"*/);
    DAT_04568f7d = 1;
  }
  if ((__this->fields).HHBJPFMJEHK != false) {
    return;
  }
  (__this->fields).HHBJPFMJEHK = true;
  Core_Appsflyer_BanzaiAppsFlyer__JHEIGLGFONB(StringLiteral_7529/*"Initialize"*/,StringLiteral_7529/*"Initialize"*/,in_x2);
  if ((Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar11 = Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->static_fields->__9__18_0;
  if (pSVar11 == (System_Func_Action_GAHKDMDKMBP___EventHandler__o *)0x0) {
    if ((Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar11 = (System_Func_Action_GAHKDMDKMBP___EventHandler__o *)
              thunk_FUN_01bda818(System_Func<Action<GAHKDMDKMBP>,_EventHandler>_TypeInfo);
    System_Func<object,_object>___ctor();
    ppSVar1 = &Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->static_fields->__9__18_0;
    *ppSVar1 = pSVar11;
    thunk_FUN_01c20e04(ppSVar1,pSVar11);
  }
  if ((Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar12 = Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->static_fields->__9__18_1;
  if (pSVar12 == (System_Action_EventHandler__o *)0x0) {
    if ((Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar12 = (System_Action_EventHandler__o *)
              thunk_FUN_01bda818(System_Action<EventHandler>_TypeInfo);
    System_Action<object>___ctor();
    ppSVar2 = &Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->static_fields->__9__18_1;
    *ppSVar2 = pSVar12;
    thunk_FUN_01c20e04(ppSVar2,pSVar12);
  }
  if ((Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar13 = Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->static_fields->__9__18_2;
  if (pSVar13 == (System_Action_EventHandler__o *)0x0) {
    if ((Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar13 = (System_Action_EventHandler__o *)
              thunk_FUN_01bda818(System_Action<EventHandler>_TypeInfo);
    System_Action<object>___ctor();
    ppSVar2 = &Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->static_fields->__9__18_2;
    *ppSVar2 = pSVar13;
    thunk_FUN_01c20e04(ppSVar2,pSVar13);
  }
  if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar3 = UniRx_Observable__FromEvent<object,_object>
                     ((System_Func_Action_TEventArgs___TDelegate__o *)pSVar11,
                      (System_Action_TDelegate__o *)pSVar12,(System_Action_TDelegate__o *)pSVar13,
                      Method_UniRx_Observable_FromEvent<EventHandler,_GAHKDMDKMBP>__);
  seconds = (System_IObservable_T__array *)
            FUN_01bab718(System_IObservable<GAHKDMDKMBP>___TypeInfo,1);
  if ((Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo);
  }
  pSVar11 = Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->static_fields->__9__18_3;
  if (pSVar11 == (System_Func_Action_GAHKDMDKMBP___EventHandler__o *)0x0) {
    if ((Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo);
    }
    pSVar11 = (System_Func_Action_GAHKDMDKMBP___EventHandler__o *)
              thunk_FUN_01bda818(System_Func<Action<GAHKDMDKMBP>,_EventHandler>_TypeInfo);
    System_Func<object,_object>___ctor();
    ppSVar1 = &Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->static_fields->__9__18_3;
    *ppSVar1 = pSVar11;
    thunk_FUN_01c20e04(ppSVar1,pSVar11);
  }
  if ((Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo);
  }
  pSVar12 = Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->static_fields->__9__18_4;
  if (pSVar12 == (System_Action_EventHandler__o *)0x0) {
    if ((Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo);
    }
    pSVar12 = (System_Action_EventHandler__o *)
              thunk_FUN_01bda818(System_Action<EventHandler>_TypeInfo);
    System_Action<object>___ctor();
    ppSVar2 = &Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->static_fields->__9__18_4;
    *ppSVar2 = pSVar12;
    thunk_FUN_01c20e04(ppSVar2,pSVar12);
  }
  if ((Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo);
  }
  pSVar13 = Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->static_fields->__9__18_5;
  if (pSVar13 == (System_Action_EventHandler__o *)0x0) {
    if ((Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo);
    }
    pSVar13 = (System_Action_EventHandler__o *)
              thunk_FUN_01bda818(System_Action<EventHandler>_TypeInfo);
    System_Action<object>___ctor();
    ppSVar2 = &Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->static_fields->__9__18_5;
    *ppSVar2 = pSVar13;
    thunk_FUN_01c20e04(ppSVar2,pSVar13);
  }
  if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar4 = UniRx_Observable__FromEvent<object,_object>
                     ((System_Func_Action_TEventArgs___TDelegate__o *)pSVar11,
                      (System_Action_TDelegate__o *)pSVar12,(System_Action_TDelegate__o *)pSVar13,
                      Method_UniRx_Observable_FromEvent<EventHandler,_GAHKDMDKMBP>__);
  if (seconds != (System_IObservable_T__array *)0x0) {
    if ((pSVar4 != (System_IObservable_TEventArgs__o *)0x0) &&
       (lVar5 = thunk_FUN_01bda71c(pSVar4,(((seconds->obj).klass)->_1).element_class), lVar5 == 0))
    {
      uVar10 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(uVar10,0);
    }
    if ((int)seconds->max_length != 0) {
      seconds->m_Items[0] = (System_IObservable_T__o *)pSVar4;
      thunk_FUN_01c20e04(seconds->m_Items,pSVar4);
      pSVar6 = UniRx_Observable__Merge<object>
                         ((System_IObservable_T__o *)pSVar3,seconds,
                          Method_UniRx_Observable_Merge<GAHKDMDKMBP>__);
      pSVar6 = UniRx_Observable__ObserveOnMainThread<object>
                         (pSVar6,Method_UniRx_Observable_ObserveOnMainThread<GAHKDMDKMBP>__);
      if ((Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo);
      }
      onNext_00 = Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->static_fields->__9__18_6;
      if (onNext_00 == (System_Action_GAHKDMDKMBP__o *)0x0) {
        if ((Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo);
        }
        onNext_00 = (System_Action_GAHKDMDKMBP__o *)
                    thunk_FUN_01bda818(System_Action<GAHKDMDKMBP>_TypeInfo);
        System_Action<object>___ctor();
        ppSVar7 = &Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->static_fields->__9__18_6;
        *ppSVar7 = onNext_00;
        thunk_FUN_01c20e04(ppSVar7,onNext_00);
      }
      pIVar8 = (Il2CppObject *)
               UniRx_ObservableExtensions__Subscribe<object>
                         (pSVar6,(System_Action_T__o *)onNext_00,
                          Method_UniRx_ObservableExtensions_Subscribe<GAHKDMDKMBP>__);
      UniRx_DisposableExtensions__AddTo<object>
                (pIVar8,(UnityEngine_Component_o *)__this,
                 Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
      if ((Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      conversion = Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->static_fields->__9__18_7;
      if (conversion == (System_Func_Action_HKIFKIPAKPD___EventHandler__o *)0x0) {
        if ((Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        conversion = (System_Func_Action_HKIFKIPAKPD___EventHandler__o *)
                     thunk_FUN_01bda818(System_Func<Action<HKIFKIPAKPD>,_EventHandler>_TypeInfo);
        System_Func<object,_object>___ctor();
        ppSVar9 = &Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->static_fields->__9__18_7;
        *ppSVar9 = conversion;
        thunk_FUN_01c20e04(ppSVar9,conversion);
      }
      if ((Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar12 = Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->static_fields->__9__18_8;
      if (pSVar12 == (System_Action_EventHandler__o *)0x0) {
        if ((Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar12 = (System_Action_EventHandler__o *)
                  thunk_FUN_01bda818(System_Action<EventHandler>_TypeInfo);
        System_Action<object>___ctor();
        ppSVar2 = &Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->static_fields->__9__18_8;
        *ppSVar2 = pSVar12;
        thunk_FUN_01c20e04(ppSVar2,pSVar12);
      }
      if ((Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar13 = Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->static_fields->__9__18_9;
      if (pSVar13 == (System_Action_EventHandler__o *)0x0) {
        if ((Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar13 = (System_Action_EventHandler__o *)
                  thunk_FUN_01bda818(System_Action<EventHandler>_TypeInfo);
        System_Action<object>___ctor();
        ppSVar2 = &Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->static_fields->__9__18_9;
        *ppSVar2 = pSVar13;
        thunk_FUN_01c20e04(ppSVar2,pSVar13);
      }
      if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar3 = UniRx_Observable__FromEvent<object,_object>
                         ((System_Func_Action_TEventArgs___TDelegate__o *)conversion,
                          (System_Action_TDelegate__o *)pSVar12,
                          (System_Action_TDelegate__o *)pSVar13,
                          Method_UniRx_Observable_FromEvent<EventHandler,_HKIFKIPAKPD>__);
      pSVar6 = UniRx_Observable__ObserveOnMainThread<object>
                         ((System_IObservable_T__o *)pSVar3,
                          Method_UniRx_Observable_ObserveOnMainThread<HKIFKIPAKPD>__);
      onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<HKIFKIPAKPD>_TypeInfo);
      System_Action<object>___ctor();
      pIVar8 = (Il2CppObject *)
               UniRx_ObservableExtensions__Subscribe<object>
                         (pSVar6,onNext,Method_UniRx_ObservableExtensions_Subscribe<HKIFKIPAKPD>__);
      UniRx_DisposableExtensions__AddTo<object>
                (pIVar8,(UnityEngine_Component_o *)__this,
                 Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
      UniRx_DisposableExtensions__AddTo<object>
                ((Il2CppObject *)(__this->fields).ABBACAKGAAF,(UnityEngine_Component_o *)__this,
                 Method_UniRx_DisposableExtensions_AddTo<ReactiveProperty<string>>__);
      UniRx_DisposableExtensions__AddTo<object>
                ((Il2CppObject *)(__this->fields).ECCPBJGMNPE,(UnityEngine_Component_o *)__this,
                 Method_UniRx_DisposableExtensions_AddTo<ReactiveProperty<bool>>__);
      UniRx_DisposableExtensions__AddTo<object>
                ((Il2CppObject *)(__this->fields).PLNAMMLBJAH,(UnityEngine_Component_o *)__this,
                 Method_UniRx_DisposableExtensions_AddTo<ReactiveProperty<IEOKPOCAOKN>>__);
      Core_Appsflyer_BanzaiAppsFlyer__AKNCLCJGNHB(__this,method_00);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

