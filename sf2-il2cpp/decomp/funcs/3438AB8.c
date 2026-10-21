// Nekki.SF2.GUI.Shop.ShopScene$$AFIDMLMGCMG @ RVA 0x3438AB8

void Nekki_SF2_GUI_Shop_ShopScene__AFIDMLMGCMG
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_ItemsPanel_o *__this_00;
  HOOAAGABMBL_o *ANMFBABEMFD;
  MethodInfo *extraout_x1;
  
  if ((DAT_045681ac & 1) == 0) {
    FUN_01bab630(&FEPCHKMAIBL_TypeInfo);
    DAT_045681ac = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields)._ItemsPanel;
  if (__this_00 != (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) {
    ANMFBABEMFD = Nekki_SF2_GUI_Shop_ItemsPanel__get_SelectedItemInfo(__this_00,(MethodInfo *)0x0);
    if (ANMFBABEMFD != (HOOAAGABMBL_o *)0x0) {
      if ((FEPCHKMAIBL_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      FEPCHKMAIBL__NDCCCHJDNFP(ANMFBABEMFD,(System_Action_int__int__o *)0x0,(MethodInfo *)0x0);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

