// Nekki.SF2.GUI.Shop.PropertiesPerksPanel$$Clear @ RVA 0x3011534

void Nekki_SF2_GUI_Shop_PropertiesPerksPanel__Clear
               (Nekki_SF2_GUI_Shop_PropertiesPerksPanel_o *__this,MethodInfo *method)

{
  int32_t length;
  Il2CppObject *ALMGONACBKC;
  bool bVar1;
  System_Collections_Generic_List_ParameterScrollItem__o *pSVar2;
  OGNCMFBMBMB_o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04565bad & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<ParameterScrollItem>__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ParameterScrollItem>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ParameterScrollItem>_MoveNext__)
    ;
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<ParameterScrollItem>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<ParameterScrollItem>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ParameterScrollItem>_GetEnumerator__);
    FUN_01bab630(&Method_OGNCMFBMBMB_LEAPFADCELA<ParameterScrollItem>__);
    FUN_01bab630(&StringLiteral_10529);
    DAT_04565bad = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                    ((System_Collections_Generic_List_T__o *)(__this->fields).HEHMAPDMHIG,
                     Method_DJNBJHPDKDP_OBECCOPBADO<ParameterScrollItem>__);
  if (bVar1) {
    return;
  }
  pSVar2 = (__this->fields).HEHMAPDMHIG;
  if (pSVar2 != (System_Collections_Generic_List_ParameterScrollItem__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)pSVar2,
               Method_System_Collections_Generic_List<ParameterScrollItem>_GetEnumerator__);
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_48,
                              Method_System_Collections_Generic_List_Enumerator<ParameterScrollItem>_MoveNext__
                             ), ALMGONACBKC = local_48.fields._current, bVar1) {
      __this_00 = OGNCMFBMBMB__AIHNLLGNBLC((MethodInfo *)0x0);
      if (__this_00 == (OGNCMFBMBMB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      OGNCMFBMBMB__LEAPFADCELA<object>
                (__this_00,ALMGONACBKC,StringLiteral_10529,
                 Method_OGNCMFBMBMB_LEAPFADCELA<ParameterScrollItem>__);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_48,
               Method_System_Collections_Generic_List_Enumerator<ParameterScrollItem>_Dispose__);
    pSVar2 = (__this->fields).HEHMAPDMHIG;
    if (pSVar2 != (System_Collections_Generic_List_ParameterScrollItem__o *)0x0) {
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

