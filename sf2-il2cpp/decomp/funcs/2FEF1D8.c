// Nekki.SF2.GUI.Shop.Forge.RecipePropertyUI$$get_BarScale @ RVA 0x2FEF1D8

System_String_o *
Nekki_SF2_GUI_Shop_Forge_RecipePropertyUI__get_BarScale
          (Nekki_SF2_GUI_Shop_Forge_RecipePropertyUI_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_PerkProgressBar_o *pNVar1;
  
  pNVar1 = (__this->fields)._ProgressBar;
  if (pNVar1 != (Nekki_SF2_GUI_Shop_PerkProgressBar_o *)0x0) {
    return (pNVar1->fields).HDOFPOOANDI;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

