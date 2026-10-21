// Nekki.SF2.GUI.Pvp.PlayerMenu$$SetSecondPlayerAvailable @ RVA 0x3047B74

void Nekki_SF2_GUI_Pvp_PlayerMenu__SetSecondPlayerAvailable
               (Nekki_SF2_GUI_Pvp_PlayerMenu_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  undefined8 *puVar1;
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  
                    /* try { // try from 03147b78 to 03247b83 has its CatchHandler @ 03147c84 */
                    /* try { // try from 03147b84 to 03247b8b has its CatchHandler @ 03147c80 */
  if ((DAT_04565def & 1) == 0) {
    FUN_01bab630(&StringLiteral_19794);
    FUN_01bab630(&StringLiteral_19795);
                    /* try { // try from 03147ba8 to 03247bab has its CatchHandler @ 03147c88 */
    DAT_04565def = 1;
  }
  __this_00 = (__this->fields)._PlayerTwoLabel;
  if (__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    puVar1 = &StringLiteral_19795;
                    /* try { // try from 03147bc8 to 03247be7 has its CatchHandler @ 03147c78 */
    if (!CJNHFNHJHPE) {
      puVar1 = &StringLiteral_19794;
    }
    Nekki_SF2_GUI_LabelAlias__set_Alias(__this_00,(System_String_o *)*puVar1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

