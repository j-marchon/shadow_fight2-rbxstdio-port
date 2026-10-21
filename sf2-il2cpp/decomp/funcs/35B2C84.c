// FDJKKAFIEFB$$GIMAJOGGBHM @ RVA 0x35B2C84

void FDJKKAFIEFB__GIMAJOGGBHM(FDJKKAFIEFB_o *__this,MethodInfo *method)

{
  UniRx_ReactiveCollection_GIDPGJAAOJA__o *__this_00;
  System_IObservable_CollectionAddEvent_T___o *source;
  System_Action_T__o *onNext;
  Il2CppObject *pIVar1;
  System_Action_o *pSVar2;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  
  if ((DAT_04568ea5 & 1) == 0) {
    FUN_01bab630(&System_Action<CollectionAddEvent<GIDPGJAAOJA>>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&UniRx_Disposable_TypeInfo);
    FUN_01bab630(&Method_FDJKKAFIEFB_LIKBHEDGLNO__);
    FUN_01bab630(&Method_NAEFACJHPAL_NDNPGAKJLHM__);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<CollectionAddEvent<GIDPGJAAOJA>>__);
    FUN_01bab630(&Method_UniRx_ReactiveCollection<GIDPGJAAOJA>_ObserveAdd__);
    FUN_01bab630(&StringLiteral_7529);
    DAT_04568ea5 = 1;
  }
  method_02 = (MethodInfo *)0x0;
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_7529,(MethodInfo *)0x0);
  FDJKKAFIEFB__INCIEIKPDFI(__this,method_00);
  FDJKKAFIEFB__ILLMMCPADOI(__this,method_01);
  FDJKKAFIEFB__PGAOEMFNKCA(__this,(__this->fields)._ELDCPOBNFJJ_k__BackingField,method_02);
  __this_00 = (__this->fields).IEPHFPONOOO;
  if (__this_00 != (UniRx_ReactiveCollection_GIDPGJAAOJA__o *)0x0) {
    source = UniRx_ReactiveCollection<object>__ObserveAdd
                       ((UniRx_ReactiveCollection_T__o *)__this_00,
                        Method_UniRx_ReactiveCollection<GIDPGJAAOJA>_ObserveAdd__);
    onNext = (System_Action_T__o *)
             thunk_FUN_01bda818(System_Action<CollectionAddEvent<GIDPGJAAOJA>>_TypeInfo);
    System_Action<CollectionAddEvent<object>>___ctor();
    pIVar1 = (Il2CppObject *)
             UniRx_ObservableExtensions__Subscribe<CollectionAddEvent<object>>
                       ((System_IObservable_T__o *)source,onNext,
                        Method_UniRx_ObservableExtensions_Subscribe<CollectionAddEvent<GIDPGJAAOJA>>__
                       );
    UniRx_DisposableExtensions__AddTo<object>
              (pIVar1,(System_Collections_Generic_ICollection_IDisposable__o *)
                      (__this->fields).BNAIPPCOGPE,
               Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if ((UniRx_Disposable_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pIVar1 = (Il2CppObject *)UniRx_Disposable__Create(pSVar2,(MethodInfo *)0x0);
    UniRx_DisposableExtensions__AddTo<object>
              (pIVar1,(System_Collections_Generic_ICollection_IDisposable__o *)
                      (__this->fields).BNAIPPCOGPE,
               Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    pIVar1 = (Il2CppObject *)UniRx_Disposable__Create(pSVar2,(MethodInfo *)0x0);
    UniRx_DisposableExtensions__AddTo<object>
              (pIVar1,(System_Collections_Generic_ICollection_IDisposable__o *)
                      (__this->fields).BNAIPPCOGPE,
               Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

