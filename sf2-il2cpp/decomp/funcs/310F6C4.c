// Nekki.SF2.GUI.Shop.ItemsPanel$$ScrollToDiscountItem @ RVA 0x310F6C4

bool Nekki_SF2_GUI_Shop_ItemsPanel__ScrollToDiscountItem
               (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  long lVar2;
  HOOAAGABMBL_o *pHVar3;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if ((DAT_04566574 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    DAT_04566574 = 1;
    method = extraout_x1;
  }
  auVar4._8_8_ = method;
  auVar4._0_8_ = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
  if ((*(byte *)(*(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20) + 0x135) & 1)
      == 0) {
    auVar4 = FUN_01b81620();
  }
  lVar2 = *(long *)(*(long *)(auVar4._0_8_ + 0xc0) + 0x10);
  auVar5._8_8_ = auVar4._8_8_;
  auVar5._0_8_ = lVar2;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    auVar5 = FUN_01b81620();
  }
  lVar2 = **(long **)(auVar5._0_8_ + 0xb8);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x218) == 5) {
      pHVar3 = Nekki_SF2_GUI_Shop_ItemsPanel__GetDiscountItem(__this,auVar5._8_8_);
      bVar1 = false;
      if (pHVar3 != (HOOAAGABMBL_o *)0x0) {
        Nekki_SF2_GUI_Shop_ItemsPanel__ScrollToItem
                  (__this,(pHVar3->fields)._COIPKAKHDFP_k__BackingField,0.0,in_x2);
        bVar1 = true;
      }
    }
    else {
      bVar1 = false;
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

