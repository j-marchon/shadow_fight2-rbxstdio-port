// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainer$$LBBMPJKOINK @ RVA 0x3311308

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__LBBMPJKOINK
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *__this,int32_t MJBMLNKAPGC,
               MethodInfo *method)

{
  Nekki_SF2_GUI_SimpleScroll_o *__this_00;
  
  __this_00 = (__this->fields)._scroll;
  if (__this_00 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    Nekki_SF2_GUI_SimpleScroll__ScrollToNextItems(__this_00,MJBMLNKAPGC,0.35,5,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

