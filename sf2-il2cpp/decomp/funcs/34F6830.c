// OLKKAIFGGAK$$JGGLGGPAOMF @ RVA 0x34F6830

OLKKAIFGGAK_o * OLKKAIFGGAK__JGGLGGPAOMF(OLKKAIFGGAK_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  GBJGJEGPHKD_o *pGVar3;
  IEFEBEDLHNN_o *pIVar4;
  System_Collections_Generic_List_OLKKAIFGGAK__o *__this_00;
  CNDPAJOLKFN_o *pCVar5;
  OLKKAIFGGAK_o *pOVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_045687e4 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_GetEnumerator__);
    DAT_045687e4 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  pGVar3 = (__this->fields).HMIAFJALFCJ;
  if ((((pGVar3 == (GBJGJEGPHKD_o *)0x0) ||
       (pIVar4 = GBJGJEGPHKD__ILECMJOENMK(pGVar3,(MethodInfo *)0x0), pIVar4 == (IEFEBEDLHNN_o *)0x0)
       ) || (pCVar5 = (pIVar4->fields).CNMHHKAMGPI, pCVar5 == (CNDPAJOLKFN_o *)0x0)) ||
     (__this_00 = (__this->fields).BGODEHNIMGC,
     __this_00 == (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  fVar9 = (pCVar5->fields).super.OHHDBINAJCB;
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_78,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<OLKKAIFGGAK>_GetEnumerator__);
  local_60.fields._index = local_78.fields._index;
  local_60.fields._version = local_78.fields._version;
  local_60.fields._list = local_78.fields._list;
  local_60.fields._current = local_78.fields._current;
  fVar7 = 3.4028235e+38;
  pOVar6 = (OLKKAIFGGAK_o *)0x0;
  while( true ) {
    bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_60,
                       Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_MoveNext__);
    pIVar1 = local_60.fields._current;
    if (!bVar2) {
                    /* try { // try from 035f6954 to 036f6a63 has its CatchHandler @ 035f6954
                       catch() { ... } // from try @ 035f6954 with catch @ 035f6954
                       catch() { ... } // from try @ 035f6bb0 with catch @ 035f6954
                       catch() { ... } // from try @ 035f6bf0 with catch @ 035f6954
                       catch() { ... } // from try @ 035f6c50 with catch @ 035f6954
                       catch() { ... } // from try @ 035f6c98 with catch @ 035f6954
                       catch() { ... } // from try @ 035f6cc8 with catch @ 035f6954 */
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_60,Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_Dispose__)
      ;
      return pOVar6;
    }
    if ((OLKKAIFGGAK_o *)local_60.fields._current == (OLKKAIFGGAK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pGVar3 = ((OLKKAIFGGAK_Fields *)((long)local_60.fields._current + 0x10))->HMIAFJALFCJ;
    if (pGVar3 == (GBJGJEGPHKD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pIVar4 = GBJGJEGPHKD__ILECMJOENMK(pGVar3,(MethodInfo *)0x0);
    if (pIVar4 == (IEFEBEDLHNN_o *)0x0) break;
    pCVar5 = (pIVar4->fields).CNMHHKAMGPI;
    if (pCVar5 == (CNDPAJOLKFN_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    fVar8 = fVar9 - (pCVar5->fields).super.OHHDBINAJCB;
    if (fVar8 < fVar7) {
      fVar7 = fVar8;
      pOVar6 = (OLKKAIFGGAK_o *)pIVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

