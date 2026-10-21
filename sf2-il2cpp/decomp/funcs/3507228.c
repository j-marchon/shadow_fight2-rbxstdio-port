// KEIAEKNFNNA$$GIENGNEGHPJ @ RVA 0x3507228

void KEIAEKNFNNA__GIENGNEGHPJ(KEIAEKNFNNA_o *__this,MethodInfo *method)

{
  Core_Configs_Models_LocalDailyConfig_o *pCVar1;
  KKEKKPIDGBK_o *KMIOAIFNJJD;
  System_IObservable_MPAKDCNMLEG__o *source;
  System_Func_MPAKDCNMLEG__bool__o **ppSVar2;
  System_IObservable_T__o *source_00;
  System_Action_T__o *pSVar3;
  Il2CppObject *pIVar4;
  System_Action_Action__o **ppSVar5;
  System_IObservable_Unit__o *source_01;
  NCNJEIBHGBH_o *ELHFHAPBFMI;
  System_IObservable_FKNCNNOOOIO__o *source_02;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Action_Action__o *addHandler;
  System_Func_MPAKDCNMLEG__bool__o *predicate;
  System_Action_Action__o *removeHandler;
  
  if ((DAT_045688a3 & 1) == 0) {
    FUN_01bab630(&System_Action<MPAKDCNMLEG>_TypeInfo);
    FUN_01bab630(&System_Action<Unit>_TypeInfo);
    FUN_01bab630(&System_Action<Action>_TypeInfo);
    FUN_01bab630(&System_Action<FKNCNNOOOIO>_TypeInfo);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&System_Func<MPAKDCNMLEG,_bool>_TypeInfo);
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<LocalDailyConfig>__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&Method_KEIAEKNFNNA_BONGFCFJNPN__);
    FUN_01bab630(&Method_KEIAEKNFNNA_MBLOPJIFOMC__);
    FUN_01bab630(&Method_KEIAEKNFNNA_OGDOLKAGBGJ__);
    FUN_01bab630(&MKFAKELPPAC_TypeInfo);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<FKNCNNOOOIO>__);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<MPAKDCNMLEG>__);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
    FUN_01bab630(&Method_UniRx_Observable_Where<MPAKDCNMLEG>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    FUN_01bab630(&Method_KEIAEKNFNNA_<>c_HHPMABOIHIO__);
    FUN_01bab630(&Method_KEIAEKNFNNA_<>c_KPDBPHNOALH__);
    FUN_01bab630(&Method_KEIAEKNFNNA_<>c_MNHPOELABEN__);
    FUN_01bab630(&KEIAEKNFNNA_<>c_TypeInfo);
    DAT_045688a3 = 1;
    method = extraout_x1;
  }
  if ((__this->fields).EOPAAFGEJAE == false) {
    if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(IFAMAAGNCBJ_TypeInfo,method);
    }
    pCVar1 = (Core_Configs_Models_LocalDailyConfig_o *)
             IFAMAAGNCBJ__GPBMELHDADN<object>(Method_IFAMAAGNCBJ_GPBMELHDADN<LocalDailyConfig>__);
    (__this->fields).DCAEFFHDMGE = pCVar1;
    thunk_FUN_01c20e04();
    KEIAEKNFNNA__FIHIDMOGGFA(__this,method_00);
    KEIAEKNFNNA__EHKKBKHGDHE(__this,method_01);
    if ((MKFAKELPPAC_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    KMIOAIFNJJD = MKFAKELPPAC__AIHNLLGNBLC((MethodInfo *)0x0);
    source = EBBCMCKFDAE__LEIIBMPCMGC(KMIOAIFNJJD,(MethodInfo *)0x0);
    if ((KEIAEKNFNNA_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(KEIAEKNFNNA_<>c_TypeInfo);
    }
    predicate = KEIAEKNFNNA_<>c_TypeInfo->static_fields->__9__15_0;
    if (predicate == (System_Func_MPAKDCNMLEG__bool__o *)0x0) {
      if ((KEIAEKNFNNA_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(KEIAEKNFNNA_<>c_TypeInfo);
      }
      predicate = (System_Func_MPAKDCNMLEG__bool__o *)
                  thunk_FUN_01bda818(System_Func<MPAKDCNMLEG,_bool>_TypeInfo);
      System_Func<Int32Enum,_bool>___ctor();
      ppSVar2 = &KEIAEKNFNNA_<>c_TypeInfo->static_fields->__9__15_0;
      *ppSVar2 = predicate;
      thunk_FUN_01c20e04(ppSVar2,predicate);
    }
    if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    source_00 = UniRx_Observable__Where<Int32Enum>
                          ((System_IObservable_T__o *)source,(System_Func_T__bool__o *)predicate,
                           Method_UniRx_Observable_Where<MPAKDCNMLEG>__);
    pSVar3 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<MPAKDCNMLEG>_TypeInfo);
    System_Action<Int32Enum>___ctor();
    pIVar4 = (Il2CppObject *)
             UniRx_ObservableExtensions__Subscribe<Int32Enum>
                       (source_00,pSVar3,Method_UniRx_ObservableExtensions_Subscribe<MPAKDCNMLEG>__)
    ;
    UniRx_DisposableExtensions__AddTo<object>
              (pIVar4,(System_Collections_Generic_ICollection_IDisposable__o *)
                      (__this->fields).IHADHPMEOFI,
               Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    if ((KEIAEKNFNNA_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    addHandler = KEIAEKNFNNA_<>c_TypeInfo->static_fields->__9__15_1;
    if (addHandler == (System_Action_Action__o *)0x0) {
      if ((KEIAEKNFNNA_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      addHandler = (System_Action_Action__o *)thunk_FUN_01bda818(System_Action<Action>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar5 = &KEIAEKNFNNA_<>c_TypeInfo->static_fields->__9__15_1;
                    /* try { // try from 03607550 to 03707557 has its CatchHandler @ 03607ff8 */
      *ppSVar5 = addHandler;
      thunk_FUN_01c20e04(ppSVar5,addHandler);
    }
    if ((KEIAEKNFNNA_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
                    /* try { // try from 03607568 to 03707577 has its CatchHandler @ 03607ff4 */
    }
    removeHandler = KEIAEKNFNNA_<>c_TypeInfo->static_fields->__9__15_2;
    if (removeHandler == (System_Action_Action__o *)0x0) {
                    /* try { // try from 0360757c to 03707587 has its CatchHandler @ 03607fe4 */
      if ((KEIAEKNFNNA_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 03607588 to 03707fcf has its CatchHandler @ 03606c38 */
      removeHandler = (System_Action_Action__o *)thunk_FUN_01bda818(System_Action<Action>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar5 = &KEIAEKNFNNA_<>c_TypeInfo->static_fields->__9__15_2;
      *ppSVar5 = removeHandler;
      thunk_FUN_01c20e04(ppSVar5,removeHandler);
    }
    if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    source_01 = UniRx_Observable__FromEvent(addHandler,removeHandler,(MethodInfo *)0x0);
    pSVar3 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<Unit>_TypeInfo);
    System_Action<Unit>___ctor();
    pIVar4 = (Il2CppObject *)
             UniRx_ObservableExtensions__Subscribe<Unit>
                       ((System_IObservable_T__o *)source_01,pSVar3,
                        Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
    UniRx_DisposableExtensions__AddTo<object>
              (pIVar4,(System_Collections_Generic_ICollection_IDisposable__o *)
                      (__this->fields).IHADHPMEOFI,
               Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    ELHFHAPBFMI = NCNJEIBHGBH__AIHNLLGNBLC((MethodInfo *)0x0);
    source_02 = NILODIIEDJE__GNABHMFOLKD(ELHFHAPBFMI,(MethodInfo *)0x0);
    pSVar3 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<FKNCNNOOOIO>_TypeInfo);
    System_Action<object>___ctor();
    pIVar4 = (Il2CppObject *)
             UniRx_ObservableExtensions__Subscribe<object>
                       ((System_IObservable_T__o *)source_02,pSVar3,
                        Method_UniRx_ObservableExtensions_Subscribe<FKNCNNOOOIO>__);
    UniRx_DisposableExtensions__AddTo<object>
              (pIVar4,(System_Collections_Generic_ICollection_IDisposable__o *)
                      (__this->fields).IHADHPMEOFI,
               Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    (__this->fields).EOPAAFGEJAE = true;
  }
  return;
}

