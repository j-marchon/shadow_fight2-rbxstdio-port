// Nekki.SF2.GUI.Shop.ShopTableViewCell$$CompareTo @ RVA 0x3191A64

int32_t Nekki_SF2_GUI_Shop_ShopTableViewCell__CompareTo
                  (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *__this,
                  Nekki_SF2_GUI_Shop_ShopTableViewCell_o *IBKIPBJJCPG,MethodInfo *method)

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
                    /* try { // try from 03291a74 to 03391a7f has its CatchHandler @ 03291c4c */
    local_14 = (pHVar2->fields)._JDEHPJEIOCI_k__BackingField;
  }
  if (IBKIPBJJCPG != (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *)0x0) {
    pHVar3 = (IBKIPBJJCPG->fields).IHKJJFAEEHM;
    if (pHVar3 == (HOOAAGABMBL_o *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (pHVar3->fields)._JDEHPJEIOCI_k__BackingField;
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
                    /* try { // try from 03291acc to 03391acf has its CatchHandler @ 03291c08 */
      iVar1 = System_Int32__CompareTo((int32_t)&local_18,value,(MethodInfo *)0x0);
    }
                    /* try { // try from 03291ae0 to 03391ae7 has its CatchHandler @ 03291c10 */
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03291ae8 to 03391af3 has its CatchHandler @ 03291c18 */
  FUN_01bab8c8();
}

