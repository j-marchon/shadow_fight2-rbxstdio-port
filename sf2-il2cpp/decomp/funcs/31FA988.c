// NLPJLHOEAOE$$OPMPPLLIJHO @ RVA 0x31FA988

void NLPJLHOEAOE__OPMPPLLIJHO(NLPJLHOEAOE_o *__this,OOMHDDBCBJP_o *BANHBMINMMP,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  ACHLOMELAJE_MDHCBOFHAEL_o *__this_00;
  System_Collections_Generic_Dictionary_ValueCollection_string__OLKPEJMEBPJ__o *__this_01;
  DNELIPCHKLK_o *__this_02;
  ACHLOMELAJE_o *pAVar3;
  MEJIKMPNBNL_o *pMVar4;
  OOMHDDBCBJP_o **ppOVar5;
  DNELIPCHKLK_o *PBDMBCJNKII;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_78;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_60;
  
  if ((DAT_04566ddd & 1) == 0) {
    FUN_01bab630(&DNELIPCHKLK_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_OLKPEJMEBPJ>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_OLKPEJMEBPJ>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_OLKPEJMEBPJ>_get_Current__
                );
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection<string,_OLKPEJMEBPJ>_GetEnumerator__
                );
    FUN_01bab630(&StringLiteral_8496);
    DAT_04566ddd = 1;
  }
  local_60.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._currentValue = (Il2CppObject *)0x0;
  if (BANHBMINMMP == (OOMHDDBCBJP_o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_8496,(MethodInfo *)0x0);
  }
  else {
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
    if (((pAVar3 == (ACHLOMELAJE_o *)0x0) ||
        (__this_00 = (pAVar3->fields).KBCAIBPDIKB, __this_00 == (ACHLOMELAJE_MDHCBOFHAEL_o *)0x0))
       || (__this_01 = ACHLOMELAJE_MDHCBOFHAEL__JDHAHDALAOA(__this_00,(MethodInfo *)0x0),
          __this_01 ==
          (System_Collections_Generic_Dictionary_ValueCollection_string__OLKPEJMEBPJ__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_Dictionary_ValueCollection<object,_object>__GetEnumerator
              (&local_78,
               (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)__this_01,
               Method_System_Collections_Generic_Dictionary_ValueCollection<string,_OLKPEJMEBPJ>_GetEnumerator__
              );
    local_60.fields._index = local_78.fields._index;
    local_60.fields._version = local_78.fields._version;
    local_60.fields._dictionary = local_78.fields._dictionary;
    local_60.fields._currentValue = local_78.fields._currentValue;
    do {
      bVar2 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object,_object>__MoveNext
                        (&local_60,
                         Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_OLKPEJMEBPJ>_MoveNext__
                        );
      pIVar1 = local_60.fields._currentValue;
      if (!bVar2) goto LAB_032fab50;
      if ((OLKPEJMEBPJ_o *)local_60.fields._currentValue == (OLKPEJMEBPJ_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      PBDMBCJNKII = ((OLKPEJMEBPJ_Fields *)((long)local_60.fields._currentValue + 0x10))->
                    BBELCDHPJIP;
      __this_02 = (DNELIPCHKLK_o *)thunk_FUN_01bda818(DNELIPCHKLK_TypeInfo);
      DNELIPCHKLK___ctor(__this_02,PBDMBCJNKII,(MethodInfo *)0x0);
      if (__this_02 == (DNELIPCHKLK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pMVar4 = (BANHBMINMMP->fields).IAJPHAAMKPC;
      if (pMVar4 == (MEJIKMPNBNL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar2 = System_String__op_Equality
                        ((__this_02->fields).GDPFBDIJNHA,(pMVar4->fields).DEKCPPOJFEH,
                         (MethodInfo *)0x0);
    } while ((!bVar2) ||
            (bVar2 = System_String__op_Equality
                               ((__this_02->fields).GJFJPLHCBKJ,(BANHBMINMMP->fields).DEKCPPOJFEH,
                                (MethodInfo *)0x0), !bVar2));
    (BANHBMINMMP->fields).LFJPDELEIHG = (OLKPEJMEBPJ_o *)pIVar1;
    thunk_FUN_01c20e04(&BANHBMINMMP->fields,pIVar1);
    ppOVar5 = &((OLKPEJMEBPJ_Fields *)((long)pIVar1 + 0x10))->MIFNFJDIPBL;
    *ppOVar5 = BANHBMINMMP;
    thunk_FUN_01c20e04(ppOVar5,BANHBMINMMP);
LAB_032fab50:
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object,_object>__Dispose
              (&local_60,
               Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_OLKPEJMEBPJ>_Dispose__
              );
  }
  return;
}

