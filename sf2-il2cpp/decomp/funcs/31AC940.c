// Nekki.SF2.GUI.Pvp.LocationSelectModule$$ItemTemplate @ RVA 0x31AC940

System_String_o *
Nekki_SF2_GUI_Pvp_LocationSelectModule__ItemTemplate
          (Nekki_SF2_GUI_Pvp_LocationSelectModule_o *__this,int32_t OGPGLGPMEPD,MethodInfo *method)

{
  uint uVar1;
  Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *__this_00;
  JFMLOEMEKLI_array *pJVar2;
  
                    /* try { // try from 032ac944 to 033ac94b has its CatchHandler @ 032acb78 */
  __this_00 = (__this->fields).super._selectTable;
                    /* try { // try from 032ac94c to 033ac957 has its CatchHandler @ 032acb84 */
  if (__this_00 != (Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *)0x0) {
    pJVar2 = (__this->fields).DLCCJFCKAJL;
    uVar1 = Nekki_SF2_GUI_Pvp_PlayersSelectTable__GetSelectionID
                      (__this_00,OGPGLGPMEPD,(MethodInfo *)0x0);
    if (pJVar2 != (JFMLOEMEKLI_array *)0x0) {
                    /* try { // try from 032ac968 to 033ac96f has its CatchHandler @ 032acb68 */
      if ((uint)pJVar2->max_length <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      if (pJVar2->m_Items[(int)uVar1] != (JFMLOEMEKLI_o *)0x0) {
                    /* try { // try from 032ac978 to 033ac97f has its CatchHandler @ 032acb80 */
        return (pJVar2->m_Items[(int)uVar1]->fields).PKJEMIDJPAG;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

