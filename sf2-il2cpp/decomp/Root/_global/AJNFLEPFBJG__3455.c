// TypeDefIndex 3455
// Namespace: 
// public class AJNFLEPFBJG : EAPFCMCJBAG, IDisposable
// Fields:
//   private readonly SerialDisposable PEEEGLKJLKG; // 0x10
//   private readonly ReactiveProperty<HCBNEFEHCBM> OMMGLBIMPDI; // 0x18
//   private readonly Subject<HCBNEFEHCBM> POPPKIFIINN; // 0x20

// ===== public void EOFBIILPHJN()  [RVA 0x3568330]
// AJNFLEPFBJG$$EOFBIILPHJN @ RVA 0x3568330

void AJNFLEPFBJG__EOFBIILPHJN(AJNFLEPFBJG_o *__this,MethodInfo *method)

{
  Il2CppObject *arg1;
  System_String_o *JLNPKGGFFDD;
  MethodInfo *method_00;
  UniRx_ReactiveProperty_HCBNEFEHCBM__o *pUVar1;
  HCBNEFEHCBM_o *pHVar2;
  char local_24 [4];
  
  if ((DAT_04568c09 & 1) == 0) {
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&Method_UniRx_ReactiveProperty<HCBNEFEHCBM>_get_Value__);
    FUN_01bab630(&StringLiteral_11277/*"RequestPermission"*/);
    FUN_01bab630(&StringLiteral_22373/*"{0}: COMPLETED - already requested PermissionGranted: {1},  DeviceToken: '{2}'."*/);
    FUN_01bab630(&StringLiteral_11278/*"RequestPermission: STARTED."*/);
    DAT_04568c09 = 1;
  }
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_11278/*"RequestPermission: STARTED."*/,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).OMMGLBIMPDI;
  if (pUVar1 != (UniRx_ReactiveProperty_HCBNEFEHCBM__o *)0x0) {
    pHVar2 = (pUVar1->fields).value;
    if ((pHVar2 == (HCBNEFEHCBM_o *)0x0) ||
       (local_24[0] = (pHVar2->fields).GDPEIODCJFI, (bool_conflict)local_24[0] == false)) {
      return;
    }
    arg1 = (Il2CppObject *)thunk_FUN_01bda448(bool_TypeInfo,local_24);
    pUVar1 = (__this->fields).OMMGLBIMPDI;
    if ((pUVar1 != (UniRx_ReactiveProperty_HCBNEFEHCBM__o *)0x0) &&
       (pHVar2 = (pUVar1->fields).value, pHVar2 != (HCBNEFEHCBM_o *)0x0)) {
      JLNPKGGFFDD = System_String__Format
                              (StringLiteral_22373/*"{0}: COMPLETED - already requested PermissionGranted: {1},  DeviceToken: '{2}'."*/,StringLiteral_11277/*"RequestPermission"*/,arg1,
                               (Il2CppObject *)(pHVar2->fields).DIMBHIMLDLP,(MethodInfo *)0x0);
      method_00 = (MethodInfo *)0x0;
      KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,JLNPKGGFFDD,(MethodInfo *)0x0);
      pUVar1 = (__this->fields).OMMGLBIMPDI;
      if (pUVar1 != (UniRx_ReactiveProperty_HCBNEFEHCBM__o *)0x0) {
        AJNFLEPFBJG__LJAFGHFICCB(__this,(pUVar1->fields).value,method_00);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x35684C8]
// AJNFLEPFBJG$$.ctor @ RVA 0x35684C8

void AJNFLEPFBJG___ctor(AJNFLEPFBJG_o *__this,MethodInfo *method)

{
  UniRx_SerialDisposable_o *__this_00;
  UniRx_ReactiveProperty_HCBNEFEHCBM__o *__this_01;
  UniRx_ReactiveProperty_HCBNEFEHCBM__o **ppUVar1;
  UniRx_Subject_HCBNEFEHCBM__o *__this_02;
  UniRx_Subject_HCBNEFEHCBM__o **ppUVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568c0a & 1) == 0) {
    FUN_01bab630(&Method_UniRx_ReactiveProperty<HCBNEFEHCBM>__ctor__);
    FUN_01bab630(&UniRx_ReactiveProperty<HCBNEFEHCBM>_TypeInfo);
    FUN_01bab630(&UniRx_SerialDisposable_TypeInfo);
    FUN_01bab630(&Method_UniRx_Subject<HCBNEFEHCBM>__ctor__);
    FUN_01bab630(&UniRx_Subject<HCBNEFEHCBM>_TypeInfo);
    DAT_04568c0a = 1;
    method = extraout_x1;
  }
  __this_00 = (UniRx_SerialDisposable_o *)thunk_FUN_01bda818(UniRx_SerialDisposable_TypeInfo,method)
  ;
  UniRx_SerialDisposable___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields).PEEEGLKJLKG = __this_00;
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


// ===== private void LJAFGHFICCB(HCBNEFEHCBM HPACPFLKHPK)  [RVA 0x3568448]
// AJNFLEPFBJG$$LJAFGHFICCB @ RVA 0x3568448

