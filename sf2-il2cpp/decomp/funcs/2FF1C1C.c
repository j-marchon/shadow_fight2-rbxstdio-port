// HintButton$$NAICHPFNPLE @ RVA 0x2FF1C1C

void HintButton__NAICHPFNPLE(HintButton_o *__this,MethodInfo *method)

{
  int32_t length;
  bool bVar1;
  System_Collections_Generic_List_HintUI__o *pSVar2;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  System_Collections_Generic_List_T__o *__this_00;
  MethodInfo *method_00;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  System_Collections_Generic_List_Enumerator_T__o local_40;
  
  if ((DAT_04565a74 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HintUI>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HintUI>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HintUI>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HintUI>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HintUI>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HintUI>_get_Count__);
    DAT_04565a74 = 1;
  }
  local_40.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_40.fields._index = 0;
  local_40.fields._version = 0;
  local_40.fields._current = (Il2CppObject *)0x0;
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  pSVar2 = (__this->fields)._Hints;
  if (pSVar2 != (System_Collections_Generic_List_HintUI__o *)0x0) {
    if (0 < (pSVar2->fields)._size) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_70,(System_Collections_Generic_List_object__o *)pSVar2,
                 Method_System_Collections_Generic_List<HintUI>_GetEnumerator__);
      local_40.fields._index = local_70.fields._index;
      local_40.fields._version = local_70.fields._version;
      local_40.fields._list = local_70.fields._list;
      local_40.fields._current = local_70.fields._current;
      while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_40,
                                Method_System_Collections_Generic_List_Enumerator<HintUI>_MoveNext__
                               ), bVar1) {
        if ((UnityEngine_Component_o *)local_40.fields._current == (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)local_40.fields._current,
                                 (MethodInfo *)0x0);
        Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_40,Method_System_Collections_Generic_List_Enumerator<HintUI>_Dispose__);
      pSVar2 = (__this->fields)._Hints;
      if (pSVar2 == (System_Collections_Generic_List_HintUI__o *)0x0) goto LAB_030f1df4;
      length = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      }
    }
    method_00 = (MethodInfo *)0x0;
    UnityEngine_UI_Selectable__set_interactable
              ((UnityEngine_UI_Selectable_o *)__this,true,(MethodInfo *)0x0);
    __this_00 = (System_Collections_Generic_List_T__o *)(__this->fields).KDGCEFEPJHP;
    if (__this_00 != (System_Collections_Generic_List_T__o *)0x0) {
      System_Collections_Generic_List<Int32Enum>__GetEnumerator
                (&local_58,__this_00,
                 Method_System_Collections_Generic_List<MIBHAJBEMIK>_GetEnumerator__);
      while (bVar1 = System_Collections_Generic_List_Enumerator<Int32Enum>__MoveNext
                               (&local_58,
                                Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_MoveNext__
                               ), bVar1) {
        HintButton__LDEODGHMPCG(__this,(int32_t)local_58.fields._current,method_00);
      }
      System_Collections_Generic_List_Enumerator<Int32Enum>__Dispose
                (&local_58,Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_Dispose__)
      ;
      return;
    }
  }
LAB_030f1df4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

