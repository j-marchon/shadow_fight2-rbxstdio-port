// Nekki.SF2.GUI.Dialogs.Raids.Clans.CreateClanDialog$$.cctor @ RVA 0x3300FF0

void Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog___cctor(MethodInfo *method)

{
  EEHFEPPDBHL_o **ppEVar1;
  
  if ((DAT_0456771f & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_0456771f = 1;
  }
  Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_TypeInfo->static_fields->KGOBMNCADHH =
       StringLiteral_1;
  thunk_FUN_01c20e04(Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_TypeInfo->static_fields,
                     StringLiteral_1);
  ppEVar1 = &Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_TypeInfo->static_fields->FIGLLHBDHCN
  ;
  *ppEVar1 = (EEHFEPPDBHL_o *)0x0;
  thunk_FUN_01c20e04(ppEVar1,0);
  return;
}

