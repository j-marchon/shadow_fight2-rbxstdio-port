// NHBBOEHHEKG$$NDNPGAKJLHM @ RVA 0x3056A10

void NHBBOEHHEKG__NDNPGAKJLHM(NHBBOEHHEKG_o *__this,MethodInfo *method)

{
  int32_t length;
  bool bVar1;
  System_Collections_Generic_List_MEHKKHFBNLM__o *pSVar2;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04565e6a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEHKKHFBNLM>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEHKKHFBNLM>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEHKKHFBNLM>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MEHKKHFBNLM>_Clear__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031569d4 with catch @ 03156a64
                       try { // try from 03156a64 to 03256a8f has its CatchHandler @ 03156894 */
    FUN_01bab630(&Method_System_Collections_Generic_List<MEHKKHFBNLM>_GetEnumerator__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031569cc with catch @ 03156a68
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031569b4 with catch @ 03156a6c
                        */
    DAT_04565e6a = 1;
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031569a8 with catch @ 03156a70
                        */
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03156990 with catch @ 03156a74
                        */
  local_38.fields._current = (Il2CppObject *)0x0;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031569f8 with catch @ 03156a78
                        */
  pSVar2 = (__this->fields).JDLKPFCELNF;
  if (pSVar2 != (System_Collections_Generic_List_MEHKKHFBNLM__o *)0x0) {
                    /* try { // try from 03156a90 to 03256aa7 has its CatchHandler @ 03156be8 */
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)pSVar2,
               Method_System_Collections_Generic_List<MEHKKHFBNLM>_GetEnumerator__);
                    /* try { // try from 03156aa8 to 03256bd7 has its CatchHandler @ 03156894 */
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_38,
                              Method_System_Collections_Generic_List_Enumerator<MEHKKHFBNLM>_MoveNext__
                             ), bVar1) {
      if ((MEHKKHFBNLM_o *)local_38.fields._current == (MEHKKHFBNLM_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      MEHKKHFBNLM__JODGPLBHHIA((MEHKKHFBNLM_o *)local_38.fields._current,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_38,Method_System_Collections_Generic_List_Enumerator<MEHKKHFBNLM>_Dispose__);
    pSVar2 = (__this->fields).JDLKPFCELNF;
    if (pSVar2 != (System_Collections_Generic_List_MEHKKHFBNLM__o *)0x0) {
      length = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

