// MGNPHCAAEIO$$BDJKCCDICGK @ RVA 0x340595C

void MGNPHCAAEIO__BDJKCCDICGK(MethodInfo *method)

{
  bool_conflict bVar1;
  bool bVar2;
  MGNPHCAAEIO_ONAGKGIEEGI_o *__this;
  System_Collections_Generic_Dictionary_string__LKPNOBFEAKD__o *__this_00;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_01;
  ACHLOMELAJE_o *pAVar3;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_38;
  
  if ((DAT_04568018 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>_get_Values__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_LKPNOBFEAKD>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_LKPNOBFEAKD>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_LKPNOBFEAKD>_get_Current__
                );
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection<string,_LKPNOBFEAKD>_GetEnumerator__
                );
    FUN_01bab630(&StringLiteral_5703);
    DAT_04568018 = 1;
  }
  local_38.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._currentValue = (Il2CppObject *)0x0;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar3 != (ACHLOMELAJE_o *)0x0) {
    bVar1 = (pAVar3->fields).IOHEOKOOJFA;
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this = MGNPHCAAEIO_TypeInfo->static_fields->PHHNGOGNMAG;
    if (((__this != (MGNPHCAAEIO_ONAGKGIEEGI_o *)0x0) &&
        (__this_00 = MGNPHCAAEIO_ONAGKGIEEGI__CDHEBBAJMHK
                               (__this,StringLiteral_5703,bVar1 ^ 1,(MethodInfo *)0x0),
        __this_00 != (System_Collections_Generic_Dictionary_string__LKPNOBFEAKD__o *)0x0)) &&
       (__this_01 = System_Collections_Generic_Dictionary<object,_object>__get_Values
                              ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
                               Method_System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>_get_Values__
                              ),
       __this_01 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
      System_Collections_Generic_Dictionary_ValueCollection<object,_object>__GetEnumerator
                (&local_38,__this_01,
                 Method_System_Collections_Generic_Dictionary_ValueCollection<string,_LKPNOBFEAKD>_GetEnumerator__
                );
      while( true ) {
        bVar2 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object,_object>__MoveNext
                          (&local_38,
                           Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_LKPNOBFEAKD>_MoveNext__
                          );
        if (!bVar2) {
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object,_object>__Dispose
                    (&local_38,
                     Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_LKPNOBFEAKD>_Dispose__
                    );
          return;
        }
        if (local_38.fields._currentValue == (Il2CppObject *)0x0) break;
        *(int *)((long)&local_38.fields._currentValue[6].klass + 4) =
             *(int *)((long)&local_38.fields._currentValue[6].klass + 4) + 1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

