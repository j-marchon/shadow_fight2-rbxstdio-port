// Nekki.SF2.GUI.Shop.ShopScene$$get_IsPaidItemsAvailable @ RVA 0x34374F8

bool Nekki_SF2_GUI_Shop_ShopScene__get_IsPaidItemsAvailable
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
  if ((DAT_0456819c & 1) == 0) {
    auVar2 = FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Count__);
    DAT_0456819c = 1;
  }
  pSVar1 = (__this->fields).NHJBNMACENA;
  if (pSVar1 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
    return 0 < (pSVar1->fields)._size;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}

