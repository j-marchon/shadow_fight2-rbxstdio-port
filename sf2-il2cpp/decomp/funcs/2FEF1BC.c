// Nekki.SF2.GUI.Shop.Forge.RecipePropertyUI$$set_ValuePercentage @ RVA 0x2FEF1BC

void Nekki_SF2_GUI_Shop_Forge_RecipePropertyUI__set_ValuePercentage
               (Nekki_SF2_GUI_Shop_Forge_RecipePropertyUI_o *__this,float CJNHFNHJHPE,
               MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_PerkProgressBar_o *__this_00;
  
  __this_00 = (__this->fields)._ProgressBar;
  if (__this_00 != (Nekki_SF2_GUI_Shop_PerkProgressBar_o *)0x0) {
    Nekki_SF2_GUI_Shop_PerkProgressBar__set_ValuePercentage(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0)
    ;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

