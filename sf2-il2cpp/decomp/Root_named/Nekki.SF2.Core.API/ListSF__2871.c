// Original name: Nekki.SF2.Core.API.ListSF  (obfuscated AGGMBMDDJIO)
// TypeDefIndex 2871
// Namespace: 
// public class ListSF : IJIHLBLCJMG
// Fields:
//   private const KFKFNDEJLKK.PCJFAKMBHCE PBFCCFIBCEK = 62;
//   private const string MEMGLGFAEHH = "ApplicationStartAccountLoginNotifyComplete";

// ===== private void APBDPCPHEHJ(bool HOKBHLPPCAH)  [RVA 0x343B608]
// ListSF$$APBDPCPHEHJ @ RVA 0x343B608

void ListSF__APBDPCPHEHJ(ListSF_o *__this,bool HOKBHLPPCAH,MethodInfo *method)

{
  System_Action_AGGMBMDDJIO_BAKEOHLOMLF__o *BLMFLPJJMPF;
  MethodInfo *method_00;
  
  if ((DAT_045681d7 & 1) == 0) {
    FUN_01bab630(&Method_AGGMBMDDJIO_JLJMBIHGFJL__,HOKBHLPPCAH);
    FUN_01bab630(&System_Action<ListSF_BAKEOHLOMLF>_TypeInfo);
    DAT_045681d7 = 1;
  }
  BLMFLPJJMPF = (System_Action_AGGMBMDDJIO_BAKEOHLOMLF__o *)
                thunk_FUN_01bda818(System_Action<ListSF_BAKEOHLOMLF>_TypeInfo);
  method_00 = Method_AGGMBMDDJIO_JLJMBIHGFJL__;
  System_Action<Int32Enum>___ctor();
  ListSF__BIHMDHFALKA(__this,BLMFLPJJMPF,method_00);
  return;
}


// ===== private void BIHMDHFALKA(Action<ListSF.BAKEOHLOMLF> BLMFLPJJMPF)  [RVA 0x343B68C]
// ListSF$$BIHMDHFALKA @ RVA 0x343B68C

