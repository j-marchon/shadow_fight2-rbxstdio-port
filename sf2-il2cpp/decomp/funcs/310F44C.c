// Nekki.SF2.GUI.Shop.ItemsPanel$$NumberOfRowsInTableView @ RVA 0x310F44C

int32_t Nekki_SF2_GUI_Shop_ItemsPanel__NumberOfRowsInTableView
                  (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,Nekki_SF2_GUI_TableView_o *HDFMPLDOEJG,
                  MethodInfo *method)

{
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = HDFMPLDOEJG;
  auVar2._0_8_ = __this;
  if ((DAT_04566571 & 1) == 0) {
    auVar2 = FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Count__);
    DAT_04566571 = 1;
  }
  pSVar1 = (__this->fields).BAADKBDJJPJ;
  if (pSVar1 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
    return (pSVar1->fields)._size;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}

