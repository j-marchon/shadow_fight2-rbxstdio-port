// MGNPHCAAEIO$$MJDCGINJMOP @ RVA 0x3403B78

CNLGMNIEGFG_o * MGNPHCAAEIO__MJDCGINJMOP(int32_t OILECKFDMDB,bool LPHHIMJHGEF,MethodInfo *method)

{
  int32_t length;
  int iVar1;
  byte bVar2;
  bool bVar3;
  OHDDKGHEEPA_o *__this;
  System_Collections_Generic_List_object__o *__this_00;
  Il2CppClass *pIVar4;
  System_Collections_Generic_List_PJKHAJKEHEL__o *__this_01;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  Il2CppClass *pIVar5;
  CNLGMNIEGFG_o *pCVar6;
  Il2CppObject *pIVar7;
  System_Collections_Generic_List_Enumerator_T__o local_90;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  method_00 = (MethodInfo *)(ulong)LPHHIMJHGEF;
  if ((DAT_04568008 & 1) == 0) {
    FUN_01bab630(&CNLGMNIEGFG_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PJKHAJKEHEL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PJKHAJKEHEL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PJKHAJKEHEL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NHPEALHAHOA>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PJKHAJKEHEL>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AFFHKININGD>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NHPEALHAHOA>_get_Count__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04568008 = 1;
    method_00 = extraout_x1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  local_78.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_78.fields._index = 0;
  local_78.fields._version = 0;
  local_78.fields._current = (Il2CppObject *)0x0;
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method_00 = extraout_x1_00;
  }
  __this = MGNPHCAAEIO__NKGMFCALKAM(OILECKFDMDB,method_00);
  if (__this == (OHDDKGHEEPA_o *)0x0) {
    pCVar6 = (CNLGMNIEGFG_o *)0x0;
  }
  else {
    __this_00 = (System_Collections_Generic_List_object__o *)
                (*(__this->klass->vtable)._10_DHBIECBOKMB.methodPtr)
                          (__this,(__this->klass->vtable)._10_DHBIECBOKMB.method);
    if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
LAB_03503dfc:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_90,__this_00,
               Method_System_Collections_Generic_List<AFFHKININGD>_GetEnumerator__);
    local_60.fields._index = local_90.fields._index;
    local_60.fields._version = local_90.fields._version;
    local_60.fields._list = local_90.fields._list;
    local_60.fields._current = local_90.fields._current;
    do {
      do {
        bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_60,
                           Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_MoveNext__
                          );
        if (!bVar3) {
          pCVar6 = (CNLGMNIEGFG_o *)0x0;
          goto LAB_03503d08;
        }
      } while ((CNLGMNIEGFG_o *)local_60.fields._current == (CNLGMNIEGFG_o *)0x0);
      bVar2 = (CNLGMNIEGFG_TypeInfo->_2).naturalAligment;
    } while (((((CNLGMNIEGFG_c *)(local_60.fields._current)->klass)->_2).naturalAligment < bVar2) ||
            (pCVar6 = (CNLGMNIEGFG_o *)local_60.fields._current,
            (((CNLGMNIEGFG_c *)(local_60.fields._current)->klass)->_2).typeHierarchy
            [(ulong)bVar2 - 1] != (Il2CppClass *)CNLGMNIEGFG_TypeInfo));
LAB_03503d08:
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_60,Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__);
    if ((pCVar6 != (CNLGMNIEGFG_o *)0x0) && (LPHHIMJHGEF)) {
      if ((__this == (OHDDKGHEEPA_o *)0x0) ||
         (pIVar4 = (Il2CppClass *)OHDDKGHEEPA__MHNPMBLALOJ(__this,(MethodInfo *)0x0),
         pIVar4 == (Il2CppClass *)0x0)) goto LAB_03503dfc;
      if (0 < *(int *)&(pIVar4->_1).namespaze) {
        __this_01 = (pCVar6->fields).super.MECHOBPGHFJ;
        if (__this_01 == (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0) goto LAB_03503dfc;
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_78,(System_Collections_Generic_List_object__o *)__this_01,
                   Method_System_Collections_Generic_List<PJKHAJKEHEL>_GetEnumerator__);
        while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_78,
                                  Method_System_Collections_Generic_List_Enumerator<PJKHAJKEHEL>_MoveNext__
                                 ), bVar3) {
          if (local_78.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pIVar7 = local_78.fields._current + 2;
          pIVar5 = pIVar7->klass;
          if (pIVar5 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          length = *(int32_t *)&(pIVar5->_1).namespaze;
          iVar1 = *(int *)((long)&(pIVar5->_1).namespaze + 4);
          *(undefined4 *)&(pIVar5->_1).namespaze = 0;
          *(int *)((long)&(pIVar5->_1).namespaze + 4) = iVar1 + 1;
          if (0 < length) {
            System_Array__Clear((System_Array_o *)(pIVar5->_1).name,0,length,(MethodInfo *)0x0);
          }
          pIVar7->klass = pIVar4;
          thunk_FUN_01c20e04(pIVar7,pIVar4);
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_78,
                   Method_System_Collections_Generic_List_Enumerator<PJKHAJKEHEL>_Dispose__);
      }
    }
  }
  return pCVar6;
}

