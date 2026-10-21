// Nekki.SF2.GUI.Fight.ComboModel$$CreateHeadStrike @ RVA 0x332CC5C

Nekki_SF2_GUI_Fight_ComboModel_IADNCANFNJH_o *
Nekki_SF2_GUI_Fight_ComboModel__CreateHeadStrike
          (Nekki_SF2_GUI_Fight_ComboModel_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Fight_ComboItem_o *ANGBPBINHBL;
  Nekki_SF2_GUI_Fight_ComboModel_IADNCANFNJH_o *pNVar1;
  MethodInfo *in_x2;
  GOJLGHMMDBO_o *pGVar2;
  
  pGVar2 = (__this->fields).AMKECFKEGJH;
  if (pGVar2 != (GOJLGHMMDBO_o *)0x0) {
    (pGVar2->fields).IHOCNJJDMEB = (pGVar2->fields).IHOCNJJDMEB + 1;
    ANGBPBINHBL = Nekki_SF2_GUI_Fight_ComboModel__IPLAGLIIMNC(__this,1,in_x2);
    pNVar1 = Nekki_SF2_GUI_Fight_ComboModel__CCLACGABBDP(__this,ANGBPBINHBL,in_x2);
    return pNVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

