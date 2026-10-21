// Nekki.SF2.GUI.Profile.BattlePassRewardCell$$HFAMAMIMEIA @ RVA 0x32C86F4

void Nekki_SF2_GUI_Profile_BattlePassRewardCell__HFAMAMIMEIA
               (Nekki_SF2_GUI_Profile_BattlePassRewardCell_o *__this,MethodInfo *method)

{
  BCOICIIDFPD_o *pBVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
  if ((DAT_04567503 & 1) == 0) {
    auVar2 = FUN_01bab630(&StringLiteral_1);
    DAT_04567503 = 1;
  }
  pBVar1 = (__this->fields).super.RewardData;
  if (pBVar1 != (BCOICIIDFPD_o *)0x0) {
    JJPNLEPEAFM__FOMGGGJEKEA
              ((JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0,(JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0,
               (System_Action_object__o *)0x0,(pBVar1->fields)._COIPKAKHDFP_k__BackingField,
               StringLiteral_1,false,1,2,(System_String_o *)0x0,(System_String_o *)0x0,1,1,true,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}

