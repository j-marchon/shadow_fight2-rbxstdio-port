// AJPFDGPLELD$$EPBENPDCBFE @ RVA 0x338B1C4

bool AJPFDGPLELD__EPBENPDCBFE
               (AJPFDGPLELD_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,
               System_Collections_Generic_List_string__o *FPEHEJBLCAO,MethodInfo *method)

{
  Il2CppObject *__this_00;
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int32_t iVar4;
  int32_t iVar5;
  OLKKAIFGGAK_o *__this_01;
  System_Collections_Generic_List_JADGCGOJLJB__o *__this_02;
  System_String_o *pSVar6;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04567bd9 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JADGCGOJLJB>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JADGCGOJLJB>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JADGCGOJLJB>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JADGCGOJLJB>_GetEnumerator__);
    FUN_01bab630(&StringLiteral_1);
    DAT_04567bd9 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  __this_01 = ILGLOCBJFEG__EMHAFDFJFIA((ILGLOCBJFEG_o *)__this,BCKBBGCOMJD,(MethodInfo *)0x0);
  if (BCKBBGCOMJD == (OLKKAIFGGAK_o *)0x0) {
    return false;
  }
  if (__this_01 != (OLKKAIFGGAK_o *)0x0) {
    __this_02 = OLKKAIFGGAK__LKACBDNEJON(__this_01,(MethodInfo *)0x0);
    iVar4 = JADGCGOJLJB__PKKPCLFNEDC((__this->fields).OBMADELOAPG,(MethodInfo *)0x0);
    pSVar6 = (__this->fields).ECFLPECDPML;
    if ((pSVar6 != (System_String_o *)0x0) &&
       (bVar2 = System_String__Equals(pSVar6,StringLiteral_1,(MethodInfo *)0x0),
       __this_02 != (System_Collections_Generic_List_JADGCGOJLJB__o *)0x0)) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_88,(System_Collections_Generic_List_object__o *)__this_02,
                 Method_System_Collections_Generic_List<JADGCGOJLJB>_GetEnumerator__);
      local_70.fields._index = local_88.fields._index;
      local_70.fields._version = local_88.fields._version;
      local_70.fields._list = local_88.fields._list;
      local_70.fields._current = local_88.fields._current;
      bVar1 = iVar4 == 0;
      do {
        bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_70,
                           Method_System_Collections_Generic_List_Enumerator<JADGCGOJLJB>_MoveNext__
                          );
        __this_00 = local_70.fields._current;
        if (!bVar3) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_70,
                     Method_System_Collections_Generic_List_Enumerator<JADGCGOJLJB>_Dispose__);
          return (bool)(bVar1 & bVar2);
        }
        if (bVar2 == false) {
          if ((JADGCGOJLJB_o *)local_70.fields._current == (JADGCGOJLJB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar6 = (__this->fields).ECFLPECDPML;
          if (pSVar6 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          bVar2 = System_String__Equals
                            (pSVar6,((JADGCGOJLJB_Fields *)((long)local_70.fields._current + 0x10))
                                    ->JIJLBFGKNJK,(MethodInfo *)0x0);
        }
        else {
          bVar2 = true;
        }
        bVar3 = !bVar1;
        bVar1 = true;
        if (bVar3) {
          if ((JADGCGOJLJB_o *)__this_00 == (JADGCGOJLJB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          iVar5 = JADGCGOJLJB__NHGGBEACKBD((JADGCGOJLJB_o *)__this_00,(MethodInfo *)0x0);
          bVar1 = iVar4 == iVar5;
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

