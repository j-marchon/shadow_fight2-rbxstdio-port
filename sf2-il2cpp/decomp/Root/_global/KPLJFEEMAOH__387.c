// TypeDefIndex 387
// Namespace: 
// public class KPLJFEEMAOH : EAPFCMCJBAG, IDisposable
// Fields:
//   private readonly string[] LNONGJEDIFI; // 0x10
//   private readonly ReactiveProperty<HCBNEFEHCBM> OMMGLBIMPDI; // 0x18
//   private readonly Subject<HCBNEFEHCBM> OAGOJKAFAEA; // 0x20
//   private readonly SerialDisposable PEEEGLKJLKG; // 0x28
//   private readonly GEJEGHKMPJM PEEHIKFEJAJ; // 0x30
//   private Action<bool> DFBLNKIKOHM; // 0x38

// ===== public void Dispose()  [RVA 0x347D728]
// KPLJFEEMAOH$$Dispose @ RVA 0x347D728

void KPLJFEEMAOH__Dispose(KPLJFEEMAOH_o *__this,MethodInfo *method)

{
  UniRx_ReactiveProperty_HCBNEFEHCBM__o *__this_00;
  UniRx_Subject_HCBNEFEHCBM__o *pUVar1;
  
                    /* try { // try from 0357d728 to 0367d733 has its CatchHandler @ 0357db04 */
                    /* try { // try from 0357d734 to 0367d73f has its CatchHandler @ 0357db00 */
  if ((DAT_04568364 & 1) == 0) {
    FUN_01bab630(&Method_UniRx_ReactiveProperty<HCBNEFEHCBM>_Dispose__);
                    /* try { // try from 0357d754 to 0367d75b has its CatchHandler @ 0357db14 */
    FUN_01bab630(&Method_UniRx_Subject<HCBNEFEHCBM>_Dispose__);
    FUN_01bab630(&Method_UniRx_Subject<HCBNEFEHCBM>_OnCompleted__);
                    /* try { // try from 0357d764 to 0367d76b has its CatchHandler @ 0357da7c */
    DAT_04568364 = 1;
  }
  __this_00 = (__this->fields).OMMGLBIMPDI;
  if (__this_00 != (UniRx_ReactiveProperty_HCBNEFEHCBM__o *)0x0) {
                    /* try { // try from 0357d77c to 0367d783 has its CatchHandler @ 0357daf0 */
    UniRx_ReactiveProperty<object>__Dispose
              ((UniRx_ReactiveProperty_T__o *)__this_00,
               Method_UniRx_ReactiveProperty<HCBNEFEHCBM>_Dispose__);
  }
  pUVar1 = (__this->fields).OAGOJKAFAEA;
                    /* try { // try from 0357d788 to 0367d78f has its CatchHandler @ 0357da80 */
  if (pUVar1 != (UniRx_Subject_HCBNEFEHCBM__o *)0x0) {
    UniRx_Subject<object>__OnCompleted
              ((UniRx_Subject_T__o *)pUVar1,Method_UniRx_Subject<HCBNEFEHCBM>_OnCompleted__);
    pUVar1 = (__this->fields).OAGOJKAFAEA;
                    /* try { // try from 0357d7a0 to 0367d7a7 has its CatchHandler @ 0357dac0 */
    if (pUVar1 != (UniRx_Subject_HCBNEFEHCBM__o *)0x0) {
                    /* try { // try from 0357d7a8 to 0367d7bb has its CatchHandler @ 0357daec */
      UniRx_Subject<object>__Dispose
                ((UniRx_Subject_T__o *)pUVar1,Method_UniRx_Subject<HCBNEFEHCBM>_Dispose__);
      return;
    }
  }
                    /* try { // try from 0357d7c0 to 0367d7cb has its CatchHandler @ 0357dad4 */
  return;
}


// ===== public IObservable<HCBNEFEHCBM> AACOKOOGPMC()  [RVA 0x347D7C8]
// KPLJFEEMAOH$$AACOKOOGPMC @ RVA 0x347D7C8

System_IObservable_HCBNEFEHCBM__o *
KPLJFEEMAOH__AACOKOOGPMC(KPLJFEEMAOH_o *__this,MethodInfo *method)

