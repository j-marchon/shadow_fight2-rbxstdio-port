// Nekki.SF2.GUI.Map.MapScene$$FNOPCFKAOEF @ RVA 0x3585384

/* WARNING: Removing unreachable block (ram,0x036855cc) */

void Nekki_SF2_GUI_Map_MapScene__FNOPCFKAOEF
               (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_MEJIKMPNBNL__o *pSVar2;
  MEJIKMPNBNL_o *__this_00;
  AFFHKININGD_o *__this_01;
  System_Collections_Generic_List_object__o *__this_02;
  Il2CppObject *pIVar3;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_MEJIKMPNBNL__o **ppSVar4;
  System_Collections_Generic_List_Enumerator_T__o local_b8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04568cfb & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MEJIKMPNBNL>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MEJIKMPNBNL>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NIAFDKHDBMA>_get_Item__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568cfb = 1;
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
  pSVar2 = NLPJLHOEAOE__CJNJOLEKIIK((MethodInfo *)0x0);
  ppSVar4 = &(__this->fields).JFANFALIFFE;
  *ppSVar4 = pSVar2;
  thunk_FUN_01c20e04(ppSVar4,pSVar2);
  if (*ppSVar4 != (System_Collections_Generic_List_MEJIKMPNBNL__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_b8,(System_Collections_Generic_List_object__o *)*ppSVar4,
               Method_System_Collections_Generic_List<MEJIKMPNBNL>_GetEnumerator__);
    local_80.fields._index = local_b8.fields._index;
    local_80.fields._version = local_b8.fields._version;
    local_80.fields._list = local_b8.fields._list;
    local_80.fields._current = local_b8.fields._current;
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_80,
                              Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_MoveNext__
                             ), bVar1) {
      if ((OOMHDDBCBJP_o *)local_80.fields._current == (OOMHDDBCBJP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      __this_00 = ((OOMHDDBCBJP_Fields *)((long)local_80.fields._current + 0x10))->IAJPHAAMKPC;
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
      while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_a0,
                                Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_MoveNext__
                               ), pIVar3 = local_a0.fields._current, bVar1) {
        if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_01 = MGNPHCAAEIO__PHFFPADFANK((OOMHDDBCBJP_o *)pIVar3,(MethodInfo *)0x0);
        if ((__this_01 != (AFFHKININGD_o *)0x0) &&
           (bVar1 = AFFHKININGD__PHEKFMPOHBK(__this_01,(MethodInfo *)0x0), bVar1)) {
          __this_02 = (System_Collections_Generic_List_object__o *)
                      (*(__this_01->klass->vtable)._4_NIKCNPMKAFK.methodPtr)
                                (__this_01,(__this_01->klass->vtable)._4_NIKCNPMKAFK.method);
          if (__this_02 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pIVar3 = System_Collections_Generic_List<object>__get_Item
                             (__this_02,0,
                              Method_System_Collections_Generic_List<NIAFDKHDBMA>_get_Item__);
          if (pIVar3 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pIVar3 = System_Collections_Generic_List<object>__get_Item
                             (__this_02,0,
                              Method_System_Collections_Generic_List<NIAFDKHDBMA>_get_Item__);
          if (pIVar3 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
        }
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_a0,Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__)
      ;
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_80,Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_Dispose__);
    if (*ppSVar4 != (System_Collections_Generic_List_MEJIKMPNBNL__o *)0x0) {
      if (((*ppSVar4)->fields)._size == 0) {
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar2 = NLPJLHOEAOE__LMHNABHIFPK((MethodInfo *)0x0);
        *ppSVar4 = pSVar2;
        thunk_FUN_01c20e04(ppSVar4,pSVar2);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

