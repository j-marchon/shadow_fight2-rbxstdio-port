// TypeDefIndex 2997
// Namespace: 
// public abstract class IJIHLBLCJMG : MFBFOBDKLBC, IDisposable
// Fields:
//   private readonly Subject<bool> POPPKIFIINN; // 0x10
//   protected readonly CompositeDisposable KOLGEOBAJHM; // 0x18
//   protected readonly CompositeDisposable ACHHOOFKHLD; // 0x20

// ===== public IObservable<bool> KBFGMPBOELJ()  [RVA 0x34A5F10]
// IJIHLBLCJMG$$KBFGMPBOELJ @ RVA 0x34A5F10

System_IObservable_bool__o * IJIHLBLCJMG__KBFGMPBOELJ(IJIHLBLCJMG_o *__this,MethodInfo *method)

{
  System_IObservable_T__o *pSVar1;
  MethodInfo *extraout_x1;
  UniRx_Subject_bool__o *source;
  
  if ((DAT_045684ee & 1) == 0) {
    FUN_01bab630(&Method_UniRx_Observable_AsObservable<bool>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    DAT_045684ee = 1;
    method = extraout_x1;
  }
  source = (__this->fields).POPPKIFIINN;
  if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UniRx_Observable_TypeInfo,method);
  }
  pSVar1 = UniRx_Observable__AsObservable<bool>
                     ((System_IObservable_T__o *)source,Method_UniRx_Observable_AsObservable<bool>__
                     );
  return (System_IObservable_bool__o *)pSVar1;
}


// ===== private void DPLIBGCCKPM()  [RVA 0x34A5F80]
// IJIHLBLCJMG$$DPLIBGCCKPM @ RVA 0x34A5F80

void IJIHLBLCJMG__DPLIBGCCKPM(IJIHLBLCJMG_o *__this,MethodInfo *method)

