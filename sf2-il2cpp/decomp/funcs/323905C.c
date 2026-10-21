// KKHJHHIPPOO$$.ctor @ RVA 0x323905C

void KKHJHHIPPOO___ctor(KKHJHHIPPOO_o *__this,System_String_o *FKMJHKGHKFF,MethodInfo *method)

{
  Unity_Services_LevelPlay_LevelPlayInterstitialAd_o *__this_00;
  Unity_Services_LevelPlay_ILevelPlayInterstitialAd_o **ppUVar1;
  System_Action_Action_T___o *pSVar2;
  System_Action_Action_T___o *pSVar3;
  System_IObservable_T__o *pSVar4;
  System_Action_T__o *pSVar5;
  Il2CppObject *pIVar6;
  System_Action_o *disposeAction;
  
  if ((DAT_04567045 & 1) == 0) {
    FUN_01bab630(&System_Action<Action<LevelPlayAdInfo>>_TypeInfo);
    FUN_01bab630(&System_Action<LevelPlayAdError>_TypeInfo);
    FUN_01bab630(&System_Action<LevelPlayAdInfo>_TypeInfo);
    FUN_01bab630(&System_Action<Action<LevelPlayAdError>>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&UniRx_Disposable_TypeInfo);
    FUN_01bab630(&Method_KKHJHHIPPOO_AEHOAEDLPNI__);
    FUN_01bab630(&Method_KKHJHHIPPOO_BAMPIGNOEJN__);
    FUN_01bab630(&Method_KKHJHHIPPOO_BIDAABHABNN__);
    FUN_01bab630(&Method_KKHJHHIPPOO_DACCEKBJBBC__);
    FUN_01bab630(&Method_KKHJHHIPPOO_DKNJPDBJIAO__);
    FUN_01bab630(&Method_KKHJHHIPPOO_HHHKFAKNKOL__);
    FUN_01bab630(&Method_KKHJHHIPPOO_HKIMMEPOCEB__);
    FUN_01bab630(&Method_KKHJHHIPPOO_PDHBBHGIIPH__);
    FUN_01bab630(&Method_KKHJHHIPPOO_PMENOONHJCM__);
    FUN_01bab630(&Unity_Services_LevelPlay_LevelPlayInterstitialAd_TypeInfo);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<LevelPlayAdError>__);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<LevelPlayAdInfo>__);
    FUN_01bab630(&Method_UniRx_Observable_FromEvent<LevelPlayAdError>__);
    FUN_01bab630(&Method_UniRx_Observable_FromEvent<LevelPlayAdInfo>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    FUN_01bab630(&Method_PNFHEJAEPHI_DOKBCLHIPEA__);
    FUN_01bab630(&Method_PNFHEJAEPHI_LAJOGIIJIEO__);
    FUN_01bab630(&Method_PNFHEJAEPHI_LNLEFANOIDH__);
    FUN_01bab630(&Method_PNFHEJAEPHI_PCALMGLCBKG__);
    DAT_04567045 = 1;
  }
  PNFHEJAEPHI___ctor((PNFHEJAEPHI_o *)__this,(MethodInfo *)0x0);
  __this_00 = (Unity_Services_LevelPlay_LevelPlayInterstitialAd_o *)
              thunk_FUN_01bda818(Unity_Services_LevelPlay_LevelPlayInterstitialAd_TypeInfo);
  Unity_Services_LevelPlay_LevelPlayInterstitialAd___ctor
            (__this_00,FKMJHKGHKFF,(Unity_Services_LevelPlay_LevelPlayInterstitialAd_Config_o *)0x0,
             (MethodInfo *)0x0);
  ppUVar1 = &(__this->fields).COHIBLKOLHH;
  *ppUVar1 = (Unity_Services_LevelPlay_ILevelPlayInterstitialAd_o *)__this_00;
  thunk_FUN_01c20e04(ppUVar1,__this_00);
  pSVar2 = (System_Action_Action_T___o *)
           thunk_FUN_01bda818(System_Action<Action<LevelPlayAdInfo>>_TypeInfo);
  System_Action<object>___ctor();
  pSVar3 = (System_Action_Action_T___o *)
           thunk_FUN_01bda818(System_Action<Action<LevelPlayAdInfo>>_TypeInfo);
  System_Action<object>___ctor();
  if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar4 = UniRx_Observable__FromEvent<object>
                     (pSVar2,pSVar3,Method_UniRx_Observable_FromEvent<LevelPlayAdInfo>__);
  pSVar5 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<LevelPlayAdInfo>_TypeInfo);
  System_Action<object>___ctor();
  pIVar6 = (Il2CppObject *)
           UniRx_ObservableExtensions__Subscribe<object>
                     (pSVar4,pSVar5,Method_UniRx_ObservableExtensions_Subscribe<LevelPlayAdInfo>__);
  UniRx_DisposableExtensions__AddTo<object>
            (pIVar6,(System_Collections_Generic_ICollection_IDisposable__o *)
                    (__this->fields).super.CAEFEOBGDEH,
             Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
  pSVar2 = (System_Action_Action_T___o *)
           thunk_FUN_01bda818(System_Action<Action<LevelPlayAdError>>_TypeInfo);
  System_Action<object>___ctor();
  pSVar3 = (System_Action_Action_T___o *)
           thunk_FUN_01bda818(System_Action<Action<LevelPlayAdError>>_TypeInfo);
  System_Action<object>___ctor();
  pSVar4 = UniRx_Observable__FromEvent<object>
                     (pSVar2,pSVar3,Method_UniRx_Observable_FromEvent<LevelPlayAdError>__);
  pSVar5 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<LevelPlayAdError>_TypeInfo);
  System_Action<object>___ctor();
  pIVar6 = (Il2CppObject *)
           UniRx_ObservableExtensions__Subscribe<object>
                     (pSVar4,pSVar5,Method_UniRx_ObservableExtensions_Subscribe<LevelPlayAdError>__)
  ;
  UniRx_DisposableExtensions__AddTo<object>
            (pIVar6,(System_Collections_Generic_ICollection_IDisposable__o *)
                    (__this->fields).super.CAEFEOBGDEH,
             Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
  pSVar2 = (System_Action_Action_T___o *)
           thunk_FUN_01bda818(System_Action<Action<LevelPlayAdInfo>>_TypeInfo);
  System_Action<object>___ctor();
  pSVar3 = (System_Action_Action_T___o *)
           thunk_FUN_01bda818(System_Action<Action<LevelPlayAdInfo>>_TypeInfo);
  System_Action<object>___ctor();
  pSVar4 = UniRx_Observable__FromEvent<object>
                     (pSVar2,pSVar3,Method_UniRx_Observable_FromEvent<LevelPlayAdInfo>__);
  pSVar5 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<LevelPlayAdInfo>_TypeInfo);
  System_Action<object>___ctor();
  pIVar6 = (Il2CppObject *)
           UniRx_ObservableExtensions__Subscribe<object>
                     (pSVar4,pSVar5,Method_UniRx_ObservableExtensions_Subscribe<LevelPlayAdInfo>__);
  UniRx_DisposableExtensions__AddTo<object>
            (pIVar6,(System_Collections_Generic_ICollection_IDisposable__o *)
                    (__this->fields).super.CAEFEOBGDEH,
             Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
  pSVar2 = (System_Action_Action_T___o *)
           thunk_FUN_01bda818(System_Action<Action<LevelPlayAdInfo>>_TypeInfo);
  System_Action<object>___ctor();
  pSVar3 = (System_Action_Action_T___o *)
           thunk_FUN_01bda818(System_Action<Action<LevelPlayAdInfo>>_TypeInfo);
  System_Action<object>___ctor();
  pSVar4 = UniRx_Observable__FromEvent<object>
                     (pSVar2,pSVar3,Method_UniRx_Observable_FromEvent<LevelPlayAdInfo>__);
  pSVar5 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<LevelPlayAdInfo>_TypeInfo);
  System_Action<object>___ctor();
  pIVar6 = (Il2CppObject *)
           UniRx_ObservableExtensions__Subscribe<object>
                     (pSVar4,pSVar5,Method_UniRx_ObservableExtensions_Subscribe<LevelPlayAdInfo>__);
  UniRx_DisposableExtensions__AddTo<object>
            (pIVar6,(System_Collections_Generic_ICollection_IDisposable__o *)
                    (__this->fields).super.CAEFEOBGDEH,
             Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
  disposeAction = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if ((UniRx_Disposable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pIVar6 = (Il2CppObject *)UniRx_Disposable__Create(disposeAction,(MethodInfo *)0x0);
  UniRx_DisposableExtensions__AddTo<object>
            (pIVar6,(System_Collections_Generic_ICollection_IDisposable__o *)
                    (__this->fields).super.CAEFEOBGDEH,
             Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
  return;
}

