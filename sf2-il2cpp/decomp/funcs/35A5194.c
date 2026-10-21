// Nekki.Utils.RaidBetaLogger$$LAAOAHEGCEJ @ RVA 0x35A5194

void Nekki_Utils_RaidBetaLogger__LAAOAHEGCEJ
               (Nekki_Utils_RaidBetaLogger_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  MethodInfo *in_x3;
  
                    /* try { // try from 036a51a4 to 037a51ef has its CatchHandler @ 036a5358 */
  if ((DAT_04568dfd & 1) == 0) {
    FUN_01bab630(&StringLiteral_21875);
    DAT_04568dfd = 1;
  }
  Nekki_Utils_RaidBetaLogger__TrySendDump(__this,StringLiteral_21875,false,in_x3);
  Nekki_Utils_RaidBetaLogger__ShowSendButton(__this,true,false,in_x3);
                    /* try { // try from 036a51f4 to 037a51fb has its CatchHandler @ 036a529c */
  Nekki_Utils_RaidBetaLogger__StartEnableReportButtonRoutine(__this,method_00);
  return;
}

