// Nekki.SF2.GUI.LabelAliasTMP$$Awake @ RVA 0x314F384

void Nekki_SF2_GUI_LabelAliasTMP__Awake(Nekki_SF2_GUI_LabelAliasTMP_o *__this,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  System_IObservable_Unit__o *source;
  System_Action_T__o *onNext;
  MethodInfo *method_00;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0324f1d8 with catch @ 0324f384
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0324f374 with catch @ 0324f388
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0324f370 with catch @ 0324f38c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0324f378 with catch @ 0324f390
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0324f194 with catch @ 0324f394
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0324f1a8 with catch @ 0324f398
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0324f208 with catch @ 0324f39c
                        */
  if ((DAT_045667fd & 1) == 0) {
    FUN_01bab630(&System_Action<Unit>_TypeInfo);
                    /* try { // try from 0324f3bc to 0334f3bf has its CatchHandler @ 0324f3e8 */
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
                    /* try { // try from 0324f3c0 to 0334f3f7 has its CatchHandler @ 0324ef8c */
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_PKGCFMKHOKN__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_LabelAliasTMP_JKGKKANLCGA__);
                    /* catch() { ... } // from try @ 0324f3bc with catch @ 0324f3e8 */
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
    DAT_045667fd = 1;
  }
                    /* try { // try from 0324f3f8 to 0334f3ff has its CatchHandler @ 0324f414 */
                    /* try { // try from 0324f400 to 0334f40b has its CatchHandler @ 0324ef8c */
  TMPro_TextMeshProUGUI__Awake((TMPro_TextMeshProUGUI_o *)__this,(MethodInfo *)0x0);
                    /* try { // try from 0324f40c to 0334f413 has its CatchHandler @ 0324f414 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0324f3f8 with catch @ 0324f414
                       catch(type#2 @ 00000000) { ... } // from try @ 0324f40c with catch @ 0324f414
                        */
  (*(__this->klass->vtable)._25_set_raycastTarget.methodPtr)
            (__this,0,(__this->klass->vtable)._25_set_raycastTarget.method);
  Nekki_SF2_GUI_LabelAliasTMP__GBPDDFOIDPG(__this,method_00);
  bVar1 = EHOFKBDKGBK<object,_object>__PKGCFMKHOKN
                    (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_PKGCFMKHOKN__);
  if (bVar1) {
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

