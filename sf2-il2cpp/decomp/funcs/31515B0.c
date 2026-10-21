// Nekki.SF2.GUI.Shop.Forge.RecipePriceUI$$set_IsPriceVisible @ RVA 0x31515B0

void Nekki_SF2_GUI_Shop_Forge_RecipePriceUI__set_IsPriceVisible
               (Nekki_SF2_GUI_Shop_Forge_RecipePriceUI_o *__this,bool CJNHFNHJHPE,MethodInfo *method
               )

{
  bool bVar1;
  System_Collections_Generic_List_MaterialPriceUI__o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_0456680c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MaterialPriceUI>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MaterialPriceUI>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MaterialPriceUI>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MaterialPriceUI>_GetEnumerator__);
    DAT_0456680c = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).MIOLFPIJMDH;
  if (__this_00 != (System_Collections_Generic_List_MaterialPriceUI__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<MaterialPriceUI>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<MaterialPriceUI>_MoveNext__
                        );
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_38,
                   Method_System_Collections_Generic_List_Enumerator<MaterialPriceUI>_Dispose__);
        return;
      }
      if ((Nekki_SF2_GUI_Shop_Forge_MaterialPriceUI_o *)local_38.fields._current ==
          (Nekki_SF2_GUI_Shop_Forge_MaterialPriceUI_o *)0x0) break;
      Nekki_SF2_GUI_Shop_Forge_MaterialPriceUI__set_IsPriceVisible
                ((Nekki_SF2_GUI_Shop_Forge_MaterialPriceUI_o *)local_38.fields._current,CJNHFNHJHPE,
                 (MethodInfo *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

