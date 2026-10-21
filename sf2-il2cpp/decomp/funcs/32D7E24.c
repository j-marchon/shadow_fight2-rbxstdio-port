// Nekki.SF2.GUI.Pvp.PhaseBox$$Update @ RVA 0x32D7E24

void Nekki_SF2_GUI_Pvp_PhaseBox__Update(Nekki_SF2_GUI_Pvp_PhaseBox_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Pvp_PhaseWeapon_o *pNVar1;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_01;
  float fVar2;
  float fVar3;
  
  if (((__this->fields).EMDCCMNONEK == 0) && ((__this->fields).NPIOIFONCFH == false)) {
    fVar3 = (__this->fields).JCGIBMIOMEB;
    if (0.0 < fVar3) {
      fVar2 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      fVar3 = fVar3 - fVar2;
      (__this->fields).JCGIBMIOMEB = fVar3;
      if (fVar3 <= 0.0) {
        method_01 = method_00;
        if ((__this->fields).BIPBPGDHDKP != false) {
          pNVar1 = Nekki_SF2_GUI_Pvp_PhaseBox__GJANJPLLOPH(__this,method_00);
          if (pNVar1 == (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *)0x0) goto LAB_033d7eec;
          Nekki_SF2_GUI_Pvp_PhaseWeapon__Scroll(pNVar1,-1,(MethodInfo *)0x0);
          (__this->fields).EFLLFMNDBFO = true;
          (__this->fields).JCGIBMIOMEB = (__this->fields).BFGOLBDJAMB;
          method_01 = extraout_x1;
        }
        if ((__this->fields).PPOLMAACMIE != false) {
          pNVar1 = Nekki_SF2_GUI_Pvp_PhaseBox__GJANJPLLOPH(__this,method_01);
          if (pNVar1 == (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *)0x0) {
LAB_033d7eec:
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          Nekki_SF2_GUI_Pvp_PhaseWeapon__Scroll(pNVar1,1,(MethodInfo *)0x0);
          (__this->fields).EFLLFMNDBFO = true;
          (__this->fields).JCGIBMIOMEB = (__this->fields).BFGOLBDJAMB;
        }
      }
    }
    if (((__this->fields).BIPBPGDHDKP == false) && ((__this->fields).PPOLMAACMIE == false)) {
      (__this->fields).JCGIBMIOMEB = 0.0;
    }
  }
  return;
}

