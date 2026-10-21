// Nekki.SF2.GUI.Shop.ItemsPanel.<>c$$NEPCOPEIAKL @ RVA 0x3127988

bool Nekki_SF2_GUI_Shop_ItemsPanel_<>c__NEPCOPEIAKL
               (Nekki_SF2_GUI_Shop_ItemsPanel___c_o *__this,System_String_o *x,MethodInfo *method)

{
  bool bVar1;
  System_String_o *value;
  
  if ((DAT_04566669 & 1) == 0) {
                    /* try { // try from 032279ac to 033279c3 has its CatchHandler @ 03227cc8 */
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    DAT_04566669 = 1;
  }
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 032279c8 to 033279df has its CatchHandler @ 03227c68 */
    thunk_FUN_01ba7564();
  }
  value = MGENAMAJALB__AAHKIHMHJDP((MethodInfo *)0x0);
  if (x != (System_String_o *)0x0) {
    bVar1 = System_String__StartsWith(x,value,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

