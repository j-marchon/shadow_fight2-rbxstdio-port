// FPLCEOJCPOD$$.ctor @ RVA 0x31C6550

void FPLCEOJCPOD___ctor(FPLCEOJCPOD_o *__this,FPLCEOJCPOD_o *IBKIPBJJCPG,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o value;
  bool bVar1;
  System_Collections_Generic_Dictionary_string__ObscuredInt__o *pSVar2;
  FPLCEOJCPOD_Fields *pFVar3;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_60;
  undefined8 uStack_38;
  
  if ((DAT_04566c32 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ObscuredInt>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ObscuredInt>_GetEnumerator__)
    ;
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ObscuredInt>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_ObscuredInt>_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_ObscuredInt>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_ObscuredInt>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_ObscuredInt>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_ObscuredInt>_get_Key__);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_ObscuredInt>_get_Value__);
    DAT_04566c32 = 1;
  }
  local_60.fields._current.fields.value = (Il2CppObject *)0x0;
  local_60.fields._current.fields.key = (Il2CppObject *)0x0;
  uStack_38 = 0;
  local_60.fields._getEnumeratorRetType = 0;
  local_60.fields._36_4_ = 0;
  local_60.fields._version = 0;
  local_60.fields._index = 0;
  local_60.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  pSVar2 = (System_Collections_Generic_Dictionary_string__ObscuredInt__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_ObscuredInt>_TypeInfo);
  System_Collections_Generic_Dictionary<object,_ObscuredInt>___ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
             Method_System_Collections_Generic_Dictionary<string,_ObscuredInt>__ctor__);
  pFVar3 = &__this->fields;
  pFVar3->BJJAPALEEBD = pSVar2;
  thunk_FUN_01c20e04(pFVar3,pSVar2);
  if ((IBKIPBJJCPG != (FPLCEOJCPOD_o *)0x0) &&
     (pSVar2 = (IBKIPBJJCPG->fields).BJJAPALEEBD,
     pSVar2 != (System_Collections_Generic_Dictionary_string__ObscuredInt__o *)0x0)) {
    System_Collections_Generic_Dictionary<object,_ObscuredInt>__GetEnumerator
              (&local_60,(System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
               Method_System_Collections_Generic_Dictionary<string,_ObscuredInt>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_Dictionary_Enumerator<object,_ObscuredInt>__MoveNext
                        (&local_60,
                         Method_System_Collections_Generic_Dictionary_Enumerator<string,_ObscuredInt>_MoveNext__
                        );
      if (!bVar1) {
        System_Collections_Generic_Dictionary_Enumerator<object,_ObscuredInt>__Dispose
                  (&local_60,
                   Method_System_Collections_Generic_Dictionary_Enumerator<string,_ObscuredInt>_Dispose__
                  );
        return;
      }
      if (pFVar3->BJJAPALEEBD == (System_Collections_Generic_Dictionary_string__ObscuredInt__o *)0x0
         ) break;
      value.fields.fakeValue = local_60.fields._getEnumeratorRetType;
      value.fields.fakeValueActive = (bool_conflict)local_60.fields._36_1_;
      value.fields.inited = (bool_conflict)local_60.fields._37_1_;
      value.fields._14_2_ = local_60.fields._38_2_;
      value.fields._0_8_ = local_60.fields._current.fields.value;
      System_Collections_Generic_Dictionary<object,_ObscuredInt>__Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pFVar3->BJJAPALEEBD,
                 local_60.fields._current.fields.key,value,
                 Method_System_Collections_Generic_Dictionary<string,_ObscuredInt>_Add__);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

