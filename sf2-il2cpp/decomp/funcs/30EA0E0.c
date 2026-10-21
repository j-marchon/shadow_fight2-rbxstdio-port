// HOOAAGABMBL$$DJPOCLICKGO @ RVA 0x30EA0E0

void HOOAAGABMBL__DJPOCLICKGO(HOOAAGABMBL_o *__this,int32_t GMALOFEKAHI,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_01;
  MethodInfo *in_x3;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_48;
  
  if ((DAT_04566408 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_NMAHEBEALAB>_get_Values__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_NMAHEBEALAB>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_NMAHEBEALAB>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_NMAHEBEALAB>_get_Current__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection<int,_NMAHEBEALAB>_GetEnumerator__
                );
    DAT_04566408 = 1;
  }
  local_48.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._currentValue = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
              (__this->fields)._EIDNIKFIPMA_k__BackingField;
  if ((__this_00 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
     (__this_01 = System_Collections_Generic_Dictionary<int,_object>__get_Values
                            (__this_00,
                             Method_System_Collections_Generic_Dictionary<int,_NMAHEBEALAB>_get_Values__
                            ),
     __this_01 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
    System_Collections_Generic_Dictionary_ValueCollection<int,_object>__GetEnumerator
              (&local_48,__this_01,
               Method_System_Collections_Generic_Dictionary_ValueCollection<int,_NMAHEBEALAB>_GetEnumerator__
              );
    while (bVar1 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_object>__MoveNext
                             (&local_48,
                              Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_NMAHEBEALAB>_MoveNext__
                             ), bVar1) {
      HOOAAGABMBL__OFPDGIIFPLB
                (__this,(NMAHEBEALAB_o *)local_48.fields._currentValue,GMALOFEKAHI,in_x3);
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_object>__Dispose
              (&local_48,
               Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_NMAHEBEALAB>_Dispose__
              );
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

