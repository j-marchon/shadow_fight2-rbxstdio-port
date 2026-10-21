// PLIIGOCLJDL$$LPCLGCOCEEA @ RVA 0x3517868

JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH_o *
PLIIGOCLJDL__LPCLGCOCEEA(PLIIGOCLJDL_o *__this,int32_t BKNFBGIKLNC,MethodInfo *method)

{
  bool bVar1;
  JMDPBFOCHHP_o *pJVar2;
  System_Collections_Generic_Dictionary_uint__JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH__o *__this_00;
  JMDPBFOCHHP_AEJBILHMFDB_o *pJVar3;
  JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH_o *pJVar4;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_50;
  
  if ((DAT_0456893f & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<uint,_JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH>_GetEnumerator__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<uint,_JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<uint,_JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<uint,_JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH>_get_Current__
                );
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<uint,_JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH>_get_Key__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<uint,_JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH>_get_Value__
                );
    DAT_0456893f = 1;
  }
  local_50.fields._getEnumeratorRetType = 0;
  local_50.fields._36_4_ = 0;
  local_50.fields._version = 0;
  local_50.fields._index = 0;
  local_50.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_50.fields._current.fields.value = (Il2CppObject *)0x0;
  local_50.fields._current.fields.key = (Il2CppObject *)0x0;
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pJVar2 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if (pJVar2 == (JMDPBFOCHHP_o *)0x0) {
LAB_036179b0:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pJVar4 = (JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH_o *)0x0;
  if ((0 < BKNFBGIKLNC) &&
     (pJVar3 = (pJVar2->fields)._JMEOCLFDHMM_k__BackingField,
     pJVar3 != (JMDPBFOCHHP_AEJBILHMFDB_o *)0x0)) {
    __this_00 = (pJVar3->fields).BFODFJIGBHE;
    if (__this_00 ==
        (System_Collections_Generic_Dictionary_uint__JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH__o *)0x0)
    goto LAB_036179b0;
    System_Collections_Generic_Dictionary<uint,_object>__GetEnumerator
              (&local_50,(System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               Method_System_Collections_Generic_Dictionary<uint,_JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH>_GetEnumerator__
              );
    do {
      bVar1 = System_Collections_Generic_Dictionary_Enumerator<uint,_object>__MoveNext
                        (&local_50,
                         Method_System_Collections_Generic_Dictionary_Enumerator<uint,_JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH>_MoveNext__
                        );
      pJVar4 = (JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH_o *)local_50.fields._current.fields.value;
      if (!bVar1) {
        System_Collections_Generic_Dictionary_Enumerator<uint,_object>__Dispose
                  (&local_50,
                   Method_System_Collections_Generic_Dictionary_Enumerator<uint,_JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH>_Dispose__
                  );
        return (JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH_o *)0x0;
      }
    } while ((uint)local_50.fields._current.fields.key < (uint)BKNFBGIKLNC);
    System_Collections_Generic_Dictionary_Enumerator<uint,_object>__Dispose
              (&local_50,
               Method_System_Collections_Generic_Dictionary_Enumerator<uint,_JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH>_Dispose__
              );
  }
  return pJVar4;
}

