// Nekki.SF2.GUI.Profile.ItemsController$$ScrollToFirstCell @ RVA 0x301DD54

void Nekki_SF2_GUI_Profile_ItemsController__ScrollToFirstCell
               (Nekki_SF2_GUI_Profile_ItemsController_o *__this,float GGMALJLKHHB,MethodInfo *method
               )

{
  Nekki_SF2_GUI_TableView_o *__this_00;
  
  __this_00 = (__this->fields)._TableView;
  if (__this_00 != (Nekki_SF2_GUI_TableView_o *)0x0) {
    Nekki_SF2_GUI_TableView__ScrollToCell(__this_00,0,GGMALJLKHHB,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

