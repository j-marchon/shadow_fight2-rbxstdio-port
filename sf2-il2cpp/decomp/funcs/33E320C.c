// FCJBEKHDLAF$$PKCCGFBBOFM @ RVA 0x33E320C

void FCJBEKHDLAF__PKCCGFBBOFM(FCJBEKHDLAF_o *__this,MethodInfo *method)

{
  int32_t length;
  bool bVar1;
  System_Collections_Generic_List_OLKKAIFGGAK__o *pSVar2;
  MethodInfo *in_x2;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
                    /* try { // try from 034e3210 to 035e32ef has its CatchHandler @ 034e3210
                       catch() { ... } // from try @ 034e3210 with catch @ 034e3210
                       catch() { ... } // from try @ 034e3444 with catch @ 034e3210
                       catch() { ... } // from try @ 034e347c with catch @ 034e3210
                       catch() { ... } // from try @ 034e34a0 with catch @ 034e3210
                       catch() { ... } // from try @ 034e34f4 with catch @ 034e3210
                       catch() { ... } // from try @ 034e352c with catch @ 034e3210 */
  if ((DAT_04567efc & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_GetEnumerator__);
    DAT_04567efc = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  pSVar2 = (__this->fields).NCPKMPACJNP;
  if (pSVar2 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)pSVar2,
               Method_System_Collections_Generic_List<OLKKAIFGGAK>_GetEnumerator__);
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_38,
                              Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_MoveNext__
                             ), bVar1) {
      FCJBEKHDLAF__CABNLDNOLDM(__this,(OLKKAIFGGAK_o *)local_38.fields._current,in_x2);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_38,Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_Dispose__);
    pSVar2 = (__this->fields).NCPKMPACJNP;
    if (pSVar2 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
      length = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
      if (0 < length) {
                    /* try { // try from 034e32f0 to 035e32f7 has its CatchHandler @ 034e34d8 */
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

