// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanLogoAttributeContainer$$GetCurrentItemLogicIndex @ RVA 0x317F100

int32_t Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer__GetCurrentItemLogicIndex
                  (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_o *__this,
                  MethodInfo *method)

{
  Nekki_SF2_GUI_SimpleScroll_o *__this_00;
  int32_t local_4;
  
  local_4 = -1;
  __this_00 = (__this->fields)._scroll;
  if (__this_00 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    Nekki_SF2_GUI_SimpleScroll__GetSelectedItemAndLogicId(__this_00,&local_4,(MethodInfo *)0x0);
    return local_4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

