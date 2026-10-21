// Nekki.SF2.GUI.Fight.ComboModel$$CreateFirstStrike @ RVA 0x332CED0

Nekki_SF2_GUI_Fight_ComboModel_IADNCANFNJH_o *
Nekki_SF2_GUI_Fight_ComboModel__CreateFirstStrike
          (Nekki_SF2_GUI_Fight_ComboModel_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Fight_ComboItem_o *ANGBPBINHBL;
  Nekki_SF2_GUI_Fight_ComboModel_IADNCANFNJH_o *pNVar1;
  MethodInfo *in_x2;
  GOJLGHMMDBO_o *pGVar2;
  
  pGVar2 = (__this->fields).AMKECFKEGJH;
  if (pGVar2 != (GOJLGHMMDBO_o *)0x0) {
                    /* try { // try from 0342cee0 to 0352cee7 has its CatchHandler @ 0342cf60 */
    (pGVar2->fields).GNGEACPLJAG = (pGVar2->fields).GNGEACPLJAG + 1;
    ANGBPBINHBL = Nekki_SF2_GUI_Fight_ComboModel__IPLAGLIIMNC(__this,0,in_x2);
                    /* try { // try from 0342cef4 to 0352cf0b has its CatchHandler @ 0342cf58 */
    pNVar1 = Nekki_SF2_GUI_Fight_ComboModel__CCLACGABBDP(__this,ANGBPBINHBL,in_x2);
    return pNVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

