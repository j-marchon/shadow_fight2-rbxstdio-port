// Nekki.SF2.GUI.Shop.Forge.RecipePriceUI$$set_RecipePrice @ RVA 0x3151DD8

void Nekki_SF2_GUI_Shop_Forge_RecipePriceUI__set_RecipePrice
               (Nekki_SF2_GUI_Shop_Forge_RecipePriceUI_o *__this,BFBONKPKBNL_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *method_00;
  
  (__this->fields).MHJAFBPAKEG = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive
              (__this_00,(__this->fields).MHJAFBPAKEG != (BFBONKPKBNL_o *)0x0,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Shop_Forge_RecipePriceUI__LPNCEHPFOAF(__this,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

