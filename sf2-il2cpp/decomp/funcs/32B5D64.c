// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanWidget$$MIGKOMENMKP @ RVA 0x32B5D64

void Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget__MIGKOMENMKP
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_o *__this,int32_t MNPKIDDPNBM,
               MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  undefined8 *puVar1;
  
                    /* try { // try from 033b5d74 to 034b5d83 has its CatchHandler @ 033b5d84 */
  if ((DAT_04567455 & 1) == 0) {
                    /* catch() { ... } // from try @ 033b5c8c with catch @ 033b5d84
                       catch() { ... } // from try @ 033b5d74 with catch @ 033b5d84 */
                    /* try { // try from 033b5d88 to 034b5d8b has its CatchHandler @ 033b5d94 */
    FUN_01bab630(&StringLiteral_4410);
                    /* try { // try from 033b5d8c to 034b5d97 has its CatchHandler @ 033b5998 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033b5d88 with catch @ 033b5d94
                        */
    FUN_01bab630(&StringLiteral_11756);
    DAT_04567455 = 1;
  }
  (__this->fields).GGBLLCCFOPE = MNPKIDDPNBM;
  if (MNPKIDDPNBM == 1) {
    __this_00 = (__this->fields)._listLabel;
    if (__this_00 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_033b5df4;
    puVar1 = &StringLiteral_11756;
  }
  else {
    if (MNPKIDDPNBM != 0) {
      return;
    }
    __this_00 = (__this->fields)._listLabel;
    if (__this_00 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
LAB_033b5df4:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    puVar1 = &StringLiteral_4410;
  }
  Nekki_SF2_GUI_LabelAlias__set_Alias(__this_00,(System_String_o *)*puVar1,(MethodInfo *)0x0);
  return;
}

