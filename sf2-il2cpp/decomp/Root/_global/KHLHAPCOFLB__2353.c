// TypeDefIndex 2353
// Namespace: 
// public class KHLHAPCOFLB : IDisposable
// Fields:
//   private readonly CompositeDisposable FMPHPEJBDGK; // 0x10

// ===== public void .ctor()  [RVA 0x3324888]
// KHLHAPCOFLB$$.ctor @ RVA 0x3324888

void KHLHAPCOFLB___ctor(KHLHAPCOFLB_o *__this,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  System_Action_Action_bool___o **ppSVar1;
  System_IObservable_T__o *source;
  System_Action_bool__o **ppSVar2;
  Il2CppObject *disposable;
  MethodInfo *extraout_x1;
  KHLHAPCOFLB_Fields *pKVar3;
  System_Action_Action_bool___o *addHandler;
  System_Action_Action_bool___o *removeHandler;
  System_Action_bool__o *onNext;
  
  if ((DAT_04567867 & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    FUN_01bab630(&System_Action<Action<bool>>_TypeInfo);
    FUN_01bab630(&UniRx_CompositeDisposable_TypeInfo);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<bool>__);
    FUN_01bab630(&Method_UniRx_Observable_FromEvent<bool>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    FUN_01bab630(&Method_KHLHAPCOFLB_<>c_FOMMDHKCHHA__);
    FUN_01bab630(&Method_KHLHAPCOFLB_<>c_MNIIGKKHLBF__);
    FUN_01bab630(&Method_KHLHAPCOFLB_<>c_PEPDMAABEEK__);
    FUN_01bab630(&KHLHAPCOFLB_<>c_TypeInfo);
    DAT_04567867 = 1;
    method = extraout_x1;
  }
  __this_00 = (UniRx_CompositeDisposable_o *)
              thunk_FUN_01bda818(UniRx_CompositeDisposable_TypeInfo,method);
  UniRx_CompositeDisposable___ctor(__this_00,(MethodInfo *)0x0);
  pKVar3 = &__this->fields;
  pKVar3->FMPHPEJBDGK = __this_00;
  thunk_FUN_01c20e04(pKVar3,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if ((KHLHAPCOFLB_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  addHandler = KHLHAPCOFLB_<>c_TypeInfo->static_fields->__9__1_0;
  if (addHandler == (System_Action_Action_bool___o *)0x0) {
    if ((KHLHAPCOFLB_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    addHandler = (System_Action_Action_bool___o *)
                 thunk_FUN_01bda818(System_Action<Action<bool>>_TypeInfo);
    System_Action<object>___ctor();
    ppSVar1 = &KHLHAPCOFLB_<>c_TypeInfo->static_fields->__9__1_0;
    *ppSVar1 = addHandler;
    thunk_FUN_01c20e04(ppSVar1,addHandler);
  }
  if ((KHLHAPCOFLB_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  removeHandler = KHLHAPCOFLB_<>c_TypeInfo->static_fields->__9__1_1;
  if (removeHandler == (System_Action_Action_bool___o *)0x0) {
    if ((KHLHAPCOFLB_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    removeHandler =
         (System_Action_Action_bool___o *)thunk_FUN_01bda818(System_Action<Action<bool>>_TypeInfo);
    System_Action<object>___ctor();
    ppSVar1 = &KHLHAPCOFLB_<>c_TypeInfo->static_fields->__9__1_1;
    *ppSVar1 = removeHandler;
    thunk_FUN_01c20e04(ppSVar1,removeHandler);
  }
  if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  source = UniRx_Observable__FromEvent<bool>
                     ((System_Action_Action_T___o *)addHandler,
                      (System_Action_Action_T___o *)removeHandler,
                      Method_UniRx_Observable_FromEvent<bool>__);
  if ((KHLHAPCOFLB_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(KHLHAPCOFLB_<>c_TypeInfo);
  }
  onNext = KHLHAPCOFLB_<>c_TypeInfo->static_fields->__9__1_2;
  if (onNext == (System_Action_bool__o *)0x0) {
    if ((KHLHAPCOFLB_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(KHLHAPCOFLB_<>c_TypeInfo);
    }
    onNext = (System_Action_bool__o *)thunk_FUN_01bda818(System_Action<bool>_TypeInfo);
    System_Action<bool>___ctor();
    ppSVar2 = &KHLHAPCOFLB_<>c_TypeInfo->static_fields->__9__1_2;
    *ppSVar2 = onNext;
    thunk_FUN_01c20e04(ppSVar2,onNext);
  }
  disposable = (Il2CppObject *)
               UniRx_ObservableExtensions__Subscribe<bool>
                         (source,(System_Action_T__o *)onNext,
                          Method_UniRx_ObservableExtensions_Subscribe<bool>__);
  UniRx_DisposableExtensions__AddTo<object>
            (disposable,(System_Collections_Generic_ICollection_IDisposable__o *)pKVar3->FMPHPEJBDGK
             ,Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
  return;
}


// ===== public void Dispose()  [RVA 0x3324B58]
// KHLHAPCOFLB$$Dispose @ RVA 0x3324B58

void KHLHAPCOFLB__Dispose(KHLHAPCOFLB_o *__this,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  
  __this_00 = (__this->fields).FMPHPEJBDGK;
  if (__this_00 != (UniRx_CompositeDisposable_o *)0x0) {
    UniRx_CompositeDisposable__Dispose(__this_00,(MethodInfo *)0x0);
    return;
  }
  return;
}

