// Nekki.SF2.GUI.Shop.ShopBottomPanel$$RemoveFreeSectionNotificator @ RVA 0x3300590

void Nekki_SF2_GUI_Shop_ShopBottomPanel__RemoveFreeSectionNotificator
               (Nekki_SF2_GUI_Shop_ShopBottomPanel_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Common_SectionButton_o *__this_00;
  
  __this_00 = *(Nekki_SF2_GUI_Common_SectionButton_o **)&(__this->fields)._extendButtonsHeightForF2P
  ;
  if (__this_00 != (Nekki_SF2_GUI_Common_SectionButton_o *)0x0) {
    Nekki_SF2_GUI_Common_SectionButton__set_NewItemsCount(__this_00,0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

