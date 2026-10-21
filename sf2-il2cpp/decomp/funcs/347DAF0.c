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
    FUN_01bab630(&StringLiteral_11277);
    FUN_01bab630(&StringLiteral_22374);
    DAT_04568369 = 1;
  }
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_11277,(MethodInfo *)0x0);
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
                              (StringLiteral_22374,(Il2CppObject *)StringLiteral_11277,arg1,
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

