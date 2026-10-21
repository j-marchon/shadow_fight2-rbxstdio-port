// Nekki.SF2.GUI.Fight.EndFightScreen$$OnBackKeyClicked @ RVA 0x2FF04E8

void Nekki_SF2_GUI_Fight_EndFightScreen__OnBackKeyClicked
               (Nekki_SF2_GUI_Fight_EndFightScreen_o *__this,Il2CppObject *OCMMDIHLKMH,
               MethodInfo *method)

{
  Il2CppObject *extraout_x1;
  IGPDCHBJAPD_o *PNPKEKHEMCD;
  
  if ((DAT_04565a60 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
                    /* try { // try from 030f0514 to 031f051b has its CatchHandler @ 030f07f8 */
    DAT_04565a60 = 1;
    OCMMDIHLKMH = extraout_x1;
  }
                    /* try { // try from 030f051c to 031f054b has its CatchHandler @ 030f03a4 */
  PNPKEKHEMCD = (__this->fields).CIKGADOJJMG;
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,OCMMDIHLKMH);
  }
  MGNPHCAAEIO__ABOKGFABBOO(PNPKEKHEMCD,(MethodInfo *)0x0);
  return;
}

