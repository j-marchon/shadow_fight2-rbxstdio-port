// Nekki.SF2.GUI.Pvp.PvpScene$$GKHAKLDEIJI @ RVA 0x321CFD8

void Nekki_SF2_GUI_Pvp_PvpScene__GKHAKLDEIJI
               (Nekki_SF2_GUI_Pvp_PvpScene_o *__this,int32_t NAIJBCMHBFK,int32_t EADCEBLKJEA,
               int32_t AAJGEHHPMGH,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Common_Hints_HintList_o *pNVar2;
  ACHLOMELAJE_o *__this_00;
  NDPMLPGANCI_o *__this_01;
  NLIDHEAMLMC_o *pNVar3;
  Nekki_SF2_GUI_Pvp_PvPHintController_o *pNVar4;
  
  if ((DAT_04566f0f & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo,NAIJBCMHBFK);
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo);
    DAT_04566f0f = 1;
  }
  if ((AAJGEHHPMGH & 0xfffffffeU) != 0x16) {
    return;
  }
  if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pNVar3 = Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->static_fields->DHDNCFLOPNH;
  if (pNVar3 == (NLIDHEAMLMC_o *)0x0) goto LAB_0331d178;
  if ((pNVar3->fields).OFFPEKODFPE == EADCEBLKJEA) {
    pNVar4 = (__this->fields).HJBFNKLPBFL;
    if ((pNVar4 == (Nekki_SF2_GUI_Pvp_PvPHintController_o *)0x0) ||
       (pNVar2 = *(Nekki_SF2_GUI_Common_Hints_HintList_o **)&(pNVar4->fields).IJAPOOKEGNE,
       pNVar2 == (Nekki_SF2_GUI_Common_Hints_HintList_o *)0x0)) goto LAB_0331d178;
    bVar1 = Nekki_SF2_GUI_Common_Hints_HintList__IsTutorialBlockActive(pNVar2,0,(MethodInfo *)0x0);
    if (bVar1) goto LAB_0331d080;
  }
  else {
LAB_0331d080:
    if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pNVar3 = Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->static_fields->IHDCFNPHCHM;
    if (pNVar3 == (NLIDHEAMLMC_o *)0x0) goto LAB_0331d178;
    if ((pNVar3->fields).OFFPEKODFPE != EADCEBLKJEA) {
      return;
    }
    pNVar4 = (__this->fields).HJBFNKLPBFL;
    if ((pNVar4 == (Nekki_SF2_GUI_Pvp_PvPHintController_o *)0x0) ||
       (pNVar2 = (pNVar4->fields).LAPCPDGHEIH,
       pNVar2 == (Nekki_SF2_GUI_Common_Hints_HintList_o *)0x0)) goto LAB_0331d178;
    bVar1 = Nekki_SF2_GUI_Common_Hints_HintList__IsTutorialBlockActive(pNVar2,0,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
  }
  EDFDANKEBGF__KHJIBEJGONJ(1.0,(MethodInfo *)0x0);
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
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this_00 != (ACHLOMELAJE_o *)0x0) {
    CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_00,true,(MethodInfo *)0x0);
    __this_01 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_01 != (NDPMLPGANCI_o *)0x0) {
      NDPMLPGANCI__EKPAFDJIAGI
                (__this_01,8,(Il2CppObject *)0x0,(System_Action_object__o *)0x0,false,
                 (MethodInfo *)0x0);
      return;
    }
  }
LAB_0331d178:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

