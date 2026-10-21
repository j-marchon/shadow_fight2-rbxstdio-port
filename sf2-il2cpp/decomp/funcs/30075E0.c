// Nekki.SF2.GUI.Shop.InfoPanelContent$$DLDIPMHEPGG @ RVA 0x30075E0

void Nekki_SF2_GUI_Shop_InfoPanelContent__DLDIPMHEPGG
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar3;
  PKHMIGFEJCL_o *pPVar4;
  LPGLKMNHELJ_o *__this_00;
  HOOAAGABMBL_o *pHVar5;
  HOOAAGABMBL_c *pHVar6;
  HOOAAGABMBL_o **ppHVar7;
  undefined1 auVar8 [16];
  
  if ((DAT_04565b52 & 1) == 0) {
    FUN_01bab630(&FAIJGJCCKJC_TypeInfo);
    FUN_01bab630(&LPGLKMNHELJ_TypeInfo);
    DAT_04565b52 = 1;
  }
  ppHVar7 = &(__this->fields).KJBDDCNKNNE;
  *ppHVar7 = (__this->fields).BBODGCMLKFP;
  thunk_FUN_01c20e04(ppHVar7);
  pNVar3 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if (((pNVar3 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) ||
      (*ppHVar7 == (HOOAAGABMBL_o *)0x0)) ||
     (pPVar4 = (pNVar3->fields).QuestParameters, pPVar4 == (PKHMIGFEJCL_o *)0x0)) goto LAB_03107728;
  (pPVar4->fields).MCEKGACJNMK = ((*ppHVar7)->fields)._COIPKAKHDFP_k__BackingField;
  auVar8 = thunk_FUN_01c20e04();
  if (*ppHVar7 == (HOOAAGABMBL_o *)0x0) {
LAB_03107694:
    pNVar3 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if (pNVar3 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) goto LAB_03107728;
    bVar2 = Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(pNVar3,0x42,(MethodInfo *)0x0)
    ;
    if (bVar2) {
      return;
    }
  }
  else {
    pHVar6 = (*ppHVar7)->klass;
    bVar1 = (FAIJGJCCKJC_TypeInfo->_2).naturalAligment;
    if ((((pHVar6->_2).naturalAligment < bVar1) ||
        ((pHVar6->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)FAIJGJCCKJC_TypeInfo)) ||
       (bVar2 = Nekki_SF2_GUI_Shop_InfoPanelContent__HDADGIDKFGF(auVar8._0_8_,auVar8._8_8_), bVar2))
    goto LAB_03107694;
  }
  pHVar5 = *ppHVar7;
  if (pHVar5 != (HOOAAGABMBL_o *)0x0) {
    bVar1 = (FAIJGJCCKJC_TypeInfo->_2).naturalAligment;
    if ((bVar1 <= (pHVar5->klass->_2).naturalAligment) &&
       ((pHVar5->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)FAIJGJCCKJC_TypeInfo))
    {
      pHVar6 = pHVar5[1].klass;
      __this_00 = (LPGLKMNHELJ_o *)thunk_FUN_01bda818(LPGLKMNHELJ_TypeInfo);
      LPGLKMNHELJ___ctor(__this_00,(JMDPBFOCHHP_ENBCJNLAHAC_o *)pHVar6,(MethodInfo *)0x0);
      JJPNLEPEAFM__IPLAAIJEPOM(__this_00,(MethodInfo *)0x0);
      return;
    }
  }
LAB_03107728:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

