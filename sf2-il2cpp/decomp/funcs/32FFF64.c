// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanLogoAttributeCell$$OnClick @ RVA 0x32FFF64

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeCell__OnClick
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeCell_o *__this,MethodInfo *method
               )

{
  Nekki_SF2_GUI_SimpleScroll_o *__this_00;
  
                    /* catch() { ... } // from try @ 033ffe28 with catch @ 033fff6c */
  __this_00 = (__this->fields).PDHMLFAMNCO;
                    /* catch() { ... } // from try @ 033fff44 with catch @ 033fff70 */
  if (__this_00 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
                    /* catch() { ... } // from try @ 033ffe14 with catch @ 033fff74 */
                    /* catch() { ... } // from try @ 033ffdf8 with catch @ 033fff78 */
    Nekki_SF2_GUI_SimpleScroll__ScrollToItem
              (__this_00,(Nekki_SF2_GUI_BaseScrollItem_o *)__this,0.2,5,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

