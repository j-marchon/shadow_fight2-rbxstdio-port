// Nekki.SF2.GUI.Shop.ItemsPanel$$GetBoughtItems @ RVA 0x310E954

System_Collections_Generic_List_HOOAAGABMBL__o *
Nekki_SF2_GUI_Shop_ItemsPanel__GetBoughtItems
          (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,bool MHKEJNCJFFM,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_00;
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar5;
  HOOAAGABMBL_o *pHVar6;
  HOOAAGABMBL_array *pHVar7;
  int index;
  
  if ((DAT_04566568 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<HOOAAGABMBL>_TypeInfo);
    DAT_04566568 = 1;
  }
  __this_00 = (System_Collections_Generic_List_HOOAAGABMBL__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<HOOAAGABMBL>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<HOOAAGABMBL>__ctor__);
  pSVar5 = (__this->fields).BAADKBDJJPJ;
  if (pSVar5 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
    iVar1 = (pSVar5->fields)._size;
    if (iVar1 < 1) {
      return __this_00;
    }
    index = 0;
    do {
      pHVar6 = (HOOAAGABMBL_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar5,index,
                          Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
      bVar4 = HCAICJLDDJO__MINAKLNNDBL(pHVar6,MHKEJNCJFFM,(MethodInfo *)0x0);
      if (bVar4) {
        pSVar5 = (__this->fields).BAADKBDJJPJ;
        if ((pSVar5 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) ||
           (pHVar6 = (HOOAAGABMBL_o *)
                     System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar5,index,
                                Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__),
           lVar3 = Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__,
           __this_00 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0)) break;
        pHVar7 = (__this_00->fields)._items;
        (__this_00->fields)._version = (__this_00->fields)._version + 1;
        if (pHVar7 == (HOOAAGABMBL_array *)0x0) break;
        uVar2 = (__this_00->fields)._size;
        if (uVar2 < (uint)pHVar7->max_length) {
          (__this_00->fields)._size = uVar2 + 1;
          pHVar7->m_Items[(int)uVar2] = pHVar6;
          thunk_FUN_01c20e04();
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pHVar6,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
        }
      }
      if (iVar1 + -1 == index) {
        return __this_00;
      }
      pSVar5 = (__this->fields).BAADKBDJJPJ;
      index = index + 1;
    } while (pSVar5 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

