// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanProfileWidget$$SetEditIconEnabled @ RVA 0x3450B98

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__SetEditIconEnabled
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget_o *__this_00;
  
  __this_00 = (__this->fields)._logoWidget;
  if (__this_00 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget_o *)0x0) {
    Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget__SetEditEnabled
              (__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

