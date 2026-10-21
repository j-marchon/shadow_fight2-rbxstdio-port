// AKOMJPINHEN$$JKHLALJIKOJ @ RVA 0x308E3CC

void AKOMJPINHEN__JKHLALJIKOJ(AKOMJPINHEN_o *__this,int32_t ACCIHBHMFPN,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_CKLIGNAPKFO__int__o *__this_00;
  System_Collections_Generic_List_ODKDFMHHLIP__o *__this_01;
  MethodInfo *method_00;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_0456607e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_int>_set_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ODKDFMHHLIP>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ODKDFMHHLIP>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ODKDFMHHLIP>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ODKDFMHHLIP>_GetEnumerator__);
    DAT_0456607e = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  bVar1 = ODKDFMHHLIP__NOBCLMOONLJ(ACCIHBHMFPN,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  __this_00 = (__this->fields).AGJMNCAMEDP;
  if (__this_00 != (System_Collections_Generic_Dictionary_CKLIGNAPKFO__int__o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    System_Collections_Generic_Dictionary<Int32Enum,_int>__set_Item
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,ACCIHBHMFPN,0,
               Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_int>_set_Item__);
    __this_01 = KPBOJBLLKPJ__NBKAMBPCHNJ((KPBOJBLLKPJ_o *)__this,ACCIHBHMFPN,method_00);
    if (__this_01 != (System_Collections_Generic_List_ODKDFMHHLIP__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_38,(System_Collections_Generic_List_object__o *)__this_01,
                 Method_System_Collections_Generic_List<ODKDFMHHLIP>_GetEnumerator__);
      while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_38,
                                Method_System_Collections_Generic_List_Enumerator<ODKDFMHHLIP>_MoveNext__
                               ), bVar1) {
        if (local_38.fields._current != (Il2CppObject *)0x0) {
          *(undefined1 *)&local_38.fields._current[2].klass = 0;
        }
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_38,Method_System_Collections_Generic_List_Enumerator<ODKDFMHHLIP>_Dispose__)
      ;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

