// IJBEKFLAPNK$$OIOFKEFFDPO @ RVA 0x3391400

/* WARNING: Removing unreachable block (ram,0x034915a8) */

void IJBEKFLAPNK__OIOFKEFFDPO(IJBEKFLAPNK_o *__this,IJBEKFLAPNK_o *IBKIPBJJCPG,MethodInfo *method)

{
  Il2CppObject *JGHIJMJNJLE;
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  MethodInfo *in_x3;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_c8;
  undefined1 local_a0 [24];
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_88;
  undefined8 local_80;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_70;
  
  if ((DAT_04567c20 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_float>_GetEnumerator__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_Dictionary<string,_float>>_GetEnumerator__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_Dictionary<string,_float>>_Dispose__
                );
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary_Enumerator<string,_float>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary_Enumerator<string,_float>_MoveNext__)
    ;
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_Dictionary<string,_float>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_float>_get_Current__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_Dictionary<string,_float>>_get_Current__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<string,_Dictionary<string,_float>>_get_Key__
                );
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_float>_get_Key__);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_float>_get_Value__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<string,_Dictionary<string,_float>>_get_Value__
                );
    DAT_04567c20 = 1;
  }
  local_70.fields._getEnumeratorRetType = 0;
  local_70.fields._36_4_ = 0;
  local_80._0_4_ = 0;
  local_80._4_4_ = 0;
  local_70.fields._version = 0;
  local_70.fields._index = 0;
  local_70.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_70.fields._current.fields.value = (Il2CppObject *)0x0;
  local_70.fields._current.fields.key = (Il2CppObject *)0x0;
  local_a0._8_4_ = 0;
  local_a0._12_4_ = 0;
  local_a0._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_88 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_a0._16_8_ = (System_String_o *)0x0;
  if ((IBKIPBJJCPG != (IJBEKFLAPNK_o *)0x0) &&
     (__this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                  (IBKIPBJJCPG->fields).AIGFEBEBGCK,
     __this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    System_Collections_Generic_Dictionary<object,_object>__GetEnumerator
              (&local_c8,__this_00,
               Method_System_Collections_Generic_Dictionary<string,_Dictionary<string,_float>>_GetEnumerator__
              );
    local_70.fields._version = local_c8.fields._version;
    local_70.fields._index = local_c8.fields._index;
    local_70.fields._dictionary = local_c8.fields._dictionary;
    local_70.fields._current.fields.value = local_c8.fields._current.fields.value;
    local_70.fields._current.fields.key = local_c8.fields._current.fields.key;
    local_70.fields._getEnumeratorRetType = local_c8.fields._getEnumeratorRetType;
    local_70.fields._36_4_ = local_c8.fields._36_4_;
    while( true ) {
      bVar1 = System_Collections_Generic_Dictionary_Enumerator<object,_object>__MoveNext
                        (&local_70,
                         Method_System_Collections_Generic_Dictionary_Enumerator<string,_Dictionary<string,_float>>_MoveNext__
                        );
      JGHIJMJNJLE = local_70.fields._current.fields.key;
      if (!bVar1) {
        System_Collections_Generic_Dictionary_Enumerator<object,_object>__Dispose
                  (&local_70,
                   Method_System_Collections_Generic_Dictionary_Enumerator<string,_Dictionary<string,_float>>_Dispose__
                  );
        return;
      }
      if ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
          local_70.fields._current.fields.value ==
          (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) break;
      System_Collections_Generic_Dictionary<object,_float>__GetEnumerator
                (&local_c8,
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                 local_70.fields._current.fields.value,
                 Method_System_Collections_Generic_Dictionary<string,_float>_GetEnumerator__);
      local_a0._8_4_ = local_c8.fields._version;
      local_a0._12_4_ = local_c8.fields._index;
      local_a0._0_8_ = local_c8.fields._dictionary;
      local_88 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                 local_c8.fields._current.fields.value;
      local_a0._16_8_ = local_c8.fields._current.fields.key;
      local_80._0_4_ = local_c8.fields._getEnumeratorRetType;
      local_80._4_4_ = local_c8.fields._36_4_;
      while (bVar1 = System_Collections_Generic_Dictionary_Enumerator<object,_float>__MoveNext
                               ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)
                                local_a0,
                                Method_System_Collections_Generic_Dictionary_Enumerator<string,_float>_MoveNext__
                               ), bVar1) {
        IJBEKFLAPNK__LFENGGKOJDO
                  (__this,local_88._0_4_,(System_String_o *)JGHIJMJNJLE,
                   (System_String_o *)local_a0._16_8_,in_x3);
      }
      System_Collections_Generic_Dictionary_Enumerator<object,_float>__Dispose
                ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_a0,
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_float>_Dispose__);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

