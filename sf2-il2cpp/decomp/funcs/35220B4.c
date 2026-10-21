// NOAPKJBLPND$$BHJOLIJDBLO @ RVA 0x35220B4

DEFIPIDEFOO_o *
NOAPKJBLPND__BHJOLIJDBLO(NOAPKJBLPND_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  DEFIPIDEFOO_o *pDVar2;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_60;
  
  if ((DAT_045689d3 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_DEFIPIDEFOO>_GetEnumerator__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<int,_DEFIPIDEFOO>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<int,_DEFIPIDEFOO>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<int,_DEFIPIDEFOO>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<int,_DEFIPIDEFOO>_get_Value__);
    DAT_045689d3 = 1;
  }
  local_60.fields._getEnumeratorRetType = 0;
  local_60.fields._36_4_ = 0;
  local_60.fields._version = 0;
  local_60.fields._index = 0;
  local_60.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_60.fields._current.fields.value = (Il2CppObject *)0x0;
  local_60.fields._current.fields.key = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields).MAKFKJPLHCF;
  if (__this_00 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_Dictionary<int,_object>__GetEnumerator
            (&local_60,__this_00,
             Method_System_Collections_Generic_Dictionary<int,_DEFIPIDEFOO>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_Dictionary_Enumerator<int,_object>__MoveNext
                      (&local_60,
                       Method_System_Collections_Generic_Dictionary_Enumerator<int,_DEFIPIDEFOO>_MoveNext__
                      );
    pDVar2 = (DEFIPIDEFOO_o *)local_60.fields._current.fields.value;
    if (!bVar1) {
      pDVar2 = (DEFIPIDEFOO_o *)0x0;
      break;
    }
    if ((DEFIPIDEFOO_o *)local_60.fields._current.fields.value == (DEFIPIDEFOO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = System_String__op_Equality
                      (((DEFIPIDEFOO_Fields *)((long)local_60.fields._current.fields.value + 0x10))
                       ->JIJLBFGKNJK,KGLJICLJHEL,(MethodInfo *)0x0);
  } while (!bVar1);
  System_Collections_Generic_Dictionary_Enumerator<int,_object>__Dispose
            (&local_60,
             Method_System_Collections_Generic_Dictionary_Enumerator<int,_DEFIPIDEFOO>_Dispose__);
  return pDVar2;
}

