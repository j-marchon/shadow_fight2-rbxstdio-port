// AGGMBMDDJIO$$BIHMDHFALKA @ RVA 0x343B68C

void AGGMBMDDJIO__BIHMDHFALKA
               (AGGMBMDDJIO_o *__this,System_Action_AGGMBMDDJIO_BAKEOHLOMLF__o *BLMFLPJJMPF,
               MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *__this_00;
  Nekki_SF2_Core_Quests_QuestsManager_o *__this_01;
  PKHMIGFEJCL_PLLEKFKIIME_o *__this_02;
  void *pvVar2;
  void **ppvVar3;
  PKHMIGFEJCL_o *__this_03;
  
  if ((DAT_045681d5 & 1) == 0) {
    FUN_01bab630(&Method_AGGMBMDDJIO_JAABMDFCMLO_KGGBFDECDFE__);
    FUN_01bab630(&AGGMBMDDJIO_JAABMDFCMLO_TypeInfo);
    FUN_01bab630(&PKHMIGFEJCL_PLLEKFKIIME_TypeInfo);
    FUN_01bab630(&StringLiteral_3021);
    DAT_045681d5 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(AGGMBMDDJIO_JAABMDFCMLO_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
    thunk_FUN_01c20e04(__this_00 + 1,__this);
    ppvVar3 = &__this_00[1].monitor;
    *ppvVar3 = BLMFLPJJMPF;
    thunk_FUN_01c20e04(ppvVar3,BLMFLPJJMPF);
    __this_01 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if (__this_01 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
      bVar1 = Nekki_SF2_Core_Quests_QuestsManager__ScheduleQuests(__this_01,0x3e,(MethodInfo *)0x0);
      if (!bVar1) {
        pvVar2 = *ppvVar3;
        if (pvVar2 != (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0353b7d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((long)pvVar2 + 0x18))
                    (*(undefined8 *)((long)pvVar2 + 0x40),1,*(undefined8 *)((long)pvVar2 + 0x28));
          return;
        }
        return;
      }
      __this_03 = (__this_01->fields).QuestParameters;
      __this_02 = (PKHMIGFEJCL_PLLEKFKIIME_o *)thunk_FUN_01bda818(PKHMIGFEJCL_PLLEKFKIIME_TypeInfo);
      PKHMIGFEJCL_PLLEKFKIIME___ctor
                (__this_02,__this_00,Method_AGGMBMDDJIO_JAABMDFCMLO_KGGBFDECDFE__,(MethodInfo *)0x0)
      ;
      if (__this_03 != (PKHMIGFEJCL_o *)0x0) {
        PKHMIGFEJCL__OPCNBJOLDNG(__this_03,__this_02,StringLiteral_3021,(MethodInfo *)0x0);
        Nekki_SF2_Core_Quests_QuestsManager__RunQuests(__this_01,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

