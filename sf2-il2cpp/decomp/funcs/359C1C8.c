// Nekki.SF2.GUI.Profile.SubItem$$EnableAnimation @ RVA 0x359C1C8

void Nekki_SF2_GUI_Profile_SubItem__EnableAnimation(bool CJNHFNHJHPE,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04568dd0 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Profile_SubItem_TypeInfo);
    DAT_04568dd0 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Profile_SubItem_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Profile_SubItem_TypeInfo,method);
  }
  Nekki_SF2_GUI_Profile_SubItem_TypeInfo->static_fields->EEDBEBPEPJL = CJNHFNHJHPE;
  return;
}

