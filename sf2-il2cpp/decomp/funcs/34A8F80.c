// Nekki.SF2.GUI.Profile.UserPerksPanel$$get_IsUserPerksExists @ RVA 0x34A8F80

bool Nekki_SF2_GUI_Profile_UserPerksPanel__get_IsUserPerksExists
               (Nekki_SF2_GUI_Profile_UserPerksPanel_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Nekki_SF2_GUI_TableView_o *__this_00;
  
  __this_00 = (__this->fields)._TableView;
  if (__this_00 != (Nekki_SF2_GUI_TableView_o *)0x0) {
    iVar1 = Nekki_SF2_GUI_TableView__NumberOfRows(__this_00,(MethodInfo *)0x0);
    return 0 < iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

