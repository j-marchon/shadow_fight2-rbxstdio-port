// Nekki.SF2.GUI.Shop.ParametersPanelContent$$OACHLIJPIKN @ RVA 0x30F8AD4

float Nekki_SF2_GUI_Shop_ParametersPanelContent__OACHLIJPIKN
                (Nekki_SF2_GUI_Shop_ParametersPanelContent_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ItemsScroll_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields)._itemsScroll;
  if (__this_00 != (Nekki_SF2_GUI_ItemsScroll_o *)0x0) {
    fVar1 = Nekki_SF2_GUI_SFScrollRect__get_verticalNormalizedPosition
                      ((Nekki_SF2_GUI_SFScrollRect_o *)__this_00,(MethodInfo *)0x0);
    return fVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

