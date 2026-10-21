// MainMenuRaidRatingPanel$$OEPCAGOICLN @ RVA 0x32BD2F0

void MainMenuRaidRatingPanel__OEPCAGOICLN(MainMenuRaidRatingPanel_o *__this,MethodInfo *method)

{
  EEOMEMBBGNA_o *pEVar1;
  MethodInfo *extraout_x1;
  OJEHKJHEBID_o *PBNPKBJKFHE;
  MethodInfo *in_x2;
  long lVar2;
  long lVar3;
  
  if ((DAT_045674ac & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_045674ac = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pEVar1 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
  if (pEVar1 != (EEOMEMBBGNA_o *)0x0) {
    PBNPKBJKFHE = (pEVar1->fields).MICFEIBNOLM;
    lVar2 = (__this->fields).PCNECANPJMO;
    if (PBNPKBJKFHE == (OJEHKJHEBID_o *)0x0) {
      if (lVar2 == 0) {
        return;
      }
      (__this->fields).PCNECANPJMO = 0;
      PBNPKBJKFHE = (OJEHKJHEBID_o *)0x0;
    }
    else {
      lVar3 = (PBNPKBJKFHE->fields).ADEIKPGDIPM;
      if (lVar2 == lVar3) {
        return;
      }
      (__this->fields).PCNECANPJMO = lVar3;
    }
    MainMenuRaidRatingPanel__KFBJGJHEIHC(__this,PBNPKBJKFHE,in_x2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

