// Nekki.SF2.GUI.Common.SectionButton$$set_NewItemsCount @ RVA 0x3416E00

void Nekki_SF2_GUI_Common_SectionButton__set_NewItemsCount
               (Nekki_SF2_GUI_Common_SectionButton_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  Nekki_SF2_GUI_Common_Indicator_o *__this_00;
  
  __this_00 = (__this->fields)._NewItemsIndicator;
  if (__this_00 != (Nekki_SF2_GUI_Common_Indicator_o *)0x0) {
    Nekki_SF2_GUI_Common_Indicator__set_State(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

