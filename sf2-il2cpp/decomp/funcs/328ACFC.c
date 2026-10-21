// Nekki.SF2.GUI.Dialogs.LotteryDialog$$AIAMPBMODDG @ RVA 0x328ACFC

void Nekki_SF2_GUI_Dialogs_LotteryDialog__AIAMPBMODDG
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  EEGDOGKBLNG_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x3;
  LPGLKMNHELJ_o *pLVar2;
  JMDPBFOCHHP_ENBCJNLAHAC_o *pJVar3;
  
  if ((DAT_045672d7 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_045672d7 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  if (__this_00 != (EEGDOGKBLNG_o *)0x0) {
    iVar1 = EEGDOGKBLNG__GNIBFOOLMHK(__this_00,(MethodInfo *)0x0);
    pLVar2 = (__this->fields).DKMMBMBMJBO;
    if ((pLVar2 != (LPGLKMNHELJ_o *)0x0) &&
       (pJVar3 = (pLVar2->fields).FIJPJBGCODO, pJVar3 != (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0)) {
      if (iVar1 < (pJVar3->fields).NGMFKGGBHND) {
        JJPNLEPEAFM__DOEMOKNGHNI((MethodInfo *)0x0);
        return;
      }
      Nekki_SF2_GUI_Dialogs_LotteryDialog__GJAHDGBOOPO(__this,true,(System_String_o *)0x0,in_x3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

