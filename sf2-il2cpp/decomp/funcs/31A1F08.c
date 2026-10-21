// LDHBHPILNMA$$PBHNEKEPDEL @ RVA 0x31A1F08

ECENNHNBAME_o * LDHBHPILNMA__PBHNEKEPDEL(HOOAAGABMBL_o *IFDOANCFKJD,MethodInfo *method)

{
  Il2CppObject *item;
  bool bVar1;
  int32_t iVar2;
  System_Collections_Generic_List_ECENNHNBAME__o *__this;
  ECENNHNBAME_o *pEVar3;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  System_String_o *value;
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_List_string__o *__this_01;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04566ae5 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_get_Current__);
    FUN_01bab630(&LDHBHPILNMA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_IndexOf__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&StringLiteral_12339);
    FUN_01bab630(&StringLiteral_12338);
    DAT_04566ae5 = 1;
    method = extraout_x1;
  }
  item = StringLiteral_12338;
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  if (IFDOANCFKJD == (HOOAAGABMBL_o *)0x0) {
LAB_032a20b4:
    if ((LDHBHPILNMA_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pEVar3 = LDHBHPILNMA__CCBEONOLBID(StringLiteral_12339,true,in_x2);
  }
  else {
    value = (IFDOANCFKJD->fields)._COIPKAKHDFP_k__BackingField;
    if ((LDHBHPILNMA_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(LDHBHPILNMA_TypeInfo,method);
    }
    __this = LDHBHPILNMA_TypeInfo->static_fields->HDGPEJOPPOB;
    if (__this == (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_88,(System_Collections_Generic_List_object__o *)__this,
               Method_System_Collections_Generic_List<ECENNHNBAME>_GetEnumerator__);
    local_70.fields._index = local_88.fields._index;
    local_70.fields._version = local_88.fields._version;
    local_70.fields._list = local_88.fields._list;
    local_70.fields._current = local_88.fields._current;
LAB_032a201c:
    do {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_70,
                         Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_MoveNext__);
      pEVar3 = (ECENNHNBAME_o *)local_70.fields._current;
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_70,
                   Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_Dispose__);
        goto LAB_032a20b4;
      }
      if ((ECENNHNBAME_o *)local_70.fields._current == (ECENNHNBAME_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      __this_01 = ((ECENNHNBAME_Fields *)((long)local_70.fields._current + 0x10))->GMNNFJNKIAN;
      if (__this_01 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      __this_00 = ((ECENNHNBAME_Fields *)((long)local_70.fields._current + 0x10))->
                  _AHFPJJKEANI_k__BackingField;
      if ((__this_01->fields)._size == 0) {
        bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
        if (!bVar1) {
          if ((__this_01->fields)._size != 0) goto LAB_032a2048;
          goto LAB_032a201c;
        }
      }
      else {
LAB_032a2048:
        in_x2 = Method_System_Collections_Generic_List<string>_IndexOf__;
        iVar2 = System_Collections_Generic_List<object>__IndexOf
                          ((System_Collections_Generic_List_object__o *)__this_01,
                           (Il2CppObject *)value,
                           (MethodInfo_26E5A4C *)
                           Method_System_Collections_Generic_List<string>_IndexOf__);
        if (iVar2 == -1) goto LAB_032a201c;
      }
      if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      in_x2 = Method_System_Collections_Generic_List<string>_IndexOf__;
      iVar2 = System_Collections_Generic_List<object>__IndexOf
                        ((System_Collections_Generic_List_object__o *)__this_00,item,
                         (MethodInfo_26E5A4C *)
                         Method_System_Collections_Generic_List<string>_IndexOf__);
    } while (iVar2 == -1);
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_70,Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_Dispose__);
  }
  return pEVar3;
}

