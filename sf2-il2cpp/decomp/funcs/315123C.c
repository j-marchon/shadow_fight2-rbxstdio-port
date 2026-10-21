// Nekki.SF2.GUI.Shop.Forge.RecipePriceUI$$LPNCEHPFOAF @ RVA 0x315123C

void Nekki_SF2_GUI_Shop_Forge_RecipePriceUI__LPNCEHPFOAF
               (Nekki_SF2_GUI_Shop_Forge_RecipePriceUI_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  bool value;
  MethodInfo *method_00;
  
  Nekki_SF2_GUI_Shop_Forge_RecipePriceUI__HGAOLJDNEPM(__this,method);
  if ((__this->fields).MHJAFBPAKEG == (BFBONKPKBNL_o *)0x0) {
    __this_00 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto LAB_03251290;
    value = false;
  }
  else {
    Nekki_SF2_GUI_Shop_Forge_RecipePriceUI__CMHFHILJHOL(__this,method_00);
    __this_00 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
LAB_03251290:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    value = true;
  }
  UnityEngine_GameObject__SetActive(__this_00,value,(MethodInfo *)0x0);
  return;
}

