// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanTable$$OnDestroy @ RVA 0x313B0C0

void Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanTable__OnDestroy
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanTable_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_SimpleScroll_o *__this_00;
  
  Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanTable__DNNPDIPCCEN(__this,method);
  __this_00 = (__this->fields).PDHMLFAMNCO;
  if (__this_00 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    Nekki_SF2_GUI_SimpleScroll__ClearData(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

