// Nekki.SF2.GUI.Shop.ShopScene$$OnRestorePurchasesButtonClick @ RVA 0x3432FB8

void Nekki_SF2_GUI_Shop_ShopScene__OnRestorePurchasesButtonClick
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Common_PaymentUI_o *__this_00;
  
  __this_00 = (__this->fields).AGKBOPBINNE;
  if (__this_00 != (Nekki_SF2_GUI_Common_PaymentUI_o *)0x0) {
    Nekki_SF2_GUI_Common_PaymentUI__RestorePurchases(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

