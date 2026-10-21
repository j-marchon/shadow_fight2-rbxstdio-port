// Nekki.SF2.GUI.Profile.PerkSubItem$$.ctor @ RVA 0x33BA42C

void Nekki_SF2_GUI_Profile_PerkSubItem___ctor
               (Nekki_SF2_GUI_Profile_PerkSubItem_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04567d99 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Profile_SubItem_TypeInfo);
    DAT_04567d99 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Profile_SubItem_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Profile_SubItem_TypeInfo,method);
  }
  Nekki_SF2_GUI_Profile_SubItem___ctor((Nekki_SF2_GUI_Profile_SubItem_o *)__this,(MethodInfo *)0x0);
  return;
}