{
  UniRx_Subject_bool__o *pUVar1;
  
  if ((DAT_045684ef & 1) == 0) {
    FUN_01bab630(&Method_UniRx_Subject<bool>_Dispose__);
                    /* try { // try from 035a5fac to 036a603f has its CatchHandler @ 035a5fac
                       catch() { ... } // from try @ 035a5fac with catch @ 035a5fac
                       catch() { ... } // from try @ 035a6068 with catch @ 035a5fac
                       catch() { ... } // from try @ 035a60a8 with catch @ 035a5fac
                       catch() { ... } // from try @ 035a60d0 with catch @ 035a5fac
                       catch() { ... } // from try @ 035a6108 with catch @ 035a5fac */
    FUN_01bab630(&Method_UniRx_Subject<bool>_OnCompleted__);
    DAT_045684ef = 1;
  }
  pUVar1 = (__this->fields).POPPKIFIINN;
  if (pUVar1 != (UniRx_Subject_bool__o *)0x0) {
    UniRx_Subject<bool>__OnCompleted(pUVar1,Method_UniRx_Subject<bool>_OnCompleted__);
    pUVar1 = (__this->fields).POPPKIFIINN;
    if (pUVar1 != (UniRx_Subject_bool__o *)0x0) {
      UniRx_Subject<bool>__Dispose(pUVar1,Method_UniRx_Subject<bool>_Dispose__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected void FGNINNOOCCL(bool IBEBJHMKFGE)  [RVA 0x34A5FF4]
// IJIHLBLCJMG$$FGNINNOOCCL @ RVA 0x34A5FF4

void IJIHLBLCJMG__FGNINNOOCCL(IJIHLBLCJMG_o *__this,bool IBEBJHMKFGE,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  UniRx_Subject_bool__o *__this_01;
  
  if ((DAT_045684f0 & 1) == 0) {
    FUN_01bab630(&Method_UniRx_Subject<bool>_OnNext__);
    DAT_045684f0 = 1;
  }
  __this_00 = (__this->fields).ACHHOOFKHLD;
  if (__this_00 != (UniRx_CompositeDisposable_o *)0x0) {
    UniRx_CompositeDisposable__Clear(__this_00,(MethodInfo *)0x0);
    __this_01 = (__this->fields).POPPKIFIINN;
    if (__this_01 != (UniRx_Subject_bool__o *)0x0) {
                    /* try { // try from 035a6040 to 036a6047 has its CatchHandler @ 035a60b4 */
      UniRx_Subject<bool>__OnNext(__this_01,IBEBJHMKFGE,Method_UniRx_Subject<bool>_OnNext__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Dispose()  [RVA 0x34A605C]
// IJIHLBLCJMG$$Dispose @ RVA 0x34A605C

void IJIHLBLCJMG__Dispose(IJIHLBLCJMG_o *__this,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  
                    /* try { // try from 035a605c to 036a6067 has its CatchHandler @ 035a60ac */
  __this_00 = (__this->fields).KOLGEOBAJHM;
  if (__this_00 != (UniRx_CompositeDisposable_o *)0x0) {
                    /* try { // try from 035a6068 to 036a60a3 has its CatchHandler @ 035a5fac */
    UniRx_CompositeDisposable__Dispose(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x34A6078]
// IJIHLBLCJMG$$.ctor @ RVA 0x34A6078

void IJIHLBLCJMG___ctor(IJIHLBLCJMG_o *__this,MethodInfo *method)

{
  UniRx_Subject_bool__o *__this_00;
  UniRx_CompositeDisposable_o *pUVar1;
  System_Action_o *disposeAction;
  Il2CppObject *disposable;
  MethodInfo *extraout_x1;
  UniRx_CompositeDisposable_o **ppUVar2;
  UniRx_CompositeDisposable_o **ppUVar3;
  
                    /* try { // try from 035a60a4 to 036a60a7 has its CatchHandler @ 035a60b0 */
                    /* try { // try from 035a60a8 to 036a60cb has its CatchHandler @ 035a5fac */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035a605c with catch @ 035a60ac
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035a60a4 with catch @ 035a60b0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035a6040 with catch @ 035a60b4
                        */
  if ((DAT_045684f1 & 1) == 0) {
                    /* try { // try from 035a60cc to 036a60cf has its CatchHandler @ 035a60f8 */
                    /* try { // try from 035a60d0 to 036a60ff has its CatchHandler @ 035a5fac */
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&UniRx_CompositeDisposable_TypeInfo);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<CompositeDisposable>__);
                    /* catch() { ... } // from try @ 035a60cc with catch @ 035a60f8 */
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
                    /* try { // try from 035a6100 to 036a6107 has its CatchHandler @ 035a611c */
    FUN_01bab630(&UniRx_Disposable_TypeInfo);
                    /* try { // try from 035a6108 to 036a6113 has its CatchHandler @ 035a5fac */
    FUN_01bab630(&Method_IJIHLBLCJMG_DPLIBGCCKPM__);
                    /* try { // try from 035a6114 to 036a611b has its CatchHandler @ 035a611c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035a6100 with catch @ 035a611c
                       catch(type#2 @ 00000000) { ... } // from try @ 035a6114 with catch @ 035a611c
                        */
    FUN_01bab630(&Method_UniRx_Subject<bool>__ctor__);
                    /* try { // try from 035a6128 to 036a62eb has its CatchHandler @ 035a6128
                       catch() { ... } // from try @ 035a6128 with catch @ 035a6128
                       catch() { ... } // from try @ 035a6390 with catch @ 035a6128
                       catch() { ... } // from try @ 035a63d8 with catch @ 035a6128
                       catch() { ... } // from try @ 035a6410 with catch @ 035a6128
                       catch() { ... } // from try @ 035a6450 with catch @ 035a6128 */
    FUN_01bab630(&UniRx_Subject<bool>_TypeInfo);
    DAT_045684f1 = 1;
    method = extraout_x1;
  }
  __this_00 = (UniRx_Subject_bool__o *)thunk_FUN_01bda818(UniRx_Subject<bool>_TypeInfo,method);
  UniRx_Subject<bool>___ctor(__this_00,Method_UniRx_Subject<bool>__ctor__);
  (__this->fields).POPPKIFIINN = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  pUVar1 = (UniRx_CompositeDisposable_o *)thunk_FUN_01bda818(UniRx_CompositeDisposable_TypeInfo);
  UniRx_CompositeDisposable___ctor(pUVar1,(MethodInfo *)0x0);
  ppUVar2 = &(__this->fields).KOLGEOBAJHM;
  *ppUVar2 = pUVar1;
  thunk_FUN_01c20e04(ppUVar2,pUVar1);
  pUVar1 = (UniRx_CompositeDisposable_o *)thunk_FUN_01bda818(UniRx_CompositeDisposable_TypeInfo);
  UniRx_CompositeDisposable___ctor(pUVar1,(MethodInfo *)0x0);
  ppUVar3 = &(__this->fields).ACHHOOFKHLD;
  *ppUVar3 = pUVar1;
  thunk_FUN_01c20e04(ppUVar3,pUVar1);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  disposeAction = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if ((UniRx_Disposable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  disposable = (Il2CppObject *)UniRx_Disposable__Create(disposeAction,(MethodInfo *)0x0);
  UniRx_DisposableExtensions__AddTo<object>
            (disposable,(System_Collections_Generic_ICollection_IDisposable__o *)*ppUVar2,
             Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
  UniRx_DisposableExtensions__AddTo<object>
            ((Il2CppObject *)*ppUVar3,
             (System_Collections_Generic_ICollection_IDisposable__o *)*ppUVar2,
             Method_UniRx_DisposableExtensions_AddTo<CompositeDisposable>__);
  return;
}

