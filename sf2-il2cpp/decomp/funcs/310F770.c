// Nekki.SF2.GUI.Shop.ItemsPanel$$ScrollToLastSelection @ RVA 0x310F770

bool Nekki_SF2_GUI_Shop_ItemsPanel__ScrollToLastSelection
               (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Shop_ItemsPanel_EIFGJPABBPG_o *__this_00;
  Il2CppObject *pIVar2;
  System_Predicate_T__o *match;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  long lVar3;
  System_Collections_Generic_Dictionary_POIJDKLHHKO__HOOAAGABMBL__o *pSVar4;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_01;
  
  if ((DAT_04566575 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<POIJDKLHHKO,_HOOAAGABMBL>_ContainsKey__
                );
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<POIJDKLHHKO,_HOOAAGABMBL>_get_Item__)
    ;
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ItemsPanel_EIFGJPABBPG_LPCLNILHHOF__);
    FUN_01bab630(&Nekki_SF2_GUI_Shop_ItemsPanel_EIFGJPABBPG_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Shop_ItemsPanel_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_Find__);
    FUN_01bab630(&System_Predicate<HOOAAGABMBL>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    DAT_04566575 = 1;
    method = extraout_x1;
  }
  __this_00 = (Nekki_SF2_GUI_Shop_ItemsPanel_EIFGJPABBPG_o *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Shop_ItemsPanel_EIFGJPABBPG_TypeInfo,method);
  Nekki_SF2_GUI_Shop_ItemsPanel_EIFGJPABBPG___ctor(__this_00,(MethodInfo *)0x0);
  if ((Nekki_SF2_GUI_Shop_ItemsPanel_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
  pSVar4 = Nekki_SF2_GUI_Shop_ItemsPanel_TypeInfo->static_fields->FNKAMGMEILJ;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01b81620(lVar3);
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01b81620();
  }
  if ((**(long **)(lVar3 + 0xb8) != 0) &&
     (pSVar4 != (System_Collections_Generic_Dictionary_POIJDKLHHKO__HOOAAGABMBL__o *)0x0)) {
    bVar1 = System_Collections_Generic_Dictionary<Int32Enum,_object>__ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,
                       *(int32_t *)(**(long **)(lVar3 + 0xb8) + 0x218),
                       Method_System_Collections_Generic_Dictionary<POIJDKLHHKO,_HOOAAGABMBL>_ContainsKey__
                      );
    if (!bVar1) {
      return false;
    }
    if ((Nekki_SF2_GUI_Shop_ItemsPanel_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
    pSVar4 = Nekki_SF2_GUI_Shop_ItemsPanel_TypeInfo->static_fields->FNKAMGMEILJ;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01b81620(lVar3);
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01b81620();
    }
    if ((((**(long **)(lVar3 + 0xb8) != 0) &&
         (pSVar4 != (System_Collections_Generic_Dictionary_POIJDKLHHKO__HOOAAGABMBL__o *)0x0)) &&
        (pIVar2 = System_Collections_Generic_Dictionary<Int32Enum,_object>__get_Item
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,
                             *(int32_t *)(**(long **)(lVar3 + 0xb8) + 0x218),
                             Method_System_Collections_Generic_Dictionary<POIJDKLHHKO,_HOOAAGABMBL>_get_Item__
                            ), pIVar2 != (Il2CppObject *)0x0)) &&
       (__this_00 != (Nekki_SF2_GUI_Shop_ItemsPanel_EIFGJPABBPG_o *)0x0)) {
      (__this_00->fields).lastSelectedItemName = pIVar2[1].monitor;
      thunk_FUN_01c20e04();
      __this_01 = (__this->fields).BAADKBDJJPJ;
      match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<HOOAAGABMBL>_TypeInfo);
      System_Predicate<object>___ctor();
      if (__this_01 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
        method_00 = Method_System_Collections_Generic_List<HOOAAGABMBL>_Find__;
        pIVar2 = System_Collections_Generic_List<object>__Find
                           ((System_Collections_Generic_List_object__o *)__this_01,match,
                            (MethodInfo_26E5414 *)
                            Method_System_Collections_Generic_List<HOOAAGABMBL>_Find__);
        if (pIVar2 == (Il2CppObject *)0x0) {
          return false;
        }
        Nekki_SF2_GUI_Shop_ItemsPanel__ScrollToItem(__this,pIVar2[1].monitor,0.0,method_00);
        return true;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

