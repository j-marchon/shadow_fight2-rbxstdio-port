// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanLogoAttributeContainer$$Update @ RVA 0x317EA6C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer__Update
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_o *__this,
               MethodInfo *method)

{
  bool CJNHFNHJHPE;
  Nekki_SF2_GUI_SimpleScroll_o *__this_00;
  MethodInfo *method_00;
  
  __this_00 = (__this->fields)._scroll;
  if (__this_00 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    CJNHFNHJHPE = Nekki_SF2_GUI_SimpleScroll__IsNotMovingAndNotDraggingFrames
                            (__this_00,0,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer__LNAECHIOFNK
              (__this,CJNHFNHJHPE,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

