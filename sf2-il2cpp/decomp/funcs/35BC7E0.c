// LCAOAAFEOAG$$BJJDNKDJJEG @ RVA 0x35BC7E0

void LCAOAAFEOAG__BJJDNKDJJEG(LCAOAAFEOAG_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar2;
  UniRx_CompositeDisposable_o *__this_00;
  System_Func_Action__Tapjoy_OnConnectSuccessHandler__o **ppSVar3;
  System_Action_Tapjoy_OnConnectSuccessHandler__o **ppSVar4;
  System_IObservable_Unit__o *source;
  System_IObservable_T__o *source_00;
  System_Action_T__o *onNext;
  Il2CppObject *disposable;
  MethodInfo *extraout_x1;
  System_Func_Action__Tapjoy_OnConnectSuccessHandler__o *conversion;
  System_Action_Tapjoy_OnConnectSuccessHandler__o *addHandler;
  System_Action_Tapjoy_OnConnectSuccessHandler__o *removeHandler;
  
  if ((DAT_04568ee7 & 1) == 0) {
    FUN_01bab630(&System_Action<Unit>_TypeInfo);
    FUN_01bab630(&System_Action<Tapjoy_OnConnectSuccessHandler>_TypeInfo);
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6617);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6618);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&System_Func<Action,_Tapjoy_OnConnectSuccessHandler>_TypeInfo);
    FUN_01bab630(&Method_LCAOAAFEOAG_JILECJELDML__);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
    FUN_01bab630(&Method_UniRx_Observable_FromEvent<Tapjoy_OnConnectSuccessHandler>__);
    FUN_01bab630(&Method_UniRx_Observable_ObserveOnMainThread<Unit>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    FUN_01bab630(&Method_LCAOAAFEOAG_<>c_IBDFPNCPKBI__);
    FUN_01bab630(&Method_LCAOAAFEOAG_<>c_JKNIFKCLIMB__);
    FUN_01bab630(&Method_LCAOAAFEOAG_<>c_PHGKEPNGOHD__);
    FUN_01bab630(&LCAOAAFEOAG_<>c_TypeInfo);
    DAT_04568ee7 = 1;
    method = extraout_x1;
  }
  if (DAT_04568eeb == '\0') {
    FUN_01bab630(&TapjoyUnity_Tapjoy_TypeInfo,method);
    DAT_04568eeb = '\x01';
  }
  if (TapjoyUnity_Tapjoy_TypeInfo->static_fields->_isConnected == false) {
    if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar1 = UnityEngine_Application__get_internetReachability((MethodInfo *)0x0);
    if (iVar1 != 0) {
      MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)MOPNMEHIMFJ,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6617,
                 (MethodInfo *)0x0);
      LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)LFINFBNOLFG,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6618,
                 (MethodInfo *)0x0);
      pSVar2 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
      KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,pSVar2,(MethodInfo *)0x0);
      __this_00 = (__this->fields).JBJKBIMMCIJ;
      if (__this_00 != (UniRx_CompositeDisposable_o *)0x0) {
        UniRx_CompositeDisposable__Clear(__this_00,(MethodInfo *)0x0);
        if ((LCAOAAFEOAG_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        conversion = LCAOAAFEOAG_<>c_TypeInfo->static_fields->__9__11_0;
        if (conversion == (System_Func_Action__Tapjoy_OnConnectSuccessHandler__o *)0x0) {
          if ((LCAOAAFEOAG_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          conversion = (System_Func_Action__Tapjoy_OnConnectSuccessHandler__o *)
                       thunk_FUN_01bda818(
                                         System_Func<Action,_Tapjoy_OnConnectSuccessHandler>_TypeInfo
                                         );
          System_Func<object,_object>___ctor();
          ppSVar3 = &LCAOAAFEOAG_<>c_TypeInfo->static_fields->__9__11_0;
          *ppSVar3 = conversion;
          thunk_FUN_01c20e04(ppSVar3,conversion);
        }
        if ((LCAOAAFEOAG_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        addHandler = LCAOAAFEOAG_<>c_TypeInfo->static_fields->__9__11_1;
        if (addHandler == (System_Action_Tapjoy_OnConnectSuccessHandler__o *)0x0) {
          if ((LCAOAAFEOAG_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          addHandler = (System_Action_Tapjoy_OnConnectSuccessHandler__o *)
                       thunk_FUN_01bda818(System_Action<Tapjoy_OnConnectSuccessHandler>_TypeInfo);
          System_Action<object>___ctor();
          ppSVar4 = &LCAOAAFEOAG_<>c_TypeInfo->static_fields->__9__11_1;
          *ppSVar4 = addHandler;
          thunk_FUN_01c20e04(ppSVar4,addHandler);
        }
        if ((LCAOAAFEOAG_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        removeHandler = LCAOAAFEOAG_<>c_TypeInfo->static_fields->__9__11_2;
        if (removeHandler == (System_Action_Tapjoy_OnConnectSuccessHandler__o *)0x0) {
          if ((LCAOAAFEOAG_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          removeHandler =
               (System_Action_Tapjoy_OnConnectSuccessHandler__o *)
               thunk_FUN_01bda818(System_Action<Tapjoy_OnConnectSuccessHandler>_TypeInfo);
          System_Action<object>___ctor();
          ppSVar4 = &LCAOAAFEOAG_<>c_TypeInfo->static_fields->__9__11_2;
          *ppSVar4 = removeHandler;
          thunk_FUN_01c20e04(ppSVar4,removeHandler);
        }
        if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        source = UniRx_Observable__FromEvent<object>
                           ((System_Func_Action__TDelegate__o *)conversion,
                            (System_Action_TDelegate__o *)addHandler,
                            (System_Action_TDelegate__o *)removeHandler,
                            Method_UniRx_Observable_FromEvent<Tapjoy_OnConnectSuccessHandler>__);
        source_00 = UniRx_Observable__ObserveOnMainThread<Unit>
                              ((System_IObservable_T__o *)source,
                               Method_UniRx_Observable_ObserveOnMainThread<Unit>__);
        onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<Unit>_TypeInfo);
        System_Action<Unit>___ctor();
        disposable = (Il2CppObject *)
                     UniRx_ObservableExtensions__Subscribe<Unit>
                               (source_00,onNext,Method_UniRx_ObservableExtensions_Subscribe<Unit>__
                               );
        UniRx_DisposableExtensions__AddTo<object>
                  (disposable,
                   (System_Collections_Generic_ICollection_IDisposable__o *)
                   (__this->fields).JBJKBIMMCIJ,
                   Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
        pSVar2 = LCAOAAFEOAG_EFNELLKNPAH__PFLIGHDLGBM((MethodInfo *)0x0);
        TapjoyUnity_Tapjoy__Connect(pSVar2,(MethodInfo *)0x0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}

