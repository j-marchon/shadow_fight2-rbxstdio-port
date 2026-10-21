// Nekki.SF2.GUI.Shop.ShopScene$$IKIELNIGEBB @ RVA 0x3436E94

void Nekki_SF2_GUI_Shop_ShopScene__IKIELNIGEBB
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_ItemsPanel_o *pNVar1;
  HOOAAGABMBL_o *CNDPGGAFHEA;
  MethodInfo *in_x2;
  
                    /* try { // try from 03536e9c to 03636ea3 has its CatchHandler @ 0353717c */
  Nekki_SF2_GUI_Shop_ShopScene__UpdateModelIfNeed(__this,(HOOAAGABMBL_o *)0x0,in_x2);
  pNVar1 = (__this->fields)._ItemsPanel;
                    /* try { // try from 03536eac to 03636eb3 has its CatchHandler @ 03537198 */
  if (pNVar1 != (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) {
                    /* try { // try from 03536eb4 to 03636ebf has its CatchHandler @ 03537170 */
    Nekki_SF2_GUI_Shop_ItemsPanel__UpdateScrollItems(pNVar1,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._ItemsPanel;
    if (pNVar1 != (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) {
                    /* try { // try from 03536ec0 to 03636ecb has its CatchHandler @ 0353715c */
      CNDPGGAFHEA = Nekki_SF2_GUI_Shop_ItemsPanel__get_SelectedItemInfo(pNVar1,(MethodInfo *)0x0);
      if (CNDPGGAFHEA != (HOOAAGABMBL_o *)0x0) {
        Nekki_SF2_GUI_Shop_ShopScene__BCDNLJLKOCC(__this,CNDPGGAFHEA,in_x2);
        Nekki_SF2_GUI_Shop_ShopScene__OEDCGMAAPLN(__this,CNDPGGAFHEA,in_x2);
                    /* try { // try from 03536ef0 to 03636ef7 has its CatchHandler @ 03537158 */
        Nekki_SF2_GUI_Shop_ShopScene__PBDGFBENHDK(__this,CNDPGGAFHEA,in_x2);
                    /* try { // try from 03536f00 to 03636f07 has its CatchHandler @ 03537168 */
        Nekki_SF2_GUI_Shop_ShopScene__BNBJGGEIIHM(__this,CNDPGGAFHEA,in_x2);
        return;
      }
                    /* try { // try from 03536f08 to 03636f13 has its CatchHandler @ 03537150 */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03536f14 to 03636f1b has its CatchHandler @ 03537154 */
  FUN_01bab8c8();
}

