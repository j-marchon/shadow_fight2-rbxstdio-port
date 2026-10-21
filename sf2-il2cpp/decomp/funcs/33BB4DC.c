// Nekki.SF2.GUI.TimerLabel$$Awake @ RVA 0x33BB4DC

void Nekki_SF2_GUI_TimerLabel__Awake(Nekki_SF2_GUI_TimerLabel_o *__this,MethodInfo *method)

{
  System_Action_Action__o **ppSVar1;
  System_IObservable_Unit__o *pSVar2;
  System_Action_T__o *pSVar3;
  Il2CppObject *pIVar4;
  System_Action_Action__o *addHandler;
  System_Action_Action__o *removeHandler;
  
  if ((DAT_04567da3 & 1) == 0) {
    FUN_01bab630(&System_Action<Unit>_TypeInfo);
    FUN_01bab630(&System_Action<Action>_TypeInfo);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_TimerLabel_GAAKFAMKBPN__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_TimerLabel_NAHNHOFPIDO__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_TimerLabel_<>c_EJKHLPNIKMG__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_TimerLabel_<>c_ENCIMBGBOKN__);
    FUN_01bab630(&Nekki_SF2_GUI_TimerLabel_<>c_TypeInfo);
    DAT_04567da3 = 1;
  }
  Nekki_SF2_GUI_LabelAlias__Awake((Nekki_SF2_GUI_LabelAlias_o *)__this,(MethodInfo *)0x0);
  if ((Nekki_SF2_GUI_TimerLabel_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  addHandler = Nekki_SF2_GUI_TimerLabel_<>c_TypeInfo->static_fields->__9__41_0;
  if (addHandler == (System_Action_Action__o *)0x0) {
    if ((Nekki_SF2_GUI_TimerLabel_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 034bb5d0 to 035bb5d7 has its CatchHandler @ 034bb6f0 */
                    /* try { // try from 034bb5e4 to 035bb5ef has its CatchHandler @ 034bb6e4 */
    addHandler = (System_Action_Action__o *)thunk_FUN_01bda818(System_Action<Action>_TypeInfo);
                    /* try { // try from 034bb600 to 035bb60f has its CatchHandler @ 034bb6e0 */
    System_Action<object>___ctor();
    ppSVar1 = &Nekki_SF2_GUI_TimerLabel_<>c_TypeInfo->static_fields->__9__41_0;
    *ppSVar1 = addHandler;
    thunk_FUN_01c20e04(ppSVar1,addHandler);
  }
                    /* try { // try from 034bb620 to 035bb62b has its CatchHandler @ 034bb6d8 */
  if ((Nekki_SF2_GUI_TimerLabel_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 034bb62c to 035bb6bf has its CatchHandler @ 034bb368 */
  removeHandler = Nekki_SF2_GUI_TimerLabel_<>c_TypeInfo->static_fields->__9__41_1;
  if (removeHandler == (System_Action_Action__o *)0x0) {
    if ((Nekki_SF2_GUI_TimerLabel_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    removeHandler = (System_Action_Action__o *)thunk_FUN_01bda818(System_Action<Action>_TypeInfo);
    System_Action<object>___ctor();
    ppSVar1 = &Nekki_SF2_GUI_TimerLabel_<>c_TypeInfo->static_fields->__9__41_1;
    *ppSVar1 = removeHandler;
    thunk_FUN_01c20e04(ppSVar1,removeHandler);
  }
                    /* try { // try from 034bb6c0 to 035bb6c3 has its CatchHandler @ 034bb6ec */
                    /* try { // try from 034bb6c8 to 035bb6cb has its CatchHandler @ 034bb6e8 */
                    /* try { // try from 034bb6d0 to 035bb6d3 has its CatchHandler @ 034bb6dc */
  if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 034bb6d4 to 035bb6ff has its CatchHandler @ 034bb368 */
    thunk_FUN_01ba7564();
  }
                    /* catch() { ... } // from try @ 034bb620 with catch @ 034bb6d8 */
                    /* catch() { ... } // from try @ 034bb6d0 with catch @ 034bb6dc */
                    /* catch() { ... } // from try @ 034bb600 with catch @ 034bb6e0 */
                    /* catch() { ... } // from try @ 034bb5e4 with catch @ 034bb6e4 */
  pSVar2 = UniRx_Observable__FromEvent(addHandler,removeHandler,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 034bb6c8 with catch @ 034bb6e8 */
                    /* catch() { ... } // from try @ 034bb6c0 with catch @ 034bb6ec */
                    /* catch() { ... } // from try @ 034bb5d0 with catch @ 034bb6f0 */
  pSVar3 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<Unit>_TypeInfo);
                    /* try { // try from 034bb700 to 035bb703 has its CatchHandler @ 034bb89c */
                    /* try { // try from 034bb704 to 035bb777 has its CatchHandler @ 034bb368 */
  System_Action<Unit>___ctor();
  pIVar4 = (Il2CppObject *)
           UniRx_ObservableExtensions__Subscribe<Unit>
                     ((System_IObservable_T__o *)pSVar2,pSVar3,
                      Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
  UniRx_DisposableExtensions__AddTo<object>
            (pIVar4,(UnityEngine_Component_o *)__this,
             Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
  pIVar4 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  pSVar2 = FEEEICKDOFK__CICIPAHCKDB((BLEFOFGCKEF_o *)pIVar4,(MethodInfo *)0x0);
  pSVar3 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<Unit>_TypeInfo);
  System_Action<Unit>___ctor();
  pIVar4 = (Il2CppObject *)
           UniRx_ObservableExtensions__Subscribe<Unit>
                     ((System_IObservable_T__o *)pSVar2,pSVar3,
                      Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
                    /* try { // try from 034bb778 to 035bb77f has its CatchHandler @ 034bb8e0 */
  UniRx_DisposableExtensions__AddTo<object>
            (pIVar4,(UnityEngine_Component_o *)__this,
             Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
  return;
}

