// TypeDefIndex 3010
// Namespace: 
// public class FGFPOFBKHMM : EAPFCMCJBAG, IDisposable
// Fields:
//   private readonly HCBNEFEHCBM EEDBKKBFKCP; // 0x10
//   private readonly ReactiveProperty<HCBNEFEHCBM> OMMGLBIMPDI; // 0x18
//   private readonly Subject<HCBNEFEHCBM> POPPKIFIINN; // 0x20

// ===== public IObservable<HCBNEFEHCBM> AACOKOOGPMC()  [RVA 0x34ABE2C]
// FGFPOFBKHMM$$AACOKOOGPMC @ RVA 0x34ABE2C

System_IObservable_HCBNEFEHCBM__o *
FGFPOFBKHMM__AACOKOOGPMC(FGFPOFBKHMM_o *__this,MethodInfo *method)

{
  return (System_IObservable_HCBNEFEHCBM__o *)(__this->fields).POPPKIFIINN;
}


// ===== public void .ctor()  [RVA 0x34ABE34]
// FGFPOFBKHMM$$.ctor @ RVA 0x34ABE34

void FGFPOFBKHMM___ctor(FGFPOFBKHMM_o *__this,MethodInfo *method)

{
  HCBNEFEHCBM_o *__this_00;
  UniRx_ReactiveProperty_HCBNEFEHCBM__o *__this_01;
  UniRx_ReactiveProperty_HCBNEFEHCBM__o **ppUVar1;
  UniRx_Subject_HCBNEFEHCBM__o *__this_02;
  UniRx_Subject_HCBNEFEHCBM__o **ppUVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568533 & 1) == 0) {
    FUN_01bab630(&HCBNEFEHCBM_TypeInfo);
    FUN_01bab630(&Method_UniRx_ReactiveProperty<HCBNEFEHCBM>__ctor__);
    FUN_01bab630(&UniRx_ReactiveProperty<HCBNEFEHCBM>_TypeInfo);
    FUN_01bab630(&Method_UniRx_Subject<HCBNEFEHCBM>__ctor__);
    FUN_01bab630(&UniRx_Subject<HCBNEFEHCBM>_TypeInfo);
    DAT_04568533 = 1;
    method = extraout_x1;
  }
  __this_00 = (HCBNEFEHCBM_o *)thunk_FUN_01bda818(HCBNEFEHCBM_TypeInfo,method);
  HCBNEFEHCBM___ctor(__this_00,true,(System_String_o *)0x0,(MethodInfo *)0x0);
  (__this->fields).EEDBKKBFKCP = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  __this_01 = (UniRx_ReactiveProperty_HCBNEFEHCBM__o *)
              thunk_FUN_01bda818(UniRx_ReactiveProperty<HCBNEFEHCBM>_TypeInfo);
  UniRx_ReactiveProperty<object>___ctor
            ((UniRx_ReactiveProperty_T__o *)__this_01,
             Method_UniRx_ReactiveProperty<HCBNEFEHCBM>__ctor__);
  ppUVar1 = &(__this->fields).OMMGLBIMPDI;
  *ppUVar1 = __this_01;
  thunk_FUN_01c20e04(ppUVar1,__this_01);
  __this_02 = (UniRx_Subject_HCBNEFEHCBM__o *)
              thunk_FUN_01bda818(UniRx_Subject<HCBNEFEHCBM>_TypeInfo);
  UniRx_Subject<object>___ctor
            ((UniRx_Subject_T__o *)__this_02,Method_UniRx_Subject<HCBNEFEHCBM>__ctor__);
  ppUVar2 = &(__this->fields).POPPKIFIINN;
  *ppUVar2 = __this_02;
  thunk_FUN_01c20e04(ppUVar2,__this_02);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void EOFBIILPHJN()  [RVA 0x34ABF50]
// FGFPOFBKHMM$$EOFBIILPHJN @ RVA 0x34ABF50

