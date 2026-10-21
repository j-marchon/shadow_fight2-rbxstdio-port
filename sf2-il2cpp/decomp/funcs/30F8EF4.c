// Nekki.SF2.GUI.Shop.ParametersPanelContent$$MIBHDMONJLC @ RVA 0x30F8EF4

void Nekki_SF2_GUI_Shop_ParametersPanelContent__MIBHDMONJLC
               (Nekki_SF2_GUI_Shop_ParametersPanelContent_o *__this,float OOGPLJBADCD,
               MethodInfo *method)

{
  Nekki_SF2_GUI_ItemsScroll_o *__this_00;
  
  __this_00 = (__this->fields)._itemsScroll;
  if (__this_00 != (Nekki_SF2_GUI_ItemsScroll_o *)0x0) {
    Nekki_SF2_GUI_SFScrollRect__set_verticalNormalizedPosition
              ((Nekki_SF2_GUI_SFScrollRect_o *)__this_00,OOGPLJBADCD,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

