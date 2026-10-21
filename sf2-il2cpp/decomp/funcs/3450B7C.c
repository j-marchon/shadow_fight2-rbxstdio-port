// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanProfileWidget$$SetTitleAlias @ RVA 0x3450B7C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__SetTitleAlias
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *__this,
               System_String_o *BIBFEMCFIOI,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  
  __this_00 = (__this->fields)._title;
  if (__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    Nekki_SF2_GUI_LabelAlias__set_Alias(__this_00,BIBFEMCFIOI,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

