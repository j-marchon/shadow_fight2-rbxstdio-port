// Nekki.SF2.GUI.Fight.EndPvpFightScreen$$OnBackKeyClicked @ RVA 0x307CD9C

void Nekki_SF2_GUI_Fight_EndPvpFightScreen__OnBackKeyClicked
               (Nekki_SF2_GUI_Fight_EndPvpFightScreen_o *__this,Il2CppObject *OCMMDIHLKMH,
               MethodInfo *method)

{
  Il2CppObject *extraout_x1;
  IGPDCHBJAPD_o *PNPKEKHEMCD;
  
  if ((DAT_04565fe5 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04565fe5 = 1;
    OCMMDIHLKMH = extraout_x1;
  }
  PNPKEKHEMCD = (__this->fields).CIKGADOJJMG;
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,OCMMDIHLKMH);
  }
  MGNPHCAAEIO__ABOKGFABBOO(PNPKEKHEMCD,(MethodInfo *)0x0);
  return;
}

