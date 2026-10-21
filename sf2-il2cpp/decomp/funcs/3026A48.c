// Nekki.SF2.GUI.Shop.Forge.MaterialPriceUI$$get_IsPriceVisible @ RVA 0x3026A48

bool Nekki_SF2_GUI_Shop_Forge_MaterialPriceUI__get_IsPriceVisible
               (Nekki_SF2_GUI_Shop_Forge_MaterialPriceUI_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_UI_Text_o *__this_00;
  
  __this_00 = (__this->fields)._Price;
  if (__this_00 != (UnityEngine_UI_Text_o *)0x0) {
    bVar1 = UnityEngine_Behaviour__get_enabled
                      ((UnityEngine_Behaviour_o *)__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

