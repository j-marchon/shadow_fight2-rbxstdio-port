// CJFBGEEIPBA$$NKGMFCALKAM @ RVA 0x3365B34

/* WARNING: Removing unreachable block (ram,0x03465da8) */

OHDDKGHEEPA_o *
CJFBGEEIPBA__NKGMFCALKAM(CJFBGEEIPBA_o *__this,NLFLMJPNOLF_o *AOMBONOOJFP,MethodInfo *method)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  int32_t iVar4;
  System_Collections_Generic_List_MEJIKMPNBNL__o *__this_00;
  MEJIKMPNBNL_o *__this_01;
  OHDDKGHEEPA_o *pOVar5;
  int iVar6;
  System_Collections_Generic_List_Enumerator_T__o local_a8;
  System_Collections_Generic_List_Enumerator_T__o local_90;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04567ab7 & 1) == 0) {
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
    DAT_04567ab7 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  local_90.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_90.fields._index = 0;
  local_90.fields._version = 0;
  local_90.fields._current = (Il2CppObject *)0x0;
  pOVar5 = (OHDDKGHEEPA_o *)0x0;
  if (AOMBONOOJFP != (NLFLMJPNOLF_o *)0x0) {
    iVar1 = (AOMBONOOJFP->fields).IILCHFKCEEH;
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = NLPJLHOEAOE__CJNJOLEKIIK((MethodInfo *)0x0);
    if (__this_00 == (System_Collections_Generic_List_MEJIKMPNBNL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_a8,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<MEJIKMPNBNL>_GetEnumerator__);
    local_70.fields._index = local_a8.fields._index;
    local_70.fields._version = local_a8.fields._version;
    local_70.fields._list = local_a8.fields._list;
    local_70.fields._current = local_a8.fields._current;
    do {
      bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_70,
                         Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_MoveNext__);
      if (!bVar3) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_70,
                   Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_Dispose__);
        return (OHDDKGHEEPA_o *)0x0;
      }
      if ((OHDDKGHEEPA_o *)local_70.fields._current == (OHDDKGHEEPA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      __this_01 = (((OHDDKGHEEPA_Fields *)((long)local_70.fields._current + 0x10))->super).
                  IAJPHAAMKPC;
      if (__this_01 == (MEJIKMPNBNL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_a8,(System_Collections_Generic_List_object__o *)__this_01,
                 Method_System_Collections_Generic_List<OOMHDDBCBJP>_GetEnumerator__);
      local_90.fields._index = local_a8.fields._index;
      local_90.fields._version = local_a8.fields._version;
      local_90.fields._list = local_a8.fields._list;
      local_90.fields._current = local_a8.fields._current;
      do {
        do {
          bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_90,
                             Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_MoveNext__
                            );
          pOVar5 = (OHDDKGHEEPA_o *)local_90.fields._current;
          if (!bVar3) {
            pOVar5 = (OHDDKGHEEPA_o *)0x0;
            iVar6 = 3;
            goto LAB_03465d10;
          }
        } while ((OHDDKGHEEPA_o *)local_90.fields._current == (OHDDKGHEEPA_o *)0x0);
        bVar2 = (OHDDKGHEEPA_TypeInfo->_2).naturalAligment;
      } while ((((((OHDDKGHEEPA_c *)(local_90.fields._current)->klass)->_2).naturalAligment < bVar2)
               || ((((OHDDKGHEEPA_c *)(local_90.fields._current)->klass)->_2).typeHierarchy
                   [(ulong)bVar2 - 1] != (Il2CppClass *)OHDDKGHEEPA_TypeInfo)) ||
              (iVar4 = OHDDKGHEEPA__DCAKAGILMOF
                                 ((OHDDKGHEEPA_o *)local_90.fields._current,(MethodInfo *)0x0),
              iVar4 != iVar1));
      iVar6 = 7;
LAB_03465d10:
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_90,Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__)
      ;
    } while ((iVar6 == 3) || (iVar6 == 0));
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_70,Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_Dispose__);
  }
  return pOVar5;
}

