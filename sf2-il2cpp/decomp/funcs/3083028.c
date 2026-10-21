// KFCFGKEHPNK$$EECLBEHBHFI @ RVA 0x3083028

void KFCFGKEHPNK__EECLBEHBHFI(int32_t AIJPKOCFDJP,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar2;
  System_String_o *pSVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  ACHLOMELAJE_o *pAVar4;
  LPAPAMPGDFN_o *pLVar5;
  PKHMIGFEJCL_o *pPVar6;
  System_String_o **ppSVar7;
  
  if ((DAT_04566007 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_04566007 = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method = extraout_x1_02;
  }
  pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((pAVar4 != (ACHLOMELAJE_o *)0x0) &&
     (pLVar5 = (pAVar4->fields).LMCDOMHENMC, pLVar5 != (LPAPAMPGDFN_o *)0x0)) {
    if (((pLVar5->fields).AMIMEMOELHE != 0x32) ||
       (bVar1 = KFCFGKEHPNK__ECJLKNEAMKH(AIJPKOCFDJP,method), bVar1)) {
      return;
    }
    pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if (pNVar2 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
      pPVar6 = (pNVar2->fields).QuestParameters;
      pSVar3 = BFKOGEBDAEH__GKMAFGODLLG(AIJPKOCFDJP,(MethodInfo *)0x0);
      if (pPVar6 != (PKHMIGFEJCL_o *)0x0) {
        ppSVar7 = &(pPVar6->fields).GHOHAHIJJJN;
        *ppSVar7 = pSVar3;
        thunk_FUN_01c20e04(ppSVar7,pSVar3);
        pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
        if (pNVar2 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
          Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(pNVar2,0x36,(MethodInfo *)0x0);
          *ppSVar7 = StringLiteral_1;
          thunk_FUN_01c20e04(ppSVar7);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

