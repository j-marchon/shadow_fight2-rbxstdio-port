// Nekki.SF2.GUI.Shop.ShopScene$$FBHPEDGIJFA @ RVA 0x34376C0

void Nekki_SF2_GUI_Shop_ShopScene__FBHPEDGIJFA
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *pNVar1;
  
  pNVar1 = (__this->fields)._ForgePanel;
  if (pNVar1 == (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((pNVar1->fields).NBAADNACNDJ != 0) {
    return;
  }
  Nekki_SF2_GUI_Shop_ShopScene__set_Mode(__this,0,in_x2);
  return;
}

