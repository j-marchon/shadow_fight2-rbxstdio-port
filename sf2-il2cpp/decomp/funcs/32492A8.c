// ANLLODMHLHE$$LDBFCGBLMFA @ RVA 0x32492A8

void ANLLODMHLHE__LDBFCGBLMFA
               (Nekki_SF2_Core_Quests_QuestsManager_o *EPLBABJNKGP,int32_t FNCLKBCINAA,
               System_String_o *EGJLNEOGECM,System_Action_o *BLMFLPJJMPF,Il2CppObject *PJNAAFEEBJL,
               System_String_o *KECGMKNCOKG,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *__this;
  System_String_o *pSVar2;
  PKHMIGFEJCL_PLLEKFKIIME_o *__this_00;
  PKHMIGFEJCL_o *__this_01;
  Il2CppObject *pIVar3;
  Il2CppObject *pIVar4;
  void **ppvVar5;
  Il2CppClass *pIVar6;
  
  if ((DAT_045670dd & 1) == 0) {
    FUN_01bab630(&Method_ANLLODMHLHE_AJKDFEMFECB_OHFNPFMOKLM__);
    FUN_01bab630(&ANLLODMHLHE_AJKDFEMFECB_TypeInfo);
    FUN_01bab630(&PKHMIGFEJCL_PLLEKFKIIME_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_2093);
    FUN_01bab630(&StringLiteral_2091);
    FUN_01bab630(&StringLiteral_2090);
    DAT_045670dd = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(ANLLODMHLHE_AJKDFEMFECB_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Il2CppObject *)0x0) {
    pIVar4 = __this + 1;
    pIVar4->klass = (Il2CppClass *)PJNAAFEEBJL;
                    /* try { // try from 03349364 to 034495bf has its CatchHandler @ 03349364
                       catch() { ... } // from try @ 03349364 with catch @ 03349364
                       catch() { ... } // from try @ 0334966c with catch @ 03349364
                       catch() { ... } // from try @ 03349768 with catch @ 03349364
                       catch() { ... } // from try @ 03349804 with catch @ 03349364
                       catch() { ... } // from try @ 033498c0 with catch @ 03349364
                       catch() { ... } // from try @ 03349940 with catch @ 03349364
                       catch() { ... } // from try @ 0334998c with catch @ 03349364
                       catch() { ... } // from try @ 033499b4 with catch @ 03349364
                       catch() { ... } // from try @ 03349a00 with catch @ 03349364
                       catch() { ... } // from try @ 03349a18 with catch @ 03349364
                       catch() { ... } // from try @ 03349a5c with catch @ 03349364 */
    thunk_FUN_01c20e04(pIVar4,PJNAAFEEBJL);
    ppvVar5 = &__this[1].monitor;
    *ppvVar5 = KECGMKNCOKG;
    thunk_FUN_01c20e04(ppvVar5,KECGMKNCOKG);
    pIVar3 = __this + 2;
    pIVar3->klass = (Il2CppClass *)BLMFLPJJMPF;
    thunk_FUN_01c20e04(pIVar3,BLMFLPJJMPF);
    if (pIVar4->klass == (Il2CppClass *)0x0) {
      pIVar4->klass = (Il2CppClass *)EPLBABJNKGP;
      thunk_FUN_01c20e04(pIVar4,EPLBABJNKGP);
    }
    pSVar2 = *ppvVar5;
    if (pSVar2 == (System_String_o *)0x0) {
      *ppvVar5 = string_TypeInfo->static_fields->Empty;
      thunk_FUN_01c20e04(ppvVar5);
      pSVar2 = *ppvVar5;
    }
    pIVar6 = pIVar4->klass;
    pSVar2 = System_String__Concat(pSVar2,StringLiteral_2093,(MethodInfo *)0x0);
    KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)pIVar6,pSVar2,(MethodInfo *)0x0);
    if (EPLBABJNKGP != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
      bVar1 = Nekki_SF2_Core_Quests_QuestsManager__IsQuestForEventTypeInQueue
                        (EPLBABJNKGP,FNCLKBCINAA,(MethodInfo *)0x0);
      if (bVar1) {
        pIVar6 = pIVar4->klass;
        pSVar2 = System_String__Concat(*ppvVar5,StringLiteral_2090,(MethodInfo *)0x0);
        KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)pIVar6,pSVar2,(MethodInfo *)0x0);
        return;
      }
      bVar1 = Nekki_SF2_Core_Quests_QuestsManager__ScheduleQuests
                        (EPLBABJNKGP,FNCLKBCINAA,(MethodInfo *)0x0);
      if (!bVar1) {
        pIVar6 = pIVar4->klass;
        pSVar2 = System_String__Concat(*ppvVar5,StringLiteral_2091,(MethodInfo *)0x0);
        KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)pIVar6,pSVar2,(MethodInfo *)0x0);
        pIVar6 = pIVar3->klass;
        if (pIVar6 != (Il2CppClass *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0334952c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(pIVar6->_1).namespaze)
                    ((pIVar6->_1).element_class,*(undefined8 *)&(pIVar6->_1).byval_arg.bits);
          return;
        }
        return;
      }
      __this_01 = (EPLBABJNKGP->fields).QuestParameters;
      __this_00 = (PKHMIGFEJCL_PLLEKFKIIME_o *)thunk_FUN_01bda818(PKHMIGFEJCL_PLLEKFKIIME_TypeInfo);
      PKHMIGFEJCL_PLLEKFKIIME___ctor
                (__this_00,__this,Method_ANLLODMHLHE_AJKDFEMFECB_OHFNPFMOKLM__,(MethodInfo *)0x0);
      if (__this_01 != (PKHMIGFEJCL_o *)0x0) {
        PKHMIGFEJCL__OPCNBJOLDNG(__this_01,__this_00,EGJLNEOGECM,(MethodInfo *)0x0);
        Nekki_SF2_Core_Quests_QuestsManager__RunQuests(EPLBABJNKGP,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

