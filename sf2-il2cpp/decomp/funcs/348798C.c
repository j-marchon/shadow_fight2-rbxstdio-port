// Nekki.SF2.Core.Fights.Controls.Switch.BossAbilityHintSwitch$$NNCDBOLMLHK @ RVA 0x348798C

void Nekki_SF2_Core_Fights_Controls_Switch_BossAbilityHintSwitch__NNCDBOLMLHK
               (Nekki_SF2_Core_Fights_Controls_Switch_BossAbilityHintSwitch_o *__this,
               MethodInfo *method)

{
  int32_t BMPJIDHGCBN;
  MGNDHCBAPEN_string__ODLJFAIHELG__o *pMVar1;
  MethodInfo *extraout_x1;
  System_String_o *in_x2;
  MethodInfo *in_x4;
  
  if ((DAT_045683bf & 1) == 0) {
    FUN_01bab630(&GJAEIBMAFGE_TypeInfo);
    DAT_045683bf = 1;
    method = extraout_x1;
  }
  BMPJIDHGCBN = (__this->fields).AFEOEPFDNLI;
  if ((GJAEIBMAFGE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(GJAEIBMAFGE_TypeInfo,method);
  }
  pMVar1 = GJAEIBMAFGE__ABOLJGNNGMC(BMPJIDHGCBN,(MethodInfo *)0x0);
  if (pMVar1 != (MGNDHCBAPEN_string__ODLJFAIHELG__o *)0x0) {
    Nekki_SF2_Core_Fights_Controls_Switch_BossAbilityHintSwitch__JCDGMAEDFIF
              (__this,(__this->fields).AFEOEPFDNLI,in_x2,(pMVar1->fields).DOKHHBGJICA,in_x4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

