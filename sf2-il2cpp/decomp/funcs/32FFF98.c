// Nekki.SF2.GUI.Shop.ShopBottomPanel$$OnClick @ RVA 0x32FFF98

void Nekki_SF2_GUI_Shop_ShopBottomPanel__OnClick
               (Nekki_SF2_GUI_Shop_ShopBottomPanel_o *__this,int32_t HIIGJGLEOFH,MethodInfo *method)

{
  long lVar1;
  
                    /* try { // try from 033fff98 to 034fffdf has its CatchHandler @ 033ffb64 */
  if ((DAT_04567711 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_BottomPanel<POIJDKLHHKO>_OnClick__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
                    /* try { // try from 033fffe0 to 034ffff3 has its CatchHandler @ 034000a0 */
    DAT_04567711 = 1;
  }
                    /* try { // try from 033ffff4 to 034ffff7 has its CatchHandler @ 0340001c */
  Nekki_SF2_GUI_Common_BottomPanel<Int32Enum>__OnClick
            ((Nekki_SF2_GUI_Common_BottomPanel_T__o *)__this,HIIGJGLEOFH,
             Method_Nekki_SF2_GUI_Common_BottomPanel<POIJDKLHHKO>_OnClick__);
                    /* try { // try from 033ffff8 to 034ffffb has its CatchHandler @ 03400018 */
                    /* try { // try from 033ffffc to 03500003 has its CatchHandler @ 03400014 */
  lVar1 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
                    /* try { // try from 03400004 to 03500047 has its CatchHandler @ 033ffb64 */
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
                    /* catch() { ... } // from try @ 033fff94 with catch @ 03400008 */
    lVar1 = FUN_01b81620();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
                    /* catch() { ... } // from try @ 033ffffc with catch @ 03400014 */
                    /* catch() { ... } // from try @ 033ffff8 with catch @ 03400018 */
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
                    /* catch() { ... } // from try @ 033ffff4 with catch @ 0340001c */
    lVar1 = FUN_01b81620();
  }
                    /* catch() { ... } // from try @ 033fff34 with catch @ 03400020 */
                    /* catch() { ... } // from try @ 033ffdd0 with catch @ 03400024 */
                    /* catch() { ... } // from try @ 033ffdb4 with catch @ 03400028 */
  if ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar1 + 0xb8) !=
      (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) {
                    /* catch() { ... } // from try @ 033ffda0 with catch @ 0340002c */
    Nekki_SF2_GUI_Shop_ShopScene__set_CurrentSection
              ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar1 + 0xb8),HIIGJGLEOFH,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

