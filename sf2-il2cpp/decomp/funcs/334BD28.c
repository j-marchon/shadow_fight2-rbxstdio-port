// Nekki.SF2.GUI.Common.PaymentUI$$BBFPCBEFOLN @ RVA 0x334BD28

void Nekki_SF2_GUI_Common_PaymentUI__BBFPCBEFOLN
               (Nekki_SF2_GUI_Common_PaymentUI_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_045679fe & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_045679fe = 1;
    method = extraout_x1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
  MGNPHCAAEIO__JEGCBLKOEGN(true,(MethodInfo *)0x0);
  return;
}

