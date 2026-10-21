// FCJBEKHDLAF$$IKEKOOPINOH @ RVA 0x33F2BA0

void FCJBEKHDLAF__IKEKOOPINOH(FCJBEKHDLAF_o *__this,bool CENHOMONJPG,MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *__this_00;
  bool bVar2;
  System_Collections_Generic_List_OLKKAIFGGAK__o *__this_01;
  float PMNEDONNDLF;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04567f24 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_GetEnumerator__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04567f24 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  __this_01 = (__this->fields).IILLHHPGGKA;
  if (__this_01 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_78,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<OLKKAIFGGAK>_GetEnumerator__);
    local_60.fields._index = local_78.fields._index;
    local_60.fields._version = local_78.fields._version;
    local_60.fields._list = local_78.fields._list;
    local_60.fields._current = local_78.fields._current;
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_60,
                         Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_MoveNext__);
      __this_00 = local_60.fields._current;
      if (!bVar2) {
                    /* try { // try from 034f2cc8 to 035f2ccf has its CatchHandler @ 034f2e68 */
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_60,
                   Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_Dispose__);
                    /* try { // try from 034f2ce8 to 035f2cef has its CatchHandler @ 034f2e54 */
        return;
      }
      uVar1 = (MGNPHCAAEIO_TypeInfo->_2).cctor_finished;
      if (CENHOMONJPG) {
        if (uVar1 == 0) {
          thunk_FUN_01ba7564();
        }
        PMNEDONNDLF = (float)MGNPHCAAEIO_TypeInfo->static_fields->PBJPEIOLHPG;
      }
      else {
        if (uVar1 == 0) {
          thunk_FUN_01ba7564();
        }
        PMNEDONNDLF = 1.0 / (float)MGNPHCAAEIO_TypeInfo->static_fields->PBJPEIOLHPG;
      }
      if ((OLKKAIFGGAK_o *)__this_00 == (OLKKAIFGGAK_o *)0x0) break;
      OLKKAIFGGAK__FGKNGBKIKFG((OLKKAIFGGAK_o *)__this_00,PMNEDONNDLF,(MethodInfo *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

