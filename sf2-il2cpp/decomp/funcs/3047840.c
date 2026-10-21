// Nekki.SF2.GUI.Pvp.PlayerMenu$$SetHeader @ RVA 0x3047840

void Nekki_SF2_GUI_Pvp_PlayerMenu__SetHeader
               (Nekki_SF2_GUI_Pvp_PlayerMenu_o *__this,System_String_o *JNKPNMPDGCA,
               MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  
                    /* catch() { ... } // from try @ 0314785c with catch @ 03147840
                       catch() { ... } // from try @ 03147898 with catch @ 03147840
                       catch() { ... } // from try @ 031478e0 with catch @ 03147840 */
  __this_00 = (__this->fields)._MenuHeader;
  if (__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    Nekki_SF2_GUI_LabelAlias__set_Alias(__this_00,JNKPNMPDGCA,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03147858 to 0324785b has its CatchHandler @ 03147868 */
  FUN_01bab8c8();
}

