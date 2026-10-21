// BEPJMNAHCAD$$BDHAMOEKNNK @ RVA 0x318A734

void BEPJMNAHCAD__BDHAMOEKNNK(BEPJMNAHCAD_o *__this,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  int32_t iVar3;
  System_Collections_Generic_List_OLKKAIFGGAK__o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04566a07 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_GetEnumerator__);
    DAT_04566a07 = 1;
    method = extraout_x1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if ((__this->fields).FDGNLPLKNGK != false) {
    __this_00 = (__this->fields).EHJHKEEDKBE;
    if (__this_00 == (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<OLKKAIFGGAK>_GetEnumerator__);
    bVar1 = true;
    while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_48,
                              Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_MoveNext__
                             ), bVar2) {
      if ((OLKKAIFGGAK_o *)local_48.fields._current == (OLKKAIFGGAK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      iVar3 = OLKKAIFGGAK__MKIHMHHJLHE((OLKKAIFGGAK_o *)local_48.fields._current,(MethodInfo *)0x0);
      bVar1 = (bool)(bVar1 & iVar3 != -1);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_48,Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_Dispose__);
    method = method_00;
    if (bVar1) {
      BEPJMNAHCAD__LCBBHACMOJN(__this,method_00);
      (__this->fields).FDGNLPLKNGK = false;
      method = extraout_x1_00;
    }
  }
  if ((__this->fields).LDPMIHNLHFE != false) {
    BEPJMNAHCAD__OPDIEGGCJAL(__this,method);
    BEPJMNAHCAD__IPDEBHOMAIB(__this,method_01);
    BEPJMNAHCAD__BHKGCFAMPHL(__this,method_02);
    BEPJMNAHCAD__FIJNILNOFCD(__this,method_03);
    BEPJMNAHCAD__DPDGNBFJJNC(__this,method_04);
    BEPJMNAHCAD__JIIGHMEMOLL(__this,method_05);
  }
  return;
}

