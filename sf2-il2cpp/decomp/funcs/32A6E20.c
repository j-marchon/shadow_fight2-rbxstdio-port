// Nekki.SF2.GUI.Pvp.CharacterSelectModule$$BHOPECNMJAC @ RVA 0x32A6E20

void Nekki_SF2_GUI_Pvp_CharacterSelectModule__BHOPECNMJAC
               (Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *__this,int32_t HEHMPFLAEGE,
               int32_t MKACJBMOMHC,int32_t JJBKAMIAMNE,bool OFKBEIFPFMN,MethodInfo *method)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *__this_00;
  Nekki_SF2_GUI_Pvp_PhaseBox_o *__this_01;
  BNAIBAODKAK_array *pBVar4;
  
  bVar2 = Nekki_SF2_GUI_Pvp_SelectModule__ONKNKLHEGGN
                    ((Nekki_SF2_GUI_Pvp_SelectModule_o *)__this,HEHMPFLAEGE,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  Nekki_SF2_GUI_Pvp_SelectModule__BHOPECNMJAC
            ((Nekki_SF2_GUI_Pvp_SelectModule_o *)__this,HEHMPFLAEGE,MKACJBMOMHC,JJBKAMIAMNE,
             OFKBEIFPFMN,(MethodInfo *)0x0);
  __this_00 = (__this->fields).super._selectTable;
  if (__this_00 != (Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *)0x0) {
    pBVar4 = (__this->fields).DLCCJFCKAJL;
    uVar3 = Nekki_SF2_GUI_Pvp_PlayersSelectTable__GetSelectionID
                      (__this_00,HEHMPFLAEGE,(MethodInfo *)0x0);
    if (pBVar4 != (BNAIBAODKAK_array *)0x0) {
      if ((uint)pBVar4->max_length <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      lVar1 = 0x88;
      if (HEHMPFLAEGE != 0) {
        lVar1 = 0x90;
      }
      __this_01 = *(Nekki_SF2_GUI_Pvp_PhaseBox_o **)((long)&__this->klass + lVar1);
      if (__this_01 != (Nekki_SF2_GUI_Pvp_PhaseBox_o *)0x0) {
        Nekki_SF2_GUI_Pvp_PhaseBox__ChangeCharacter
                  (__this_01,pBVar4->m_Items[(int)uVar3],(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

