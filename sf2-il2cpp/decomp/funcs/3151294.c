// Nekki.SF2.GUI.Shop.Forge.RecipePriceUI$$HGAOLJDNEPM @ RVA 0x3151294

void Nekki_SF2_GUI_Shop_Forge_RecipePriceUI__HGAOLJDNEPM
               (Nekki_SF2_GUI_Shop_Forge_RecipePriceUI_o *__this,MethodInfo *method)

{
  int32_t length;
  bool bVar1;
  System_Collections_Generic_List_MaterialPriceUI__o *pSVar2;
  UnityEngine_Object_o *obj;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04566811 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<MaterialPriceUI>__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MaterialPriceUI>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MaterialPriceUI>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MaterialPriceUI>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MaterialPriceUI>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MaterialPriceUI>_GetEnumerator__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566811 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                    ((System_Collections_Generic_List_T__o *)(__this->fields).MIOLFPIJMDH,
                     Method_DJNBJHPDKDP_OBECCOPBADO<MaterialPriceUI>__);
  if (bVar1) {
    return;
  }
  pSVar2 = (__this->fields).MIOLFPIJMDH;
  if (pSVar2 != (System_Collections_Generic_List_MaterialPriceUI__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)pSVar2,
               Method_System_Collections_Generic_List<MaterialPriceUI>_GetEnumerator__);
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_48,
                              Method_System_Collections_Generic_List_Enumerator<MaterialPriceUI>_MoveNext__
                             ), bVar1) {
      if ((UnityEngine_Component_o *)local_48.fields._current == (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      obj = (UnityEngine_Object_o *)
            UnityEngine_Component__get_gameObject
                      ((UnityEngine_Component_o *)local_48.fields._current,(MethodInfo *)0x0);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Object__DestroyImmediate(obj,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_48,
               Method_System_Collections_Generic_List_Enumerator<MaterialPriceUI>_Dispose__);
    pSVar2 = (__this->fields).MIOLFPIJMDH;
    if (pSVar2 != (System_Collections_Generic_List_MaterialPriceUI__o *)0x0) {
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

