// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainer$$DJNLICOAJGO @ RVA 0x3310B34

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__DJNLICOAJGO
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *__this,MethodInfo *method)

{
  HOOAAGABMBL_o *IKKAMAMLIKA;
  MethodInfo *extraout_x1;
  
  if ((DAT_045677aa & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_045677aa = 1;
    method = extraout_x1;
  }
  IKKAMAMLIKA = Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__LBNEPJEGAHN(__this,method);
  if (IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0) {
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    MGNPHCAAEIO__IAGKBFCKFKB
              (IKKAMAMLIKA,0x14,1,(System_Action_BKKPAKHJDKB__o *)0x0,true,(MethodInfo *)0x0);
    return;
  }
  return;
}

