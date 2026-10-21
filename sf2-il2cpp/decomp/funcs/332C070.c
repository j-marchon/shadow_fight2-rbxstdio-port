// Nekki.SF2.GUI.Fight.ComboModel$$RemoveAllCombo @ RVA 0x332C070

void Nekki_SF2_GUI_Fight_ComboModel__RemoveAllCombo
               (Nekki_SF2_GUI_Fight_ComboModel_o *__this,MethodInfo *method)

{
  int32_t length;
  bool bVar1;
  System_Collections_Generic_List_ComboModel_IADNCANFNJH__o *pSVar2;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_045678cb & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<ComboModel_IADNCANFNJH>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<ComboModel_IADNCANFNJH>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<ComboModel_IADNCANFNJH>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<ComboModel_IADNCANFNJH>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ComboModel_IADNCANFNJH>_GetEnumerator__);
    DAT_045678cb = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  pSVar2 = (__this->fields).EGHLGEIJLAM;
  if (pSVar2 != (System_Collections_Generic_List_ComboModel_IADNCANFNJH__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)pSVar2,
               Method_System_Collections_Generic_List<ComboModel_IADNCANFNJH>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<ComboModel_IADNCANFNJH>_MoveNext__
                        );
      if (!bVar1) break;
      if (local_38.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (local_38.fields._current[1].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)local_38.fields._current[1].klass,
                               (MethodInfo *)0x0);
      Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_38,
               Method_System_Collections_Generic_List_Enumerator<ComboModel_IADNCANFNJH>_Dispose__);
    pSVar2 = (__this->fields).EGHLGEIJLAM;
    if (pSVar2 != (System_Collections_Generic_List_ComboModel_IADNCANFNJH__o *)0x0) {
      length = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

