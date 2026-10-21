// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanWidget$$Init @ RVA 0x32B6094

void Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget__Init
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanTable_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *in_x2;
  
  Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget__GDFJKOKNLNO(__this,method);
  Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget__IDFJAAEDKDI(__this,method_00);
  Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget__MIGKOMENMKP
            (__this,(__this->fields).GGBLLCCFOPE,in_x2);
  __this_00 = (__this->fields)._tableClans;
  if (__this_00 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanTable_o *)0x0) {
    Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanTable__Init
              (__this_00,(__this->fields)._scroll,(__this->fields)._cellPrefab,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

