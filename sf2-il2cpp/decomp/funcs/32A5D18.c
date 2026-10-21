// Nekki.SF2.GUI.Pvp.CharacterSelectModule$$CanCurrentItemSelected @ RVA 0x32A5D18

bool Nekki_SF2_GUI_Pvp_CharacterSelectModule__CanCurrentItemSelected
               (Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *__this,int32_t OGPGLGPMEPD,
               MethodInfo *method)

{
  bool bVar1;
  uint uVar2;
  Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *__this_00;
  BNAIBAODKAK_array *pBVar3;
  
  __this_00 = (__this->fields).super._selectTable;
  if (__this_00 != (Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *)0x0) {
    pBVar3 = (__this->fields).DLCCJFCKAJL;
    uVar2 = Nekki_SF2_GUI_Pvp_PlayersSelectTable__GetSelectionID
                      (__this_00,OGPGLGPMEPD,(MethodInfo *)0x0);
    if (pBVar3 != (BNAIBAODKAK_array *)0x0) {
      if ((uint)pBVar3->max_length <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
                    /* try { // try from 033a5d48 to 034a5d6b has its CatchHandler @ 033a5f64 */
      if (pBVar3->m_Items[(int)uVar2] != (BNAIBAODKAK_o *)0x0) {
        bVar1 = BNAIBAODKAK__AAAMBLLDPHJ(pBVar3->m_Items[(int)uVar2],(MethodInfo *)0x0);
        return bVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

