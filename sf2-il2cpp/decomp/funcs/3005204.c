// GNJBJKEJEGC$$ToString @ RVA 0x3005204

System_String_o * GNJBJKEJEGC__ToString(GNJBJKEJEGC_o *__this,MethodInfo *method)

{
  Il2CppObject *arg0;
  bool bVar1;
  System_Collections_Generic_Dictionary_string__float__o *pSVar2;
  System_String_o *pSVar3;
  Il2CppObject *arg1;
  System_String_o *str1;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_70;
  undefined4 local_38;
  int32_t local_34;
  
  if ((DAT_04565b49 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_float>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_float>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary_Enumerator<string,_float>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary_Enumerator<string,_float>_MoveNext__)
    ;
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_float>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_float>_get_Key__);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_float>_get_Value__);
    FUN_01bab630(&float_TypeInfo);
    FUN_01bab630(&StringLiteral_580);
    FUN_01bab630(&StringLiteral_402);
    DAT_04565b49 = 1;
  }
  local_70.fields._getEnumeratorRetType = 0;
  local_70.fields._36_4_ = 0;
  local_70.fields._version = 0;
  local_70.fields._index = 0;
  local_70.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_70.fields._current.fields.value = (Il2CppObject *)0x0;
  local_70.fields._current.fields.key = (Il2CppObject *)0x0;
  pSVar2 = (__this->fields).CMHJMGKMCCI;
  if (pSVar2 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
    local_34 = System_Collections_Generic_Dictionary<object,_float>__get_Count
                         ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                          Method_System_Collections_Generic_Dictionary<string,_float>_get_Count__);
    if (local_34 < 1) {
      pSVar3 = System_Object__ToString((Il2CppObject *)__this,(MethodInfo *)0x0);
      pSVar3 = System_String__Concat(pSVar3,StringLiteral_402,(MethodInfo *)0x0);
    }
    else {
      pSVar3 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
      pSVar2 = (__this->fields).CMHJMGKMCCI;
      if (pSVar2 == (System_Collections_Generic_Dictionary_string__float__o *)0x0)
      goto LAB_031053c8;
      System_Collections_Generic_Dictionary<object,_float>__GetEnumerator
                (&local_70,(System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                 Method_System_Collections_Generic_Dictionary<string,_float>_GetEnumerator__);
      while (bVar1 = System_Collections_Generic_Dictionary_Enumerator<object,_float>__MoveNext
                               (&local_70,
                                Method_System_Collections_Generic_Dictionary_Enumerator<string,_float>_MoveNext__
                               ), arg0 = local_70.fields._current.fields.key, bVar1) {
        local_38 = SUB84(local_70.fields._current.fields.value,0);
        arg1 = (Il2CppObject *)thunk_FUN_01bda448(float_TypeInfo,&local_38);
        str1 = System_String__Format(StringLiteral_580,arg0,arg1,(MethodInfo *)0x0);
        pSVar3 = System_String__Concat(pSVar3,str1,(MethodInfo *)0x0);
      }
      System_Collections_Generic_Dictionary_Enumerator<object,_float>__Dispose
                (&local_70,
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_float>_Dispose__);
    }
    return pSVar3;
  }
LAB_031053c8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

