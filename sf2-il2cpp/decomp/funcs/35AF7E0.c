// Nekki.SF2.GUI.Dialogs.Raids.RaidViewCell$$PCLBFNCCDDO @ RVA 0x35AF7E0

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__PCLBFNCCDDO
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *__this,bool IBEBJHMKFGE,
               MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  
  if ((DAT_04568e7d & 1) == 0) {
    FUN_01bab630(&StringLiteral_17756);
    FUN_01bab630(&StringLiteral_9679);
    FUN_01bab630(&StringLiteral_3505);
    FUN_01bab630(&StringLiteral_1);
    DAT_04568e7d = 1;
  }
  if (IBEBJHMKFGE) {
    JJPNLEPEAFM__JNDPLPKDPCP
              (StringLiteral_17756,StringLiteral_3505,StringLiteral_9679,StringLiteral_1,
               (System_Action_object__o *)0x0,1,0,false,false,StringLiteral_1,true,true,true,true,
               (MethodInfo *)0x0);
    method_00 = extraout_x1;
  }
  else {
    JJPNLEPEAFM__OMGIOGLBKCH((System_Action_object__o *)0x0,(MethodInfo *)0x0);
    method_00 = extraout_x1_00;
  }
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__PHMCJLDOJPD(__this,method_00);
  return;
}

