// ANLLODMHLHE$$LDBFCGBLMFA @ RVA 0x3248EB8

void ANLLODMHLHE__LDBFCGBLMFA
               (Nekki_SF2_Core_Quests_QuestsManager_o *EPLBABJNKGP,int32_t FNCLKBCINAA,
               System_Action_o *BLMFLPJJMPF,Il2CppObject *PJNAAFEEBJL,System_String_o *KECGMKNCOKG,
               MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  Il2CppClass *pIVar3;
  System_String_o *pSVar4;
  System_Action_Action__o *addHandler;
  System_Action_Action__o *removeHandler;
  System_IObservable_Unit__o *source;
  System_IObservable_T__o *source_00;
  System_Action_T__o *onNext;
  System_IDisposable_o *value;
  void *pvVar5;
  Il2CppObject *pIVar6;
  Il2CppObject *ODHBNGEGFCJ;
  void **ppvVar7;
  Il2CppObject *pIVar8;
  void **ppvVar9;
  
  if ((DAT_045670dc & 1) == 0) {
    FUN_01bab630(&System_Action<Unit>_TypeInfo);
    FUN_01bab630(&System_Action<Action>_TypeInfo);
    FUN_01bab630(&Method_ANLLODMHLHE_FFJFICKBACI_AFBBIIMKGNP__);
    FUN_01bab630(&Method_ANLLODMHLHE_FFJFICKBACI_GDBFMOMFLIL__);
    FUN_01bab630(&Method_ANLLODMHLHE_FFJFICKBACI_OHFNPFMOKLM__);
    FUN_01bab630(&ANLLODMHLHE_FFJFICKBACI_TypeInfo);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
    FUN_01bab630(&Method_UniRx_Observable_Take<Unit>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    FUN_01bab630(&UniRx_SerialDisposable_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_2093);
    FUN_01bab630(&StringLiteral_2091);
    FUN_01bab630(&StringLiteral_2090);
    DAT_045670dc = 1;
  }
  pIVar2 = (Il2CppObject *)thunk_FUN_01bda818(ANLLODMHLHE_FFJFICKBACI_TypeInfo);
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  if (pIVar2 != (Il2CppObject *)0x0) {
    pIVar6 = pIVar2 + 1;
    pIVar6->klass = (Il2CppClass *)EPLBABJNKGP;
    thunk_FUN_01c20e04(pIVar6,EPLBABJNKGP);
    ppvVar9 = &pIVar2[1].monitor;
    *ppvVar9 = PJNAAFEEBJL;
    thunk_FUN_01c20e04(ppvVar9,PJNAAFEEBJL);
    pIVar8 = pIVar2 + 2;
    pIVar8->klass = (Il2CppClass *)KECGMKNCOKG;
    thunk_FUN_01c20e04(pIVar8,KECGMKNCOKG);
    ppvVar7 = &pIVar2[2].monitor;
    *ppvVar7 = BLMFLPJJMPF;
    thunk_FUN_01c20e04(ppvVar7,BLMFLPJJMPF);
    if (*ppvVar9 == (void *)0x0) {
      *ppvVar9 = pIVar6->klass;
      thunk_FUN_01c20e04(ppvVar9);
    }
    pIVar3 = pIVar8->klass;
    if (pIVar3 == (Il2CppClass *)0x0) {
      pIVar8->klass = (Il2CppClass *)string_TypeInfo->static_fields->Empty;
      thunk_FUN_01c20e04(pIVar8);
      pIVar3 = pIVar8->klass;
    }
    ODHBNGEGFCJ = *ppvVar9;
    pSVar4 = System_String__Concat((System_String_o *)pIVar3,StringLiteral_2093,(MethodInfo *)0x0);
    KFJJHMDIFIG__DHAAGKPHJLA(ODHBNGEGFCJ,pSVar4,(MethodInfo *)0x0);
    if (pIVar6->klass != (Il2CppClass *)0x0) {
      bVar1 = Nekki_SF2_Core_Quests_QuestsManager__IsQuestForEventTypeInQueue
                        ((Nekki_SF2_Core_Quests_QuestsManager_o *)pIVar6->klass,FNCLKBCINAA,
                         (MethodInfo *)0x0);
      if (bVar1) {
        pIVar2 = *ppvVar9;
        pSVar4 = System_String__Concat
                           ((System_String_o *)pIVar8->klass,StringLiteral_2090,(MethodInfo *)0x0);
        KFJJHMDIFIG__ONCJPMNKDIM(pIVar2,pSVar4,(MethodInfo *)0x0);
        return;
      }
      if (pIVar6->klass != (Il2CppClass *)0x0) {
        bVar1 = Nekki_SF2_Core_Quests_QuestsManager__ScheduleQuests
                          ((Nekki_SF2_Core_Quests_QuestsManager_o *)pIVar6->klass,FNCLKBCINAA,
                           (MethodInfo *)0x0);
        if (!bVar1) {
          pIVar2 = *ppvVar9;
          pSVar4 = System_String__Concat
                             ((System_String_o *)pIVar8->klass,StringLiteral_2091,(MethodInfo *)0x0)
          ;
          KFJJHMDIFIG__DHAAGKPHJLA(pIVar2,pSVar4,(MethodInfo *)0x0);
          pvVar5 = *ppvVar7;
          if (pvVar5 != (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03349280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)((long)pvVar5 + 0x18))
                      (*(undefined8 *)((long)pvVar5 + 0x40),*(undefined8 *)((long)pvVar5 + 0x28));
            return;
          }
          return;
        }
        pIVar3 = (Il2CppClass *)thunk_FUN_01bda818(UniRx_SerialDisposable_TypeInfo);
        UniRx_SerialDisposable___ctor((UniRx_SerialDisposable_o *)pIVar3,(MethodInfo *)0x0);
        pIVar2 = pIVar2 + 3;
        pIVar2->klass = pIVar3;
        thunk_FUN_01c20e04(pIVar2,pIVar3);
        pIVar3 = pIVar2->klass;
        addHandler = (System_Action_Action__o *)thunk_FUN_01bda818(System_Action<Action>_TypeInfo);
        System_Action<object>___ctor();
        removeHandler =
             (System_Action_Action__o *)thunk_FUN_01bda818(System_Action<Action>_TypeInfo);
        System_Action<object>___ctor();
        if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        source = UniRx_Observable__FromEvent(addHandler,removeHandler,(MethodInfo *)0x0);
        source_00 = UniRx_Observable__Take<Unit>
                              ((System_IObservable_T__o *)source,1,
                               Method_UniRx_Observable_Take<Unit>__);
        onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<Unit>_TypeInfo);
        System_Action<Unit>___ctor();
        value = UniRx_ObservableExtensions__Subscribe<Unit>
                          (source_00,onNext,Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
        if (pIVar3 != (Il2CppClass *)0x0) {
          UniRx_SerialDisposable__set_Disposable
                    ((UniRx_SerialDisposable_o *)pIVar3,value,(MethodInfo *)0x0);
          if (pIVar6->klass != (Il2CppClass *)0x0) {
            Nekki_SF2_Core_Quests_QuestsManager__RunQuests
                      ((Nekki_SF2_Core_Quests_QuestsManager_o *)pIVar6->klass,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