void AJNFLEPFBJG__LJAFGHFICCB(AJNFLEPFBJG_o *__this,HCBNEFEHCBM_o *HPACPFLKHPK,MethodInfo *method)

{
  UniRx_ReactiveProperty_HCBNEFEHCBM__o *__this_00;
  UniRx_Subject_HCBNEFEHCBM__o *__this_01;
  
  if ((DAT_04568c0b & 1) == 0) {
    FUN_01bab630(&Method_UniRx_ReactiveProperty<HCBNEFEHCBM>_set_Value__);
    FUN_01bab630(&Method_UniRx_Subject<HCBNEFEHCBM>_OnNext__);
    DAT_04568c0b = 1;
  }
  __this_00 = (__this->fields).OMMGLBIMPDI;
  if (__this_00 != (UniRx_ReactiveProperty_HCBNEFEHCBM__o *)0x0) {
    UniRx_ReactiveProperty<object>__set_Value
              ((UniRx_ReactiveProperty_T__o *)__this_00,(Il2CppObject *)HPACPFLKHPK,
               Method_UniRx_ReactiveProperty<HCBNEFEHCBM>_set_Value__);
    __this_01 = (__this->fields).POPPKIFIINN;
    if (__this_01 != (UniRx_Subject_HCBNEFEHCBM__o *)0x0) {
      UniRx_Subject<object>__OnNext
                ((UniRx_Subject_T__o *)__this_01,(Il2CppObject *)HPACPFLKHPK,
                 Method_UniRx_Subject<HCBNEFEHCBM>_OnNext__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public IObservable<HCBNEFEHCBM> AACOKOOGPMC()  [RVA 0x35685DC]
// AJNFLEPFBJG$$AACOKOOGPMC @ RVA 0x35685DC

System_IObservable_HCBNEFEHCBM__o *
AJNFLEPFBJG__AACOKOOGPMC(AJNFLEPFBJG_o *__this,MethodInfo *method)

{
  System_IObservable_T__o *pSVar1;
  MethodInfo *extraout_x1;
  UniRx_Subject_HCBNEFEHCBM__o *source;
  
  if ((DAT_04568c0c & 1) == 0) {
    FUN_01bab630(&Method_UniRx_Observable_AsObservable<HCBNEFEHCBM>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    DAT_04568c0c = 1;
    method = extraout_x1;
  }
  source = (__this->fields).POPPKIFIINN;
  if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UniRx_Observable_TypeInfo,method);
  }
  pSVar1 = UniRx_Observable__AsObservable<object>
                     ((System_IObservable_T__o *)source,
                      Method_UniRx_Observable_AsObservable<HCBNEFEHCBM>__);
  return (System_IObservable_HCBNEFEHCBM__o *)pSVar1;
}


// ===== public IReadOnlyReactiveProperty<HCBNEFEHCBM> CFLNKHMDBCC()  [RVA 0x356864C]
// AJNFLEPFBJG$$CFLNKHMDBCC @ RVA 0x356864C

UniRx_IReadOnlyReactiveProperty_HCBNEFEHCBM__o *
AJNFLEPFBJG__CFLNKHMDBCC(AJNFLEPFBJG_o *__this,MethodInfo *method)

{
  return (UniRx_IReadOnlyReactiveProperty_HCBNEFEHCBM__o *)(__this->fields).OMMGLBIMPDI;
}


// ===== public void Dispose()  [RVA 0x3568654]
// AJNFLEPFBJG$$Dispose @ RVA 0x3568654

void AJNFLEPFBJG__Dispose(AJNFLEPFBJG_o *__this,MethodInfo *method)

{
  UniRx_ReactiveProperty_HCBNEFEHCBM__o *__this_00;
  UniRx_SerialDisposable_o *__this_01;
  UniRx_Subject_HCBNEFEHCBM__o *pUVar1;
  
  if ((DAT_04568c0d & 1) == 0) {
    FUN_01bab630(&Method_UniRx_ReactiveProperty<HCBNEFEHCBM>_Dispose__);
    FUN_01bab630(&Method_UniRx_Subject<HCBNEFEHCBM>_Dispose__);
    FUN_01bab630(&Method_UniRx_Subject<HCBNEFEHCBM>_OnCompleted__);
    DAT_04568c0d = 1;
  }
  __this_00 = (__this->fields).OMMGLBIMPDI;
  if (__this_00 != (UniRx_ReactiveProperty_HCBNEFEHCBM__o *)0x0) {
    UniRx_ReactiveProperty<object>__Dispose
              ((UniRx_ReactiveProperty_T__o *)__this_00,
               Method_UniRx_ReactiveProperty<HCBNEFEHCBM>_Dispose__);
  }
  __this_01 = (__this->fields).PEEEGLKJLKG;
  if (__this_01 != (UniRx_SerialDisposable_o *)0x0) {
    UniRx_SerialDisposable__Dispose(__this_01,(MethodInfo *)0x0);
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

