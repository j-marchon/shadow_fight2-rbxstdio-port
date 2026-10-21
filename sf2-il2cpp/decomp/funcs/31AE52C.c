// Nekki.SF2.GUI.LabelAlias$$Awake @ RVA 0x31AE52C

void Nekki_SF2_GUI_LabelAlias__Awake(Nekki_SF2_GUI_LabelAlias_o *__this,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  System_IObservable_Unit__o *source;
  System_Action_T__o *onNext;
  MethodInfo *method_00;
  
  if ((DAT_04566b65 & 1) == 0) {
    FUN_01bab630(&System_Action<Unit>_TypeInfo);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_PKGCFMKHOKN__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_LabelAlias_JNDEHBOKKAN__);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
    DAT_04566b65 = 1;
  }
  Nekki_SF2_GUI_TextPic__Awake((Nekki_SF2_GUI_TextPic_o *)__this,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._25_set_raycastTarget.methodPtr)
            (__this,0,(__this->klass->vtable)._25_set_raycastTarget.method);
  Nekki_SF2_GUI_LabelAlias__GBPDDFOIDPG(__this,method_00);
  bVar1 = EHOFKBDKGBK<object,_object>__PKGCFMKHOKN
                    (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_PKGCFMKHOKN__);
  if (bVar1) {
                    /* try { // try from 032ae5f8 to 033ae68b has its CatchHandler @ 032ae5f8
                       catch() { ... } // from try @ 032ae5f8 with catch @ 032ae5f8
                       catch() { ... } // from try @ 032ae6c4 with catch @ 032ae5f8
                       catch() { ... } // from try @ 032ae70c with catch @ 032ae5f8
                       catch() { ... } // from try @ 032ae738 with catch @ 032ae5f8
                       catch() { ... } // from try @ 032ae770 with catch @ 032ae5f8 */
    pIVar2 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    source = FEEEICKDOFK__CICIPAHCKDB((BLEFOFGCKEF_o *)pIVar2,(MethodInfo *)0x0);
    onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<Unit>_TypeInfo);
    System_Action<Unit>___ctor();
    pIVar2 = (Il2CppObject *)
             UniRx_ObservableExtensions__Subscribe<Unit>
                       ((System_IObservable_T__o *)source,onNext,
                        Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
    UniRx_DisposableExtensions__AddTo<object>
              (pIVar2,(UnityEngine_Component_o *)__this,
               Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    return;
  }
  return;
}

