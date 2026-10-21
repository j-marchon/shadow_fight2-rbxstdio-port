// Nekki.SF2.GUI.Dialogs.LotteryDialog.<>c$$IKDGHDCECPN @ RVA 0x328E474

bool Nekki_SF2_GUI_Dialogs_LotteryDialog_<>c__IKDGHDCECPN
               (Nekki_SF2_GUI_Dialogs_LotteryDialog___c_o *__this,HFNLANEMDFI_o *entry,
               MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_045672ff & 1) == 0) {
    __this = (Nekki_SF2_GUI_Dialogs_LotteryDialog___c_o *)FUN_01bab630(&StringLiteral_3107);
    DAT_045672ff = 1;
  }
  if (entry != (HFNLANEMDFI_o *)0x0) {
    bVar1 = System_String__op_Equality
                      ((entry->fields).JIJLBFGKNJK,StringLiteral_3107,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

