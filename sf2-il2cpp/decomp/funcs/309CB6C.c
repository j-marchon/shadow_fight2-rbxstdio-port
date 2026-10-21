// Nekki.SF2.GUI.Fight.EndFightContent$$NJBCAPPAAKL @ RVA 0x309CB6C

void Nekki_SF2_GUI_Fight_EndFightContent__NJBCAPPAAKL
               (Nekki_SF2_GUI_Fight_EndFightContent_o *__this,int64_t CBBJMNGHMIF,MethodInfo *method
               )

{
  Nekki_SF2_GUI_Fight_ExpAndMoneyLine_o *__this_00;
  LabelButton_o *__this_01;
  
  if ((DAT_0456611f & 1) == 0) {
    FUN_01bab630(&StringLiteral_16815);
    DAT_0456611f = 1;
  }
  __this_00 = (__this->fields).JMLBADBINID;
  if (__this_00 != (Nekki_SF2_GUI_Fight_ExpAndMoneyLine_o *)0x0) {
    Nekki_SF2_GUI_Fight_ExpAndMoneyLine__UpdateVideoRewardMoney
              (__this_00,CBBJMNGHMIF,(MethodInfo *)0x0);
  }
  __this_01 = (__this->fields)._buttonOk;
  if (__this_01 != (LabelButton_o *)0x0) {
    LabelButton__set_Alias(__this_01,StringLiteral_16815,(MethodInfo *)0x0);
    (__this->fields).IHCIPEGHIDM = false;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

