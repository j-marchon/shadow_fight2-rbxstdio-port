// Nekki.SF2.GUI.Dialogs.Raids.RaidViewContainer$$UpdateTimer @ RVA 0x30E1FFC

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__UpdateTimer
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this,int32_t PPGONJFLHLH,
               MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this_00;
  
  __this_00 = (__this->fields)._raidInfoSprite;
  if (__this_00 != (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *)0x0) {
    Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__UpdateTimer(__this_00,PPGONJFLHLH,(MethodInfo *)0x0)
    ;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

