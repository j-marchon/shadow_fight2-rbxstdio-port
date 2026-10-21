// PNHGEFAOFFE$$LMIACIOFGEC @ RVA 0x31804BC

void PNHGEFAOFFE__LMIACIOFGEC(PNHGEFAOFFE_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  DOPEEDABNEK_o *pDVar3;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
                    /* catch() { ... } // from try @ 0327fa34 with catch @ 032804cc
                       try { // try from 032804cc to 033804e7 has its CatchHandler @ 0327dc98 */
                    /* catch() { ... } // from try @ 0327f9d8 with catch @ 032804d0 */
  if ((DAT_045669b9 & 1) == 0) {
                    /* try { // try from 032804e8 to 033804eb has its CatchHandler @ 03280500 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
                    /* catch() { ... } // from try @ 032804e8 with catch @ 03280500 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045669b9 = 1;
    method = extraout_x1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
                    /* try { // try from 03280540 to 03380567 has its CatchHandler @ 0328057c */
  if (DAT_04563eaa == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04563eaa = '\x01';
    method = extraout_x1_01;
  }
                    /* try { // try from 03280568 to 03380573 has its CatchHandler @ 0327dc98 */
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
                    /* try { // try from 03280574 to 0338057b has its CatchHandler @ 0328057c */
  pDVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
                    /* catch() { ... } // from try @ 032803f0 with catch @ 0328057c
                       catch() { ... } // from try @ 03280498 with catch @ 0328057c
                       catch() { ... } // from try @ 03280540 with catch @ 0328057c
                       catch() { ... } // from try @ 03280574 with catch @ 0328057c */
  if ((pDVar3 != (DOPEEDABNEK_o *)0x0) &&
     (pSVar2 = (pDVar3->fields).FDLFEJAEDGA,
     pSVar2 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_78,(System_Collections_Generic_List_object__o *)pSVar2,
               Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
    local_60.fields._index = local_78.fields._index;
    local_60.fields._version = local_78.fields._version;
    local_60.fields._list = local_78.fields._list;
    local_60.fields._current = local_78.fields._current;
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_60,
                              Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__
                             ), bVar1) {
      if ((HOOAAGABMBL_o *)local_60.fields._current == (HOOAAGABMBL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      HOOAAGABMBL__PLEDBFHJLCN((HOOAAGABMBL_o *)local_60.fields._current,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_60,Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04563eaa == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04563eaa = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pDVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
    if ((pDVar3 != (DOPEEDABNEK_o *)0x0) &&
       (pSVar2 = (pDVar3->fields)._MOCBNLFMNAL_k__BackingField,
       pSVar2 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0)) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_78,(System_Collections_Generic_List_object__o *)pSVar2,
                 Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
      local_60.fields._index = local_78.fields._index;
      local_60.fields._version = local_78.fields._version;
      local_60.fields._list = local_78.fields._list;
      local_60.fields._current = local_78.fields._current;
      while( true ) {
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_60,
                           Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__
                          );
        if (!bVar1) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_60,
                     Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
          return;
        }
        if ((HOOAAGABMBL_o *)local_60.fields._current == (HOOAAGABMBL_o *)0x0) break;
        HOOAAGABMBL__PLEDBFHJLCN((HOOAAGABMBL_o *)local_60.fields._current,(MethodInfo *)0x0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

