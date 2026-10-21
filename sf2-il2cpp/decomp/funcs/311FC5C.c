// Nekki.SF2.Core.Fights.Controls.Switch.GameControllerSwitch$$get_Current @ RVA 0x311FC5C

Nekki_SF2_Core_Fights_Controls_Switch_GameControllerSwitch_o *
Nekki_SF2_Core_Fights_Controls_Switch_GameControllerSwitch__get_Current(MethodInfo *method)

{
  if ((DAT_04566618 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_Switch_GameControllerSwitch_TypeInfo);
    DAT_04566618 = 1;
  }
  return Nekki_SF2_Core_Fights_Controls_Switch_GameControllerSwitch_TypeInfo->static_fields->
         CNMHHKAMGPI;
}

