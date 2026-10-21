// Nekki.SF2.GUI.Shop.ShopScene$$ALOBOKCKGLP @ RVA 0x3434608

void Nekki_SF2_GUI_Shop_ShopScene__ALOBOKCKGLP
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  Nekki_SF2_GUI_Shop_ItemsPanel_o *__this_00;
  HOOAAGABMBL_o *IKKAMAMLIKA;
  GGHCLMEFIGO_o *__this_01;
  IGFGDDANEPE_o *pIVar3;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar4;
  PKHMIGFEJCL_ELHOKIPELBO_o *pPVar5;
  ACHLOMELAJE_o *pAVar6;
  GGLKHCAIGDI_o *pGVar7;
  AMJMGFCCAKN_o *IKKAMAMLIKA_00;
  PKHMIGFEJCL_o *pPVar8;
  
  if ((DAT_04568183 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_04568183 = 1;
  }
  __this_00 = (__this->fields)._ItemsPanel;
  if (__this_00 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) goto LAB_035347d4;
  IKKAMAMLIKA = Nekki_SF2_GUI_Shop_ItemsPanel__get_SelectedItemInfo(__this_00,(MethodInfo *)0x0);
  if (IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0) {
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
    pAVar6 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if ((pAVar6 == (ACHLOMELAJE_o *)0x0) ||
       (__this_01 = (pAVar6->fields).OIDPLCLELEN, __this_01 == (GGHCLMEFIGO_o *)0x0))
    goto LAB_035347d4;
    pIVar3 = GGHCLMEFIGO__JNFIBDBHNOA(__this_01,IKKAMAMLIKA,(MethodInfo *)0x0);
    if (pIVar3 == (IGFGDDANEPE_o *)0x0) {
      bVar1 = 0;
      IKKAMAMLIKA_00 = (AMJMGFCCAKN_o *)0x0;
    }
    else {
      IKKAMAMLIKA_00 = (pIVar3->fields).HJLEJIJKJKD;
      if (IKKAMAMLIKA_00 == (AMJMGFCCAKN_o *)0x0) {
        bVar1 = 0;
      }
      else {
        pNVar4 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
        if ((((pNVar4 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) ||
             (pPVar8 = (pNVar4->fields).QuestParameters, pPVar8 == (PKHMIGFEJCL_o *)0x0)) ||
            (pIVar3 = (IKKAMAMLIKA_00->fields).MNELBNHIKGH, pIVar3 == (IGFGDDANEPE_o *)0x0)) ||
           (pPVar5 = (pPVar8->fields).BJJFDMHOBNB, pPVar5 == (PKHMIGFEJCL_ELHOKIPELBO_o *)0x0))
        goto LAB_035347d4;
        (pPVar5->fields).BMGMGAAPFGO = (pIVar3->fields).NPFMOEOIEKM;
        thunk_FUN_01c20e04();
        pGVar7 = (IKKAMAMLIKA_00->fields).PHAGOJCOMPN;
        if ((pGVar7 == (GGLKHCAIGDI_o *)0x0) ||
           (pPVar5 = (pPVar8->fields).BJJFDMHOBNB, pPVar5 == (PKHMIGFEJCL_ELHOKIPELBO_o *)0x0))
        goto LAB_035347d4;
        (pPVar5->fields).JDKKCDBDNLB = (pGVar7->fields)._COIPKAKHDFP_k__BackingField;
        thunk_FUN_01c20e04();
        pPVar5 = (pPVar8->fields).BJJFDMHOBNB;
        if (pPVar5 == (PKHMIGFEJCL_ELHOKIPELBO_o *)0x0) goto LAB_035347d4;
        (pPVar5->fields).HDGEOJGHEOE = (IKKAMAMLIKA_00->fields).CJKLJJIMECK;
        (pPVar5->fields).GOKNIOJFFBG = StringLiteral_1;
        thunk_FUN_01c20e04();
        bVar1 = 1;
      }
    }
    pNVar4 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if (pNVar4 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
LAB_035347d4:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar2 = Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(pNVar4,0x1b,(MethodInfo *)0x0)
    ;
    if ((bool)(bVar1 & !bVar2)) {
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      MGNPHCAAEIO__IAGKBFCKFKB
                ((HOOAAGABMBL_o *)IKKAMAMLIKA_00,0x12,1,(System_Action_BKKPAKHJDKB__o *)0x0,true,
                 (MethodInfo *)0x0);
      return;
    }
  }
  return;
}

