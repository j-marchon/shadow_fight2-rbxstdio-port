// FPLCEOJCPOD$$OLGILMECDLP @ RVA 0x31C60C0

void FPLCEOJCPOD__OLGILMECDLP(FPLCEOJCPOD_o *__this,FPLCEOJCPOD_o *IBKIPBJJCPG,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o value;
  bool bVar1;
  System_Collections_Generic_Dictionary_string__ObscuredInt__o *pSVar2;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_60;
  undefined8 uStack_38;
  
  if ((DAT_04566c2f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ObscuredInt>_GetEnumerator__)
    ;
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ObscuredInt>_set_Item__);
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
    DAT_04566c2f = 1;
  }
  local_60.fields._current.fields.value = (Il2CppObject *)0x0;
  local_60.fields._current.fields.key = (Il2CppObject *)0x0;
  uStack_38 = 0;
  local_60.fields._getEnumeratorRetType = 0;
  local_60.fields._36_4_ = 0;
  local_60.fields._version = 0;
  local_60.fields._index = 0;
  local_60.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
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
      pSVar2 = (__this->fields).BJJAPALEEBD;
      if (pSVar2 == (System_Collections_Generic_Dictionary_string__ObscuredInt__o *)0x0) break;
      value.fields.fakeValue = local_60.fields._getEnumeratorRetType;
      value.fields.fakeValueActive = (bool_conflict)local_60.fields._36_1_;
      value.fields.inited = (bool_conflict)local_60.fields._37_1_;
      value.fields._14_2_ = local_60.fields._38_2_;
      value.fields._0_8_ = local_60.fields._current.fields.value;
      System_Collections_Generic_Dictionary<object,_ObscuredInt>__set_Item
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                 local_60.fields._current.fields.key,value,
                 Method_System_Collections_Generic_Dictionary<string,_ObscuredInt>_set_Item__);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

