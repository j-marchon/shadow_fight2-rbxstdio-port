// Nekki.SF2.GUI.Shop.ShopScene$$.cctor @ RVA 0x343775C

void Nekki_SF2_GUI_Shop_ShopScene___cctor(MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_ShopScene_StaticFields *pNVar1;
  
  if ((DAT_045681a2 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Shop_ShopScene_TypeInfo);
    DAT_045681a2 = 1;
  }
  pNVar1 = Nekki_SF2_GUI_Shop_ShopScene_TypeInfo->static_fields;
  pNVar1->ForceSlowRenderFramesLong = 4;
  pNVar1->ForceSlowRenderFramesShort = 2;
  return;
}

