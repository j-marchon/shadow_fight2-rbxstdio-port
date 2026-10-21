// Nekki.SF2.GUI.Common.Hints.HintList$$GMGNDMJDBAL @ RVA 0x3514A64

void Nekki_SF2_GUI_Common_Hints_HintList__GMGNDMJDBAL
               (Nekki_SF2_GUI_Common_Hints_HintList_o *__this,MethodInfo *method)

{
  int32_t length;
  Il2CppObject *__this_00;
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  System_Collections_Generic_List_HintGroup__o *pSVar3;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  System_Collections_Generic_List_Enumerator_T__o local_40;
  
  if ((DAT_0456891b & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponentsInChildren<HintGroup>__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HintGroup>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HintGroup>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HintGroup>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HintGroup>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HintGroup>_GetEnumerator__);
    DAT_0456891b = 1;
  }
  local_40.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_40.fields._index = 0;
  local_40.fields._version = 0;
  local_40.fields._current = (Il2CppObject *)0x0;
  pSVar3 = (__this->fields).DEDJHBCOMCJ;
  if (pSVar3 != (System_Collections_Generic_List_HintGroup__o *)0x0) {
    length = (pSVar3->fields)._size;
    (pSVar3->fields)._size = 0;
    (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,length,(MethodInfo *)0x0);
      pSVar3 = (__this->fields).DEDJHBCOMCJ;
    }
    UnityEngine_Component__GetComponentsInChildren<object>
              ((UnityEngine_Component_o *)__this,true,(System_Collections_Generic_List_T__o *)pSVar3
               ,Method_UnityEngine_Component_GetComponentsInChildren<HintGroup>__);
    pSVar3 = (__this->fields).DEDJHBCOMCJ;
    if (pSVar3 != (System_Collections_Generic_List_HintGroup__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_58,(System_Collections_Generic_List_object__o *)pSVar3,
                 Method_System_Collections_Generic_List<HintGroup>_GetEnumerator__);
      local_40.fields._index = local_58.fields._index;
      local_40.fields._version = local_58.fields._version;
      local_40.fields._list = local_58.fields._list;
      local_40.fields._current = local_58.fields._current;
      while( true ) {
        do {
          bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_40,
                             Method_System_Collections_Generic_List_Enumerator<HintGroup>_MoveNext__
                            );
          __this_00 = local_40.fields._current;
          if (!bVar1) {
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_40,
                       Method_System_Collections_Generic_List_Enumerator<HintGroup>_Dispose__);
            return;
          }
          if ((UnityEngine_Component_o *)local_40.fields._current == (UnityEngine_Component_o *)0x0)
          {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)local_40.fields._current,(MethodInfo *)0x0)
          ;
          if (pUVar2 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar2,(MethodInfo *)0x0);
        } while (bVar1);
        pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
        if (pUVar2 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
        pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
        if (pUVar2 == (UnityEngine_GameObject_o *)0x0) break;
        UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

