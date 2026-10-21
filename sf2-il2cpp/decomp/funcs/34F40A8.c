// OLKKAIFGGAK$$MHMMBGEMILM @ RVA 0x34F40A8

bool OLKKAIFGGAK__MHMMBGEMILM(OLKKAIFGGAK_o *__this,int32_t PMACBPAMPJA,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_int__o *__this_00;
  PJKHAJKEHEL_o *pPVar2;
  int iVar3;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  undefined1 local_50 [16];
  undefined8 local_40;
  
  if ((DAT_045687c6 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<int>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<int>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<int>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_get_Count__);
    DAT_045687c6 = 1;
  }
  local_50._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_50._8_4_ = 0;
  local_50._12_4_ = 0;
  local_40._0_4_ = 0;
  local_40._4_4_ = 0;
  pPVar2 = (__this->fields).FAPMJJBOFEF;
  if ((pPVar2 == (PJKHAJKEHEL_o *)0x0) ||
     (__this_00 = (pPVar2->fields).FNOAACNPIBD,
     __this_00 == (System_Collections_Generic_List_int__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((__this_00->fields)._size == 0) {
    bVar1 = true;
  }
  else {
    System_Collections_Generic_List<int>__GetEnumerator
              (&local_68,__this_00,Method_System_Collections_Generic_List<int>_GetEnumerator__);
    local_50._8_4_ = local_68.fields._index;
    local_50._12_4_ = local_68.fields._version;
    local_50._0_8_ = local_68.fields._list;
    local_40 = local_68.fields._current;
    do {
      bVar1 = System_Collections_Generic_List_Enumerator<int>__MoveNext
                        ((System_Collections_Generic_List_Enumerator_int__o *)local_50,
                         Method_System_Collections_Generic_List_Enumerator<int>_MoveNext__);
      if (!bVar1) {
        iVar3 = 6;
        goto LAB_035f4198;
      }
    } while ((int32_t)local_40 != PMACBPAMPJA);
    iVar3 = 5;
LAB_035f4198:
    System_Collections_Generic_List_Enumerator<int>__Dispose
              ((System_Collections_Generic_List_Enumerator_int__o *)local_50,
               Method_System_Collections_Generic_List_Enumerator<int>_Dispose__);
    bVar1 = bVar1 && iVar3 == 5;
  }
  return bVar1;
}

