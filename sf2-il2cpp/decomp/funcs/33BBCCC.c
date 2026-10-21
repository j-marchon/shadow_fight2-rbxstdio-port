// Nekki.SF2.GUI.TimerLabel.<>c$$ENCIMBGBOKN @ RVA 0x33BBCCC

void Nekki_SF2_GUI_TimerLabel_<>c__ENCIMBGBOKN
               (Nekki_SF2_GUI_TimerLabel___c_o *__this,System_Action_o *h,MethodInfo *method)

{
  if ((DAT_04567da8 & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    DAT_04567da8 = 1;
  }
  if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_Utils_GlobalTimer__remove_OnTick(h,(MethodInfo *)0x0);
  return;
}

