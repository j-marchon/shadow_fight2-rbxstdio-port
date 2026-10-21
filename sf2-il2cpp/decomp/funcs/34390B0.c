// Nekki.SF2.GUI.Shop.ShopScene.<>c$$FAOCMDGMCFC @ RVA 0x34390B0

bool Nekki_SF2_GUI_Shop_ShopScene_<>c__FAOCMDGMCFC
               (Nekki_SF2_GUI_Shop_ShopScene___c_o *__this,System_String_o *x,MethodInfo *method)

{
  bool bVar1;
  System_String_o *value;
  
  if ((DAT_045681b3 & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    DAT_045681b3 = 1;
  }
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
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