void FGFPOFBKHMM__EOFBIILPHJN(FGFPOFBKHMM_o *__this,MethodInfo *method)

{
  UniRx_Subject_HCBNEFEHCBM__o *__this_00;
  
  if ((DAT_04568534 & 1) == 0) {
    FUN_01bab630(&Method_UniRx_Subject<HCBNEFEHCBM>_OnNext__);
    FUN_01bab630(&StringLiteral_11278/*"RequestPermission: STARTED."*/);
    FUN_01bab630(&StringLiteral_11279/*"RequestPermission: SUCCESS!"*/);
    DAT_04568534 = 1;
  }
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_11278/*"RequestPermission: STARTED."*/,(MethodInfo *)0x0);
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_11279/*"RequestPermission: SUCCESS!"*/,(MethodInfo *)0x0);
  __this_00 = (__this->fields).POPPKIFIINN;
  if (__this_00 != (UniRx_Subject_HCBNEFEHCBM__o *)0x0) {
    UniRx_Subject<object>__OnNext
              ((UniRx_Subject_T__o *)__this_00,(Il2CppObject *)(__this->fields).EEDBKKBFKCP,
               Method_UniRx_Subject<HCBNEFEHCBM>_OnNext__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Dispose()  [RVA 0x34ABFF4]
// FGFPOFBKHMM$$Dispose @ RVA 0x34ABFF4

void FGFPOFBKHMM__Dispose(FGFPOFBKHMM_o *__this,MethodInfo *method)

{
  UniRx_ReactiveProperty_HCBNEFEHCBM__o *__this_00;
  UniRx_Subject_HCBNEFEHCBM__o *pUVar1;
  
  if ((DAT_04568535 & 1) == 0) {
    FUN_01bab630(&Method_UniRx_ReactiveProperty<HCBNEFEHCBM>_Dispose__);
    FUN_01bab630(&Method_UniRx_Subject<HCBNEFEHCBM>_Dispose__);
    FUN_01bab630(&Method_UniRx_Subject<HCBNEFEHCBM>_OnCompleted__);
    DAT_04568535 = 1;
  }
  __this_00 = (__this->fields).OMMGLBIMPDI;
  if (__this_00 != (UniRx_ReactiveProperty_HCBNEFEHCBM__o *)0x0) {
    UniRx_ReactiveProperty<object>__Dispose
              ((UniRx_ReactiveProperty_T__o *)__this_00,
               Method_UniRx_ReactiveProperty<HCBNEFEHCBM>_Dispose__);
  }
  pUVar1 = (__this->fields).POPPKIFIINN;
  if (pUVar1 != (UniRx_Subject_HCBNEFEHCBM__o *)0x0) {
    UniRx_Subject<object>__OnCompleted
              ((UniRx_Subject_T__o *)pUVar1,Method_UniRx_Subject<HCBNEFEHCBM>_OnCompleted__);
    pUVar1 = (__this->fields).POPPKIFIINN;
    if (pUVar1 != (UniRx_Subject_HCBNEFEHCBM__o *)0x0) {
      UniRx_Subject<object>__Dispose
                ((UniRx_Subject_T__o *)pUVar1,Method_UniRx_Subject<HCBNEFEHCBM>_Dispose__);
      return;
    }
  }
  return;
}


// ===== public IReadOnlyReactiveProperty<HCBNEFEHCBM> CFLNKHMDBCC()  [RVA 0x34AC094]
// FGFPOFBKHMM$$CFLNKHMDBCC @ RVA 0x34AC094

UniRx_IReadOnlyReactiveProperty_HCBNEFEHCBM__o *
FGFPOFBKHMM__CFLNKHMDBCC(FGFPOFBKHMM_o *__this,MethodInfo *method)

{
  return (UniRx_IReadOnlyReactiveProperty_HCBNEFEHCBM__o *)(__this->fields).OMMGLBIMPDI;
}

