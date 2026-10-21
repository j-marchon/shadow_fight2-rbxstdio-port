// Nekki.SF2.GUI.Pvp.PvpScene$$get_PlayerTwoInput @ RVA 0x321D414

NLIDHEAMLMC_o * Nekki_SF2_GUI_Pvp_PvpScene__get_PlayerTwoInput(MethodInfo *method)

{
  if ((DAT_04566f11 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo);
    DAT_04566f11 = 1;
  }
  if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->static_fields->IHDCFNPHCHM;
}

