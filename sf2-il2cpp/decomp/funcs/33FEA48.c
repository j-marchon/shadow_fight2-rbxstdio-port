// MGNPHCAAEIO$$EPLDDILOPAJ @ RVA 0x33FEA48

/* WARNING: Removing unreachable block (ram,0x034fed0c) */
/* WARNING: Removing unreachable block (ram,0x034fec54) */

bool MGNPHCAAEIO__EPLDDILOPAJ(AFFHKININGD_o *FBFPLEFCDOK,MethodInfo *method)

{
  undefined1 auVar1 [16];
  Il2CppObject *pIVar2;
  bool bVar3;
  int32_t iVar4;
  System_Collections_Generic_List_object__o *__this;
  ACHLOMELAJE_o *__this_00;
  System_String_o *a;
  int iVar5;
  undefined1 auVar6 [16];
  System_Collections_Generic_List_Enumerator_T__o local_b8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  auVar6._8_8_ = method;
  auVar6._0_8_ = FBFPLEFCDOK;
  if ((DAT_04567fd3 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NIAFDKHDBMA>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NIAFDKHDBMA>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NIAFDKHDBMA>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NIAFDKHDBMA>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NIAFDKHDBMA>_get_Count__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    auVar6 = FUN_01bab630(&StringLiteral_1);
    DAT_04567fd3 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  if (FBFPLEFCDOK != (AFFHKININGD_o *)0x0) {
    auVar6 = (*(FBFPLEFCDOK->klass->vtable)._4_NIKCNPMKAFK.methodPtr)
                       (FBFPLEFCDOK,(FBFPLEFCDOK->klass->vtable)._4_NIKCNPMKAFK.method);
    __this = auVar6._0_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = auVar6._8_8_;
    auVar6 = auVar1 << 0x40;
    if (__this != (System_Collections_Generic_List_object__o *)0x0) {
      bVar3 = true;
      if ((__this->fields)._size != 0) {
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_b8,__this,
                   Method_System_Collections_Generic_List<NIAFDKHDBMA>_GetEnumerator__);
        local_80.fields._index = local_b8.fields._index;
        local_80.fields._version = local_b8.fields._version;
        local_80.fields._list = local_b8.fields._list;
        local_80.fields._current = local_b8.fields._current;
        do {
          do {
            bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (&local_80,
                               Method_System_Collections_Generic_List_Enumerator<NIAFDKHDBMA>_MoveNext__
                              );
            if (!bVar3) {
              iVar5 = 9;
              goto LAB_034feca0;
            }
            if (local_80.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            a = local_80.fields._current[5].monitor;
            bVar3 = System_String__op_Inequality(a,StringLiteral_1,(MethodInfo *)0x0);
          } while (!bVar3);
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (DAT_04565b7d == '\0') {
            FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
            DAT_04565b7d = '\x01';
          }
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
          if (__this_00 == (ACHLOMELAJE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          iVar4 = ACHLOMELAJE__FCPIAEEKGEL(__this_00,a,(MethodInfo *)0x0);
          System_Collections_Generic_List<object>__GetEnumerator
                    (&local_b8,__this,
                     Method_System_Collections_Generic_List<NIAFDKHDBMA>_GetEnumerator__);
          iVar5 = 0;
          local_a0.fields._index = local_b8.fields._index;
          local_a0.fields._version = local_b8.fields._version;
          local_a0.fields._list = local_b8.fields._list;
          local_a0.fields._current = local_b8.fields._current;
          while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                   (&local_a0,
                                    Method_System_Collections_Generic_List_Enumerator<NIAFDKHDBMA>_MoveNext__
                                   ), pIVar2 = local_a0.fields._current, bVar3) {
            if (local_a0.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            bVar3 = System_String__op_Equality
                              (local_a0.fields._current[5].monitor,a,(MethodInfo *)0x0);
            if (bVar3) {
              iVar5 = *(int *)&pIVar2[6].klass + iVar5;
            }
          }
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_a0,
                     Method_System_Collections_Generic_List_Enumerator<NIAFDKHDBMA>_Dispose__);
        } while (iVar5 <= iVar4);
        iVar5 = 8;
LAB_034feca0:
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_80,
                   Method_System_Collections_Generic_List_Enumerator<NIAFDKHDBMA>_Dispose__);
        bVar3 = iVar5 != 8;
      }
      return bVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar6._0_8_,auVar6._8_8_);
}

