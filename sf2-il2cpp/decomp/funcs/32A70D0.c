// Nekki.SF2.GUI.Pvp.CharacterSelectModule$$BJBEBBGINAH @ RVA 0x32A70D0

void Nekki_SF2_GUI_Pvp_CharacterSelectModule__BJBEBBGINAH
               (Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *__this,MethodInfo *method)

{
  bool bVar1;
  uint uVar2;
  NLPJLHOEAOE_o *pNVar3;
  IFKFDFGNMMN_o *__this_00;
  BNAIBAODKAK_array *pBVar4;
  Nekki_SF2_GUI_Pvp_PhaseBox_o *pNVar5;
  Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *pNVar6;
  MethodInfo *extraout_x1;
  
  if ((DAT_045673fd & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045673fd = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  pNVar3 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
  if ((pNVar3 != (NLPJLHOEAOE_o *)0x0) &&
     (__this_00 = (pNVar3->fields).OMDCNDHOACL, __this_00 != (IFKFDFGNMMN_o *)0x0)) {
    pBVar4 = IFKFDFGNMMN__PPLFNEHDHCM(__this_00,(MethodInfo *)0x0);
    (__this->fields).DLCCJFCKAJL = pBVar4;
    thunk_FUN_01c20e04();
    Nekki_SF2_GUI_Pvp_SelectModule__BJBEBBGINAH
              ((Nekki_SF2_GUI_Pvp_SelectModule_o *)__this,(MethodInfo *)0x0);
    pNVar5 = (__this->fields)._playerOne;
    (__this->fields).HKKEEPMCBFO = 0;
    if (pNVar5 != (Nekki_SF2_GUI_Pvp_PhaseBox_o *)0x0) {
      Nekki_SF2_GUI_Pvp_PhaseBox__set_CurrentPhase(pNVar5,2,(MethodInfo *)0x0);
      pNVar5 = (__this->fields)._playerTwo;
      if (pNVar5 != (Nekki_SF2_GUI_Pvp_PhaseBox_o *)0x0) {
        Nekki_SF2_GUI_Pvp_PhaseBox__set_CurrentPhase(pNVar5,2,(MethodInfo *)0x0);
        bVar1 = Nekki_SF2_GUI_Pvp_SelectModule__ABEMBBBAFPP
                          ((Nekki_SF2_GUI_Pvp_SelectModule_o *)__this,(MethodInfo *)0x0);
        if (bVar1) {
          return;
        }
        pNVar6 = (__this->fields).super._selectTable;
        if (pNVar6 != (Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *)0x0) {
          Nekki_SF2_GUI_Pvp_PlayersSelectTable__ResetSelection(pNVar6,1,(MethodInfo *)0x0);
          pNVar6 = (__this->fields).super._selectTable;
          if (pNVar6 != (Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *)0x0) {
            pNVar5 = (__this->fields)._playerTwo;
            pBVar4 = (__this->fields).DLCCJFCKAJL;
            uVar2 = Nekki_SF2_GUI_Pvp_PlayersSelectTable__GetSelectionID(pNVar6,1,(MethodInfo *)0x0)
            ;
            if (pBVar4 != (BNAIBAODKAK_array *)0x0) {
              if ((uint)pBVar4->max_length <= uVar2) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8d0();
              }
              if (pNVar5 != (Nekki_SF2_GUI_Pvp_PhaseBox_o *)0x0) {
                Nekki_SF2_GUI_Pvp_PhaseBox__ChangeCharacter
                          (pNVar5,pBVar4->m_Items[(int)uVar2],(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

