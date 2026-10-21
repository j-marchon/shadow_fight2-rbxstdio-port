// Nekki.SF2.GUI.Pvp.PhaseBox$$OnControlUp @ RVA 0x32D8060

void Nekki_SF2_GUI_Pvp_PhaseBox__OnControlUp
               (Nekki_SF2_GUI_Pvp_PhaseBox_o *__this,int32_t PMACBPAMPJA,MethodInfo *method)

{
  Nekki_SF2_GUI_Pvp_PhaseWeapon_o *pNVar1;
  SFButton_o *pSVar2;
  int32_t DPJIDNBJIBG;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (PMACBPAMPJA == 0x15) {
    (__this->fields).PPOLMAACMIE = false;
    pNVar1 = Nekki_SF2_GUI_Pvp_PhaseBox__GJANJPLLOPH(__this,(MethodInfo *)0x15);
    if ((pNVar1 == (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *)0x0) ||
       (pSVar2 = (pNVar1->fields)._RightHint, pSVar2 == (SFButton_o *)0x0)) {
LAB_033d8134:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    SFButton__SetStateNormal(pSVar2,(MethodInfo *)0x0);
    if (((__this->fields).EMDCCMNONEK != 0) ||
       (((__this->fields).NPIOIFONCFH != false || ((__this->fields).EFLLFMNDBFO != false))))
    goto LAB_033d8114;
    pNVar1 = Nekki_SF2_GUI_Pvp_PhaseBox__GJANJPLLOPH(__this,method_01);
    if (pNVar1 == (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *)0x0) goto LAB_033d8134;
    DPJIDNBJIBG = 1;
  }
  else {
    if (PMACBPAMPJA != 0x13) goto LAB_033d8114;
    (__this->fields).BIPBPGDHDKP = false;
    pNVar1 = Nekki_SF2_GUI_Pvp_PhaseBox__GJANJPLLOPH(__this,(MethodInfo *)0x13);
    if ((pNVar1 == (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *)0x0) ||
       (pSVar2 = (pNVar1->fields)._LeftHint, pSVar2 == (SFButton_o *)0x0)) goto LAB_033d8134;
    SFButton__SetStateNormal(pSVar2,(MethodInfo *)0x0);
    if (((__this->fields).EMDCCMNONEK != 0) ||
       (((__this->fields).NPIOIFONCFH != false || ((__this->fields).EFLLFMNDBFO != false))))
    goto LAB_033d8114;
    pNVar1 = Nekki_SF2_GUI_Pvp_PhaseBox__GJANJPLLOPH(__this,method_00);
    if (pNVar1 == (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *)0x0) goto LAB_033d8134;
    DPJIDNBJIBG = -1;
  }
  Nekki_SF2_GUI_Pvp_PhaseWeapon__Scroll(pNVar1,DPJIDNBJIBG,(MethodInfo *)0x0);
LAB_033d8114:
  if (((__this->fields).BIPBPGDHDKP == false) && ((__this->fields).PPOLMAACMIE == false)) {
    (__this->fields).EFLLFMNDBFO = false;
    (__this->fields).NPIOIFONCFH = false;
  }
  return;
}

