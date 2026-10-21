// Nekki.SF2.GUI.Shop.Forge.RecipeUI$$RefreshPrice @ RVA 0x312F630

void Nekki_SF2_GUI_Shop_Forge_RecipeUI__RefreshPrice
               (Nekki_SF2_GUI_Shop_Forge_RecipeUI_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_Forge_RecipePriceUI_o *__this_00;
  
  __this_00 = (__this->fields)._RecipePriceUI;
  if (__this_00 != (Nekki_SF2_GUI_Shop_Forge_RecipePriceUI_o *)0x0) {
    Nekki_SF2_GUI_Shop_Forge_RecipePriceUI__RefreshMaterials(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

