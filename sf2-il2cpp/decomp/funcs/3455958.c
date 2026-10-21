// CLFCKIFNGHA$$DGLJCGNHLIG @ RVA 0x3455958

/* WARNING: Removing unreachable block (ram,0x03555b10) */
/* WARNING: Removing unreachable block (ram,0x03555b60) */
/* WARNING: Removing unreachable block (ram,0x03555b6c) */

void CLFCKIFNGHA__DGLJCGNHLIG(MethodInfo *method)

{
  int32_t length;
  bool bVar1;
  System_Collections_Generic_List_IAGNPGHOAIC__o *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_Collections_Generic_List_IAGNPGHOAIC__o *obj;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  bool local_34 [4];
  
  if ((DAT_045682c6 & 1) == 0) {
    FUN_01bab630(&CLFCKIFNGHA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_IAGNPGHOAIC>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IAGNPGHOAIC>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IAGNPGHOAIC>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IAGNPGHOAIC>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IAGNPGHOAIC>_Clear__);
                    /* try { // try from 035559c8 to 03655f63 has its CatchHandler @ 035559c8
                       catch() { ... } // from try @ 035559c8 with catch @ 035559c8
                       catch() { ... } // from try @ 03557bd0 with catch @ 035559c8
                       catch() { ... } // from try @ 03557f70 with catch @ 035559c8
                       catch() { ... } // from try @ 03558074 with catch @ 035559c8 */
    FUN_01bab630(&Method_System_Collections_Generic_List<IAGNPGHOAIC>_GetEnumerator__);
    DAT_045682c6 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  if ((CLFCKIFNGHA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  obj = CLFCKIFNGHA_TypeInfo->static_fields->FIDBAGOJPKB;
  local_34[0] = false;
  System_Threading_Monitor__Enter((Il2CppObject *)obj,local_34,(MethodInfo *)0x0);
  if ((CLFCKIFNGHA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = CLFCKIFNGHA_TypeInfo->static_fields->FIDBAGOJPKB;
  if (pSVar2 == (System_Collections_Generic_List_IAGNPGHOAIC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_78,(System_Collections_Generic_List_object__o *)pSVar2,
             Method_System_Collections_Generic_List<IAGNPGHOAIC>_GetEnumerator__);
  local_60.fields._index = local_78.fields._index;
  local_60.fields._version = local_78.fields._version;
  local_60.fields._list = local_78.fields._list;
  local_60.fields._current = local_78.fields._current;
  while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                           (&local_60,
                            Method_System_Collections_Generic_List_Enumerator<IAGNPGHOAIC>_MoveNext__
                           ), bVar1) {
    if ((IAGNPGHOAIC_o *)local_60.fields._current == (IAGNPGHOAIC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    IAGNPGHOAIC__BMMOAFKFHNN((IAGNPGHOAIC_o *)local_60.fields._current,true,(MethodInfo *)0x0);
  }
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_60,Method_System_Collections_Generic_List_Enumerator<IAGNPGHOAIC>_Dispose__);
  if ((CLFCKIFNGHA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = CLFCKIFNGHA_TypeInfo->static_fields->FIDBAGOJPKB;
  if (pSVar2 == (System_Collections_Generic_List_IAGNPGHOAIC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  length = (pSVar2->fields)._size;
  (pSVar2->fields)._size = 0;
  (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
  if (0 < length) {
    System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
  }
  if (local_34[0] != false) {
    System_Threading_Monitor__Exit((Il2CppObject *)obj,(MethodInfo *)0x0);
  }
  if ((CLFCKIFNGHA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           CLFCKIFNGHA_TypeInfo->static_fields->FJONCCJJCBP;
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__Clear
              (__this,Method_System_Collections_Generic_Dictionary<string,_IAGNPGHOAIC>_Clear__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

