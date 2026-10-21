// AMHFFFODDOC$$GMAJCILJMAN @ RVA 0x343C3A8

int32_t AMHFFFODDOC__GMAJCILJMAN(System_Func_string__bool__o *IMNBAFCEDMA,MethodInfo *method)

{
  bool bVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  MethodInfo *extraout_x1;
  int iVar3;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_60;
  
  if ((DAT_045681e0 & 1) == 0) {
    FUN_01bab630(&AMHFFFODDOC_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_Sprite[]>_GetEnumerator__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_Sprite[]>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_Sprite[]>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_Sprite[]>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_Sprite[]>_get_Key__);
    DAT_045681e0 = 1;
    method = extraout_x1;
  }
  local_60.fields._getEnumeratorRetType = 0;
  local_60.fields._36_4_ = 0;
  local_60.fields._version = 0;
  local_60.fields._index = 0;
  local_60.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_60.fields._current.fields.value = (Il2CppObject *)0x0;
  local_60.fields._current.fields.key = (Il2CppObject *)0x0;
  if ((AMHFFFODDOC_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(AMHFFFODDOC_TypeInfo,method);
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           AMHFFFODDOC_TypeInfo->static_fields->IABCHDDPNMF;
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__GetEnumerator
              (&local_60,__this,
               Method_System_Collections_Generic_Dictionary<string,_Sprite[]>_GetEnumerator__);
    iVar3 = 0;
    while( true ) {
      bVar1 = System_Collections_Generic_Dictionary_Enumerator<object,_object>__MoveNext
                        (&local_60,
                         Method_System_Collections_Generic_Dictionary_Enumerator<string,_Sprite[]>_MoveNext__
                        );
      if (!bVar1) {
        System_Collections_Generic_Dictionary_Enumerator<object,_object>__Dispose
                  (&local_60,
                   Method_System_Collections_Generic_Dictionary_Enumerator<string,_Sprite[]>_Dispose__
                  );
        return iVar3;
      }
      if (IMNBAFCEDMA == (System_Func_string__bool__o *)0x0) break;
      uVar2 = (*(code *)(IMNBAFCEDMA->fields).super.super.invoke_impl)
                        ((IMNBAFCEDMA->fields).super.super.method_code,
                         local_60.fields._current.fields.key,
                         (IMNBAFCEDMA->fields).super.super.method);
      iVar3 = iVar3 + (uVar2 & 1);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

