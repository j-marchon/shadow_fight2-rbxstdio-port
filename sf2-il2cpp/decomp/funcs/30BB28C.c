// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanEditDialog$$.ctor @ RVA 0x30BB28C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanEditDialog___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanEditDialog_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_0456623e & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_TypeInfo);
    DAT_0456623e = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_TypeInfo,method);
  }
  Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog___ctor
            ((Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_o *)__this,(MethodInfo *)0x0);
  return;
}