{
  System_IObservable_T__o *pSVar1;
  MethodInfo *extraout_x1;
  UniRx_Subject_HCBNEFEHCBM__o *source;
  
                    /* try { // try from 0357d7cc to 0367d7d7 has its CatchHandler @ 0357da8c */
  if ((DAT_04568365 & 1) == 0) {
                    /* try { // try from 0357d7e8 to 0367d7ef has its CatchHandler @ 0357da90 */
    FUN_01bab630(&Method_UniRx_Observable_AsObservable<HCBNEFEHCBM>__);
                    /* try { // try from 0357d7f8 to 0367d7ff has its CatchHandler @ 0357dabc */
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    DAT_04568365 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 0357d810 to 0367d817 has its CatchHandler @ 0357da84 */
  source = (__this->fields).OAGOJKAFAEA;
                    /* try { // try from 0357d81c to 0367d823 has its CatchHandler @ 0357da88 */
  if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UniRx_Observable_TypeInfo,method);
  }
                    /* try { // try from 0357d834 to 0367d83b has its CatchHandler @ 0357daf4 */
  pSVar1 = UniRx_Observable__AsObservable<object>
                     ((System_IObservable_T__o *)source,
                      Method_UniRx_Observable_AsObservable<HCBNEFEHCBM>__);
  return (System_IObservable_HCBNEFEHCBM__o *)pSVar1;
}


// ===== private void PFJCEDKNOCK(HCBNEFEHCBM HPACPFLKHPK)  [RVA 0x347D838]
// KPLJFEEMAOH$$PFJCEDKNOCK @ RVA 0x347D838

void KPLJFEEMAOH__PFJCEDKNOCK(KPLJFEEMAOH_o *__this,HCBNEFEHCBM_o *HPACPFLKHPK,MethodInfo *method)

