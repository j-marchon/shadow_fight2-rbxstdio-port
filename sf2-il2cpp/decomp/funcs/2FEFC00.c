// Nekki.SF2.GUI.Fight.EndFightScreen$$CCLILNDOHAB @ RVA 0x2FEFC00

void Nekki_SF2_GUI_Fight_EndFightScreen__CCLILNDOHAB
               (Nekki_SF2_GUI_Fight_EndFightScreen_o *__this,MethodInfo *method)

{
  LPGLKMNHELJ_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  DNELIPCHKLK_o *pDVar1;
  IGPDCHBJAPD_o *pIVar2;
  
  if ((DAT_04565a5e & 1) == 0) {
    FUN_01bab630(&LPGLKMNHELJ_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04565a5e = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Fight_EndFightScreen__INHOOPJHFPC(__this,method);
  if ((__this->fields).FPLAPLIHEGF != false) {
    Nekki_SF2_GUI_Fight_EndFightScreen__NBLLFEACOJK(__this,method_00);
    return;
  }
  if ((__this->fields).LDLILPHECLE != false) {
    Nekki_SF2_GUI_Fight_EndFightScreen__EKKNAKHCGML(__this,method_00);
    return;
  }
  if ((__this->fields).IJINDHBBABM != false) {
    Nekki_SF2_GUI_Fight_EndFightScreen__DKOJPFEMKDC(__this,method_00);
    return;
  }
  pIVar2 = (__this->fields).CIKGADOJJMG;
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  MGNPHCAAEIO__ABOKGFABBOO(pIVar2,(MethodInfo *)0x0);
  if ((__this->fields).OFLMHJHPFJM != (MFFKCPDBFPG_o *)0x0) {
    __this_00 = (LPGLKMNHELJ_o *)thunk_FUN_01bda818(LPGLKMNHELJ_TypeInfo);
    LPGLKMNHELJ___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (LPGLKMNHELJ_o *)0x0) {
      (__this_00->fields).FGCJFGHMIOL = (__this->fields).OFLMHJHPFJM;
      thunk_FUN_01c20e04();
      pIVar2 = (__this->fields).CIKGADOJJMG;
      if ((pIVar2 != (IGPDCHBJAPD_o *)0x0) &&
         (pDVar1 = (pIVar2->fields).DBIAAJNKHLH, pDVar1 != (DNELIPCHKLK_o *)0x0)) {
        (__this_00->fields).JOPIEJMBFHK = (pDVar1->fields).GDPFBDIJNHA;
        thunk_FUN_01c20e04();
        JJPNLEPEAFM__IPLAAIJEPOM(__this_00,(MethodInfo *)0x0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

