// Nekki.SF2.GUI.Map.InfoBattle$$NEMHIDIGACK @ RVA 0x34195A8

void Nekki_SF2_GUI_Map_InfoBattle__NEMHIDIGACK
               (Nekki_SF2_GUI_Map_InfoBattle_o *__this,OOMHDDBCBJP_o *BANHBMINMMP,
               AFFHKININGD_o *AGONJKOMAAA,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  Nekki_SF2_GUI_Map_ContentBossesFinal_o *__this_00;
  Nekki_SF2_GUI_Map_ContentTourChallBoss_o *pNVar3;
  System_String_o *pSVar4;
  Nekki_SF2_GUI_Map_ContentDuel_o *__this_01;
  Nekki_SF2_GUI_Map_ContentSurvival_o *pNVar5;
  UnityEngine_GameObject_o *__this_02;
  Nekki_SF2_GUI_Map_ContentRaid_o *pNVar6;
  Nekki_SF2_GUI_Map_ContentBase_o *pNVar7;
  System_Enum_o local_48;
  int32_t local_38;
  
  if ((DAT_045680b9 & 1) == 0) {
    FUN_01bab630(&COALAGILPBO_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_5595);
    DAT_045680b9 = 1;
  }
  if (BANHBMINMMP == (OOMHDDBCBJP_o *)0x0) goto LAB_03519820;
  iVar2 = OOMHDDBCBJP__NHGGBEACKBD(BANHBMINMMP,(MethodInfo *)0x0);
  switch(iVar2) {
  case 1:
  case 3:
  case 4:
  case 9:
  case 0x11:
    pNVar3 = (__this->fields)._contentTourChall;
    if (pNVar3 == (Nekki_SF2_GUI_Map_ContentTourChallBoss_o *)0x0) goto LAB_03519820;
    method = (MethodInfo *)0x0;
    Nekki_SF2_GUI_Map_ContentTourChallBoss__Init(pNVar3,BANHBMINMMP,AGONJKOMAAA,(MethodInfo *)0x0);
    pNVar6 = (Nekki_SF2_GUI_Map_ContentRaid_o *)(__this->fields)._contentTourChall;
    break;
  case 2:
  case 10:
  case 0x15:
    if (AGONJKOMAAA == (AFFHKININGD_o *)0x0) goto LAB_03519820;
    if ((AGONJKOMAAA->fields).HLFBMBHOPMI == (BANHBMINMMP->fields).KIHDFNGKPGN - 1)
    goto switchD_03519638_caseD_12;
    pNVar3 = (__this->fields)._contentBosses;
    if (pNVar3 == (Nekki_SF2_GUI_Map_ContentTourChallBoss_o *)0x0) goto LAB_03519820;
    method = (MethodInfo *)0x0;
    Nekki_SF2_GUI_Map_ContentTourChallBoss__Init(pNVar3,BANHBMINMMP,AGONJKOMAAA,(MethodInfo *)0x0);
    pNVar6 = (Nekki_SF2_GUI_Map_ContentRaid_o *)(__this->fields)._contentBosses;
    break;
  case 5:
    pNVar5 = (__this->fields)._contentSurvival;
    if (pNVar5 == (Nekki_SF2_GUI_Map_ContentSurvival_o *)0x0) goto LAB_03519820;
    Nekki_SF2_GUI_Map_ContentSurvival__Init(pNVar5,BANHBMINMMP,(MethodInfo *)0x0);
    pNVar6 = (Nekki_SF2_GUI_Map_ContentRaid_o *)(__this->fields)._contentSurvival;
    break;
  default:
    local_38 = OOMHDDBCBJP__NHGGBEACKBD(BANHBMINMMP,(MethodInfo *)0x0);
    local_48.klass = (System_Enum_c *)COALAGILPBO_TypeInfo;
    local_48.monitor = (void *)0xffffffffffffffff;
    pSVar4 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
    pSVar4 = System_String__Concat(StringLiteral_5595,pSVar4,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__LogError((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
    goto LAB_035197ac;
  case 7:
    __this_01 = (__this->fields)._contentDuel;
    if (__this_01 == (Nekki_SF2_GUI_Map_ContentDuel_o *)0x0) goto LAB_03519820;
    method = (MethodInfo *)0x0;
    Nekki_SF2_GUI_Map_ContentDuel__Init(__this_01,BANHBMINMMP,AGONJKOMAAA,(MethodInfo *)0x0);
    pNVar6 = (Nekki_SF2_GUI_Map_ContentRaid_o *)(__this->fields)._contentDuel;
    break;
  case 8:
    pNVar5 = (__this->fields)._contentBossIntermission;
    if (pNVar5 == (Nekki_SF2_GUI_Map_ContentSurvival_o *)0x0) goto LAB_03519820;
    Nekki_SF2_GUI_Map_ContentSurvival__Init(pNVar5,BANHBMINMMP,(MethodInfo *)0x0);
    pNVar6 = (Nekki_SF2_GUI_Map_ContentRaid_o *)(__this->fields)._contentBossIntermission;
    break;
  case 0x12:
  case 0x13:
switchD_03519638_caseD_12:
    __this_00 = (__this->fields)._contentBossesFinal;
    if (__this_00 == (Nekki_SF2_GUI_Map_ContentBossesFinal_o *)0x0) goto LAB_03519820;
    method = (MethodInfo *)0x0;
    Nekki_SF2_GUI_Map_ContentBossesFinal__Init(__this_00,BANHBMINMMP,AGONJKOMAAA,(MethodInfo *)0x0);
    pNVar6 = (Nekki_SF2_GUI_Map_ContentRaid_o *)(__this->fields)._contentBossesFinal;
    break;
  case 0x14:
    pNVar6 = (__this->fields)._contentRaid;
    if (pNVar6 == (Nekki_SF2_GUI_Map_ContentRaid_o *)0x0) goto LAB_03519820;
    Nekki_SF2_GUI_Map_ContentRaid__Init(pNVar6,BANHBMINMMP,(MethodInfo *)0x0);
    pNVar6 = (__this->fields)._contentRaid;
  }
  (__this->fields).ALCOKIMHMCH = (Nekki_SF2_GUI_Map_ContentBase_o *)pNVar6;
  thunk_FUN_01c20e04();
LAB_035197ac:
  pNVar7 = (__this->fields).ALCOKIMHMCH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar7 = (__this->fields).ALCOKIMHMCH;
    if ((pNVar7 == (Nekki_SF2_GUI_Map_ContentBase_o *)0x0) ||
       (__this_02 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pNVar7,(MethodInfo *)0x0),
       __this_02 == (UnityEngine_GameObject_o *)0x0)) {
LAB_03519820:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    UnityEngine_GameObject__SetActive(__this_02,true,(MethodInfo *)0x0);
  }
  Nekki_SF2_GUI_Map_InfoBattle__CIHKNMDAPBG(__this,BANHBMINMMP,AGONJKOMAAA,method);
  return;
}

