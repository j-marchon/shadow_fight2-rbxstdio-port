// Nekki.SF2.GUI.Shop.ShopScene$$Update @ RVA 0x3437988

void Nekki_SF2_GUI_Shop_ShopScene__Update(Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Shop_ItemsPanel_o *__this_00;
  HOOAAGABMBL_o *ANMFBABEMFD;
  Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *__this_01;
  MethodInfo *method_00;
  
                    /* try { // try from 03537994 to 03637997 has its CatchHandler @ 03537af8 */
                    /* try { // try from 03537998 to 0363799f has its CatchHandler @ 03537b08 */
                    /* try { // try from 035379a4 to 036379af has its CatchHandler @ 03537b0c */
  if ((DAT_045681a5 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_Update__);
                    /* try { // try from 035379b8 to 036379c3 has its CatchHandler @ 03537b10 */
    DAT_045681a5 = 1;
  }
  Nekki_SF2_GUI_Scene<object>__Update
            ((Nekki_SF2_GUI_Scene_T__o *)__this,Method_Nekki_SF2_GUI_Scene<ShopScene>_Update__);
  __this_00 = (__this->fields)._ItemsPanel;
  if (__this_00 != (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) {
    ANMFBABEMFD = Nekki_SF2_GUI_Shop_ItemsPanel__get_SelectedItemInfo(__this_00,(MethodInfo *)0x0);
                    /* try { // try from 035379dc to 036379e3 has its CatchHandler @ 03537a50 */
    if ((ANMFBABEMFD == (HOOAAGABMBL_o *)0x0) ||
       (bVar1 = HCAICJLDDJO__MINAKLNNDBL(ANMFBABEMFD,false,(MethodInfo *)0x0), !bVar1)) {
      return;
    }
    __this_01 = Nekki_SF2_GUI_Shop_ShopScene__get_PropertiesPanelContent(__this,method_00);
                    /* try { // try from 035379f4 to 036379ff has its CatchHandler @ 03537a4c */
    if (__this_01 != (Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *)0x0) {
      Nekki_SF2_GUI_Shop_PropertiesPanelContent__NeedToRefreshTimers(__this_01,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

