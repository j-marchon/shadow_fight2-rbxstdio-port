// PMFNDKKBEKN$$HIGLGIECEJA @ RVA 0x35ABD04

void PMFNDKKBEKN__HIGLGIECEJA(PMFNDKKBEKN_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_AFFHKININGD__o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  MethodInfo *in_x2;
  OLKPEJMEBPJ_o *pOVar2;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04568e56 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AFFHKININGD>_GetEnumerator__);
    DAT_04568e56 = 1;
    method = extraout_x1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  pOVar2 = (__this->fields).super.LFJPDELEIHG;
  if ((pOVar2 != (OLKPEJMEBPJ_o *)0x0) &&
     (((pOVar2->fields).LJNPEJNOIPB == false || ((pOVar2->fields).CHMOBJPGDBN == false)))) {
    PMFNDKKBEKN__EBOMDHHOBDA(__this,method);
    method = extraout_x1_00;
  }
  PMFNDKKBEKN__CHAOFEIDGIE(__this,method);
  PMFNDKKBEKN__IPAAGPCOKKK(__this,method_00);
  __this_00 = (__this->fields).super.HDDNEKLMLMF;
  (__this->fields).HPJIEODKHEH = true;
  if (__this_00 != (System_Collections_Generic_List_AFFHKININGD__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<AFFHKININGD>_GetEnumerator__);
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_38,
                              Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_MoveNext__
                             ), bVar1) {
      PMFNDKKBEKN__FICPLENMNCF(__this,(AFFHKININGD_o *)local_38.fields._current,in_x2);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_38,Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

