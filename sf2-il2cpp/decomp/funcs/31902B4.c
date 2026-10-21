// Nekki.SF2.GUI.Shop.ShopTableViewCell$$.ctor @ RVA 0x31902B4

void Nekki_SF2_GUI_Shop_ShopTableViewCell___ctor
               (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566a3e & 1) == 0) {
                    /* try { // try from 032902d8 to 033902db has its CatchHandler @ 03290344 */
                    /* try { // try from 032902dc to 033902df has its CatchHandler @ 0329033c */
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
                    /* try { // try from 032902e0 to 03390363 has its CatchHandler @ 03290100 */
    DAT_04566a3e = 1;
    method = extraout_x1;
  }
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGENAMAJALB_TypeInfo,method);
  }
  pSVar1 = MGENAMAJALB__AAHKIHMHJDP((MethodInfo *)0x0);
  (__this->fields).CNMMJHJNNAJ = pSVar1;
  thunk_FUN_01c20e04();
  Nekki_SF2_GUI_TableViewCell___ctor((Nekki_SF2_GUI_TableViewCell_o *)__this,(MethodInfo *)0x0);
  return;
}

