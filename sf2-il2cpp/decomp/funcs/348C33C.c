// Nekki.SF2.GUI.Pvp.PhaseCharacter$$UpdateContent @ RVA 0x348C33C

void Nekki_SF2_GUI_Pvp_PhaseCharacter__UpdateContent
               (Nekki_SF2_GUI_Pvp_PhaseCharacter_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  UnityEngine_GameObject_o *pUVar3;
  Nekki_SF2_GUI_Fight_DisplayModel_o *pNVar4;
  System_String_o *__this_00;
  BNAIBAODKAK_o *pBVar5;
  System_String_o **ppSVar6;
  UnityEngine_Vector2_o KFCJCEIBICJ;
  UnityEngine_Vector2_o JKOJPEKLBCI;
  
  if ((DAT_045683e5 & 1) == 0) {
    FUN_01bab630(&StringLiteral_20433);
    DAT_045683e5 = 1;
  }
  Nekki_SF2_GUI_Pvp_PhaseItem__UpdateContent
            ((Nekki_SF2_GUI_Pvp_PhaseItem_o *)__this,(MethodInfo *)0x0);
  if ((__this->fields).super.KPLEAGPMKFD == (BNAIBAODKAK_o *)0x0) {
    return;
  }
  pNVar2 = (__this->fields)._charName;
  if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    pUVar3 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0);
    pBVar5 = (__this->fields).super.KPLEAGPMKFD;
    if ((pBVar5 == (BNAIBAODKAK_o *)0x0) ||
       (bVar1 = BNAIBAODKAK__AAAMBLLDPHJ(pBVar5,(MethodInfo *)0x0),
       pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0358c5bc;
    UnityEngine_GameObject__SetActive(pUVar3,bVar1,(MethodInfo *)0x0);
    pBVar5 = (__this->fields).super.KPLEAGPMKFD;
    if ((pBVar5 == (BNAIBAODKAK_o *)0x0) ||
       (pNVar2 = (__this->fields)._charName, pNVar2 == (Nekki_SF2_GUI_LabelAlias_o *)0x0))
    goto LAB_0358c5bc;
    Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar2,(pBVar5->fields).KGLJICLJHEL,(MethodInfo *)0x0);
    pNVar4 = (__this->fields)._avatar;
    if (pNVar4 == (Nekki_SF2_GUI_Fight_DisplayModel_o *)0x0) goto LAB_0358c5bc;
    pUVar3 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0);
    pBVar5 = (__this->fields).super.KPLEAGPMKFD;
    if ((pBVar5 == (BNAIBAODKAK_o *)0x0) ||
       (bVar1 = BNAIBAODKAK__AAAMBLLDPHJ(pBVar5,(MethodInfo *)0x0),
       pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0358c5bc;
    UnityEngine_GameObject__SetActive(pUVar3,bVar1,(MethodInfo *)0x0);
    pNVar4 = (__this->fields)._avatar;
    if (DAT_0455fa7e == '\0') {
      FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
      DAT_0455fa7e = '\x01';
    }
    if (pNVar4 == (Nekki_SF2_GUI_Fight_DisplayModel_o *)0x0) goto LAB_0358c5bc;
    KFCJCEIBICJ.fields.y = (UnityEngine_Vector2_TypeInfo->static_fields->oneVector).fields.y * 700.0
    ;
    KFCJCEIBICJ.fields.x = (UnityEngine_Vector2_TypeInfo->static_fields->oneVector).fields.x * 700.0
    ;
    Nekki_SF2_GUI_Fight_DisplayModel__SetSizeDelta(pNVar4,KFCJCEIBICJ,(MethodInfo *)0x0);
    pNVar4 = (__this->fields)._avatar;
    if (DAT_0455fa7e == '\0') {
      FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
      DAT_0455fa7e = '\x01';
    }
    if (pNVar4 == (Nekki_SF2_GUI_Fight_DisplayModel_o *)0x0) goto LAB_0358c5bc;
    JKOJPEKLBCI.fields.y = (UnityEngine_Vector2_TypeInfo->static_fields->oneVector).fields.y * 1.36;
    JKOJPEKLBCI.fields.x = (UnityEngine_Vector2_TypeInfo->static_fields->oneVector).fields.x * 1.36;
    Nekki_SF2_GUI_Fight_DisplayModel__ScaleAvatar(pNVar4,JKOJPEKLBCI,(MethodInfo *)0x0);
    pNVar2 = (__this->fields)._bossAbilityDescription;
    if (pNVar2 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_0358c5bc;
    pUVar3 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0);
    pBVar5 = (__this->fields).super.KPLEAGPMKFD;
    if (pBVar5 == (BNAIBAODKAK_o *)0x0) goto LAB_0358c5bc;
    bVar1 = BNAIBAODKAK__PLGBAOHOBLE(pBVar5,(MethodInfo *)0x0);
    if (bVar1) {
      pBVar5 = (__this->fields).super.KPLEAGPMKFD;
      if (pBVar5 == (BNAIBAODKAK_o *)0x0) goto LAB_0358c5bc;
      bVar1 = BNAIBAODKAK__AAAMBLLDPHJ(pBVar5,(MethodInfo *)0x0);
    }
    else {
      bVar1 = false;
    }
    if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto LAB_0358c5bc;
    UnityEngine_GameObject__SetActive(pUVar3,bVar1,(MethodInfo *)0x0);
    pBVar5 = (__this->fields).super.KPLEAGPMKFD;
    if (pBVar5 == (BNAIBAODKAK_o *)0x0) goto LAB_0358c5bc;
    bVar1 = BNAIBAODKAK__PLGBAOHOBLE(pBVar5,(MethodInfo *)0x0);
    if (bVar1) {
      pBVar5 = (__this->fields).super.KPLEAGPMKFD;
      if ((pBVar5 == (BNAIBAODKAK_o *)0x0) ||
         (pNVar2 = (__this->fields)._bossAbilityDescription,
         pNVar2 == (Nekki_SF2_GUI_LabelAlias_o *)0x0)) goto LAB_0358c5bc;
      Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar2,(pBVar5->fields).ECEMFINPJFF,(MethodInfo *)0x0);
    }
    if ((__this->fields).super.EMNHJBCKBKC == 0) {
      pBVar5 = (__this->fields).super.KPLEAGPMKFD;
      if ((pBVar5 == (BNAIBAODKAK_o *)0x0) ||
         (__this_00 = (pBVar5->fields).PKJEMIDJPAG, __this_00 == (System_String_o *)0x0))
      goto LAB_0358c5bc;
      bVar1 = System_String__Equals(__this_00,StringLiteral_20433,(MethodInfo *)0x0);
      if (bVar1) {
        pNVar4 = (__this->fields)._avatar;
        if (pNVar4 == (Nekki_SF2_GUI_Fight_DisplayModel_o *)0x0) goto LAB_0358c5bc;
        ppSVar6 = &(__this->fields).IPLIJDNEOPB;
        goto LAB_0358c5a4;
      }
    }
    pBVar5 = (__this->fields).super.KPLEAGPMKFD;
    if ((pBVar5 != (BNAIBAODKAK_o *)0x0) &&
       (pNVar4 = (__this->fields)._avatar, pNVar4 != (Nekki_SF2_GUI_Fight_DisplayModel_o *)0x0)) {
      ppSVar6 = &(pBVar5->fields).NLAHDEDCAEI;
LAB_0358c5a4:
      Nekki_SF2_GUI_Fight_DisplayModel__SetAvatar(pNVar4,*ppSVar6,(MethodInfo *)0x0);
      return;
    }
  }
LAB_0358c5bc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

