// Nekki.SF2.GUI.Dialogs.Raids.RaidDailyTaskCell$$Init @ RVA 0x30293B0

void Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__Init
               (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *__this,BDMABHJEEGD_o *JOBNGBCPEGO,
               MethodInfo *method)

{
  ProgressBar_o *pPVar1;
  UnityEngine_Events_UnityAction_o *pUVar2;
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  Il2CppObject *pIVar3;
  System_IObservable_Unit__o *source;
  System_Action_T__o *onNext;
  MethodInfo *method_00;
  Nekki_SF2_GUI_ResolutionButton_o *pNVar4;
  LabelButton_o *pLVar5;
  UnityEngine_Events_UnityEvent_o *pUVar6;
  BDMABHJEEGD_o **ppBVar7;
  
  if ((DAT_04565ca8 & 1) == 0) {
    FUN_01bab630(&System_Action<Unit>_TypeInfo);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_DJPPAELDLFC__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_JOMJIANNMPK__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_ONHDLLLAFOF__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04565ca8 = 1;
  }
  ppBVar7 = &(__this->fields).NCJONEIOCML;
  *ppBVar7 = JOBNGBCPEGO;
  thunk_FUN_01c20e04(ppBVar7,JOBNGBCPEGO);
  pPVar1 = (__this->fields)._taskProgressBar;
  if (pPVar1 != (ProgressBar_o *)0x0) {
    (*(pPVar1->klass->vtable)._7_set_Value.methodPtr)
              (0,pPVar1,(pPVar1->klass->vtable)._7_set_Value.method);
    pNVar4 = (__this->fields)._taskRefreshBtn;
    if (pNVar4 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
      pUVar6 = (UnityEngine_Events_UnityEvent_o *)(pNVar4->fields).super.super.m_OnClick;
      pUVar2 = (UnityEngine_Events_UnityAction_o *)
               thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
      UnityEngine_Events_UnityAction___ctor();
      if (pUVar6 != (UnityEngine_Events_UnityEvent_o *)0x0) {
        UnityEngine_Events_UnityEvent__AddListener(pUVar6,pUVar2,(MethodInfo *)0x0);
        __this_00 = (__this->fields)._TaskRefreshADViewsLabel;
        if ((__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
           (__this_01 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
           __this_01 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
          pLVar5 = (__this->fields)._btnSkipCooldown;
          if (pLVar5 != (LabelButton_o *)0x0) {
            pUVar6 = (UnityEngine_Events_UnityEvent_o *)(pLVar5->fields).super.super.super.m_OnClick
            ;
            pUVar2 = (UnityEngine_Events_UnityAction_o *)
                     thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
            UnityEngine_Events_UnityAction___ctor();
            if (pUVar6 != (UnityEngine_Events_UnityEvent_o *)0x0) {
              method_00 = (MethodInfo *)0x0;
              UnityEngine_Events_UnityEvent__AddListener(pUVar6,pUVar2,(MethodInfo *)0x0);
              Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__UpdateTaskInfo
                        (__this,(__this->fields).NCJONEIOCML,method_00);
              pIVar3 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                                 (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
              source = FEEEICKDOFK__CICIPAHCKDB((BLEFOFGCKEF_o *)pIVar3,(MethodInfo *)0x0);
              onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<Unit>_TypeInfo);
              System_Action<Unit>___ctor();
              pIVar3 = (Il2CppObject *)
                       UniRx_ObservableExtensions__Subscribe<Unit>
                                 ((System_IObservable_T__o *)source,onNext,
                                  Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
              UniRx_DisposableExtensions__AddTo<object>
                        (pIVar3,(UnityEngine_Component_o *)__this,
                         Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

