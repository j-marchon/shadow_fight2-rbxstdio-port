// EEGDOGKBLNG$$LHHHAKCIBHC @ RVA 0x306F12C

void EEGDOGKBLNG__LHHHAKCIBHC(EEGDOGKBLNG_o *__this,MethodInfo *method)

{
  Il2CppObject *value;
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Google_Protobuf_WellKnownTypes_StringValue_o *__this_01;
  KKLJIDJBFEI_o *__this_02;
  System_Action_KEFHDOHHHML__o *BLMFLPJJMPF;
  MethodInfo *extraout_x1;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_b8;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_90;
  
  if ((DAT_04565f52 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>_GetEnumerator__);
    FUN_01bab630(&Method_EEGDOGKBLNG_JEOCNEDKJKE__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary_Enumerator<string,_string>_Dispose__)
    ;
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary_Enumerator<string,_string>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_string>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_string>_get_Key__);
    FUN_01bab630(&Google_Protobuf_WellKnownTypes_StringValue_TypeInfo);
    FUN_01bab630(&StringLiteral_18647);
    DAT_04565f52 = 1;
    method = extraout_x1;
  }
  local_90.fields._getEnumeratorRetType = 0;
  local_90.fields._36_4_ = 0;
  local_90.fields._version = 0;
  local_90.fields._index = 0;
  local_90.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_90.fields._current.fields.value = (Il2CppObject *)0x0;
  local_90.fields._current.fields.key = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              (__this->fields).KPPDBKGGEGA;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__GetEnumerator
              (&local_b8,__this_00,
               Method_System_Collections_Generic_Dictionary<string,_string>_GetEnumerator__);
    local_90.fields._version = local_b8.fields._version;
    local_90.fields._index = local_b8.fields._index;
    local_90.fields._dictionary = local_b8.fields._dictionary;
    local_90.fields._current.fields.value = local_b8.fields._current.fields.value;
    local_90.fields._current.fields.key = local_b8.fields._current.fields.key;
    local_90.fields._getEnumeratorRetType = local_b8.fields._getEnumeratorRetType;
    local_90.fields._36_4_ = local_b8.fields._36_4_;
    while( true ) {
      bVar1 = System_Collections_Generic_Dictionary_Enumerator<object,_object>__MoveNext
                        (&local_90,
                         Method_System_Collections_Generic_Dictionary_Enumerator<string,_string>_MoveNext__
                        );
      value = local_90.fields._current.fields.key;
      if (!bVar1) {
        System_Collections_Generic_Dictionary_Enumerator<object,_object>__Dispose
                  (&local_90,
                   Method_System_Collections_Generic_Dictionary_Enumerator<string,_string>_Dispose__
                  );
        return;
      }
      __this_01 = (Google_Protobuf_WellKnownTypes_StringValue_o *)
                  thunk_FUN_01bda818(Google_Protobuf_WellKnownTypes_StringValue_TypeInfo);
      Google_Protobuf_WellKnownTypes_StringValue___ctor(__this_01,(MethodInfo *)0x0);
      if (__this_01 == (Google_Protobuf_WellKnownTypes_StringValue_o *)0x0) break;
      Google_Protobuf_WellKnownTypes_StringValue__set_Value
                (__this_01,(System_String_o *)value,(MethodInfo *)0x0);
      __this_02 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
      BLMFLPJJMPF = (System_Action_KEFHDOHHHML__o *)
                    thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
      System_Action<object>___ctor();
      if (__this_02 == (KKLJIDJBFEI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      KDPDBGNOFEN__KLNMLOOCAAO
                ((KDPDBGNOFEN_o *)__this_02,StringLiteral_18647,
                 (Google_Protobuf_IMessage_o *)__this_01,BLMFLPJJMPF,0.0,value,(MethodInfo *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

