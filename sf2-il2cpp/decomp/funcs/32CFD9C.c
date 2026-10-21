// PCGLKFBEGCD$$EPBENPDCBFE @ RVA 0x32CFD9C

bool PCGLKFBEGCD__EPBENPDCBFE(PCGLKFBEGCD_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  bool bVar3;
  int32_t iVar4;
  System_Collections_Generic_List_JADGCGOJLJB__o *__this_00;
  byte bVar5;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04567544 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JADGCGOJLJB>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JADGCGOJLJB>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JADGCGOJLJB>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JADGCGOJLJB>_GetEnumerator__);
                    /* try { // try from 033cfdf4 to 034d0037 has its CatchHandler @ 033cfdf4
                       catch() { ... } // from try @ 033cfdf4 with catch @ 033cfdf4
                       catch() { ... } // from try @ 033d01c0 with catch @ 033cfdf4
                       catch() { ... } // from try @ 033d0270 with catch @ 033cfdf4
                       catch() { ... } // from try @ 033d0278 with catch @ 033cfdf4
                       catch() { ... } // from try @ 033d0370 with catch @ 033cfdf4 */
    FUN_01bab630(&StringLiteral_1);
    DAT_04567544 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  if (AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  __this_00 = (AHEFOIOKDOK->fields).GLFJDDHEMNO;
  if (__this_00 == (System_Collections_Generic_List_JADGCGOJLJB__o *)0x0) {
    bVar5 = 0;
  }
  else {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_78,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<JADGCGOJLJB>_GetEnumerator__);
    local_60.fields._index = local_78.fields._index;
    local_60.fields._version = local_78.fields._version;
    local_60.fields._list = local_78.fields._list;
    local_60.fields._current = local_78.fields._current;
LAB_033cfe58:
    do {
      bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_60,
                         Method_System_Collections_Generic_List_Enumerator<JADGCGOJLJB>_MoveNext__);
      pIVar2 = local_60.fields._current;
      if (!bVar3) {
        bVar5 = 0;
        goto LAB_033cfec4;
      }
      iVar1 = (__this->fields).JBNGADJBDHB;
      if (iVar1 != 0) {
        if ((JADGCGOJLJB_o *)local_60.fields._current == (JADGCGOJLJB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        iVar4 = JADGCGOJLJB__NHGGBEACKBD
                          ((JADGCGOJLJB_o *)local_60.fields._current,(MethodInfo *)0x0);
        if (iVar1 != iVar4) goto LAB_033cfe58;
      }
      bVar3 = System_String__op_Equality
                        ((__this->fields).NPFMOEOIEKM,StringLiteral_1,(MethodInfo *)0x0);
      if (bVar3) break;
      if ((JADGCGOJLJB_o *)pIVar2 == (JADGCGOJLJB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar3 = System_String__op_Equality
                        (((JADGCGOJLJB_Fields *)((long)pIVar2 + 0x10))->JIJLBFGKNJK,
                         (__this->fields).NPFMOEOIEKM,(MethodInfo *)0x0);
    } while (!bVar3);
    bVar5 = 1;
LAB_033cfec4:
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_60,Method_System_Collections_Generic_List_Enumerator<JADGCGOJLJB>_Dispose__);
  }
  return (bool)(bVar5 ^ (__this->fields).super.GBBHFPBFOPI != false);
}

