// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanDialog$$Init @ RVA 0x31B43C0

void Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanDialog__Init
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanDialog_o *__this,Il2CppObject *IMMNELPBGIF
               ,MethodInfo *method)

{
  LabelButton_o *__this_00;
  
  if ((DAT_04566b9d & 1) == 0) {
    FUN_01bab630(&StringLiteral_9679);
    FUN_01bab630(&StringLiteral_3640);
    FUN_01bab630(&StringLiteral_4853);
    FUN_01bab630(&StringLiteral_1);
    DAT_04566b9d = 1;
  }
  Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog__GIENGNEGHPJ
            ((Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog_o *)__this,StringLiteral_1,
             StringLiteral_9679,StringLiteral_3640,0,(MethodInfo *)0x0);
  __this_00 = (__this->fields).super.super._btnOK;
  if (__this_00 != (LabelButton_o *)0x0) {
                    /* try { // try from 032b4458 to 033b44fb has its CatchHandler @ 032b4458
                       catch() { ... } // from try @ 032b4458 with catch @ 032b4458
                       catch() { ... } // from try @ 032b4514 with catch @ 032b4458
                       catch() { ... } // from try @ 032b4558 with catch @ 032b4458
                       catch() { ... } // from try @ 032b4588 with catch @ 032b4458 */
    LabelButton__set_Alias(__this_00,StringLiteral_4853,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

