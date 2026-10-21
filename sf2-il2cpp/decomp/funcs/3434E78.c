// Nekki.SF2.GUI.Shop.ShopScene$$FJFHCNJBHEP @ RVA 0x3434E78

bool Nekki_SF2_GUI_Shop_ShopScene__FJFHCNJBHEP
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  int32_t length;
  bool bVar1;
  KKLJIDJBFEI_o *pKVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Shop_ItemsPanel_o *pNVar3;
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar4;
  bool bVar5;
  
  if ((DAT_04568193 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Count__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04568193 = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields)._ItemsPanel;
  if ((pNVar3 != (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) &&
     (pSVar4 = (pNVar3->fields).BAADKBDJJPJ,
     pSVar4 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0)) {
    bVar5 = 0 < (pSVar4->fields)._size;
    if ((__this->fields).AIAODGKGPEI == 6) {
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
      }
      bVar1 = MGNPHCAAEIO__PKNDHONBNIF((MethodInfo *)0x0);
      if (bVar1) {
        pKVar2 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
        if (pKVar2 == (KKLJIDJBFEI_o *)0x0) goto LAB_03534f74;
        if ((pKVar2->fields).super._MGGBEPKMPCF_k__BackingField != false) {
          return bVar5;
        }
      }
      pNVar3 = (__this->fields)._ItemsPanel;
      if ((pNVar3 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) ||
         (pSVar4 = (pNVar3->fields).BAADKBDJJPJ,
         pSVar4 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0)) goto LAB_03534f74;
      length = (pSVar4->fields)._size;
      (pSVar4->fields)._size = 0;
      (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,length,(MethodInfo *)0x0);
        pNVar3 = (__this->fields)._ItemsPanel;
        if (pNVar3 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) goto LAB_03534f74;
      }
      Nekki_SF2_GUI_Shop_ItemsPanel__UpdateScrollItems(pNVar3,(MethodInfo *)0x0);
      bVar5 = false;
    }
    return bVar5;
  }
LAB_03534f74:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