void ListSF__BIHMDHFALKA
               (ListSF_o *__this,System_Action_AGGMBMDDJIO_BAKEOHLOMLF__o *BLMFLPJJMPF,
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
    FUN_01bab630(&ListSF_JAABMDFCMLO_TypeInfo);
    FUN_01bab630(&PKHMIGFEJCL_PLLEKFKIIME_TypeInfo);
    FUN_01bab630(&StringLiteral_3021/*"ApplicationStartAccountLoginNotifyComplete"*/);
    DAT_045681d5 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(ListSF_JAABMDFCMLO_TypeInfo);
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
        PKHMIGFEJCL__OPCNBJOLDNG(__this_03,__this_02,StringLiteral_3021/*"ApplicationStartAccountLoginNotifyComplete"*/,(MethodInfo *)0x0);
        Nekki_SF2_Core_Quests_QuestsManager__RunQuests(__this_01,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void NKLGCNHLBAF()  [RVA 0x343B7F4]
// ListSF$$NKLGCNHLBAF @ RVA 0x343B7F4

void ListSF__NKLGCNHLBAF(ListSF_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  NLPJLHOEAOE_o *pNVar3;
  System_Action_IAchievement____o **ppSVar4;
  System_Action_bool__o *KMGFEDFECGO;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  Roster_o *pAVar5;
  GGAFBEMCEIN_o *pGVar6;
  System_Action_IAchievement____o *BFDGGFADBEN;
  
  if ((DAT_045681d6 & 1) == 0) {
    FUN_01bab630(&Method_AGGMBMDDJIO_APBDPCPHEHJ__);
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    FUN_01bab630(&System_Action<IAchievement[]>_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_AGGMBMDDJIO_<>c_IECJFIFMBJM__);
    FUN_01bab630(&ListSF_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_8480/*"ListSF::GamingServiceLogin: skip social"*/);
    FUN_01bab630(&StringLiteral_8479/*"ListSF::GamingServiceLogin: GamingServiceAuthenticator.StartAuthenticateRoutine"*/);
    DAT_045681d6 = 1;
    method = extraout_x1;
  }
  if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(GameUtils_TypeInfo,method);
  }
  GameUtils__HFDAKCCINOE((MethodInfo *)0x0);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pNVar3 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
  if (pNVar3 != (NLPJLHOEAOE_o *)0x0) {
    pGVar6 = (pNVar3->fields)._JCLECLGGBBB_k__BackingField;
    if ((ListSF_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    BFDGGFADBEN = ListSF_<>c_TypeInfo->static_fields->__9__6_0;
    if (BFDGGFADBEN == (System_Action_IAchievement____o *)0x0) {
      if ((ListSF_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
                    /* try { // try from 0353b914 to 0363b93b has its CatchHandler @ 0353bc70 */
      }
      BFDGGFADBEN = (System_Action_IAchievement____o *)
                    thunk_FUN_01bda818(System_Action<IAchievement[]>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar4 = &ListSF_<>c_TypeInfo->static_fields->__9__6_0;
      *ppSVar4 = BFDGGFADBEN;
      thunk_FUN_01c20e04(ppSVar4,BFDGGFADBEN);
    }
    if (pGVar6 != (GGAFBEMCEIN_o *)0x0) {
                    /* try { // try from 0353b970 to 0363b99b has its CatchHandler @ 0353bc6c */
      GGAFBEMCEIN__GIENGNEGHPJ(pGVar6,BFDGGFADBEN,(MethodInfo *)0x0);
      iVar2 = IMAPABEJECG__MEHFGJDCBDP((MethodInfo *)0x0);
      if (iVar2 != 0) {
        iVar2 = IMAPABEJECG__MEHFGJDCBDP((MethodInfo *)0x0);
        if (iVar2 != 1) {
LAB_0353ba90:
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__Log(StringLiteral_8480/*"ListSF::GamingServiceLogin: skip social"*/,(MethodInfo *)0x0);
          ListSF__FNGGGHDJLDA(__this,method_00);
          return;
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0353b9a4 to 0363b9ab has its CatchHandler @ 0353bc68 */
          thunk_FUN_01ba7564();
        }
                    /* try { // try from 0353b9ac to 0363bc4b has its CatchHandler @ 0353b678 */
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b7d = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (pAVar5 == (Roster_o *)0x0) goto LAB_0353bacc;
        iVar1 = (pAVar5->fields).KAJIMOOPDMG;
        iVar2 = IMAPABEJECG__KFHNHPGBJBH((MethodInfo *)0x0);
        if (iVar2 <= iVar1) goto LAB_0353ba90;
      }
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__Log(StringLiteral_8479/*"ListSF::GamingServiceLogin: GamingServiceAuthenticator.StartAuthenticateRoutine"*/,(MethodInfo *)0x0);
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pNVar3 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
      if (pNVar3 != (NLPJLHOEAOE_o *)0x0) {
        pGVar6 = (pNVar3->fields)._JCLECLGGBBB_k__BackingField;
        KMGFEDFECGO = (System_Action_bool__o *)thunk_FUN_01bda818(System_Action<bool>_TypeInfo);
        System_Action<bool>___ctor();
        if (pGVar6 != (GGAFBEMCEIN_o *)0x0) {
          GGAFBEMCEIN__LDMPHMGMJAK(pGVar6,KMGFEDFECGO,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_0353bacc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void JLJMBIHGFJL(ListSF.BAKEOHLOMLF HPACPFLKHPK)  [RVA 0x343BAD0]
// ListSF$$JLJMBIHGFJL @ RVA 0x343BAD0

void ListSF__JLJMBIHGFJL(ListSF_o *__this,int32_t HPACPFLKHPK,MethodInfo *method)

{
  if (HPACPFLKHPK != 0) {
    IJIHLBLCJMG__FGNINNOOCCL((IJIHLBLCJMG_o *)__this,true,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0353bae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._9_NKLGCNHLBAF.methodPtr)
            (__this,(__this->klass->vtable)._9_NKLGCNHLBAF.method);
  return;
}


// ===== private void FNGGGHDJLDA()  [RVA 0x343B60C]
// ListSF$$FNGGGHDJLDA @ RVA 0x343B60C

void ListSF__FNGGGHDJLDA(ListSF_o *__this,MethodInfo *method)

{
  System_Action_AGGMBMDDJIO_BAKEOHLOMLF__o *BLMFLPJJMPF;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  if ((DAT_045681d7 & 1) == 0) {
    FUN_01bab630(&Method_AGGMBMDDJIO_JLJMBIHGFJL__);
    FUN_01bab630(&System_Action<ListSF_BAKEOHLOMLF>_TypeInfo);
    DAT_045681d7 = 1;
    method = extraout_x1;
  }
  BLMFLPJJMPF = (System_Action_AGGMBMDDJIO_BAKEOHLOMLF__o *)
                thunk_FUN_01bda818(System_Action<ListSF_BAKEOHLOMLF>_TypeInfo,method);
  method_00 = Method_AGGMBMDDJIO_JLJMBIHGFJL__;
  System_Action<Int32Enum>___ctor();
                    /* try { // try from 0353b678 to 0363b913 has its CatchHandler @ 0353b678
                       catch() { ... } // from try @ 0353b678 with catch @ 0353b678
                       catch() { ... } // from try @ 0353b9ac with catch @ 0353b678
                       catch() { ... } // from try @ 0353bc50 with catch @ 0353b678
                       catch() { ... } // from try @ 0353bc58 with catch @ 0353b678
                       catch() { ... } // from try @ 0353bd00 with catch @ 0353b678 */
  ListSF__BIHMDHFALKA(__this,BLMFLPJJMPF,method_00);
  return;
}


// ===== public void .ctor()  [RVA 0x343BAEC]
// ListSF$$.ctor @ RVA 0x343BAEC

void ListSF___ctor(ListSF_o *__this,MethodInfo *method)

{
  IJIHLBLCJMG___ctor((IJIHLBLCJMG_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override DBNEAJMCOLB KGGGBHEMAOO()  [RVA 0x343BAF4]
// ListSF$$KGGGBHEMAOO @ RVA 0x343BAF4

int32_t ListSF__KGGGBHEMAOO(ListSF_o *__this,MethodInfo *method)

{
  return 1;
}


// ===== public override bool JFGBPBOCOIC(BDMDJNOIBKC HJDMBDBJEFL)  [RVA 0x343BAFC]
// ListSF$$JFGBPBOCOIC @ RVA 0x343BAFC

bool ListSF__JFGBPBOCOIC(ListSF_o *__this,int32_t HJDMBDBJEFL,MethodInfo *method)

{
  return HJDMBDBJEFL == 0;
}

