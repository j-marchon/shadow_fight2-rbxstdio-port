// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanLogoAttributeContainer$$SetEnabled @ RVA 0x317F0E0

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer__SetEnabled
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_o *__this,
               bool BLOGOHKEPHI,MethodInfo *method)

{
  Nekki_SF2_GUI_SimpleScroll_o *__this_00;
  
  __this_00 = (__this->fields)._scroll;
  if (__this_00 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    UnityEngine_Behaviour__set_enabled
              ((UnityEngine_Behaviour_o *)__this_00,BLOGOHKEPHI,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

