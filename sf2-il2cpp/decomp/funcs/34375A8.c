// Nekki.SF2.GUI.Shop.ShopScene$$FJLNKLMBKDN @ RVA 0x34375A8

bool Nekki_SF2_GUI_Shop_ShopScene__FJLNKLMBKDN
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Shop_ItemsPanel_o *__this_00;
  HOOAAGABMBL_o *pHVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456819e & 1) == 0) {
    FUN_01bab630(&StringLiteral_10876);
    DAT_0456819e = 1;
    method = extraout_x1;
  }
  bVar1 = Nekki_SF2_GUI_Shop_ShopScene__ALKCCLEIKCF(__this,method);
  if (bVar1) {
    __this_00 = (__this->fields)._ItemsPanel;
    if (__this_00 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pHVar2 = Nekki_SF2_GUI_Shop_ItemsPanel__GetFirstBoughtItem(__this_00,true,(MethodInfo *)0x0);
    if (pHVar2 != (HOOAAGABMBL_o *)0x0) {
      bVar1 = System_String__op_Inequality
                        ((pHVar2->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_10876,
                         (MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}

