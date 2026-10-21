// Nekki.SF2.GUI.Shop.ShopScene$$PEMHHDNNKAO @ RVA 0x3433D5C

void Nekki_SF2_GUI_Shop_ShopScene__PEMHHDNNKAO
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,bool JIKBAKFCENP,MethodInfo *method)

{
  uint length;
  Nekki_SF2_GUI_Shop_ShopScene_o *extraout_x0;
  Nekki_SF2_GUI_Shop_ShopScene_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_01;
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar1;
  System_Collections_Generic_List_HOOAAGABMBL__o *HPACPFLKHPK;
  undefined1 auVar2 [16];
  
  method_00 = (MethodInfo *)(ulong)JIKBAKFCENP;
  __this_00 = __this;
  if ((DAT_0456819f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_Clear__);
    auVar2 = FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    method_00 = auVar2._8_8_;
    __this_00 = auVar2._0_8_;
    DAT_0456819f = 1;
  }
  pSVar1 = (__this->fields).FALDFPJGOMB;
  if (pSVar1 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  length = (pSVar1->fields)._size;
  method_01 = (MethodInfo *)(ulong)length;
  (pSVar1->fields)._size = 0;
  (pSVar1->fields)._version = (pSVar1->fields)._version + 1;
  if (0 < (int)length) {
    System_Array__Clear((System_Array_o *)(pSVar1->fields)._items,0,length,(MethodInfo *)0x0);
    __this_00 = extraout_x0;
    method_00 = extraout_x1;
  }
  if (JIKBAKFCENP) {
    pSVar1 = Nekki_SF2_GUI_Shop_ShopScene__KOPEODKDDDF(__this_00,method_00);
    HPACPFLKHPK = (__this->fields).FALDFPJGOMB;
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
    }
    method_01 = (MethodInfo *)0x0;
    MGNPHCAAEIO__FHKMIFJBPEN(pSVar1,HPACPFLKHPK,(MethodInfo *)0x0);
  }
  if ((__this->fields).AIAODGKGPEI == 6) {
    (__this->fields).AIAODGKGPEI = 8;
    Nekki_SF2_GUI_Shop_ShopScene__set_CurrentSection(__this,6,method_01);
    return;
  }
  return;
}

