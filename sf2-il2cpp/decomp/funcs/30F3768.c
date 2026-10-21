// Nekki.SF2.GUI.Shop.ShopScrollItem$$CompareTo @ RVA 0x30F3768

int32_t Nekki_SF2_GUI_Shop_ShopScrollItem__CompareTo
                  (Nekki_SF2_GUI_Shop_ShopScrollItem_o *__this,
                  Nekki_SF2_GUI_Shop_ShopScrollItem_o *IBKIPBJJCPG,MethodInfo *method)

{
  int32_t iVar1;
  HOOAAGABMBL_o *pHVar2;
  HOOAAGABMBL_o *pHVar3;
  int32_t value;
  int32_t local_18;
  int32_t local_14;
  
  pHVar2 = (__this->fields).IHKJJFAEEHM;
  if (pHVar2 == (HOOAAGABMBL_o *)0x0) {
    local_14 = 0;
  }
  else {
                    /* try { // try from 031f3778 to 032f3787 has its CatchHandler @ 031f3788 */
    local_14 = (pHVar2->fields)._JDEHPJEIOCI_k__BackingField;
  }
                    /* catch() { ... } // from try @ 031f3720 with catch @ 031f3788
                       catch() { ... } // from try @ 031f3778 with catch @ 031f3788 */
  if (IBKIPBJJCPG != (Nekki_SF2_GUI_Shop_ShopScrollItem_o *)0x0) {
                    /* try { // try from 031f378c to 032f378f has its CatchHandler @ 031f3798 */
    pHVar3 = (IBKIPBJJCPG->fields).IHKJJFAEEHM;
                    /* try { // try from 031f3790 to 032f379b has its CatchHandler @ 031f357c */
    if (pHVar3 == (HOOAAGABMBL_o *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (pHVar3->fields)._JDEHPJEIOCI_k__BackingField;
                    /* catch() { ... } // from try @ 031f378c with catch @ 031f3798 */
    }
    local_18 = 0;
    if (pHVar2 != (HOOAAGABMBL_o *)0x0) {
      local_18 = (pHVar2->fields)._HBPAJOBFMLH_k__BackingField;
    }
    if (pHVar3 == (HOOAAGABMBL_o *)0x0) {
      value = 1;
    }
    else {
      value = (pHVar3->fields)._HBPAJOBFMLH_k__BackingField;
    }
    iVar1 = System_Int32__CompareTo((int32_t)&local_14,iVar1,(MethodInfo *)0x0);
    if (iVar1 == 0) {
      iVar1 = System_Int32__CompareTo((int32_t)&local_18,value,(MethodInfo *)0x0);
    }
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

