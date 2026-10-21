// Nekki.SF2.GUI.Pvp.PvpScene$$get_PlayerOneInput @ RVA 0x321D678

NLIDHEAMLMC_o * Nekki_SF2_GUI_Pvp_PvpScene__get_PlayerOneInput(MethodInfo *method)

{
  if ((DAT_04566f15 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo);
    DAT_04566f15 = 1;
  }
  if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->static_fields->DHDNCFLOPNH;
}

