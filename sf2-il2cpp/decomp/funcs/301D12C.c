// Nekki.SF2.GUI.Profile.ItemsController$$ScrollToLastCell @ RVA 0x301D12C

void Nekki_SF2_GUI_Profile_ItemsController__ScrollToLastCell
               (Nekki_SF2_GUI_Profile_ItemsController_o *__this,float GGMALJLKHHB,MethodInfo *method
               )

{
  int32_t iVar1;
  Nekki_SF2_GUI_TableView_o *__this_00;
  
  __this_00 = (__this->fields)._TableView;
  if (__this_00 != (Nekki_SF2_GUI_TableView_o *)0x0) {
    iVar1 = Nekki_SF2_GUI_TableView__NumberOfRows(__this_00,(MethodInfo *)0x0);
    Nekki_SF2_GUI_TableView__ScrollToCell(__this_00,iVar1 + -1,GGMALJLKHHB,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

