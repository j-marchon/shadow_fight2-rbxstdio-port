// Nekki.SF2.GUI.Pvp.LocationSelectModule$$BHOPECNMJAC @ RVA 0x31ACD64

void Nekki_SF2_GUI_Pvp_LocationSelectModule__BHOPECNMJAC
               (Nekki_SF2_GUI_Pvp_LocationSelectModule_o *__this,int32_t HEHMPFLAEGE,
               int32_t MKACJBMOMHC,int32_t JJBKAMIAMNE,bool OFKBEIFPFMN,MethodInfo *method)

{
  bool bVar1;
  uint uVar2;
  Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *__this_00;
  Nekki_SF2_GUI_LabelAlias_o *__this_01;
  MethodInfo *method_00;
  JFMLOEMEKLI_o *pJVar3;
  JFMLOEMEKLI_array *pJVar4;
  
  bVar1 = Nekki_SF2_GUI_Pvp_SelectModule__ONKNKLHEGGN
                    ((Nekki_SF2_GUI_Pvp_SelectModule_o *)__this,HEHMPFLAEGE,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  Nekki_SF2_GUI_Pvp_SelectModule__BHOPECNMJAC
            ((Nekki_SF2_GUI_Pvp_SelectModule_o *)__this,HEHMPFLAEGE,MKACJBMOMHC,JJBKAMIAMNE,
             OFKBEIFPFMN,(MethodInfo *)0x0);
  __this_00 = (__this->fields).super._selectTable;
  if (__this_00 != (Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *)0x0) {
    pJVar4 = (__this->fields).DLCCJFCKAJL;
    method_00 = (MethodInfo *)0x0;
    uVar2 = Nekki_SF2_GUI_Pvp_PlayersSelectTable__GetSelectionID
                      (__this_00,HEHMPFLAEGE,(MethodInfo *)0x0);
    if (pJVar4 != (JFMLOEMEKLI_array *)0x0) {
      if ((uint)pJVar4->max_length <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      pJVar3 = pJVar4->m_Items[(int)uVar2];
      if (HEHMPFLAEGE == 1) {
        if (pJVar3 == (JFMLOEMEKLI_o *)0x0) goto LAB_032ace28;
        __this_01 = (__this->fields)._playerTwoLocName;
      }
      else {
        if (HEHMPFLAEGE != 0) {
          return;
        }
        if (pJVar3 == (JFMLOEMEKLI_o *)0x0) goto LAB_032ace28;
        __this_01 = (__this->fields)._playerOneLocName;
      }
      if (__this_01 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        Nekki_SF2_GUI_LabelAlias__set_Alias(__this_01,(pJVar3->fields).KGLJICLJHEL,method_00);
        return;
      }
    }
  }
LAB_032ace28:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

