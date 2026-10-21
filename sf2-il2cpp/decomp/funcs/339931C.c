// Nekki.SF2.GUI.Dialogs.LocalDailyDialog$$EJHAPHAHMHG @ RVA 0x339931C

void Nekki_SF2_GUI_Dialogs_LocalDailyDialog__EJHAPHAHMHG
               (Nekki_SF2_GUI_Dialogs_LocalDailyDialog_o *__this,System_String_o *EHNFGMGKCHO,
               MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  System_String_o *extraout_x1;
  
  if ((DAT_04567c69 & 1) == 0) {
    FUN_01bab630(&StringLiteral_2424);
    DAT_04567c69 = 1;
    EHNFGMGKCHO = extraout_x1;
  }
  __this_00 = (__this->fields).super._header;
  if (__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    Nekki_SF2_GUI_LabelAlias__set_Alias(__this_00,StringLiteral_2424,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,EHNFGMGKCHO);
}