{
  UniRx_ReactiveProperty_HCBNEFEHCBM__o *__this_00;
  UniRx_Subject_HCBNEFEHCBM__o *__this_01;
  
                    /* try { // try from 0357d83c to 0367d84f has its CatchHandler @ 0357dadc */
  if ((DAT_04568366 & 1) == 0) {
                    /* try { // try from 0357d854 to 0367d85f has its CatchHandler @ 0357da9c */
    FUN_01bab630(&Method_UniRx_ReactiveProperty<HCBNEFEHCBM>_set_Value__);
                    /* try { // try from 0357d860 to 0367d86b has its CatchHandler @ 0357dac4 */
    FUN_01bab630(&Method_UniRx_Subject<HCBNEFEHCBM>_OnNext__);
    DAT_04568366 = 1;
  }
  __this_00 = (__this->fields).OMMGLBIMPDI;
  if (__this_00 != (UniRx_ReactiveProperty_HCBNEFEHCBM__o *)0x0) {
                    /* try { // try from 0357d87c to 0367d883 has its CatchHandler @ 0357daa8 */
                    /* try { // try from 0357d88c to 0367d893 has its CatchHandler @ 0357dae4 */
    UniRx_ReactiveProperty<object>__set_Value
              ((UniRx_ReactiveProperty_T__o *)__this_00,(Il2CppObject *)HPACPFLKHPK,
               Method_UniRx_ReactiveProperty<HCBNEFEHCBM>_set_Value__);
    __this_01 = (__this->fields).OAGOJKAFAEA;
    if (__this_01 != (UniRx_Subject_HCBNEFEHCBM__o *)0x0) {
                    /* try { // try from 0357d8a4 to 0367d8ab has its CatchHandler @ 0357dab4 */
                    /* try { // try from 0357d8b0 to 0367d8b7 has its CatchHandler @ 0357dad8 */
      UniRx_Subject<object>__OnNext
                ((UniRx_Subject_T__o *)__this_01,(Il2CppObject *)HPACPFLKHPK,
                 Method_UniRx_Subject<HCBNEFEHCBM>_OnNext__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x347D8B8]
// KPLJFEEMAOH$$.ctor @ RVA 0x347D8B8

void KPLJFEEMAOH___ctor(KPLJFEEMAOH_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  UniRx_ReactiveProperty_HCBNEFEHCBM__o *__this_00;
  UniRx_ReactiveProperty_HCBNEFEHCBM__o **ppUVar2;
  UniRx_Subject_HCBNEFEHCBM__o *__this_01;
  UniRx_Subject_HCBNEFEHCBM__o **ppUVar3;
  UniRx_SerialDisposable_o *__this_02;
  UniRx_SerialDisposable_o **ppUVar4;
  GEJEGHKMPJM_o *pGVar5;
  GEJEGHKMPJM_o **ppGVar6;
  
                    /* try { // try from 0357d8c8 to 0367d8cf has its CatchHandler @ 0357dafc */
                    /* try { // try from 0357d8d0 to 0367d8e3 has its CatchHandler @ 0357daf8 */
  if ((DAT_04568367 & 1) == 0) {
                    /* try { // try from 0357d8e8 to 0367d8f3 has its CatchHandler @ 0357dae8 */
    FUN_01bab630(&Method_UniRx_ReactiveProperty<HCBNEFEHCBM>__ctor__);
                    /* try { // try from 0357d8f4 to 0367d8ff has its CatchHandler @ 0357dac8 */
    FUN_01bab630(&UniRx_ReactiveProperty<HCBNEFEHCBM>_TypeInfo);
    FUN_01bab630(&UniRx_SerialDisposable_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
                    /* try { // try from 0357d910 to 0367d917 has its CatchHandler @ 0357dae0 */
    FUN_01bab630(&Method_UniRx_Subject<HCBNEFEHCBM>__ctor__);
                    /* try { // try from 0357d920 to 0367d927 has its CatchHandler @ 0357da98 */
    FUN_01bab630(&UniRx_Subject<HCBNEFEHCBM>_TypeInfo);
    FUN_01bab630(&StringLiteral_16425/*"android.permission.POST_NOTIFICATIONS"*/);
                    /* try { // try from 0357d938 to 0367d93f has its CatchHandler @ 0357daa4 */
    DAT_04568367 = 1;
  }
                    /* try { // try from 0357d944 to 0367d94b has its CatchHandler @ 0357daa0 */
  pSVar1 = (System_String_array *)FUN_01bab718(string___TypeInfo,1);
  if (pSVar1 != (System_String_array *)0x0) {
    if ((int)pSVar1->max_length != 0) {
                    /* try { // try from 0357d95c to 0367d963 has its CatchHandler @ 0357dab8 */
                    /* try { // try from 0357d964 to 0367d977 has its CatchHandler @ 0357da94 */
                    /* try { // try from 0357d97c to 0367d987 has its CatchHandler @ 0357da74 */
                    /* try { // try from 0357d988 to 0367d993 has its CatchHandler @ 0357da78 */
      pSVar1->m_Items[0] = StringLiteral_16425/*"android.permission.POST_NOTIFICATIONS"*/;
      thunk_FUN_01c20e04();
      (__this->fields).LNONGJEDIFI = pSVar1;
                    /* try { // try from 0357d9a0 to 0367d9ab has its CatchHandler @ 0357da70 */
      thunk_FUN_01c20e04(&__this->fields,pSVar1);
                    /* try { // try from 0357d9ac to 0367da37 has its CatchHandler @ 0357d3f0 */
      __this_00 = (UniRx_ReactiveProperty_HCBNEFEHCBM__o *)
                  thunk_FUN_01bda818(UniRx_ReactiveProperty<HCBNEFEHCBM>_TypeInfo);
      UniRx_ReactiveProperty<object>___ctor
                ((UniRx_ReactiveProperty_T__o *)__this_00,
                 Method_UniRx_ReactiveProperty<HCBNEFEHCBM>__ctor__);
      ppUVar2 = &(__this->fields).OMMGLBIMPDI;
      *ppUVar2 = __this_00;
      thunk_FUN_01c20e04(ppUVar2,__this_00);
      __this_01 = (UniRx_Subject_HCBNEFEHCBM__o *)
                  thunk_FUN_01bda818(UniRx_Subject<HCBNEFEHCBM>_TypeInfo);
      UniRx_Subject<object>___ctor
                ((UniRx_Subject_T__o *)__this_01,Method_UniRx_Subject<HCBNEFEHCBM>__ctor__);
      ppUVar3 = &(__this->fields).OAGOJKAFAEA;
      *ppUVar3 = __this_01;
      thunk_FUN_01c20e04(ppUVar3,__this_01);
      __this_02 = (UniRx_SerialDisposable_o *)thunk_FUN_01bda818(UniRx_SerialDisposable_TypeInfo);
      UniRx_SerialDisposable___ctor(__this_02,(MethodInfo *)0x0);
      ppUVar4 = &(__this->fields).PEEEGLKJLKG;
      *ppUVar4 = __this_02;
      thunk_FUN_01c20e04(ppUVar4,__this_02);
      System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
      pGVar5 = GEJEGHKMPJM__AIHNLLGNBLC((MethodInfo *)0x0);
      ppGVar6 = &(__this->fields).PEEHIKFEJAJ;
      *ppGVar6 = pGVar5;
                    /* try { // try from 0357da38 to 0367da3b has its CatchHandler @ 0357db24 */
                    /* try { // try from 0357da3c to 0367da3f has its CatchHandler @ 0357db1c */
                    /* try { // try from 0357da40 to 0367da43 has its CatchHandler @ 0357db18 */
                    /* try { // try from 0357da44 to 0367da47 has its CatchHandler @ 0357dad0 */
      thunk_FUN_01c20e04(ppGVar6,pGVar5);
      return;
    }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0357da4c to 0367da4f has its CatchHandler @ 0357dab0 */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0357da48 to 0367da4b has its CatchHandler @ 0357dacc */
  FUN_01bab8c8();
}


// ===== public IReadOnlyReactiveProperty<HCBNEFEHCBM> CFLNKHMDBCC()  [RVA 0x347DA50]
// KPLJFEEMAOH$$CFLNKHMDBCC @ RVA 0x347DA50

UniRx_IReadOnlyReactiveProperty_HCBNEFEHCBM__o *
KPLJFEEMAOH__CFLNKHMDBCC(KPLJFEEMAOH_o *__this,MethodInfo *method)

{
                    /* try { // try from 0357da50 to 0367da53 has its CatchHandler @ 0357daac */
                    /* try { // try from 0357da54 to 0367da57 has its CatchHandler @ 0357da6c */
  return (UniRx_IReadOnlyReactiveProperty_HCBNEFEHCBM__o *)(__this->fields).OMMGLBIMPDI;
}


// ===== private static bool MGBDOBDPOGB()  [RVA 0x347DA58]
// KPLJFEEMAOH$$MGBDOBDPOGB @ RVA 0x347DA58

bool KPLJFEEMAOH__MGBDOBDPOGB(MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  
                    /* try { // try from 0357da58 to 0367da5b has its CatchHandler @ 0357d3f0 */
                    /* try { // try from 0357da5c to 0367da5f has its CatchHandler @ 0357da68 */
                    /* try { // try from 0357da60 to 0367db4f has its CatchHandler @ 0357d3f0 */
                    /* catch() { ... } // from try @ 0357da5c with catch @ 0357da68 */
                    /* catch() { ... } // from try @ 0357da54 with catch @ 0357da6c */
                    /* catch() { ... } // from try @ 0357d9a0 with catch @ 0357da70 */
  if ((DAT_04568368 & 1) == 0) {
                    /* catch() { ... } // from try @ 0357d97c with catch @ 0357da74 */
                    /* catch() { ... } // from try @ 0357d988 with catch @ 0357da78 */
                    /* catch() { ... } // from try @ 0357d764 with catch @ 0357da7c */
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
                    /* catch() { ... } // from try @ 0357d788 with catch @ 0357da80 */
                    /* catch() { ... } // from try @ 0357d810 with catch @ 0357da84 */
                    /* catch() { ... } // from try @ 0357d81c with catch @ 0357da88 */
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
                    /* catch() { ... } // from try @ 0357d7cc with catch @ 0357da8c */
                    /* catch() { ... } // from try @ 0357d7e8 with catch @ 0357da90 */
    DAT_04568368 = 1;
  }
                    /* catch() { ... } // from try @ 0357d964 with catch @ 0357da94 */
                    /* catch() { ... } // from try @ 0357d920 with catch @ 0357da98 */
                    /* catch() { ... } // from try @ 0357d854 with catch @ 0357da9c */
  if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 0357d944 with catch @ 0357daa0 */
    thunk_FUN_01ba7564();
  }
                    /* catch() { ... } // from try @ 0357d938 with catch @ 0357daa4 */
                    /* catch() { ... } // from try @ 0357d87c with catch @ 0357daa8 */
  iVar2 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0357da50 with catch @ 0357daac */
                    /* catch() { ... } // from try @ 0357da4c with catch @ 0357dab0 */
  if (iVar2 == 0xb) {
                    /* catch() { ... } // from try @ 0357d8a4 with catch @ 0357dab4 */
                    /* catch() { ... } // from try @ 0357d95c with catch @ 0357dab8 */
                    /* catch() { ... } // from try @ 0357d7f8 with catch @ 0357dabc */
                    /* catch() { ... } // from try @ 0357d7a0 with catch @ 0357dac0 */
                    /* catch() { ... } // from try @ 0357d860 with catch @ 0357dac4 */
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 0357d8f4 with catch @ 0357dac8 */
      thunk_FUN_01ba7564();
    }
                    /* catch() { ... } // from try @ 0357da48 with catch @ 0357dacc */
                    /* catch() { ... } // from try @ 0357da44 with catch @ 0357dad0 */
    iVar2 = EOAOCPLIKOI__FLAEIMOEDKO((MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0357d7c0 with catch @ 0357dad4 */
                    /* catch() { ... } // from try @ 0357d8b0 with catch @ 0357dad8 */
    bVar1 = 0x20 < iVar2;
                    /* catch() { ... } // from try @ 0357d83c with catch @ 0357dadc */
  }
  else {
                    /* catch() { ... } // from try @ 0357d910 with catch @ 0357dae0 */
    bVar1 = false;
  }
                    /* catch() { ... } // from try @ 0357d88c with catch @ 0357dae4 */
                    /* catch() { ... } // from try @ 0357d8e8 with catch @ 0357dae8 */
                    /* catch() { ... } // from try @ 0357d7a8 with catch @ 0357daec */
  return bVar1;
}


// ===== public void EOFBIILPHJN()  [RVA 0x347DAF0]
// KPLJFEEMAOH$$EOFBIILPHJN @ RVA 0x347DAF0

void KPLJFEEMAOH__EOFBIILPHJN(KPLJFEEMAOH_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  Il2CppObject *arg1;
  System_String_o *JLNPKGGFFDD;
  GEJEGHKMPJM_o *pGVar2;
  System_Func_IObserver_T___IDisposable__o *subscribe;
  System_IObservable_T__o *pSVar3;
  System_Action_T__o *onNext;
  System_IDisposable_o *value;
  MethodInfo *method_01;
  KALOJBMDHLA_o *EEIGMKBOLJI;
  MethodInfo *pMVar4;
  UniRx_ReactiveProperty_HCBNEFEHCBM__o *pUVar5;
  HCBNEFEHCBM_o *pHVar6;
  System_String_array *PCODJFHNICN;
  UniRx_SerialDisposable_o *__this_00;
  undefined1 local_24 [4];
  
                    /* catch() { ... } // from try @ 0357d77c with catch @ 0357daf0 */
                    /* catch() { ... } // from try @ 0357d834 with catch @ 0357daf4 */
                    /* catch() { ... } // from try @ 0357d8d0 with catch @ 0357daf8 */
                    /* catch() { ... } // from try @ 0357d8c8 with catch @ 0357dafc */
                    /* catch() { ... } // from try @ 0357d734 with catch @ 0357db00 */
                    /* catch() { ... } // from try @ 0357d728 with catch @ 0357db04 */
                    /* catch() { ... } // from try @ 0357d710 with catch @ 0357db08 */
                    /* catch() { ... } // from try @ 0357d6bc with catch @ 0357db0c */
                    /* catch() { ... } // from try @ 0357d6e4 with catch @ 0357db10 */
  if ((DAT_04568369 & 1) == 0) {
                    /* catch() { ... } // from try @ 0357d754 with catch @ 0357db14 */
                    /* catch() { ... } // from try @ 0357da40 with catch @ 0357db18 */
                    /* catch() { ... } // from try @ 0357da3c with catch @ 0357db1c */
    FUN_01bab630(&System_Action<bool>_TypeInfo);
                    /* catch() { ... } // from try @ 0357d6f0 with catch @ 0357db20 */
                    /* catch() { ... } // from try @ 0357da38 with catch @ 0357db24 */
                    /* catch() { ... } // from try @ 0357d708 with catch @ 0357db28 */
    FUN_01bab630(&bool_TypeInfo);
                    /* catch() { ... } // from try @ 0357d6cc with catch @ 0357db2c */
                    /* catch() { ... } // from try @ 0357d660 with catch @ 0357db30 */
                    /* catch() { ... } // from try @ 0357d5fc with catch @ 0357db34 */
    FUN_01bab630(&System_Func<IObserver<bool>,_IDisposable>_TypeInfo);
                    /* catch() { ... } // from try @ 0357d69c with catch @ 0357db38 */
    FUN_01bab630(&HCBNEFEHCBM_TypeInfo);
    FUN_01bab630(&Method_KPLJFEEMAOH_LCFBGIPIKBB__);
                    /* try { // try from 0357db50 to 0367db53 has its CatchHandler @ 0357db60 */
    FUN_01bab630(&Method_KPLJFEEMAOH_MDGKBBKBNAJ__);
                    /* catch() { ... } // from try @ 0357db50 with catch @ 0357db60 */
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<bool>__);
    FUN_01bab630(&Method_UniRx_Observable_Create<bool>__);
    FUN_01bab630(&Method_UniRx_Observable_Take<bool>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    FUN_01bab630(&Method_UniRx_ReactiveProperty<HCBNEFEHCBM>_get_Value__);
                    /* try { // try from 0357dba0 to 0367dbc7 has its CatchHandler @ 0357dbdc */
    FUN_01bab630(&StringLiteral_11277/*"RequestPermission"*/);
    FUN_01bab630(&StringLiteral_22374/*"{0}: COMPLETED - already requested PermissionGranted: {1}."*/);
    DAT_04568369 = 1;
  }
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_11277/*"RequestPermission"*/,(MethodInfo *)0x0);
                    /* try { // try from 0357dbc8 to 0367dbd3 has its CatchHandler @ 0357d3f0 */
  pUVar5 = (__this->fields).OMMGLBIMPDI;
  if (pUVar5 != (UniRx_ReactiveProperty_HCBNEFEHCBM__o *)0x0) {
    pHVar6 = (pUVar5->fields).value;
                    /* try { // try from 0357dbd4 to 0367dbdb has its CatchHandler @ 0357dbdc */
    if (pHVar6 == (HCBNEFEHCBM_o *)0x0) {
      bVar1 = KPLJFEEMAOH__MGBDOBDPOGB(method_00);
      if (!bVar1) {
LAB_0357dc68:
        pHVar6 = (HCBNEFEHCBM_o *)thunk_FUN_01bda818(HCBNEFEHCBM_TypeInfo);
        pMVar4 = (MethodInfo *)0x0;
        HCBNEFEHCBM___ctor(pHVar6,true,(System_String_o *)0x0,(MethodInfo *)0x0);
        KPLJFEEMAOH__PFJCEDKNOCK(__this,pHVar6,pMVar4);
        return;
      }
      pGVar2 = (__this->fields).PEEHIKFEJAJ;
      if (pGVar2 != (GEJEGHKMPJM_o *)0x0) {
        bVar1 = GEJEGHKMPJM__AFGELGGIGKK(pGVar2,(__this->fields).LNONGJEDIFI,(MethodInfo *)0x0);
        if (bVar1) goto LAB_0357dc68;
        __this_00 = (__this->fields).PEEEGLKJLKG;
        subscribe = (System_Func_IObserver_T___IDisposable__o *)
                    thunk_FUN_01bda818(System_Func<IObserver<bool>,_IDisposable>_TypeInfo);
        System_Func<object,_object>___ctor();
        if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar3 = UniRx_Observable__Create<bool>(subscribe,Method_UniRx_Observable_Create<bool>__);
        pSVar3 = UniRx_Observable__Take<bool>(pSVar3,1,Method_UniRx_Observable_Take<bool>__);
        onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<bool>_TypeInfo);
        System_Action<bool>___ctor();
        value = UniRx_ObservableExtensions__Subscribe<bool>
                          (pSVar3,onNext,Method_UniRx_ObservableExtensions_Subscribe<bool>__);
        if (__this_00 != (UniRx_SerialDisposable_o *)0x0) {
                    /* try { // try from 0357dd64 to 0367df13 has its CatchHandler @ 0357dd64
                       catch() { ... } // from try @ 0357dd64 with catch @ 0357dd64
                       catch() { ... } // from try @ 0357e024 with catch @ 0357dd64
                       catch() { ... } // from try @ 0357e0c8 with catch @ 0357dd64
                       catch() { ... } // from try @ 0357e190 with catch @ 0357dd64 */
          UniRx_SerialDisposable__set_Disposable(__this_00,value,(MethodInfo *)0x0);
          pGVar2 = (__this->fields).PEEHIKFEJAJ;
          PCODJFHNICN = (__this->fields).LNONGJEDIFI;
          EEIGMKBOLJI = KPLJFEEMAOH__GEBNENADLLM(method_01);
          if (pGVar2 != (GEJEGHKMPJM_o *)0x0) {
            GEJEGHKMPJM__JEOGFIPBJFE(pGVar2,PCODJFHNICN,EEIGMKBOLJI,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    else {
                    /* catch() { ... } // from try @ 0357dba0 with catch @ 0357dbdc
                       catch() { ... } // from try @ 0357dbd4 with catch @ 0357dbdc */
      local_24[0] = (pHVar6->fields).GDPEIODCJFI;
      arg1 = (Il2CppObject *)thunk_FUN_01bda448(bool_TypeInfo,local_24);
      JLNPKGGFFDD = System_String__Format
                              (StringLiteral_22374/*"{0}: COMPLETED - already requested PermissionGranted: {1}."*/,(Il2CppObject *)StringLiteral_11277/*"RequestPermission"*/,arg1,
                               (MethodInfo *)0x0);
      pMVar4 = (MethodInfo *)0x0;
      KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,JLNPKGGFFDD,(MethodInfo *)0x0);
      pUVar5 = (__this->fields).OMMGLBIMPDI;
      if (pUVar5 != (UniRx_ReactiveProperty_HCBNEFEHCBM__o *)0x0) {
        KPLJFEEMAOH__PFJCEDKNOCK(__this,(pUVar5->fields).value,pMVar4);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private IDisposable LCFBGIPIKBB(IObserver<bool> ENHLEPICPGK)  [RVA 0x347DE94]
// KPLJFEEMAOH$$LCFBGIPIKBB @ RVA 0x347DE94

System_IDisposable_o *
KPLJFEEMAOH__LCFBGIPIKBB
          (KPLJFEEMAOH_o *__this,System_IObserver_bool__o *ENHLEPICPGK,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Action_IEnumerable_string___bool__o *CJNHFNHJHPE;
  System_Action_o *disposeAction;
  System_IDisposable_o *pSVar1;
  GEJEGHKMPJM_o *__this_01;
  
  if ((DAT_0456836a & 1) == 0) {
    FUN_01bab630(&System_Action<IEnumerable<string>,_bool>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&UniRx_Disposable_TypeInfo);
    FUN_01bab630(&Method_KPLJFEEMAOH_GCJCGBFLHEE_EMLHAINFJCL__);
    FUN_01bab630(&Method_KPLJFEEMAOH_GCJCGBFLHEE_MOGKIIFFLCH__);
    FUN_01bab630(&KPLJFEEMAOH_GCJCGBFLHEE_TypeInfo);
    DAT_0456836a = 1;
  }
                    /* try { // try from 0357df14 to 0367df3b has its CatchHandler @ 0357e100 */
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(KPLJFEEMAOH_GCJCGBFLHEE_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].monitor = __this;
    thunk_FUN_01c20e04(&__this_00[1].monitor,__this);
    __this_00[1].klass = (Il2CppClass *)ENHLEPICPGK;
    thunk_FUN_01c20e04(__this_00 + 1,ENHLEPICPGK);
    __this_01 = (__this->fields).PEEHIKFEJAJ;
    CJNHFNHJHPE = (System_Action_IEnumerable_string___bool__o *)
                  thunk_FUN_01bda818(System_Action<IEnumerable<string>,_bool>_TypeInfo);
                    /* try { // try from 0357df70 to 0367df97 has its CatchHandler @ 0357e0fc */
    System_Action<object,_bool>___ctor();
    if (__this_01 != (GEJEGHKMPJM_o *)0x0) {
      GEJEGHKMPJM__LLJKLJJLJPA(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
                    /* try { // try from 0357dfa8 to 0367dfab has its CatchHandler @ 0357e0e8 */
      disposeAction = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                    /* try { // try from 0357dfac to 0367dfb3 has its CatchHandler @ 0357e0f4 */
      System_Action___ctor();
                    /* try { // try from 0357dfc8 to 0367dfcb has its CatchHandler @ 0357e0ec */
      if ((UniRx_Disposable_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0357dfcc to 0367dfdb has its CatchHandler @ 0357e0f8 */
        thunk_FUN_01ba7564();
      }
      pSVar1 = UniRx_Disposable__Create(disposeAction,(MethodInfo *)0x0);
      return pSVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0357dfec to 0367dfef has its CatchHandler @ 0357e0e4 */
  FUN_01bab8c8();
}


// ===== private static KALOJBMDHLA GEBNENADLLM()  [RVA 0x347DDA8]
// KPLJFEEMAOH$$GEBNENADLLM @ RVA 0x347DDA8

KALOJBMDHLA_o * KPLJFEEMAOH__GEBNENADLLM(MethodInfo *method)

{
  System_String_array *CHNMNMJJJGL;
  KALOJBMDHLA_o *__this;
  
  if ((DAT_0456836b & 1) == 0) {
    FUN_01bab630(&KALOJBMDHLA_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_9679/*"OK"*/);
    FUN_01bab630(&StringLiteral_6765/*"Get notified!"*/);
    FUN_01bab630(&StringLiteral_12398/*"Stay up to date with the events of the game."*/);
    DAT_0456836b = 1;
  }
  CHNMNMJJJGL = (System_String_array *)FUN_01bab718(string___TypeInfo,1);
  if (CHNMNMJJJGL != (System_String_array *)0x0) {
    if ((int)CHNMNMJJJGL->max_length != 0) {
      CHNMNMJJJGL->m_Items[0] = StringLiteral_9679/*"OK"*/;
      thunk_FUN_01c20e04();
      __this = (KALOJBMDHLA_o *)thunk_FUN_01bda818(KALOJBMDHLA_TypeInfo);
      KALOJBMDHLA___ctor(__this,StringLiteral_6765/*"Get notified!"*/,StringLiteral_12398/*"Stay up to date with the events of the game."*/,CHNMNMJJJGL,(MethodInfo *)0x0
                        );
      return __this;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void MDGKBBKBNAJ(bool IOPHJBHCLBE)  [RVA 0x347DFF8]
// KPLJFEEMAOH$$MDGKBBKBNAJ @ RVA 0x347DFF8

void KPLJFEEMAOH__MDGKBBKBNAJ(KPLJFEEMAOH_o *__this,bool IOPHJBHCLBE,MethodInfo *method)

{
  Il2CppObject *arg1;
  System_String_o *JLNPKGGFFDD;
  HCBNEFEHCBM_o *__this_00;
  MethodInfo *method_00;
  undefined1 local_44 [4];
  
                    /* try { // try from 0357e010 to 0367e013 has its CatchHandler @ 0357e0d0 */
                    /* try { // try from 0357e014 to 0367e023 has its CatchHandler @ 0357e0d4 */
                    /* try { // try from 0357e024 to 0367e0c3 has its CatchHandler @ 0357dd64 */
  if ((DAT_0456836c & 1) == 0) {
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&HCBNEFEHCBM_TypeInfo);
    FUN_01bab630(&StringLiteral_11277/*"RequestPermission"*/);
    FUN_01bab630(&StringLiteral_22372/*"{0}: COMPLETED - PermissionGranted: {1}."*/);
    DAT_0456836c = 1;
  }
  local_44[0] = IOPHJBHCLBE;
  arg1 = (Il2CppObject *)thunk_FUN_01bda448(bool_TypeInfo,local_44);
  JLNPKGGFFDD = System_String__Format
                          (StringLiteral_22372/*"{0}: COMPLETED - PermissionGranted: {1}."*/,StringLiteral_11277/*"RequestPermission"*/,arg1,(MethodInfo *)0x0);
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,JLNPKGGFFDD,(MethodInfo *)0x0);
  __this_00 = (HCBNEFEHCBM_o *)thunk_FUN_01bda818(HCBNEFEHCBM_TypeInfo);
  method_00 = (MethodInfo *)0x0;
                    /* try { // try from 0357e0c4 to 0367e0c7 has its CatchHandler @ 0357e0d8 */
                    /* try { // try from 0357e0c8 to 0367e117 has its CatchHandler @ 0357dd64 */
  HCBNEFEHCBM___ctor(__this_00,IOPHJBHCLBE,(System_String_o *)0x0,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0357e010 with catch @ 0357e0d0 */
                    /* catch() { ... } // from try @ 0357e014 with catch @ 0357e0d4 */
                    /* catch() { ... } // from try @ 0357e0c4 with catch @ 0357e0d8 */
  KPLJFEEMAOH__PFJCEDKNOCK(__this,__this_00,method_00);
                    /* catch() { ... } // from try @ 0357dfec with catch @ 0357e0e4 */
                    /* catch() { ... } // from try @ 0357dfa8 with catch @ 0357e0e8 */
                    /* catch() { ... } // from try @ 0357dfc8 with catch @ 0357e0ec */
                    /* catch() { ... } // from try @ 0357dff0 with catch @ 0357e0f0 */
  return;
}

