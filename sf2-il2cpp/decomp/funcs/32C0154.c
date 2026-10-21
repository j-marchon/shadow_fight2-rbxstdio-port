// Nekki.SF2.GUI.Dialogs.StoryDialog$$Start @ RVA 0x32C0154

void Nekki_SF2_GUI_Dialogs_StoryDialog__Start
               (Nekki_SF2_GUI_Dialogs_StoryDialog_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_IObservable_Unit__o *source;
  System_Action_T__o *onNext;
  
  if ((DAT_045674c3 & 1) == 0) {
    FUN_01bab630(&System_Action<Unit>_TypeInfo);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_StoryDialog_JHAKFKFPJJB__);
    DAT_045674c3 = 1;
  }
  Nekki_SF2_GUI_Dialogs_BaseDialog__Start
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._14_KHKLLNFCMME.methodPtr)
            (__this,(__this->klass->vtable)._14_KHKLLNFCMME.method);
  pIVar1 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  source = FEEEICKDOFK__CICIPAHCKDB((BLEFOFGCKEF_o *)pIVar1,(MethodInfo *)0x0);
  onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<Unit>_TypeInfo);
  System_Action<Unit>___ctor();
  pIVar1 = (Il2CppObject *)
           UniRx_ObservableExtensions__Subscribe<Unit>
                     ((System_IObservable_T__o *)source,onNext,
                      Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
  UniRx_DisposableExtensions__AddTo<object>
            (pIVar1,(UnityEngine_Component_o *)__this,
             Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
  return;
}

