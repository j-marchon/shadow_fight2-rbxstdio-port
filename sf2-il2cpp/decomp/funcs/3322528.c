// Nekki.SF2.GUI.Fight.PvpVsScreenBossAbilityHint$$Init @ RVA 0x3322528

void Nekki_SF2_GUI_Fight_PvpVsScreenBossAbilityHint__Init
               (Nekki_SF2_GUI_Fight_PvpVsScreenBossAbilityHint_o *__this,PJKHAJKEHEL_o *JKJLEOCMGLA,
               Nekki_SF2_GUI_LabelAlias_o *APGHMNMMILJ,NLIDHEAMLMC_o *KOPFEMILKAJ,MethodInfo *method
               )

{
  undefined8 *puVar1;
  bool bVar2;
  int32_t iVar3;
  UnityEngine_GameObject_o *pUVar4;
  Nekki_SF2_GUI_LabelAlias_o *pNVar5;
  NLPJLHOEAOE_o *pNVar6;
  IFKFDFGNMMN_o *__this_00;
  BNAIBAODKAK_o *__this_01;
  UnityEngine_Transform_o *pUVar7;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar8;
  
  if ((DAT_04567854 & 1) == 0) {
    FUN_01bab630(&GJAEIBMAFGE_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_12560);
    FUN_01bab630(&StringLiteral_12563);
    DAT_04567854 = 1;
  }
  pUVar4 = UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((JKJLEOCMGLA != (PJKHAJKEHEL_o *)0x0) &&
     (bVar2 = PJKHAJKEHEL__MJJJDLMAMAE(JKJLEOCMGLA,(MethodInfo *)0x0),
     pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar4,bVar2,(MethodInfo *)0x0);
    bVar2 = PJKHAJKEHEL__MJJJDLMAMAE(JKJLEOCMGLA,(MethodInfo *)0x0);
    if (!bVar2) {
      return;
    }
    pNVar5 = (__this->fields).label;
    if (pNVar5 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      Nekki_SF2_GUI_LabelAlias__set_Alias
                (pNVar5,(JKJLEOCMGLA->fields).PBKDLDOIIIO,(MethodInfo *)0x0);
      if (KOPFEMILKAJ == (NLIDHEAMLMC_o *)0x0) {
        iVar3 = -1;
      }
      else {
        iVar3 = (KOPFEMILKAJ->fields).OFFPEKODFPE;
      }
      if ((GJAEIBMAFGE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar3 = GJAEIBMAFGE__KOBMFEANBAF(iVar3,(MethodInfo *)0x0);
      if (iVar3 != 0x67) {
        pNVar8 = (__this->fields).hintImage;
        bVar2 = IEPJHKEBFEB__MMMKDKHNGLI(iVar3,(MethodInfo *)0x0);
        if (pNVar8 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_0342276c;
        puVar1 = &StringLiteral_12560;
        if (!bVar2) {
          puVar1 = &StringLiteral_12563;
        }
        Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                  (pNVar8,(System_String_o *)*puVar1,(MethodInfo *)0x0);
      }
      pNVar8 = (__this->fields).hintImage;
      if ((pNVar8 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
         (pUVar4 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar8,(MethodInfo *)0x0),
         pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive
                  (pUVar4,(JKJLEOCMGLA->fields).BLJLIBHLGLI == false,(MethodInfo *)0x0);
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pNVar6 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
        if ((pNVar6 != (NLPJLHOEAOE_o *)0x0) &&
           (__this_00 = (pNVar6->fields).OMDCNDHOACL, __this_00 != (IFKFDFGNMMN_o *)0x0)) {
          __this_01 = IFKFDFGNMMN__APFHFNJDAJG
                                (__this_00,(JKJLEOCMGLA->fields).NILOEHGNJNL,(MethodInfo *)0x0);
          if ((__this_01 == (BNAIBAODKAK_o *)0x0) ||
             (bVar2 = BNAIBAODKAK__FJIENBHMBHA(__this_01,(MethodInfo *)0x0), !bVar2)) {
            return;
          }
          if ((JKJLEOCMGLA->fields).BLJLIBHLGLI == false) {
            if ((APGHMNMMILJ == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
               (pUVar7 = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)APGHMNMMILJ,(MethodInfo *)0x0),
               pUVar7 == (UnityEngine_Transform_o *)0x0)) goto LAB_0342276c;
            UnityEngine_Transform__Translate
                      (pUVar7,(UnityEngine_Vector3_o)ZEXT812(0x41c8000000000000),(MethodInfo *)0x0);
            pUVar7 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto LAB_0342276c;
            UnityEngine_Transform__Translate
                      (pUVar7,(UnityEngine_Vector3_o)ZEXT812(0x41c8000000000000),(MethodInfo *)0x0);
          }
          pNVar5 = (__this->fields).bossAbilityHint;
          if ((pNVar5 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
             (pUVar4 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
             pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar4,true,(MethodInfo *)0x0);
            pNVar5 = (__this->fields).bossAbilityHint;
            if (pNVar5 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
              Nekki_SF2_GUI_LabelAlias__set_Alias
                        (pNVar5,(__this_01->fields).DPDCPMPDBKJ,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
LAB_0342276c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

