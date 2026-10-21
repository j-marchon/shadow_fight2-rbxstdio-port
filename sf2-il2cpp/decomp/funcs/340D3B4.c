// MGNPHCAAEIO$$DDHNCKDHKAC @ RVA 0x340D3B4

/* WARNING: Removing unreachable block (ram,0x0350d5c4) */

PJKHAJKEHEL_o *
MGNPHCAAEIO__DDHNCKDHKAC
          (System_Collections_Generic_List_PJKHAJKEHEL__o *OKBIKHHKOEN,MethodInfo *method)

{
  Il2CppObject *JMCEAKJCJLH;
  bool bVar1;
  NLPJLHOEAOE_o *__this;
  System_Collections_Generic_List_PJKHAJKEHEL__o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  PJKHAJKEHEL_o *OKBIKHHKOEN_00;
  uint uVar2;
  undefined1 auVar3 [16];
  System_Collections_Generic_List_Enumerator_T__o local_a8;
  System_Collections_Generic_List_Enumerator_T__o local_90;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  auVar3._8_8_ = method;
  auVar3._0_8_ = OKBIKHHKOEN;
                    /* try { // try from 0350d3d8 to 0360d3e7 has its CatchHandler @ 0350d3e8 */
  if ((DAT_04568053 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PJKHAJKEHEL>_Dispose__);
                    /* catch() { ... } // from try @ 0350d338 with catch @ 0350d3e8
                       catch() { ... } // from try @ 0350d3d8 with catch @ 0350d3e8 */
                    /* try { // try from 0350d3ec to 0360d3ef has its CatchHandler @ 0350d3f8 */
                    /* try { // try from 0350d3f0 to 0360d3fb has its CatchHandler @ 0350d1b4 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PJKHAJKEHEL>_MoveNext__);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0350d3ec with catch @ 0350d3f8
                        */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PJKHAJKEHEL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PJKHAJKEHEL>_GetEnumerator__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    auVar3 = FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568053 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  local_90.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_90.fields._index = 0;
  local_90.fields._version = 0;
  local_90.fields._current = (Il2CppObject *)0x0;
  if (OKBIKHHKOEN == (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(auVar3._0_8_,auVar3._8_8_);
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_a8,(System_Collections_Generic_List_object__o *)OKBIKHHKOEN,
             Method_System_Collections_Generic_List<PJKHAJKEHEL>_GetEnumerator__);
  local_70.fields._index = local_a8.fields._index;
  local_70.fields._version = local_a8.fields._version;
  local_70.fields._list = local_a8.fields._list;
  local_70.fields._current = local_a8.fields._current;
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_70,
                       Method_System_Collections_Generic_List_Enumerator<PJKHAJKEHEL>_MoveNext__);
    JMCEAKJCJLH = local_70.fields._current;
    if (!bVar1) {
      OKBIKHHKOEN_00 = (PJKHAJKEHEL_o *)0x0;
      break;
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
    if ((PJKHAJKEHEL_o *)JMCEAKJCJLH == (PJKHAJKEHEL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (__this == (NLPJLHOEAOE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_00 = NLPJLHOEAOE__GINBGECFLHA
                          (__this,(PJKHAJKEHEL_o *)JMCEAKJCJLH,
                           ((PJKHAJKEHEL_Fields *)((long)JMCEAKJCJLH + 0x10))->MGDHGEHGKBA,
                           (MethodInfo *)0x0);
    if (__this_00 == (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_a8,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<PJKHAJKEHEL>_GetEnumerator__);
    local_90.fields._index = local_a8.fields._index;
    local_90.fields._version = local_a8.fields._version;
    local_90.fields._list = local_a8.fields._list;
    local_90.fields._current = local_a8.fields._current;
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_90,
                       Method_System_Collections_Generic_List_Enumerator<PJKHAJKEHEL>_MoveNext__);
    OKBIKHHKOEN_00 = (PJKHAJKEHEL_o *)local_90.fields._current;
    if (bVar1) {
      method_00 = extraout_x1;
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        method_00 = extraout_x1_00;
      }
      MGNPHCAAEIO__JPFEMNNELIF(OKBIKHHKOEN_00,method_00);
      uVar2 = 6;
    }
    else {
      OKBIKHHKOEN_00 = (PJKHAJKEHEL_o *)0x0;
      uVar2 = 2;
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_90,Method_System_Collections_Generic_List_Enumerator<PJKHAJKEHEL>_Dispose__);
  } while ((uVar2 | 2) == 2);
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_70,Method_System_Collections_Generic_List_Enumerator<PJKHAJKEHEL>_Dispose__);
                    /* try { // try from 0350d5a4 to 0360d60b has its CatchHandler @ 0350d5a4
                       catch() { ... } // from try @ 0350d5a4 with catch @ 0350d5a4
                       catch() { ... } // from try @ 0350d770 with catch @ 0350d5a4
                       catch() { ... } // from try @ 0350d7d4 with catch @ 0350d5a4
                       catch() { ... } // from try @ 0350d834 with catch @ 0350d5a4 */
  return OKBIKHHKOEN_00;
}

