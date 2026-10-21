// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainerCell$$EnableVisibility @ RVA 0x34A6A7C

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell__EnableVisibility
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  Nekki_SF2_GUI_InfoButton_o *__this_00;
  
                    /* try { // try from 035a6a7c to 036a6a83 has its CatchHandler @ 035a6cac */
  if (!CJNHFNHJHPE) {
    __this_00 = (__this->fields)._hintDescriptionButton;
                    /* try { // try from 035a6a94 to 036a6a9b has its CatchHandler @ 035a6c8c */
    if (__this_00 == (Nekki_SF2_GUI_InfoButton_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Nekki_SF2_GUI_InfoButton__set_HighlightEnabled(__this_00,false,(MethodInfo *)0x0);
  }
                    /* try { // try from 035a6ab4 to 036a6ab7 has its CatchHandler @ 035a6c88 */
                    /* try { // try from 035a6ab8 to 036a6afb has its CatchHandler @ 035a6cb8 */
  Nekki_SF2_GUI_BaseScrollItem__EnableVisibility
            ((Nekki_SF2_GUI_BaseScrollItem_o *)__this,CJNHFNHJHPE,(MethodInfo *)0x0);
  return;
}

