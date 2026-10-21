// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainer$$ANIOKLANHAD @ RVA 0x3311468

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__ANIOKLANHAD
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *__this,
               Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *PBPPGACOCOF,MethodInfo *method)

{
  bool bVar1;
  int32_t DFIBGGDJPLM;
  LabelButton_o *__this_00;
  UnityEngine_GameObject_o *pUVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  EEGDOGKBLNG_o *pEVar4;
  System_String_o *pSVar5;
  JMDPBFOCHHP_o *__this_01;
  JMDPBFOCHHP_HJLEKMDIDPO_o *pJVar6;
  HOOAAGABMBL_o *HCJEJCBNDHC;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  MethodInfo *in_x5;
  System_String_o *CJNHFNHJHPE;
  
  if ((DAT_045677b7 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&LPGPNBGHDBD_TypeInfo);
    FUN_01bab630(&StringLiteral_6981);
    FUN_01bab630(&StringLiteral_8722);
    FUN_01bab630(&StringLiteral_10045);
    FUN_01bab630(&StringLiteral_18003);
    FUN_01bab630(&StringLiteral_15847);
    DAT_045677b7 = 1;
  }
  if (PBPPGACOCOF == (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *)0x0) goto LAB_03411834;
  Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell__OnSelectCell(PBPPGACOCOF,(MethodInfo *)0x0);
  CJNHFNHJHPE = (PBPPGACOCOF->fields)._FDBOKOGOEEG_k__BackingField;
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(CJNHFNHJHPE,(MethodInfo *)0x0);
  if (bVar1) {
LAB_03411534:
    __this_00 = (__this->fields)._consumableButton;
    if ((__this_00 == (LabelButton_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03411834;
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._descLbl;
  }
  else {
    if (CJNHFNHJHPE == (System_String_o *)0x0) goto LAB_03411834;
    bVar1 = System_String__Contains(CJNHFNHJHPE,StringLiteral_18003,(MethodInfo *)0x0);
    if (bVar1) goto LAB_03411534;
    bVar1 = System_String__op_Equality
                      ((__this->fields).HBJEOMFBMMC,StringLiteral_8722,(MethodInfo *)0x0);
    if (bVar1) {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pEVar4 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
      if (pEVar4 == (EEGDOGKBLNG_o *)0x0) goto LAB_03411834;
      EEGDOGKBLNG__BNKOEFAHHIP(pEVar4,CJNHFNHJHPE,true,(MethodInfo *)0x0);
    }
    else {
      bVar1 = System_String__op_Equality
                        ((__this->fields).HBJEOMFBMMC,StringLiteral_10045,(MethodInfo *)0x0);
      if (bVar1) {
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pEVar4 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
        if (pEVar4 == (EEGDOGKBLNG_o *)0x0) goto LAB_03411834;
        EEGDOGKBLNG__HOOFGFHMIAB(pEVar4,CJNHFNHJHPE,true,(MethodInfo *)0x0);
      }
      else {
        bVar1 = System_String__op_Equality
                          ((__this->fields).HBJEOMFBMMC,StringLiteral_6981,(MethodInfo *)0x0);
        if (bVar1) {
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pEVar4 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
          if (pEVar4 == (EEGDOGKBLNG_o *)0x0) goto LAB_03411834;
          EEGDOGKBLNG__JFFOFHJAFGH(pEVar4,CJNHFNHJHPE,true,(MethodInfo *)0x0);
        }
      }
    }
    pNVar3 = (__this->fields)._descLbl;
    if (pNVar3 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_03411834;
    Nekki_SF2_GUI_LabelAlias__Clear(pNVar3,(MethodInfo *)0x0);
    bVar1 = System_String__op_Equality
                      ((__this->fields).HBJEOMFBMMC,StringLiteral_8722,(MethodInfo *)0x0);
    if (bVar1) {
      pNVar3 = (__this->fields)._descLbl;
      if ((pNVar3 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
         pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03411834;
      UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
      pNVar3 = (__this->fields)._descLbl;
      if ((LPGPNBGHDBD_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar5 = LPGPNBGHDBD__DMBEBNELNNC(CJNHFNHJHPE,(MethodInfo *)0x0);
      pSVar5 = System_String__Concat(StringLiteral_15847,pSVar5,(MethodInfo *)0x0);
      if (pNVar3 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_03411834;
LAB_03411790:
      Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar3,pSVar5,(MethodInfo *)0x0);
    }
    else {
      bVar1 = System_String__op_Equality
                        ((__this->fields).HBJEOMFBMMC,StringLiteral_10045,(MethodInfo *)0x0);
      pNVar3 = (__this->fields)._descLbl;
      if ((pNVar3 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
         pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03411834;
      if (bVar1) {
        UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
        pNVar3 = (__this->fields)._descLbl;
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_01 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
        if (((__this_01 == (JMDPBFOCHHP_o *)0x0) ||
            (pJVar6 = JMDPBFOCHHP__FPPDGOEOJCH(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0),
            pJVar6 == (JMDPBFOCHHP_HJLEKMDIDPO_o *)0x0)) ||
           (pNVar3 == (Nekki_SF2_GUI_LabelAlias_o *)0x0)) goto LAB_03411834;
        pSVar5 = (pJVar6->fields).BPCADJLKKGA;
        goto LAB_03411790;
      }
      UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
    }
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pEVar4 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if (pEVar4 == (EEGDOGKBLNG_o *)0x0) goto LAB_03411834;
    DFIBGGDJPLM = EEGDOGKBLNG__OHCGFHJNEGO(pEVar4,CJNHFNHJHPE,(MethodInfo *)0x0);
    method_00 = extraout_x1;
    if ((Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_TypeInfo);
      method_00 = extraout_x1_00;
    }
    HCJEJCBNDHC = Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__ONFELBEANOD(CJNHFNHJHPE,method_00);
    if (HCJEJCBNDHC != (HOOAAGABMBL_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__MPMLPHHDCFM
                (__this,PBPPGACOCOF,HCJEJCBNDHC,DFIBGGDJPLM,CJNHFNHJHPE,in_x5);
      return;
    }
    pNVar3 = (Nekki_SF2_GUI_LabelAlias_o *)(__this->fields)._consumableButton;
  }
  if ((pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
    return;
  }
LAB_03411834:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

