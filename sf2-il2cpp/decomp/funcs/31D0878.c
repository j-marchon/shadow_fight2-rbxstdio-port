// AHMJMDBNMHO$$RandomizeObscuredVars @ RVA 0x31D0878

/* WARNING: Removing unreachable block (ram,0x032d09fc) */

void AHMJMDBNMHO__RandomizeObscuredVars(AHMJMDBNMHO_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_List_HJNEOLCKEMD__o *__this_01;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_c8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_80;
  
  if ((DAT_04566ca0 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_List<HJNEOLCKEMD>>_GetEnumerator__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HJNEOLCKEMD>_Dispose__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_List<HJNEOLCKEMD>>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_List<HJNEOLCKEMD>>_MoveNext__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HJNEOLCKEMD>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HJNEOLCKEMD>_get_Current__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_List<HJNEOLCKEMD>>_get_Current__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<string,_List<HJNEOLCKEMD>>_get_Value__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<HJNEOLCKEMD>_GetEnumerator__);
    DAT_04566ca0 = 1;
  }
  local_80.fields._getEnumeratorRetType = 0;
  local_80.fields._36_4_ = 0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_80.fields._version = 0;
  local_80.fields._index = 0;
  local_80.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_80.fields._current.fields.value = (Il2CppObject *)0x0;
  local_80.fields._current.fields.key = (Il2CppObject *)0x0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  HJNEOLCKEMD__RandomizeObscuredVars((HJNEOLCKEMD_o *)__this,(MethodInfo *)0x0);
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              (__this->fields).HENCEKHKNDD;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__GetEnumerator
              (&local_c8,__this_00,
               Method_System_Collections_Generic_Dictionary<string,_List<HJNEOLCKEMD>>_GetEnumerator__
              );
    local_80.fields._version = local_c8.fields._version;
    local_80.fields._index = local_c8.fields._index;
    local_80.fields._dictionary = local_c8.fields._dictionary;
    local_80.fields._current.fields.value = local_c8.fields._current.fields.value;
    local_80.fields._current.fields.key = local_c8.fields._current.fields.key;
    local_80.fields._getEnumeratorRetType = local_c8.fields._getEnumeratorRetType;
    local_80.fields._36_4_ = local_c8.fields._36_4_;
    while (bVar1 = System_Collections_Generic_Dictionary_Enumerator<object,_object>__MoveNext
                             (&local_80,
                              Method_System_Collections_Generic_Dictionary_Enumerator<string,_List<HJNEOLCKEMD>>_MoveNext__
                             ), bVar1) {
      if ((System_Collections_Generic_List_object__o *)local_80.fields._current.fields.value ==
          (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      System_Collections_Generic_List<object>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&local_c8,
                 (System_Collections_Generic_List_object__o *)local_80.fields._current.fields.value,
                 Method_System_Collections_Generic_List<HJNEOLCKEMD>_GetEnumerator__);
      local_a0.fields._index = local_c8.fields._version;
      local_a0.fields._version = local_c8.fields._index;
      local_a0.fields._list = (System_Collections_Generic_List_T__o *)local_c8.fields._dictionary;
      local_a0.fields._current = local_c8.fields._current.fields.key;
      while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_a0,
                                Method_System_Collections_Generic_List_Enumerator<HJNEOLCKEMD>_MoveNext__
                               ), bVar1) {
        if (local_a0.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        (*(local_a0.fields._current)->klass->vtable[7].methodPtr)
                  (local_a0.fields._current,(local_a0.fields._current)->klass->vtable[7].method);
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_a0,Method_System_Collections_Generic_List_Enumerator<HJNEOLCKEMD>_Dispose__)
      ;
    }
    System_Collections_Generic_Dictionary_Enumerator<object,_object>__Dispose
              (&local_80,
               Method_System_Collections_Generic_Dictionary_Enumerator<string,_List<HJNEOLCKEMD>>_Dispose__
              );
    __this_01 = (__this->fields).CMAFKNEPKDA;
    if (__this_01 != (System_Collections_Generic_List_HJNEOLCKEMD__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&local_c8,
                 (System_Collections_Generic_List_object__o *)__this_01,
                 Method_System_Collections_Generic_List<HJNEOLCKEMD>_GetEnumerator__);
      local_a0.fields._index = local_c8.fields._version;
      local_a0.fields._version = local_c8.fields._index;
      local_a0.fields._list = (System_Collections_Generic_List_T__o *)local_c8.fields._dictionary;
      local_a0.fields._current = local_c8.fields._current.fields.key;
      while( true ) {
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_a0,
                           Method_System_Collections_Generic_List_Enumerator<HJNEOLCKEMD>_MoveNext__
                          );
        if (!bVar1) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_a0,
                     Method_System_Collections_Generic_List_Enumerator<HJNEOLCKEMD>_Dispose__);
          return;
        }
        if (local_a0.fields._current == (Il2CppObject *)0x0) break;
        (*(local_a0.fields._current)->klass->vtable[7].methodPtr)
                  (local_a0.fields._current,(local_a0.fields._current)->klass->vtable[7].method);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

