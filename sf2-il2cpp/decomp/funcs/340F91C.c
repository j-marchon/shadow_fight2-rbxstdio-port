// MGNPHCAAEIO.ACENADIGHII$$MHONHGBIHDO @ RVA 0x340F91C

int32_t MGNPHCAAEIO_ACENADIGHII__MHONHGBIHDO
                  (MGNPHCAAEIO_ACENADIGHII_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method
                  )

{
  bool bVar1;
  int32_t iVar2;
  System_Collections_Generic_Dictionary_object__int__o *__this_00;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_60;
  
  if ((DAT_04568070 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_int>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary_Enumerator<string,_int>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary_Enumerator<string,_int>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary_Enumerator<string,_int>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_int>_get_Key__);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_int>_get_Value__);
    FUN_01bab630(&StringLiteral_11603);
    FUN_01bab630(&StringLiteral_11602);
    DAT_04568070 = 1;
  }
  local_60.fields._getEnumeratorRetType = 0;
  local_60.fields._36_4_ = 0;
  local_60.fields._version = 0;
  local_60.fields._index = 0;
  local_60.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_60.fields._current.fields.value = (Il2CppObject *)0x0;
  local_60.fields._current.fields.key = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_object__int__o *)(__this->fields).MCLOMGCHMIG;
  if (__this_00 == (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_Dictionary<object,_int>__GetEnumerator
            (&local_60,__this_00,
             Method_System_Collections_Generic_Dictionary<string,_int>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_Dictionary_Enumerator<object,_int>__MoveNext
                      (&local_60,
                       Method_System_Collections_Generic_Dictionary_Enumerator<string,_int>_MoveNext__
                      );
    if (!bVar1) {
      iVar2 = -1;
      break;
    }
    iVar2 = (int32_t)local_60.fields._current.fields.value;
    bVar1 = System_String__op_Equality
                      ((System_String_o *)local_60.fields._current.fields.key,KGLJICLJHEL,
                       (MethodInfo *)0x0);
  } while (!bVar1);
  System_Collections_Generic_Dictionary_Enumerator<object,_int>__Dispose
            (&local_60,
             Method_System_Collections_Generic_Dictionary_Enumerator<string,_int>_Dispose__);
  bVar1 = System_String__op_Equality(KGLJICLJHEL,StringLiteral_11603,(MethodInfo *)0x0);
  if (bVar1) {
    iVar2 = 4;
  }
  else {
    bVar1 = System_String__op_Equality(KGLJICLJHEL,StringLiteral_11602,(MethodInfo *)0x0);
    if (bVar1) {
      iVar2 = 1;
    }
  }
  return iVar2;
}

