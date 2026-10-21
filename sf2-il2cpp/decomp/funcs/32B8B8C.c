// Nekki.SF2.GUI.Common.Hints.HintCache$$GetAllHints @ RVA 0x32B8B8C

UnityEngine_GameObject_array *
Nekki_SF2_GUI_Common_Hints_HintCache__GetAllHints
          (Nekki_SF2_GUI_Common_Hints_HintCache_o *__this,int32_t HDAEJLFDNJC,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  System_Collections_Generic_List_object__o *__this_00;
  UnityEngine_GameObject_o *item;
  UnityEngine_GameObject_array *pUVar4;
  System_Collections_Generic_List_HintUI__o **ppSVar5;
  System_Object_array *pSVar6;
  System_Collections_Generic_List_HintUI__o *__this_01;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  System_Collections_Generic_List_Enumerator_T__o local_40;
  
  if ((DAT_0456746e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HintUI>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HintUI>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HintUI>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GameObject>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HintUI>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GameObject>_ToArray__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GameObject>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<GameObject>_TypeInfo);
    DAT_0456746e = 1;
  }
  local_40.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_40.fields._index = 0;
  local_40.fields._version = 0;
  local_40.fields._current = (Il2CppObject *)0x0;
  if (HDAEJLFDNJC == 0) {
    ppSVar5 = &(__this->fields).HJBLBMEDIMJ;
  }
  else {
    if (HDAEJLFDNJC != 1) {
      return (UnityEngine_GameObject_array *)0x0;
    }
    ppSVar5 = &(__this->fields).AINKHCILFAC;
  }
  __this_01 = *ppSVar5;
  if (__this_01 == (System_Collections_Generic_List_HintUI__o *)0x0) {
    pUVar4 = (UnityEngine_GameObject_array *)0x0;
  }
  else {
    __this_00 = (System_Collections_Generic_List_object__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<GameObject>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              (__this_00,Method_System_Collections_Generic_List<GameObject>__ctor__);
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_58,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<HintUI>_GetEnumerator__);
    local_40.fields._index = local_58.fields._index;
    local_40.fields._version = local_58.fields._version;
    local_40.fields._list = local_58.fields._list;
    local_40.fields._current = local_58.fields._current;
    while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_40,
                              Method_System_Collections_Generic_List_Enumerator<HintUI>_MoveNext__),
          bVar3) {
      if ((UnityEngine_Component_o *)local_40.fields._current == (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      item = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)local_40.fields._current,(MethodInfo *)0x0);
      lVar2 = Method_System_Collections_Generic_List<GameObject>_Add__;
      if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar6 = (__this_00->fields)._items;
      (__this_00->fields)._version = (__this_00->fields)._version + 1;
      if (pSVar6 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pSVar6->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pSVar6->m_Items[(int)uVar1] = (Il2CppObject *)item;
        thunk_FUN_01c20e04();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  (__this_00,(Il2CppObject *)item,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_40,Method_System_Collections_Generic_List_Enumerator<HintUI>_Dispose__);
    if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pUVar4 = (UnityEngine_GameObject_array *)
             System_Collections_Generic_List<object>__ToArray
                       (__this_00,Method_System_Collections_Generic_List<GameObject>_ToArray__);
  }
  return pUVar4;
}

