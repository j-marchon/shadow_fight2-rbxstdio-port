// Nekki.SF2.GUI.Shop.ItemsPanel$$GetFirstBoughtItem @ RVA 0x310EED0

HOOAAGABMBL_o *
Nekki_SF2_GUI_Shop_ItemsPanel__GetFirstBoughtItem
          (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,bool MHKEJNCJFFM,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar3;
  HOOAAGABMBL_o *pHVar4;
  int index;
  
  if ((DAT_0456656c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
    DAT_0456656c = 1;
  }
  pSVar3 = (__this->fields).BAADKBDJJPJ;
  if (pSVar3 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
    iVar1 = (pSVar3->fields)._size;
    if (iVar1 < 1) {
      return (HOOAAGABMBL_o *)0x0;
    }
    index = 0;
    do {
      pHVar4 = (HOOAAGABMBL_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar3,index,
                          Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
      bVar2 = HCAICJLDDJO__MINAKLNNDBL(pHVar4,MHKEJNCJFFM,(MethodInfo *)0x0);
      if (bVar2) {
        pSVar3 = (__this->fields).BAADKBDJJPJ;
        if (pSVar3 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
          pHVar4 = (HOOAAGABMBL_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar3,index,
                              Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
          return pHVar4;
        }
        break;
      }
      if (iVar1 + -1 == index) {
        return (HOOAAGABMBL_o *)0x0;
      }
      pSVar3 = (__this->fields).BAADKBDJJPJ;
      index = index + 1;
    } while (pSVar3 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

