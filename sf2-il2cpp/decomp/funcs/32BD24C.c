// MainMenuRaidRatingPanel$$UpdateValues @ RVA 0x32BD24C

void MainMenuRaidRatingPanel__UpdateValues(MainMenuRaidRatingPanel_o *__this,MethodInfo *method)

{
  bool CJNHFNHJHPE;
  NFFDIPBFJHP_o *__this_00;
  KGBIBHEFBHA_o *HEHMPFLAEGE;
  EEGDOGKBLNG_o *__this_01;
  MethodInfo *extraout_x1;
  GLPEFEEGCPM_o *BFFBKNCLLML;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *in_x2;
  
  if ((DAT_045674a6 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_045674a6 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this_00 = HJPEKDOPBHN__FPALMCILCOD((MethodInfo *)0x0);
  if (__this_00 != (NFFDIPBFJHP_o *)0x0) {
    BFFBKNCLLML = (__this_00->fields).NEACDFLBNFO;
    HEHMPFLAEGE = (KGBIBHEFBHA_o *)0x0;
    if (BFFBKNCLLML != (GLPEFEEGCPM_o *)0x0) {
      HEHMPFLAEGE = NFFDIPBFJHP__GMMAAHEMGHH(__this_00,BFFBKNCLLML,in_x2);
    }
    MainMenuRaidRatingPanel__ENOENFMAGCF(__this,HEHMPFLAEGE,in_x2);
    MainMenuRaidRatingPanel__LEHAAENBCND(__this,method_00);
    MainMenuRaidRatingPanel__OEPCAGOICLN(__this,method_01);
    __this_01 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if (__this_01 != (EEGDOGKBLNG_o *)0x0) {
      CJNHFNHJHPE = EEGDOGKBLNG__NMFKMEFIIMP(__this_01,(MethodInfo *)0x0);
      MainMenuRaidRatingPanel__SetClanVisible(__this,CJNHFNHJHPE,in_x2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

