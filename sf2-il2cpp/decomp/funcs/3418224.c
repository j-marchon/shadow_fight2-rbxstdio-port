// Nekki.SF2.GUI.Map.InfoBattle$$ClearInfo @ RVA 0x3418224

void Nekki_SF2_GUI_Map_InfoBattle__ClearInfo
               (Nekki_SF2_GUI_Map_InfoBattle_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  DNELIPCHKLK_o *__this_00;
  Nekki_SF2_GUI_LabelAlias_o *__this_01;
  LabelButton_o *__this_02;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Map_ContentClosed_o *pNVar3;
  Nekki_SF2_GUI_Map_ContentCompleteOrLocked_o *pNVar4;
  Nekki_SF2_GUI_Map_ContentTourChallBoss_o *pNVar5;
  Nekki_SF2_GUI_Map_ContentBossesFinal_o *pNVar6;
  Nekki_SF2_GUI_Map_ContentDuel_o *pNVar7;
  Nekki_SF2_GUI_Map_ContentSurvival_o *pNVar8;
  Nekki_SF2_GUI_Map_ContentAscension_o *pNVar9;
  Nekki_SF2_GUI_Map_ContentRaid_o *pNVar10;
  Nekki_SF2_GUI_Map_ContentBase_o **ppNVar11;
  UnityEngine_UI_Button_o *pUVar12;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar13;
  RaidInfo_o *pRVar14;
  RaidInfoPrize_o *pRVar15;
  Nekki_SF2_GUI_Map_ContentBase_o *x;
  
  if ((DAT_045680b4 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_045680b4 = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields)._contentClosed;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields)._contentClosed;
    if ((pNVar3 == (Nekki_SF2_GUI_Map_ContentClosed_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03518764;
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
  }
  pNVar4 = (__this->fields)._contentCompleteOrLocked;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar4 = (__this->fields)._contentCompleteOrLocked;
    if ((pNVar4 == (Nekki_SF2_GUI_Map_ContentCompleteOrLocked_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03518764;
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
  }
  pNVar5 = (__this->fields)._contentTourChall;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar5 = (__this->fields)._contentTourChall;
    if ((pNVar5 == (Nekki_SF2_GUI_Map_ContentTourChallBoss_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03518764;
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
  }
  pNVar5 = (__this->fields)._contentBosses;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar5 = (__this->fields)._contentBosses;
    if ((pNVar5 == (Nekki_SF2_GUI_Map_ContentTourChallBoss_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03518764;
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
  }
  pNVar6 = (__this->fields)._contentBossesFinal;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar6 = (__this->fields)._contentBossesFinal;
    if ((pNVar6 == (Nekki_SF2_GUI_Map_ContentBossesFinal_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar6,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03518764;
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
  }
  pNVar7 = (__this->fields)._contentDuel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar7 = (__this->fields)._contentDuel;
    if ((pNVar7 == (Nekki_SF2_GUI_Map_ContentDuel_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar7,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03518764;
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
  }
  pNVar8 = (__this->fields)._contentSurvival;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar8 = (__this->fields)._contentSurvival;
    if ((pNVar8 == (Nekki_SF2_GUI_Map_ContentSurvival_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar8,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03518764;
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
  }
  pNVar8 = (__this->fields)._contentBossIntermission;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar8 = (__this->fields)._contentBossIntermission;
    if ((pNVar8 == (Nekki_SF2_GUI_Map_ContentSurvival_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar8,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03518764;
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
  }
  pNVar9 = (__this->fields)._contentAscension;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar9 = (__this->fields)._contentAscension;
    if ((pNVar9 == (Nekki_SF2_GUI_Map_ContentAscension_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar9,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03518764;
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
  }
  pNVar10 = (__this->fields)._contentRaid;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar10 = (__this->fields)._contentRaid;
    if ((pNVar10 == (Nekki_SF2_GUI_Map_ContentRaid_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar10,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03518764;
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
  }
  ppNVar11 = &(__this->fields).ALCOKIMHMCH;
  x = *ppNVar11;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((*ppNVar11 == (Nekki_SF2_GUI_Map_ContentBase_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)*ppNVar11,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03518764;
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
    *ppNVar11 = (Nekki_SF2_GUI_Map_ContentBase_o *)0x0;
    thunk_FUN_01c20e04(ppNVar11,0);
  }
  __this_00 = (__this->fields).AABIECAIFGA;
  if (__this_00 != (DNELIPCHKLK_o *)0x0) {
    DNELIPCHKLK__LGOFNFEIKFB(__this_00,StringLiteral_1,(MethodInfo *)0x0);
    __this_01 = (__this->fields)._lblBattleName;
    if (__this_01 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      Nekki_SF2_GUI_LabelAlias__Clear(__this_01,(MethodInfo *)0x0);
      __this_02 = (__this->fields)._btnFight;
      if ((__this_02 != (LabelButton_o *)0x0) &&
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
        pUVar12 = (__this->fields)._btnRemoveFight;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar12,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (bVar1) {
          pUVar12 = (__this->fields)._btnRemoveFight;
          if ((pUVar12 == (UnityEngine_UI_Button_o *)0x0) ||
             (pUVar2 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pUVar12,(MethodInfo *)0x0),
             pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03518764;
          UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
        }
        pUVar12 = (__this->fields)._btnRemoveFight;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar12,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (bVar1) {
          pUVar12 = (__this->fields)._btnRemoveFight;
          if ((pUVar12 == (UnityEngine_UI_Button_o *)0x0) ||
             (pUVar2 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pUVar12,(MethodInfo *)0x0),
             pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03518764;
          UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
        }
        pNVar13 = (__this->fields)._altImage;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pNVar13,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (bVar1) {
          pNVar13 = (__this->fields)._altImage;
          if ((pNVar13 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
             (pUVar2 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pNVar13,(MethodInfo *)0x0),
             pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03518764;
          UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
        }
        pRVar14 = (__this->fields)._raidInfo;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pRVar14,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (bVar1) {
          pRVar14 = (__this->fields)._raidInfo;
          if ((pRVar14 == (RaidInfo_o *)0x0) ||
             (pUVar2 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pRVar14,(MethodInfo *)0x0),
             pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03518764;
          UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
        }
        pRVar15 = (__this->fields)._raidInfoPrize;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pRVar15,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (!bVar1) {
          return;
        }
        pRVar15 = (__this->fields)._raidInfoPrize;
        if ((pRVar15 != (RaidInfoPrize_o *)0x0) &&
           (pUVar2 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pRVar15,(MethodInfo *)0x0),
           pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_03518764:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

