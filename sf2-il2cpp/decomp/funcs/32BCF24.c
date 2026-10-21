// MainMenuRaidRatingPanel$$LIJCCLDLFKN @ RVA 0x32BCF24

void MainMenuRaidRatingPanel__LIJCCLDLFKN(MainMenuRaidRatingPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  PLIIGOCLJDL_o *pPVar2;
  Nekki_SF2_Core_Quests_QuestsManager_o *__this_00;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_ResolutionButton_o *pNVar3;
  
  if ((DAT_045674a3 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045674a3 = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields)._btnTop100;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields)._btnTop100;
    if (pNVar3 == (Nekki_SF2_GUI_ResolutionButton_o *)0x0) goto LAB_033bd004;
    if ((pNVar3->fields).super.BDKMNPCCDNI != false) {
      SFButton__set_IsFlashing((SFButton_o *)pNVar3,false,(MethodInfo *)0x0);
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pPVar2 = HJPEKDOPBHN__NKPPBANIAFK((MethodInfo *)0x0);
      if (pPVar2 == (PLIIGOCLJDL_o *)0x0) goto LAB_033bd004;
      (pPVar2->fields)._KDMKAMFOEAI_k__BackingField = false;
    }
  }
  JJPNLEPEAFM__OHIKPLPOJBK((MethodInfo *)0x0);
  __this_00 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
    Nekki_SF2_Core_Quests_QuestsManager__ScheduleQuests(__this_00,0x2a,(MethodInfo *)0x0);
    EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
    return;
  }
LAB_033bd004:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

