// Nekki.SF2.Core.Fights.Controls.Switch.GameControllerSwitch$$.ctor @ RVA 0x311FD1C

void Nekki_SF2_Core_Fights_Controls_Switch_GameControllerSwitch___ctor
               (Nekki_SF2_Core_Fights_Controls_Switch_GameControllerSwitch_o *__this,
               MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04566619 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_UIModule_TypeInfo);
    DAT_04566619 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_UIModule_TypeInfo,method);
  }
  Nekki_SF2_GUI_UIModule___ctor((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  return;
}

