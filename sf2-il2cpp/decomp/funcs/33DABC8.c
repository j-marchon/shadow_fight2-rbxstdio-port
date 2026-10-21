// Nekki.SF2.GUI.Shop.Forge.ForgePanel$$RefreshPrice @ RVA 0x33DABC8

void Nekki_SF2_GUI_Shop_Forge_ForgePanel__RefreshPrice
               (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_Forge_RecipeUI_o *__this_00;
  byte bVar1;
  bool bVar2;
  System_Collections_Generic_Dictionary_int__object__o *__this_01;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_02;
  Nekki_SF2_GUI_TableView_o *pNVar3;
  KELJDKIIHMM_o *pKVar4;
  Nekki_SF2_GUI_Shop_Forge_RecipeUI_c *pNVar5;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_38;
  
  if ((DAT_04567e67 & 1) == 0) {
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
    FUN_01bab630(&Nekki_SF2_GUI_Shop_Forge_RecipeUI_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection<int,_TableViewCell>_GetEnumerator__
                );
    DAT_04567e67 = 1;
  }
  local_38.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._currentValue = (Il2CppObject *)0x0;
  pNVar3 = (__this->fields)._TableView;
  if ((((pNVar3 == (Nekki_SF2_GUI_TableView_o *)0x0) ||
       (pKVar4 = (pNVar3->fields)._LBHOKEBOIFN_k__BackingField, pKVar4 == (KELJDKIIHMM_o *)0x0)) ||
      (__this_01 = (System_Collections_Generic_Dictionary_int__object__o *)
                   (pKVar4->fields)._IKBFEDMFOMJ_k__BackingField,
      __this_01 == (System_Collections_Generic_Dictionary_int__object__o *)0x0)) ||
     (__this_02 = System_Collections_Generic_Dictionary<int,_object>__get_Values
                            (__this_01,
                             Method_System_Collections_Generic_Dictionary<int,_TableViewCell>_get_Values__
                            ),
     __this_02 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_Dictionary_ValueCollection<int,_object>__GetEnumerator
            (&local_38,__this_02,
             Method_System_Collections_Generic_Dictionary_ValueCollection<int,_TableViewCell>_GetEnumerator__
            );
  while( true ) {
    bVar2 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_object>__MoveNext
                      (&local_38,
                       Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_TableViewCell>_MoveNext__
                      );
    if (!bVar2) {
      System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_object>__Dispose
                (&local_38,
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_TableViewCell>_Dispose__
                );
      return;
    }
    if ((Nekki_SF2_GUI_Shop_Forge_RecipeUI_o *)local_38.fields._currentValue ==
        (Nekki_SF2_GUI_Shop_Forge_RecipeUI_o *)0x0) break;
    pNVar5 = (Nekki_SF2_GUI_Shop_Forge_RecipeUI_c *)(local_38.fields._currentValue)->klass;
    bVar1 = (Nekki_SF2_GUI_Shop_Forge_RecipeUI_TypeInfo->_2).naturalAligment;
    if (((pNVar5->_2).naturalAligment < bVar1) ||
       ((pNVar5->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)Nekki_SF2_GUI_Shop_Forge_RecipeUI_TypeInfo)) break;
    __this_00 = (Nekki_SF2_GUI_Shop_Forge_RecipeUI_o *)local_38.fields._currentValue;
    if ((pNVar5->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)Nekki_SF2_GUI_Shop_Forge_RecipeUI_TypeInfo) {
      __this_00 = (Nekki_SF2_GUI_Shop_Forge_RecipeUI_o *)0x0;
    }
    Nekki_SF2_GUI_Shop_Forge_RecipeUI__RefreshPrice(__this_00,(MethodInfo *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

