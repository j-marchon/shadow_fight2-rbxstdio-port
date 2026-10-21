// Nekki.SF2.GUI.Pvp.CharacterSelectModule$$ItemTemplate @ RVA 0x32A6B6C

System_String_o *
Nekki_SF2_GUI_Pvp_CharacterSelectModule__ItemTemplate
          (Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *__this,int32_t OGPGLGPMEPD,MethodInfo *method)

{
  uint uVar1;
  Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *__this_00;
  BNAIBAODKAK_array *pBVar2;
  
  __this_00 = (__this->fields).super._selectTable;
  if (__this_00 != (Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *)0x0) {
    pBVar2 = (__this->fields).DLCCJFCKAJL;
    uVar1 = Nekki_SF2_GUI_Pvp_PlayersSelectTable__GetSelectionID
                      (__this_00,OGPGLGPMEPD,(MethodInfo *)0x0);
    if (pBVar2 != (BNAIBAODKAK_array *)0x0) {
      if ((uint)pBVar2->max_length <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      if (pBVar2->m_Items[(int)uVar1] != (BNAIBAODKAK_o *)0x0) {
        return (pBVar2->m_Items[(int)uVar1]->fields).PKJEMIDJPAG;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

