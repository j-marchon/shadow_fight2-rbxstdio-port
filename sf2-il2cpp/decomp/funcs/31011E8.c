// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesDialog$$Init @ RVA 0x31011E8

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog__Init
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  Nekki_SF2_GUI_SimpleScroll_o *__this_00;
  
  if ((DAT_045664c0 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9679);
    FUN_01bab630(&StringLiteral_17301);
    FUN_01bab630(&StringLiteral_1);
    DAT_045664c0 = 1;
  }
  Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog__GIENGNEGHPJ
            ((Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog_o *)__this,StringLiteral_1,
             StringLiteral_9679,StringLiteral_17301,2,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._scroll;
  (__this->fields).PBACPHGLOFJ = 0;
  (__this->fields).CGJKLEEEPPN = false;
  if (__this_00 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    Nekki_SF2_GUI_SimpleScroll__Init(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

