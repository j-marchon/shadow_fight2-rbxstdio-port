// Nekki.SF2.GUI.Common.SectionButton$$get_NewItemsCount @ RVA 0x3416DE4

int32_t Nekki_SF2_GUI_Common_SectionButton__get_NewItemsCount
                  (Nekki_SF2_GUI_Common_SectionButton_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Common_Indicator_o *pNVar1;
  
  pNVar1 = (__this->fields)._NewItemsIndicator;
  if (pNVar1 != (Nekki_SF2_GUI_Common_Indicator_o *)0x0) {
    return (pNVar1->fields).ONCKKFAODHL;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

