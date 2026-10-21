// ACHLOMELAJE$$CIAADMKJGLF @ RVA 0x305B1AC

void ACHLOMELAJE__CIAADMKJGLF(ACHLOMELAJE_o *__this,DNELIPCHKLK_o *DBIAAJNKHLH,MethodInfo *method)

{
  Il2CppObject *CNLGBOLFOJO;
  bool bVar1;
  ACHLOMELAJE_MDHCBOFHAEL_o *__this_00;
  System_Collections_Generic_Dictionary_ValueCollection_string__OLKPEJMEBPJ__o *__this_01;
  DNELIPCHKLK_o *__this_02;
  MethodInfo *extraout_x1;
  MethodInfo *pMVar2;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_48;
  
  pMVar2 = (MethodInfo *)DBIAAJNKHLH;
  if ((DAT_04565e83 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_OLKPEJMEBPJ>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_OLKPEJMEBPJ>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_OLKPEJMEBPJ>_get_Current__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection<string,_OLKPEJMEBPJ>_GetEnumerator__
                );
    DAT_04565e83 = 1;
    pMVar2 = extraout_x1;
  }
  local_48.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._currentValue = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).KBCAIBPDIKB;
  if ((__this_00 == (ACHLOMELAJE_MDHCBOFHAEL_o *)0x0) ||
     (__this_01 = ACHLOMELAJE_MDHCBOFHAEL__JDHAHDALAOA(__this_00,pMVar2),
     __this_01 ==
     (System_Collections_Generic_Dictionary_ValueCollection_string__OLKPEJMEBPJ__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_Dictionary_ValueCollection<object,_object>__GetEnumerator
            (&local_48,
             (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)__this_01,
             Method_System_Collections_Generic_Dictionary_ValueCollection<string,_OLKPEJMEBPJ>_GetEnumerator__
            );
  do {
    bVar1 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object,_object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_OLKPEJMEBPJ>_MoveNext__
                      );
    CNLGBOLFOJO = local_48.fields._currentValue;
    if (!bVar1) goto LAB_0315b280;
    if ((OLKPEJMEBPJ_o *)local_48.fields._currentValue == (OLKPEJMEBPJ_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_02 = ((OLKPEJMEBPJ_Fields *)((long)local_48.fields._currentValue + 0x10))->BBELCDHPJIP;
    if (__this_02 == (DNELIPCHKLK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pMVar2 = (MethodInfo *)0x0;
    bVar1 = DNELIPCHKLK__LFHPFJOAJIO(__this_02,DBIAAJNKHLH,(MethodInfo *)0x0);
  } while (!bVar1);
  ACHLOMELAJE__CIAADMKJGLF(__this,(OLKPEJMEBPJ_o *)CNLGBOLFOJO,pMVar2);
LAB_0315b280:
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object,_object>__Dispose
            (&local_48,
             Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_OLKPEJMEBPJ>_Dispose__
            );
  return;
}

