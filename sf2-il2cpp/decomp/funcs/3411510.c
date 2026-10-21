// MGNPHCAAEIO.ONAGKGIEEGI$$CDHEBBAJMHK @ RVA 0x3411510

System_Collections_Generic_Dictionary_string__LKPNOBFEAKD__o *
MGNPHCAAEIO_ONAGKGIEEGI__CDHEBBAJMHK
          (MGNPHCAAEIO_ONAGKGIEEGI_o *__this,System_String_o *ACCIHBHMFPN,int32_t KEMDLBKINAD,
          MethodInfo *method)

{
  Il2CppObject *key;
  Il2CppObject *value;
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_Dictionary_string__LKPNOBFEAKD__o **ppSVar2;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_70;
  
  if ((DAT_04568087 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>_GetEnumerator__)
    ;
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>_set_Item__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_LKPNOBFEAKD>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_LKPNOBFEAKD>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_LKPNOBFEAKD>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_LKPNOBFEAKD>_get_Key__);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_LKPNOBFEAKD>_get_Value__);
    DAT_04568087 = 1;
  }
  local_70.fields._getEnumeratorRetType = 0;
  local_70.fields._36_4_ = 0;
  local_70.fields._version = 0;
  local_70.fields._index = 0;
  local_70.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_70.fields._current.fields.value = (Il2CppObject *)0x0;
  local_70.fields._current.fields.key = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>_TypeInfo
                                );
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this_00,Method_System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>__ctor__);
  if (KEMDLBKINAD == 2) {
    ppSVar2 = &(__this->fields).FEGHKKNNNLE;
  }
  else if (KEMDLBKINAD == 0) {
    ppSVar2 = &(__this->fields).BLAMCAPFOPD;
  }
  else {
    ppSVar2 = &(__this->fields).MEMCHPHKGHF;
  }
  if ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar2 !=
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__GetEnumerator
              (&local_70,(System_Collections_Generic_Dictionary_object__object__o *)*ppSVar2,
               Method_System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_Dictionary_Enumerator<object,_object>__MoveNext
                        (&local_70,
                         Method_System_Collections_Generic_Dictionary_Enumerator<string,_LKPNOBFEAKD>_MoveNext__
                        );
      value = local_70.fields._current.fields.value;
      key = local_70.fields._current.fields.key;
      if (!bVar1) {
        System_Collections_Generic_Dictionary_Enumerator<object,_object>__Dispose
                  (&local_70,
                   Method_System_Collections_Generic_Dictionary_Enumerator<string,_LKPNOBFEAKD>_Dispose__
                  );
        return (System_Collections_Generic_Dictionary_string__LKPNOBFEAKD__o *)__this_00;
      }
      if (local_70.fields._current.fields.value == (Il2CppObject *)0x0) break;
      bVar1 = System_String__op_Equality
                        (local_70.fields._current.fields.value[1].monitor,ACCIHBHMFPN,
                         (MethodInfo *)0x0);
      if (bVar1) {
        if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        System_Collections_Generic_Dictionary<object,_object>__set_Item
                  (__this_00,key,value,
                   Method_System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>_set_Item__);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

