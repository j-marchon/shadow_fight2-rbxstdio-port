// Nekki.SF2.GUI.Shop.Forge.RecipePropertiesUI$$FAJIKJIFBOO @ RVA 0x3523400

void Nekki_SF2_GUI_Shop_Forge_RecipePropertiesUI__FAJIKJIFBOO
               (Nekki_SF2_GUI_Shop_Forge_RecipePropertiesUI_o *__this,MethodInfo *method)

{
  int32_t length;
  bool bVar1;
  System_Collections_Generic_List_RecipePropertyUI__o *pSVar2;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_045689ee & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<RecipePropertyUI>__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<RecipePropertyUI>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<RecipePropertyUI>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<RecipePropertyUI>_get_Current__)
    ;
    FUN_01bab630(&Method_System_Collections_Generic_List<RecipePropertyUI>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<RecipePropertyUI>_GetEnumerator__);
    DAT_045689ee = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                    ((System_Collections_Generic_List_T__o *)(__this->fields).DPJGAIPHHLG,
                     Method_DJNBJHPDKDP_OBECCOPBADO<RecipePropertyUI>__);
  if (bVar1) {
    return;
  }
  pSVar2 = (__this->fields).DPJGAIPHHLG;
  if (pSVar2 != (System_Collections_Generic_List_RecipePropertyUI__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)pSVar2,
               Method_System_Collections_Generic_List<RecipePropertyUI>_GetEnumerator__);
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_38,
                              Method_System_Collections_Generic_List_Enumerator<RecipePropertyUI>_MoveNext__
                             ), bVar1) {
      if ((UnityEngine_Component_o *)local_38.fields._current == (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)local_38.fields._current,(MethodInfo *)0x0
                              );
      Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_38,
               Method_System_Collections_Generic_List_Enumerator<RecipePropertyUI>_Dispose__);
    pSVar2 = (__this->fields).DPJGAIPHHLG;
    if (pSVar2 != (System_Collections_Generic_List_RecipePropertyUI__o *)0x0) {
      length = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
      if (length < 1) {
        return;
      }
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

