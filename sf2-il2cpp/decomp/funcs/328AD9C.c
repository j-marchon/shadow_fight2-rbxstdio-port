// Nekki.SF2.GUI.Dialogs.LotteryDialog$$GJAHDGBOOPO @ RVA 0x328AD9C

void Nekki_SF2_GUI_Dialogs_LotteryDialog__GJAHDGBOOPO
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,bool FEDMBJEIIGB,
               System_String_o *LFKENPEPPAL,MethodInfo *method)

{
  bool bVar1;
  ADJEBFOPFFF_o *__this_00;
  System_Action_BKKPAKHJDKB__o *BPCGDKENMAE;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  LPGLKMNHELJ_o *pLVar2;
  JMDPBFOCHHP_ENBCJNLAHAC_o *pJVar3;
  
  if ((DAT_045672f9 & 1) == 0) {
    FUN_01bab630(&System_Action<BKKPAKHJDKB>_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_APJCIKLILGP__);
    DAT_045672f9 = 1;
  }
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(LFKENPEPPAL,(MethodInfo *)0x0);
  if (bVar1) {
    pLVar2 = (__this->fields).DKMMBMBMJBO;
    if ((pLVar2 == (LPGLKMNHELJ_o *)0x0) ||
       (pJVar3 = (pLVar2->fields).FIJPJBGCODO, pJVar3 == (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0))
    goto LAB_0338aea0;
    LFKENPEPPAL = (pJVar3->fields).JIJLBFGKNJK;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = HJPEKDOPBHN__EKIJCGJLILF((MethodInfo *)0x0);
  BPCGDKENMAE = (System_Action_BKKPAKHJDKB__o *)
                thunk_FUN_01bda818(System_Action<BKKPAKHJDKB>_TypeInfo);
  System_Action<object>___ctor();
  if (__this_00 != (ADJEBFOPFFF_o *)0x0) {
    if (FEDMBJEIIGB) {
      ADJEBFOPFFF__OCPFALFDBOL(__this_00,LFKENPEPPAL,BPCGDKENMAE,false,(MethodInfo *)0x0);
      method_00 = extraout_x1;
    }
    else {
      ADJEBFOPFFF__CEOGKMPDPPB(__this_00,LFKENPEPPAL,BPCGDKENMAE,false,(MethodInfo *)0x0);
      method_00 = extraout_x1_00;
    }
    Nekki_SF2_GUI_Dialogs_LotteryDialog__IKGNIKPBBKK(__this,method_00);
    return;
  }
LAB_0338aea0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

