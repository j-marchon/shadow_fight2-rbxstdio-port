// HIKAFDOGMMH$$FGBMPLNNFHP @ RVA 0x343AFA8

System_String_o * HIKAFDOGMMH__FGBMPLNNFHP(System_String_o *DHCOILBOGHE,MethodInfo *method)

{
  Il2CppObject *value;
  System_String_o *newValue;
  bool bVar1;
  MethodInfo *method_00;
  System_Collections_Generic_List_KeyValuePair_string__string___o *__this;
  System_String_o *pSVar2;
  HIKAFDOGMMH_o *pHVar3;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  System_String_o *pSStack_68;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  System_String_o *pSStack_48;
  
  method_00 = (MethodInfo *)DHCOILBOGHE;
  if ((DAT_045681cf & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_string>>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_string>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_string>>_get_Current__
                );
    FUN_01bab630(&HIKAFDOGMMH_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_string>_get_Key__);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_string>_get_Value__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<KeyValuePair<string,_string>>_GetEnumerator__
                );
    method_00 = (MethodInfo *)FUN_01bab630(&StringLiteral_167);
    DAT_045681cf = 1;
  }
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  pSStack_48 = (System_String_o *)0x0;
  local_60.fields._current = (Il2CppObject *)0x0;
  HIKAFDOGMMH__GIENGNEGHPJ(method_00);
  pHVar3 = HIKAFDOGMMH_TypeInfo->static_fields->CBDMFFMCJBK;
  if ((pHVar3 == (HIKAFDOGMMH_o *)0x0) ||
     (__this = (pHVar3->fields).OMPBOMHFJDN,
     __this == (System_Collections_Generic_List_KeyValuePair_string__string___o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<KeyValuePair<object,_object>>__GetEnumerator
            (&local_80,(System_Collections_Generic_List_T__o *)__this,
             Method_System_Collections_Generic_List<KeyValuePair<string,_string>>_GetEnumerator__);
  local_60.fields._index = local_80.fields._index;
  local_60.fields._version = local_80.fields._version;
  local_60.fields._list = local_80.fields._list;
  pSStack_48 = pSStack_68;
  local_60.fields._current = local_80.fields._current;
  do {
    do {
      bVar1 = System_Collections_Generic_List_Enumerator<KeyValuePair<object,_object>>__MoveNext
                        (&local_60,
                         Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_string>>_MoveNext__
                        );
      newValue = pSStack_48;
      value = local_60.fields._current;
      pSVar2 = DHCOILBOGHE;
      if ((!bVar1) ||
         (bVar1 = System_String__op_Equality
                            ((System_String_o *)local_60.fields._current,DHCOILBOGHE,
                             (MethodInfo *)0x0), pSVar2 = newValue, bVar1)) goto LAB_0353b10c;
      if (DHCOILBOGHE == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar1 = System_String__StartsWith(DHCOILBOGHE,(System_String_o *)value,(MethodInfo *)0x0);
    } while (!bVar1);
    if ((System_String_o *)value == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = System_String__EndsWith((System_String_o *)value,StringLiteral_167,(MethodInfo *)0x0);
  } while (!bVar1);
  pSVar2 = System_String__Replace(DHCOILBOGHE,(System_String_o *)value,newValue,(MethodInfo *)0x0);
LAB_0353b10c:
  System_Collections_Generic_List_Enumerator<KeyValuePair<object,_object>>__Dispose
            (&local_60,
             Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_string>>_Dispose__
            );
  return pSVar2;
}

