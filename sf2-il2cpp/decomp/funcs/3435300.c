// Nekki.SF2.GUI.Shop.ShopScene$$NGLGCCCLHEH @ RVA 0x3435300

bool Nekki_SF2_GUI_Shop_ShopScene__NGLGCCCLHEH
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  uint uVar1;
  
  uVar1 = (__this->fields).AIAODGKGPEI;
  if (uVar1 < 7) {
    return (bool)((byte)(0x5f >> (ulong)(uVar1 & 0x1f)) & 1);
  }
  return false;
}

