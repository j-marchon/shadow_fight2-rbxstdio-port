// Nekki.SF2.GUI.Shop.ItemsPanel$$GetCellByName @ RVA 0x310DDE8

Nekki_SF2_GUI_Shop_ShopTableViewCell_o *
Nekki_SF2_GUI_Shop_ItemsPanel__GetCellByName
          (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,System_String_o *AFKICLAFDKC,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_01;
  Nekki_SF2_GUI_TableView_o *pNVar3;
  KELJDKIIHMM_o *pKVar4;
  HOOAAGABMBL_o *pHVar5;
  Nekki_SF2_GUI_Shop_ShopTableViewCell_o *pNVar6;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_68;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_50;
  
  if ((DAT_04566560 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_TableViewCell>_get_Values__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_TableViewCell>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_TableViewCell>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_TableViewCell>_get_Current__
                );
    FUN_01bab630(&Nekki_SF2_GUI_Shop_ShopTableViewCell_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection<int,_TableViewCell>_GetEnumerator__
                );
    DAT_04566560 = 1;
  }
  local_50.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._currentValue = (Il2CppObject *)0x0;
  pNVar3 = (__this->fields)._TableView;
  if ((((pNVar3 == (Nekki_SF2_GUI_TableView_o *)0x0) ||
       (pKVar4 = (pNVar3->fields)._LBHOKEBOIFN_k__BackingField, pKVar4 == (KELJDKIIHMM_o *)0x0)) ||
      (__this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
                   (pKVar4->fields)._IKBFEDMFOMJ_k__BackingField,
      __this_00 == (System_Collections_Generic_Dictionary_int__object__o *)0x0)) ||
     (__this_01 = System_Collections_Generic_Dictionary<int,_object>__get_Values
                            (__this_00,
                             Method_System_Collections_Generic_Dictionary<int,_TableViewCell>_get_Values__
                            ),
     __this_01 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_Dictionary_ValueCollection<int,_object>__GetEnumerator
            (&local_68,__this_01,
             Method_System_Collections_Generic_Dictionary_ValueCollection<int,_TableViewCell>_GetEnumerator__
            );
  local_50.fields._index = local_68.fields._index;
  local_50.fields._version = local_68.fields._version;
  local_50.fields._dictionary = local_68.fields._dictionary;
  local_50.fields._currentValue = local_68.fields._currentValue;
  do {
    bVar2 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_object>__MoveNext
                      (&local_50,
                       Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_TableViewCell>_MoveNext__
                      );
    pNVar6 = (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *)local_50.fields._currentValue;
    if (!bVar2) {
      pNVar6 = (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *)0x0;
      break;
    }
    if ((Nekki_SF2_GUI_Shop_ShopTableViewCell_o *)local_50.fields._currentValue ==
        (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = (Nekki_SF2_GUI_Shop_ShopTableViewCell_TypeInfo->_2).naturalAligment;
    if (((((Nekki_SF2_GUI_Shop_ShopTableViewCell_c *)(local_50.fields._currentValue)->klass)->_2).
         naturalAligment < bVar1) ||
       ((((Nekki_SF2_GUI_Shop_ShopTableViewCell_c *)(local_50.fields._currentValue)->klass)->_2).
        typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)Nekki_SF2_GUI_Shop_ShopTableViewCell_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(local_50.fields._currentValue);
    }
    pHVar5 = ((Nekki_SF2_GUI_Shop_ShopTableViewCell_Fields *)
             ((long)local_50.fields._currentValue + 0x10))->IHKJJFAEEHM;
    if (pHVar5 == (HOOAAGABMBL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar2 = System_String__op_Equality
                      ((pHVar5->fields)._COIPKAKHDFP_k__BackingField,AFKICLAFDKC,(MethodInfo *)0x0);
  } while (!bVar2);
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_object>__Dispose
            (&local_50,
             Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_TableViewCell>_Dispose__
            );
  return pNVar6;
}

