// NOMBKAHPOHM$$ADFNKCKEDNP @ RVA 0x32D90B4

void NOMBKAHPOHM__ADFNKCKEDNP(NOMBKAHPOHM_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_00;
  FPPKHNNABAD_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  Il2CppObject *item;
  DOPEEDABNEK_o *pDVar4;
  System_String_o *pSVar5;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_045675a6 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_get_Current__);
                    /* try { // try from 033d9104 to 034d912f has its CatchHandler @ 033d92b4 */
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045675a6 = 1;
    method = extraout_x1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04563eaa == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04563eaa = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 033d9170 to 034d9173 has its CatchHandler @ 033d92a8 */
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
                    /* try { // try from 033d917c to 034d9183 has its CatchHandler @ 033d92a4 */
  pDVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
  if (pDVar4 == (DOPEEDABNEK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 033d927c to 034d927f has its CatchHandler @ 033d92c0 */
    FUN_01bab8c8();
  }
  __this_00 = (pDVar4->fields).FDLFEJAEDGA;
                    /* try { // try from 033d9188 to 034d91eb has its CatchHandler @ 033d92bc */
  if (__this_00 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_68,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
    local_50.fields._index = local_68.fields._index;
    local_50.fields._version = local_68.fields._version;
    local_50.fields._list = local_68.fields._list;
    local_50.fields._current = local_68.fields._current;
    while( true ) {
      bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_50,
                         Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
      lVar2 = Method_System_Collections_Generic_List<string>_Add__;
      if (!bVar3) break;
      if (local_50.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      __this_01 = (__this->fields).NDBPOFMECGL;
      if (__this_01 == (FPPKHNNABAD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* try { // try from 033d91ec to 034d927b has its CatchHandler @ 033d8f0c */
      item = local_50.fields._current[1].monitor;
      pSVar5 = (__this_01->fields)._COIPKAKHDFP_k__BackingField;
      *(int *)((long)&(__this_01->fields)._GPEFIOMJHNN_k__BackingField + 4) =
           *(int *)((long)&(__this_01->fields)._GPEFIOMJHNN_k__BackingField + 4) + 1;
      if (pSVar5 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar1 = *(uint *)&(__this_01->fields)._GPEFIOMJHNN_k__BackingField;
      if (uVar1 < *(uint *)&pSVar5[1].klass) {
        *(uint *)&(__this_01->fields)._GPEFIOMJHNN_k__BackingField = uVar1 + 1;
        (&pSVar5[1].monitor)[(int)uVar1] = item;
        thunk_FUN_01c20e04(&pSVar5[1].monitor + (int)uVar1);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_01,item,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_50,Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
  }
  return;
}

