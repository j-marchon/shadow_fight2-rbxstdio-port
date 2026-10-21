// Nekki.SF2.GUI.Dialogs.SettingsDialog$$Init @ RVA 0x3483720

void Nekki_SF2_GUI_Dialogs_SettingsDialog__Init
               (Nekki_SF2_GUI_Dialogs_SettingsDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  System_Action_Action_bool___o **ppSVar1;
  System_IObservable_T__o *source;
  System_Action_T__o *pSVar2;
  Il2CppObject *pIVar3;
  System_IObservable_Unit__o *source_00;
  System_Action_Action_bool___o *addHandler;
  System_Action_Action_bool___o *removeHandler;
  
  if ((DAT_04568391 & 1) == 0) {
    FUN_01bab630(&System_Action<Unit>_TypeInfo);
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    FUN_01bab630(&System_Action<Action<bool>>_TypeInfo);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<bool>__);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
    FUN_01bab630(&Method_UniRx_Observable_FromEvent<bool>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_SettingsDialog_FFHKBMDDKBI__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_SettingsDialog_IAIKCHDCFDG__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_SettingsDialog_<>c_EOLAFDINFOD__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_SettingsDialog_<>c_IBILPEPHMDK__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_SettingsDialog_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_11974);
    FUN_01bab630(&StringLiteral_11954);
    FUN_01bab630(&StringLiteral_11956);
    DAT_04568391 = 1;
  }
  Nekki_SF2_GUI_Dialogs_BaseDialog__GIENGNEGHPJ
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,StringLiteral_11974,StringLiteral_11954,
             StringLiteral_11956,3,(MethodInfo *)0x0);
  if ((Nekki_SF2_GUI_Dialogs_SettingsDialog_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  addHandler = Nekki_SF2_GUI_Dialogs_SettingsDialog_<>c_TypeInfo->static_fields->__9__88_0;
  if (addHandler == (System_Action_Action_bool___o *)0x0) {
    if ((Nekki_SF2_GUI_Dialogs_SettingsDialog_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    addHandler = (System_Action_Action_bool___o *)
                 thunk_FUN_01bda818(System_Action<Action<bool>>_TypeInfo);
    System_Action<object>___ctor();
    ppSVar1 = &Nekki_SF2_GUI_Dialogs_SettingsDialog_<>c_TypeInfo->static_fields->__9__88_0;
    *ppSVar1 = addHandler;
    thunk_FUN_01c20e04(ppSVar1,addHandler);
  }
  if ((Nekki_SF2_GUI_Dialogs_SettingsDialog_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  removeHandler = Nekki_SF2_GUI_Dialogs_SettingsDialog_<>c_TypeInfo->static_fields->__9__88_1;
  if (removeHandler == (System_Action_Action_bool___o *)0x0) {
    if ((Nekki_SF2_GUI_Dialogs_SettingsDialog_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    removeHandler =
         (System_Action_Action_bool___o *)thunk_FUN_01bda818(System_Action<Action<bool>>_TypeInfo);
    System_Action<object>___ctor();
    ppSVar1 = &Nekki_SF2_GUI_Dialogs_SettingsDialog_<>c_TypeInfo->static_fields->__9__88_1;
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
  pSVar2 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<bool>_TypeInfo);
  System_Action<bool>___ctor();
  pIVar3 = (Il2CppObject *)
           UniRx_ObservableExtensions__Subscribe<bool>
                     (source,pSVar2,Method_UniRx_ObservableExtensions_Subscribe<bool>__);
  UniRx_DisposableExtensions__AddTo<object>
            (pIVar3,(UnityEngine_Component_o *)__this,
             Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
  pIVar3 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  source_00 = FEEEICKDOFK__CICIPAHCKDB((BLEFOFGCKEF_o *)pIVar3,(MethodInfo *)0x0);
  pSVar2 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<Unit>_TypeInfo);
  System_Action<Unit>___ctor();
  pIVar3 = (Il2CppObject *)
           UniRx_ObservableExtensions__Subscribe<Unit>
                     ((System_IObservable_T__o *)source_00,pSVar2,
                      Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
  UniRx_DisposableExtensions__AddTo<object>
            (pIVar3,(UnityEngine_Component_o *)__this,
             Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
  return;
}

