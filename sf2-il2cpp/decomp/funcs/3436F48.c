// Nekki.SF2.GUI.Shop.ShopScene$$OEDCGMAAPLN @ RVA 0x3436F48

void Nekki_SF2_GUI_Shop_ShopScene__OEDCGMAAPLN
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,HOOAAGABMBL_o *CNDPGGAFHEA,MethodInfo *method
               )

{
  Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *__this_00;
  
  if (CNDPGGAFHEA == (HOOAAGABMBL_o *)0x0) {
                    /* try { // try from 03536f64 to 03636f6b has its CatchHandler @ 03537140 */
    return;
  }
  __this_00 = (__this->fields)._ForgePanel;
                    /* try { // try from 03536f54 to 03636f5b has its CatchHandler @ 03537144 */
  if (__this_00 != (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *)0x0) {
    Nekki_SF2_GUI_Shop_Forge_ForgePanel__set_ItemInfo(__this_00,CNDPGGAFHEA,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03536f6c to 03636f77 has its CatchHandler @ 0353713c */
  FUN_01bab8c8();
}

