// Nekki.SF2.GUI.Common.BottomPanelScrollCell$$OnClick @ RVA 0x35B09B8

void Nekki_SF2_GUI_Common_BottomPanelScrollCell__OnClick
               (Nekki_SF2_GUI_Common_BottomPanelScrollCell_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_SimpleScroll_o *__this_00;
  
  __this_00 = (__this->fields).PDHMLFAMNCO;
  if (__this_00 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    Nekki_SF2_GUI_SimpleScroll__ScrollToItem
              (__this_00,(Nekki_SF2_GUI_BaseScrollItem_o *)__this,(__this->fields).PJCOPJPINFB,
               (__this->fields).OKBOFPMHCHG,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

