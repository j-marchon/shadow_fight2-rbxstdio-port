// FCJBEKHDLAF$$EOBCLPDGJPO @ RVA 0x33EE08C

void FCJBEKHDLAF__EOBCLPDGJPO(FCJBEKHDLAF_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_string__o *HAHKBGCBHCL;
  System_Collections_Generic_List_string__o *NPJBOAPCHCH;
  System_String_o *pSVar2;
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP;
  MethodInfo *extraout_x1;
  MethodInfo *in_x3;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
                    /* catch() { ... } // from try @ 034ee068 with catch @ 034ee094 */
                    /* try { // try from 034ee0a4 to 035ee0ab has its CatchHandler @ 034ee0c0 */
                    /* try { // try from 034ee0ac to 035ee0b7 has its CatchHandler @ 034ede50 */
                    /* try { // try from 034ee0b8 to 035ee0bf has its CatchHandler @ 034ee0c0 */
                    /* catch() { ... } // from try @ 034ee03c with catch @ 034ee0c0
                       catch() { ... } // from try @ 034ee0a4 with catch @ 034ee0c0
                       catch() { ... } // from try @ 034ee0b8 with catch @ 034ee0c0 */
  if ((DAT_04567ee9 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
                    /* try { // try from 034ee0d4 to 035ee39b has its CatchHandler @ 034ee0d4
                       catch() { ... } // from try @ 034ee0d4 with catch @ 034ee0d4
                       catch() { ... } // from try @ 034ee69c with catch @ 034ee0d4
                       catch() { ... } // from try @ 034ee6cc with catch @ 034ee0d4
                       catch() { ... } // from try @ 034ee824 with catch @ 034ee0d4
                       catch() { ... } // from try @ 034ee834 with catch @ 034ee0d4
                       catch() { ... } // from try @ 034ee878 with catch @ 034ee0d4
                       catch() { ... } // from try @ 034ee94c with catch @ 034ee0d4 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&StringLiteral_2113);
    FUN_01bab630(&StringLiteral_99);
    FUN_01bab630(&StringLiteral_12171);
    FUN_01bab630(&StringLiteral_234);
    DAT_04567ee9 = 1;
    method = extraout_x1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  HAHKBGCBHCL = (System_Collections_Generic_List_string__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)HAHKBGCBHCL,
             Method_System_Collections_Generic_List<string>__ctor__);
  NPJBOAPCHCH = (System_Collections_Generic_List_string__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)NPJBOAPCHCH,
             Method_System_Collections_Generic_List<string>__ctor__);
  FCJBEKHDLAF__OGCMJELFHAN(__this,HAHKBGCBHCL,NPJBOAPCHCH,in_x3);
  pSVar2 = StringLiteral_12171;
  if (HAHKBGCBHCL != (System_Collections_Generic_List_string__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_98,(System_Collections_Generic_List_object__o *)HAHKBGCBHCL,
               Method_System_Collections_Generic_List<string>_GetEnumerator__);
    local_80.fields._index = local_98.fields._index;
    local_80.fields._version = local_98.fields._version;
    local_80.fields._list = local_98.fields._list;
    local_80.fields._current = local_98.fields._current;
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_80,
                              Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__),
          bVar1) {
      pSVar2 = System_String__Concat
                         (pSVar2,StringLiteral_234,(System_String_o *)local_80.fields._current,
                          StringLiteral_2113,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_80,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    pSVar2 = System_String__Concat(pSVar2,StringLiteral_99,(MethodInfo *)0x0);
    if (NPJBOAPCHCH != (System_Collections_Generic_List_string__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_98,(System_Collections_Generic_List_object__o *)NPJBOAPCHCH,
                 Method_System_Collections_Generic_List<string>_GetEnumerator__);
      local_80.fields._index = local_98.fields._index;
      local_80.fields._version = local_98.fields._version;
      local_80.fields._list = local_98.fields._list;
      local_80.fields._current = local_98.fields._current;
      while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_80,
                                Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__
                               ), bVar1) {
        pSVar2 = System_String__Concat
                           (pSVar2,StringLiteral_234,(System_String_o *)local_80.fields._current,
                            StringLiteral_2113,(MethodInfo *)0x0);
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
      BBBLOLJAMJP = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                    FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
      if (BBBLOLJAMJP != (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
        if ((int)BBBLOLJAMJP->max_length != 0) {
          BBBLOLJAMJP->m_Items[0] = 2;
          Nekki_Utils_DetailedLog__Log(pSVar2,BBBLOLJAMJP,(MethodInfo *)0x0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

