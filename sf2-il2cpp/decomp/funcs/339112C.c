// IJBEKFLAPNK$$GJAEBHEEILE @ RVA 0x339112C

/* WARNING: Removing unreachable block (ram,0x034912ec) */

float IJBEKFLAPNK__GJAEBHEEILE(IJBEKFLAPNK_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  MethodInfo *extraout_x1;
  float fVar2;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_d8;
  undefined1 local_b0 [24];
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_98;
  undefined8 local_90;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_80;
  
  if ((DAT_04567c1f & 1) == 0) {
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
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_float>_get_Value__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<string,_Dictionary<string,_float>>_get_Value__
                );
    FUN_01bab630(&StringLiteral_10808);
    DAT_04567c1f = 1;
    method = extraout_x1;
  }
  local_80.fields._getEnumeratorRetType = 0;
  local_80.fields._36_4_ = 0;
  local_90._0_4_ = 0;
  local_90._4_4_ = 0;
  local_80.fields._version = 0;
  local_80.fields._index = 0;
  local_80.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_80.fields._current.fields.value = (Il2CppObject *)0x0;
  local_80.fields._current.fields.key = (Il2CppObject *)0x0;
  local_b0._8_4_ = 0;
  local_b0._12_4_ = 0;
  local_b0._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_98 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_b0._16_8_ = (System_String_o *)0x0;
  __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
              (__this->fields).AIGFEBEBGCK;
  if (__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__GetEnumerator
              (&local_d8,__this_01,
               Method_System_Collections_Generic_Dictionary<string,_Dictionary<string,_float>>_GetEnumerator__
              );
    fVar2 = 0.0;
    local_80.fields._version = local_d8.fields._version;
    local_80.fields._index = local_d8.fields._index;
    local_80.fields._dictionary = local_d8.fields._dictionary;
    local_80.fields._current.fields.value = local_d8.fields._current.fields.value;
    local_80.fields._current.fields.key = local_d8.fields._current.fields.key;
    local_80.fields._getEnumeratorRetType = local_d8.fields._getEnumeratorRetType;
    local_80.fields._36_4_ = local_d8.fields._36_4_;
    while( true ) {
      bVar1 = System_Collections_Generic_Dictionary_Enumerator<object,_object>__MoveNext
                        (&local_80,
                         Method_System_Collections_Generic_Dictionary_Enumerator<string,_Dictionary<string,_float>>_MoveNext__
                        );
      __this_00 = local_80.fields._current.fields.value;
      if (!bVar1) {
        System_Collections_Generic_Dictionary_Enumerator<object,_object>__Dispose
                  (&local_80,
                   Method_System_Collections_Generic_Dictionary_Enumerator<string,_Dictionary<string,_float>>_Dispose__
                  );
        return fVar2;
      }
      if ((System_String_o *)local_80.fields._current.fields.key == (System_String_o *)0x0) break;
      bVar1 = System_String__Equals
                        ((System_String_o *)local_80.fields._current.fields.key,StringLiteral_10808,
                         (MethodInfo *)0x0);
      if (bVar1) {
        if ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00 ==
            (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        System_Collections_Generic_Dictionary<object,_float>__GetEnumerator
                  (&local_d8,(System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                   Method_System_Collections_Generic_Dictionary<string,_float>_GetEnumerator__);
        local_b0._8_4_ = local_d8.fields._version;
        local_b0._12_4_ = local_d8.fields._index;
        local_b0._0_8_ = local_d8.fields._dictionary;
        local_98 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                   local_d8.fields._current.fields.value;
        local_b0._16_8_ = local_d8.fields._current.fields.key;
        local_90._0_4_ = local_d8.fields._getEnumeratorRetType;
        local_90._4_4_ = local_d8.fields._36_4_;
        while (bVar1 = System_Collections_Generic_Dictionary_Enumerator<object,_float>__MoveNext
                                 ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o
                                   *)local_b0,
                                  Method_System_Collections_Generic_Dictionary_Enumerator<string,_float>_MoveNext__
                                 ), bVar1) {
          fVar2 = fVar2 + local_98._0_4_;
        }
        System_Collections_Generic_Dictionary_Enumerator<object,_float>__Dispose
                  ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_b0,
                   Method_System_Collections_Generic_Dictionary_Enumerator<string,_float>_Dispose__)
        ;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

