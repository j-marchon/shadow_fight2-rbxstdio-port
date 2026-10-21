// HCKCBFOGMMJ$$LEEJLJFBENE @ RVA 0x31CE5A8

LFELBGMCDHD_o * HCKCBFOGMMJ__LEEJLJFBENE(HCKCBFOGMMJ_o *__this,MethodInfo *method)

{
  bool bVar1;
  LFELBGMCDHD_o *__this_00;
  System_Collections_Generic_Dictionary_long__GKLPDMLELJF__o *__this_01;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_02;
  Google_Protobuf_Collections_RepeatedField_GKLPDMLELJF__o *__this_03;
  MethodInfo *extraout_x1;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_48;
  
  if ((DAT_04566c8a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<long,_GKLPDMLELJF>_get_Values__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<long,_GKLPDMLELJF>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<long,_GKLPDMLELJF>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<long,_GKLPDMLELJF>_get_Current__
                );
    FUN_01bab630(&LFELBGMCDHD_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<GKLPDMLELJF>_Add__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection<long,_GKLPDMLELJF>_GetEnumerator__
                );
    DAT_04566c8a = 1;
    method = extraout_x1;
  }
  local_48.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._currentValue = (Il2CppObject *)0x0;
  __this_00 = (LFELBGMCDHD_o *)thunk_FUN_01bda818(LFELBGMCDHD_TypeInfo,method);
  LFELBGMCDHD___ctor(__this_00,(MethodInfo *)0x0);
  __this_01 = (__this->fields).CMJNDHHGCBI;
  if ((__this_01 != (System_Collections_Generic_Dictionary_long__GKLPDMLELJF__o *)0x0) &&
     (__this_02 = System_Collections_Generic_Dictionary<long,_object>__get_Values
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
                             Method_System_Collections_Generic_Dictionary<long,_GKLPDMLELJF>_get_Values__
                            ),
     __this_02 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
    System_Collections_Generic_Dictionary_ValueCollection<long,_object>__GetEnumerator
              (&local_48,__this_02,
               Method_System_Collections_Generic_Dictionary_ValueCollection<long,_GKLPDMLELJF>_GetEnumerator__
              );
    while( true ) {
      do {
        bVar1 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<long,_object>__MoveNext
                          (&local_48,
                           Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<long,_GKLPDMLELJF>_MoveNext__
                          );
        if (!bVar1) {
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator<long,_object>__Dispose
                    (&local_48,
                     Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<long,_GKLPDMLELJF>_Dispose__
                    );
          return __this_00;
        }
      } while (local_48.fields._currentValue == (Il2CppObject *)0x0);
      if (__this_00 == (LFELBGMCDHD_o *)0x0) break;
      __this_03 = (__this_00->fields).EHBNKDHKJNI;
      if (__this_03 == (Google_Protobuf_Collections_RepeatedField_GKLPDMLELJF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      Google_Protobuf_Collections_RepeatedField<object>__Add
                ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_03,
                 local_48.fields._currentValue,
                 Method_Google_Protobuf_Collections_RepeatedField<GKLPDMLELJF>_Add__);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

