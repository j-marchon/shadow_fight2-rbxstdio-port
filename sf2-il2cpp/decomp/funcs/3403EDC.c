// MGNPHCAAEIO$$NKGMFCALKAM @ RVA 0x3403EDC

/* WARNING: Removing unreachable block (ram,0x0350419c) */

OHDDKGHEEPA_o * MGNPHCAAEIO__NKGMFCALKAM(int32_t OILECKFDMDB,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  int32_t iVar3;
  System_Collections_Generic_List_MEJIKMPNBNL__o *__this;
  MEJIKMPNBNL_o *__this_00;
  MethodInfo *extraout_x1;
  OHDDKGHEEPA_o *__this_01;
  int iVar4;
  System_Collections_Generic_List_Enumerator_T__o local_b8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04568050 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MEJIKMPNBNL>_GetEnumerator__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&OHDDKGHEEPA_TypeInfo);
    DAT_04568050 = 1;
    method = extraout_x1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  __this = NLPJLHOEAOE__CJNJOLEKIIK((MethodInfo *)0x0);
  if (__this == (System_Collections_Generic_List_MEJIKMPNBNL__o *)0x0) {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this = NLPJLHOEAOE__LMHNABHIFPK((MethodInfo *)0x0);
    if (__this == (System_Collections_Generic_List_MEJIKMPNBNL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_b8,(System_Collections_Generic_List_object__o *)__this,
             Method_System_Collections_Generic_List<MEJIKMPNBNL>_GetEnumerator__);
  local_80.fields._index = local_b8.fields._index;
  local_80.fields._version = local_b8.fields._version;
  local_80.fields._list = local_b8.fields._list;
  local_80.fields._current = local_b8.fields._current;
  do {
    bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_80,
                       Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_MoveNext__);
    if (!bVar2) {
      __this_01 = (OHDDKGHEEPA_o *)0x0;
      break;
    }
    if ((OHDDKGHEEPA_o *)local_80.fields._current == (OHDDKGHEEPA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_00 = (((OHDDKGHEEPA_Fields *)((long)local_80.fields._current + 0x10))->super).IAJPHAAMKPC
    ;
    if (__this_00 == (MEJIKMPNBNL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_b8,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<OOMHDDBCBJP>_GetEnumerator__);
    local_a0.fields._index = local_b8.fields._index;
    local_a0.fields._version = local_b8.fields._version;
    local_a0.fields._list = local_b8.fields._list;
    local_a0.fields._current = local_b8.fields._current;
    do {
      do {
        bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_a0,
                           Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_MoveNext__
                          );
        __this_01 = (OHDDKGHEEPA_o *)local_a0.fields._current;
        if (!bVar2) {
          __this_01 = (OHDDKGHEEPA_o *)0x0;
          iVar4 = 3;
          goto LAB_035040ec;
        }
        if ((OHDDKGHEEPA_o *)local_a0.fields._current == (OHDDKGHEEPA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        iVar3 = OOMHDDBCBJP__NHGGBEACKBD
                          ((OOMHDDBCBJP_o *)local_a0.fields._current,(MethodInfo *)0x0);
      } while (iVar3 != 0x14);
      bVar1 = (OHDDKGHEEPA_TypeInfo->_2).naturalAligment;
    } while ((((((OHDDKGHEEPA_c *)((Il2CppObject *)__this_01)->klass)->_2).naturalAligment < bVar1)
             || ((((OHDDKGHEEPA_c *)((Il2CppObject *)__this_01)->klass)->_2).typeHierarchy
                 [(ulong)bVar1 - 1] != (Il2CppClass *)OHDDKGHEEPA_TypeInfo)) ||
            (iVar3 = OHDDKGHEEPA__DCAKAGILMOF(__this_01,(MethodInfo *)0x0), iVar3 != OILECKFDMDB));
    iVar4 = 7;
LAB_035040ec:
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_a0,Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__);
  } while ((iVar4 == 3) || (iVar4 == 0));
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_80,Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_Dispose__);
  return __this_01;
}

