// Nekki.SF2.GUI.Shop.ItemsPanel$$RememberSelection @ RVA 0x310D3E8

void Nekki_SF2_GUI_Shop_ItemsPanel__RememberSelection
               (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,HOOAAGABMBL_o *ENJAFEOHNIH,
               MethodInfo *method)

{
  HOOAAGABMBL_o *extraout_x1;
  HOOAAGABMBL_o *method_00;
  long lVar1;
  System_Collections_Generic_Dictionary_POIJDKLHHKO__HOOAAGABMBL__o *__this_00;
  
  method_00 = ENJAFEOHNIH;
  if ((DAT_0456655b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<POIJDKLHHKO,_HOOAAGABMBL>_set_Item__)
    ;
    FUN_01bab630(&Nekki_SF2_GUI_Shop_ItemsPanel_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    DAT_0456655b = 1;
    method_00 = extraout_x1;
  }
  if ((ENJAFEOHNIH == (HOOAAGABMBL_o *)0x0) &&
     (ENJAFEOHNIH = Nekki_SF2_GUI_Shop_ItemsPanel__get_SelectedItemInfo
                              (__this,(MethodInfo *)method_00), ENJAFEOHNIH == (HOOAAGABMBL_o *)0x0)
     ) {
    return;
  }
  if ((Nekki_SF2_GUI_Shop_ItemsPanel_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  lVar1 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
  __this_00 = Nekki_SF2_GUI_Shop_ItemsPanel_TypeInfo->static_fields->FNKAMGMEILJ;
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01b81620(lVar1);
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01b81620();
  }
  if ((**(long **)(lVar1 + 0xb8) != 0) &&
     (__this_00 != (System_Collections_Generic_Dictionary_POIJDKLHHKO__HOOAAGABMBL__o *)0x0)) {
    System_Collections_Generic_Dictionary<Int32Enum,_object>__set_Item
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               *(int32_t *)(**(long **)(lVar1 + 0xb8) + 0x218),(Il2CppObject *)ENJAFEOHNIH,
               Method_System_Collections_Generic_Dictionary<POIJDKLHHKO,_HOOAAGABMBL>_set_Item__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

