// Nekki.SF2.GUI.Shop.ShopScrollItem$$.ctor @ RVA 0x30F36F0

void Nekki_SF2_GUI_Shop_ShopScrollItem___ctor
               (Nekki_SF2_GUI_Shop_ShopScrollItem_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
                    /* catch() { ... } // from try @ 031f3614 with catch @ 031f36f0 */
                    /* catch() { ... } // from try @ 031f3608 with catch @ 031f36f4 */
                    /* catch() { ... } // from try @ 031f35f8 with catch @ 031f36f8 */
                    /* catch() { ... } // from try @ 031f36b4 with catch @ 031f36fc */
                    /* catch() { ... } // from try @ 031f35e4 with catch @ 031f3700
                       catch() { ... } // from try @ 031f36c4 with catch @ 031f3700 */
                    /* catch() { ... } // from try @ 031f36bc with catch @ 031f3704 */
                    /* catch() { ... } // from try @ 031f35b8 with catch @ 031f3708
                       catch() { ... } // from try @ 031f36b8 with catch @ 031f3708 */
  if ((DAT_0456643c & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
                    /* try { // try from 031f3720 to 032f3737 has its CatchHandler @ 031f3788 */
    DAT_0456643c = 1;
    method = extraout_x1;
  }
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGENAMAJALB_TypeInfo,method);
  }
                    /* try { // try from 031f3738 to 032f3777 has its CatchHandler @ 031f357c */
  pSVar1 = MGENAMAJALB__AAHKIHMHJDP((MethodInfo *)0x0);
  (__this->fields).CNMMJHJNNAJ = pSVar1;
  thunk_FUN_01c20e04(&(__this->fields).CNMMJHJNNAJ);
  Nekki_SF2_GUI_BaseScrollItem___ctor((Nekki_SF2_GUI_BaseScrollItem_o *)__this,(MethodInfo *)0x0);
  return;
}

