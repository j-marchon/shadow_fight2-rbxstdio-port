// HCKCBFOGMMJ$$IGFFDAJMPIH @ RVA 0x31CE078

GKLPDMLELJF_o * HCKCBFOGMMJ__IGFFDAJMPIH(HCKCBFOGMMJ_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  int32_t iVar3;
  System_Collections_Generic_Dictionary_long__GKLPDMLELJF__o *pSVar4;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_00;
  int iVar5;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_38;
  
  if ((DAT_04566c85 & 1) == 0) {
    FUN_01bab630(&Method_CAOJHCDPDBH_OBECCOPBADO<long,_GKLPDMLELJF>__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<long,_GKLPDMLELJF>_get_Count__);
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
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection<long,_GKLPDMLELJF>_GetEnumerator__
                );
    DAT_04566c85 = 1;
  }
  local_38.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._currentValue = (Il2CppObject *)0x0;
  bVar2 = CAOJHCDPDBH__OBECCOPBADO<long,_object>
                    ((System_Collections_Generic_Dictionary_T__U__o *)(__this->fields).CMJNDHHGCBI,
                     Method_CAOJHCDPDBH_OBECCOPBADO<long,_GKLPDMLELJF>__);
  if (bVar2) {
    return (GKLPDMLELJF_o *)0x0;
  }
  pSVar4 = (__this->fields).CMJNDHHGCBI;
  if (pSVar4 != (System_Collections_Generic_Dictionary_long__GKLPDMLELJF__o *)0x0) {
    iVar3 = System_Collections_Generic_Dictionary<long,_object>__get_Count
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,
                       Method_System_Collections_Generic_Dictionary<long,_GKLPDMLELJF>_get_Count__);
    if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(LIIFLGALGNK_TypeInfo);
    }
    iVar3 = LIIFLGALGNK__HLMBDJOGONJ(iVar3,(MethodInfo *)0x0);
    pSVar4 = (__this->fields).CMJNDHHGCBI;
    if ((pSVar4 != (System_Collections_Generic_Dictionary_long__GKLPDMLELJF__o *)0x0) &&
       (__this_00 = System_Collections_Generic_Dictionary<long,_object>__get_Values
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,
                               Method_System_Collections_Generic_Dictionary<long,_GKLPDMLELJF>_get_Values__
                              ),
       __this_00 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
      System_Collections_Generic_Dictionary_ValueCollection<long,_object>__GetEnumerator
                (&local_38,__this_00,
                 Method_System_Collections_Generic_Dictionary_ValueCollection<long,_GKLPDMLELJF>_GetEnumerator__
                );
      iVar5 = iVar3 + 1;
      do {
        bVar2 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<long,_object>__MoveNext
                          (&local_38,
                           Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<long,_GKLPDMLELJF>_MoveNext__
                          );
        pIVar1 = local_38.fields._currentValue;
        if (!bVar2) {
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator<long,_object>__Dispose
                    (&local_38,
                     Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<long,_GKLPDMLELJF>_Dispose__
                    );
          return (GKLPDMLELJF_o *)0x0;
        }
        iVar5 = iVar5 + -1;
      } while (0 < iVar5);
      System_Collections_Generic_Dictionary_ValueCollection_Enumerator<long,_object>__Dispose
                (&local_38,
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<long,_GKLPDMLELJF>_Dispose__
                );
      return (GKLPDMLELJF_o *)pIVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

