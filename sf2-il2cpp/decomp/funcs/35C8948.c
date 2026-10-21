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
    FUN_01bab630(&StringLiteral_7529);
    DAT_04568f7d = 1;
  }
  if ((__this->fields).HHBJPFMJEHK != false) {
    return;
  }
  (__this->fields).HHBJPFMJEHK = true;
  Core_Appsflyer_BanzaiAppsFlyer__JHEIGLGFONB(StringLiteral_7529,StringLiteral_7529,in_x2);
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

