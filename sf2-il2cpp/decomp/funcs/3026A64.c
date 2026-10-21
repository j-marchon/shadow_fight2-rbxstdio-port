// Nekki.SF2.GUI.Shop.Forge.MaterialPriceUI$$set_IsPriceVisible @ RVA 0x3026A64

void Nekki_SF2_GUI_Shop_Forge_MaterialPriceUI__set_IsPriceVisible
               (Nekki_SF2_GUI_Shop_Forge_MaterialPriceUI_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  UnityEngine_UI_Text_o *__this_00;
  
  __this_00 = (__this->fields)._Price;
  if (__this_00 != (UnityEngine_UI_Text_o *)0x0) {
    UnityEngine_Behaviour__set_enabled
              ((UnityEngine_Behaviour_o *)__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

