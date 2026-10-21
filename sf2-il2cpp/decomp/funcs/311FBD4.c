// Nekki.SF2.Core.Fights.Controls.Switch.GameControllerSwitch$$GIENGNEGHPJ @ RVA 0x311FBD4

void Nekki_SF2_Core_Fights_Controls_Switch_GameControllerSwitch__GIENGNEGHPJ
               (Nekki_SF2_Core_Fights_Controls_Switch_GameControllerSwitch_o *__this,
               MethodInfo *method)

{
  Nekki_SF2_Core_Fights_Controls_Switch_ActionButtonsSwitch_o *pNVar1;
  
  if ((DAT_04566617 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_Switch_GameControllerSwitch_TypeInfo);
    DAT_04566617 = 1;
  }
  Nekki_SF2_GUI_UIModule__GIENGNEGHPJ((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  Nekki_SF2_Core_Fights_Controls_Switch_GameControllerSwitch_TypeInfo->static_fields->CNMHHKAMGPI =
       __this;
  thunk_FUN_01c20e04(Nekki_SF2_Core_Fights_Controls_Switch_GameControllerSwitch_TypeInfo->
                     static_fields,__this);
  pNVar1 = (__this->fields)._LeftActionButtons;
  if (pNVar1 != (Nekki_SF2_Core_Fights_Controls_Switch_ActionButtonsSwitch_o *)0x0) {
    Nekki_SF2_Core_Fights_Controls_Switch_ActionButtonsSwitch__Init(pNVar1,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._RightActionButtons;
    if (pNVar1 != (Nekki_SF2_Core_Fights_Controls_Switch_ActionButtonsSwitch_o *)0x0) {
      Nekki_SF2_Core_Fights_Controls_Switch_ActionButtonsSwitch__Init(pNVar1,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

