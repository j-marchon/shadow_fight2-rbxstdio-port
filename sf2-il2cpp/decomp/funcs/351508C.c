// Nekki.SF2.GUI.Common.Hints.HintList$$ShowHints @ RVA 0x351508C

void Nekki_SF2_GUI_Common_Hints_HintList__ShowHints
               (Nekki_SF2_GUI_Common_Hints_HintList_o *__this,
               System_Collections_Generic_List_FEEECOADFNH__o *EJHNEHKMEOB,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_List_HintGroup__o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_0456891c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HintGroup>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HintGroup>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HintGroup>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FEEECOADFNH>_Contains__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HintGroup>_GetEnumerator__);
    DAT_0456891c = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).DEDJHBCOMCJ;
  if (__this_00 == (System_Collections_Generic_List_HintGroup__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_78,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<HintGroup>_GetEnumerator__);
  local_60.fields._index = local_78.fields._index;
  local_60.fields._version = local_78.fields._version;
  local_60.fields._list = local_78.fields._list;
  local_60.fields._current = local_78.fields._current;
  while( true ) {
    bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_60,
                       Method_System_Collections_Generic_List_Enumerator<HintGroup>_MoveNext__);
    pIVar1 = local_60.fields._current;
    if (!bVar2) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_60,Method_System_Collections_Generic_List_Enumerator<HintGroup>_Dispose__);
      return;
    }
    if ((UnityEngine_Component_o *)local_60.fields._current == (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_01 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)local_60.fields._current,(MethodInfo *)0x0);
    if (EJHNEHKMEOB == (System_Collections_Generic_List_FEEECOADFNH__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar2 = System_Collections_Generic_List<Int32Enum>__Contains
                      ((System_Collections_Generic_List_T__o *)EJHNEHKMEOB,
                       *(int32_t *)
                        ((long)&((UnityEngine_Component_o *)((long)pIVar1 + 0x48))->klass + 4),
                       Method_System_Collections_Generic_List<FEEECOADFNH>_Contains__);
    if (__this_01 == (UnityEngine_GameObject_o *)0x0) break;
    UnityEngine_GameObject__SetActive(__this_01,bVar2,(MethodInfo *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

