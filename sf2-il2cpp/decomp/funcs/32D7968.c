// Nekki.SF2.GUI.Pvp.PhaseBox$$OnControlDown @ RVA 0x32D7968

void Nekki_SF2_GUI_Pvp_PhaseBox__OnControlDown
               (Nekki_SF2_GUI_Pvp_PhaseBox_o *__this,int32_t PMACBPAMPJA,MethodInfo *method)

{
  Nekki_SF2_GUI_Pvp_PhaseWeapon_o *pNVar1;
  SFButton_o *__this_00;
  MethodInfo *method_00;
  
  if (PMACBPAMPJA == 0x15) {
    (__this->fields).PPOLMAACMIE = true;
    (__this->fields).JCGIBMIOMEB = (__this->fields).BFGOLBDJAMB;
    if ((__this->fields).EMDCCMNONEK == 0) {
      pNVar1 = Nekki_SF2_GUI_Pvp_PhaseBox__GJANJPLLOPH(__this,(MethodInfo *)0x15);
      if (pNVar1 == (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *)0x0) goto LAB_033d7a34;
      __this_00 = (pNVar1->fields)._RightHint;
joined_r0x033d79d8:
      if (__this_00 == (SFButton_o *)0x0) goto LAB_033d7a34;
      SFButton__SetStatePressed(__this_00,(MethodInfo *)0x0);
    }
  }
  else if (PMACBPAMPJA == 0x13) {
    (__this->fields).BIPBPGDHDKP = true;
    (__this->fields).JCGIBMIOMEB = (__this->fields).BFGOLBDJAMB;
    if ((__this->fields).EMDCCMNONEK == 0) {
      pNVar1 = Nekki_SF2_GUI_Pvp_PhaseBox__GJANJPLLOPH(__this,(MethodInfo *)0x13);
      if (pNVar1 == (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *)0x0) goto LAB_033d7a34;
      __this_00 = (pNVar1->fields)._LeftHint;
      goto joined_r0x033d79d8;
    }
  }
  if (((((__this->fields).BIPBPGDHDKP != false) && ((__this->fields).PPOLMAACMIE != false)) &&
      ((__this->fields).EMDCCMNONEK == 0)) && ((__this->fields).NPIOIFONCFH == false)) {
    EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
    pNVar1 = Nekki_SF2_GUI_Pvp_PhaseBox__GJANJPLLOPH(__this,method_00);
    if (pNVar1 == (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *)0x0) {
LAB_033d7a34:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Nekki_SF2_GUI_Pvp_PhaseWeapon__ResetToDefaultWeapon(pNVar1,(MethodInfo *)0x0);
    (__this->fields).NPIOIFONCFH = true;
  }
  return;
}

