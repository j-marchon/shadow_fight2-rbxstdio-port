// Nekki.SF2.GUI.Shop.ShopScene$$OnTryItemButtonClick @ RVA 0x3435324

void Nekki_SF2_GUI_Shop_ShopScene__OnTryItemButtonClick
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  DDMHMABAHHD_Fields *pDVar1;
  System_String_o *pSVar2;
  bool bVar3;
  Nekki_SF2_GUI_Shop_ItemsPanel_o *pNVar4;
  HOOAAGABMBL_o *IKKAMAMLIKA;
  DDMHMABAHHD_o *pDVar5;
  JMDPBFOCHHP_o *__this_00;
  JMDPBFOCHHP_HJLEKMDIDPO_o *pJVar6;
  EEGDOGKBLNG_o *pEVar7;
  GGHCLMEFIGO_o *pGVar8;
  System_Action_o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  HOOAAGABMBL_o *CAIFMHMOEEP;
  MethodInfo *extraout_x1_03;
  MethodInfo *method_00;
  MethodInfo *pMVar9;
  ACHLOMELAJE_o *pAVar10;
  System_String_o *DIIDFLPOBMC;
  Nekki_SF2_Core_Fights_ModelContainer_o *__this_01;
  bool local_38 [4];
  bool local_34 [4];
  
  if ((DAT_04568199 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ShopScene_LJEJIDPLJAA__);
    FUN_01bab630(&StringLiteral_5562);
    FUN_01bab630(&StringLiteral_6981);
    FUN_01bab630(&StringLiteral_10876);
    FUN_01bab630(&StringLiteral_8722);
    FUN_01bab630(&StringLiteral_10045);
    FUN_01bab630(&StringLiteral_10823);
    FUN_01bab630(&StringLiteral_1);
    DAT_04568199 = 1;
  }
  pNVar4 = (__this->fields)._ItemsPanel;
  if (pNVar4 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) goto LAB_03535780;
  IKKAMAMLIKA = Nekki_SF2_GUI_Shop_ItemsPanel__get_SelectedItemInfo(pNVar4,(MethodInfo *)0x0);
  if (IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0) {
    local_34[0] = false;
    local_38[0] = false;
    HCAICJLDDJO__IOJJNFJDFEJ(local_34,local_38,IKKAMAMLIKA,(MethodInfo *)0x0);
    bVar3 = System_String__op_Equality
                      ((IKKAMAMLIKA->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_10876,
                       (MethodInfo *)0x0);
    if ((bVar3) ||
       (bVar3 = System_String__op_Equality
                          ((IKKAMAMLIKA->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_10823,
                           (MethodInfo *)0x0), bVar3)) {
      pSVar2 = StringLiteral_1;
      pDVar5 = HCAICJLDDJO__PEENAMDLAKO(IKKAMAMLIKA,(MethodInfo *)0x0);
      pDVar1 = (DDMHMABAHHD_Fields *)&(IKKAMAMLIKA->fields)._COIPKAKHDFP_k__BackingField;
      if (pDVar5 != (DDMHMABAHHD_o *)0x0) {
        pDVar1 = &pDVar5->fields;
      }
      DIIDFLPOBMC = pDVar1->_COIPKAKHDFP_k__BackingField;
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
      if (__this_00 == (JMDPBFOCHHP_o *)0x0) goto LAB_03535780;
      pJVar6 = JMDPBFOCHHP__FPPDGOEOJCH(__this_00,DIIDFLPOBMC,(MethodInfo *)0x0);
      if (local_38[0] != false) {
        DIIDFLPOBMC = pSVar2;
      }
      pMVar9 = extraout_x1;
      if (pJVar6 != (JMDPBFOCHHP_HJLEKMDIDPO_o *)0x0) {
        bVar3 = System_String__op_Equality
                          ((pJVar6->fields).BGHFADDGPAD,StringLiteral_8722,(MethodInfo *)0x0);
        if (bVar3) {
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pEVar7 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
          if (pEVar7 == (EEGDOGKBLNG_o *)0x0) goto LAB_03535780;
          EEGDOGKBLNG__BNKOEFAHHIP(pEVar7,DIIDFLPOBMC,true,(MethodInfo *)0x0);
          pMVar9 = extraout_x1_00;
        }
        else {
          bVar3 = System_String__op_Equality
                            ((pJVar6->fields).BGHFADDGPAD,StringLiteral_10045,(MethodInfo *)0x0);
          if (bVar3) {
            if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pEVar7 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
            if (pEVar7 == (EEGDOGKBLNG_o *)0x0) goto LAB_03535780;
            EEGDOGKBLNG__HOOFGFHMIAB(pEVar7,DIIDFLPOBMC,true,(MethodInfo *)0x0);
            pMVar9 = extraout_x1_01;
          }
          else {
            bVar3 = System_String__op_Equality
                              ((pJVar6->fields).BGHFADDGPAD,StringLiteral_6981,(MethodInfo *)0x0);
            if (bVar3) {
              if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              pEVar7 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
              if (pEVar7 == (EEGDOGKBLNG_o *)0x0) goto LAB_03535780;
              EEGDOGKBLNG__JFFOFHJAFGH(pEVar7,DIIDFLPOBMC,true,(MethodInfo *)0x0);
              pMVar9 = extraout_x1_02;
            }
            else {
              System_String__op_Equality
                        ((pJVar6->fields).BGHFADDGPAD,StringLiteral_5562,(MethodInfo *)0x0);
              pMVar9 = extraout_x1_03;
            }
          }
        }
      }
      Nekki_SF2_GUI_Shop_ShopScene__IKIELNIGEBB(__this,pMVar9);
    }
    else {
      if ((local_38[0] & local_34[0]) == 0) {
        if ((local_34[0] == false) || (local_38[0] != false)) {
          __this_01 = (__this->fields)._ModelContainer;
          CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
          pMVar9 = (MethodInfo *)0x0;
          System_Action___ctor();
          if (__this_01 != (Nekki_SF2_Core_Fights_ModelContainer_o *)0x0) {
            Nekki_SF2_Core_Fights_ModelContainer__add_OnTryOnEnd
                      (__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
            Nekki_SF2_GUI_Shop_ShopScene__FJHEDBMBEFI(__this,IKKAMAMLIKA,7,pMVar9);
            Nekki_SF2_GUI_Shop_ShopScene__HideUI(__this,method_00);
            return;
          }
          goto LAB_03535780;
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b7d = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pAVar10 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if ((pAVar10 == (ACHLOMELAJE_o *)0x0) ||
           (pGVar8 = (pAVar10->fields).OIDPLCLELEN, pGVar8 == (GGHCLMEFIGO_o *)0x0))
        goto LAB_03535780;
        pMVar9 = (MethodInfo *)0x1;
        GGHCLMEFIGO__BOEFGIBCIIL(pGVar8,IKKAMAMLIKA,true,(MethodInfo *)0x0);
        pNVar4 = (__this->fields)._ItemsPanel;
        if (pNVar4 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) goto LAB_03535780;
        Nekki_SF2_GUI_Shop_ItemsPanel__UpdateScrollItems(pNVar4,(MethodInfo *)0x0);
        CAIFMHMOEEP = IKKAMAMLIKA;
      }
      else {
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b7d = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pAVar10 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if ((pAVar10 == (ACHLOMELAJE_o *)0x0) ||
           (pGVar8 = (pAVar10->fields).OIDPLCLELEN, pGVar8 == (GGHCLMEFIGO_o *)0x0)) {
LAB_03535780:
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pMVar9 = (MethodInfo *)0x1;
        GGHCLMEFIGO__OHLEKAMFNBE(pGVar8,IKKAMAMLIKA,true,(MethodInfo *)0x0);
        pNVar4 = (__this->fields)._ItemsPanel;
        if (pNVar4 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) goto LAB_03535780;
        Nekki_SF2_GUI_Shop_ItemsPanel__UpdateScrollItems(pNVar4,(MethodInfo *)0x0);
        CAIFMHMOEEP = (HOOAAGABMBL_o *)0x0;
      }
      Nekki_SF2_GUI_Shop_ShopScene__UpdateModelIfNeed(__this,CAIFMHMOEEP,pMVar9);
      Nekki_SF2_GUI_Shop_ShopScene__BCDNLJLKOCC(__this,IKKAMAMLIKA,pMVar9);
      Nekki_SF2_GUI_Shop_ShopScene__JINDJMBNDGM(__this,IKKAMAMLIKA,pMVar9);
      Nekki_SF2_GUI_Shop_ShopScene__PBDGFBENHDK(__this,IKKAMAMLIKA,pMVar9);
    }
  }
  return;
}

