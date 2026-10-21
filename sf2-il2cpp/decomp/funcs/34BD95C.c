// KAHMAJKJMBK$$IGKMMHADIAK @ RVA 0x34BD95C

void KAHMAJKJMBK__IGKMMHADIAK(KAHMAJKJMBK_o *__this,MethodInfo *method)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  int32_t iVar4;
  FCJBEKHDLAF_o *pFVar5;
  OLKKAIFGGAK_o *__this_00;
  OLKKAIFGGAK_o *__this_01;
  AKADDLNNLKH_o *__this_02;
  ACHLOMELAJE_o *pAVar6;
  System_Collections_Generic_List_CNIGOFCKBGI__o *__this_03;
  Il2CppClass *KGLJICLJHEL;
  float fVar7;
  float fVar8;
  float CJNHFNHJHPE;
  float CJNHFNHJHPE_00;
  System_Collections_Generic_List_Enumerator_T__o local_b8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  
  if ((DAT_045685f9 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<CNIGOFCKBGI>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<CNIGOFCKBGI>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<CNIGOFCKBGI>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CNIGOFCKBGI>_GetEnumerator__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&PLIKNCJICMM_TypeInfo);
    DAT_045685f9 = 1;
  }
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  pFVar5 = (__this->fields).HPKHMGLOLPJ;
  if (pFVar5 != (FCJBEKHDLAF_o *)0x0) {
    __this_00 = FCJBEKHDLAF__HJFOLPOINNH(pFVar5,1,(MethodInfo *)0x0);
    pFVar5 = (__this->fields).HPKHMGLOLPJ;
    if (pFVar5 != (FCJBEKHDLAF_o *)0x0) {
      __this_01 = FCJBEKHDLAF__HJFOLPOINNH(pFVar5,2,(MethodInfo *)0x0);
      __this_03 = (__this->fields).LKNFJJLFJFD;
      if (__this_03 != (System_Collections_Generic_List_CNIGOFCKBGI__o *)0x0) {
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_b8,(System_Collections_Generic_List_object__o *)__this_03,
                   Method_System_Collections_Generic_List<CNIGOFCKBGI>_GetEnumerator__);
        CJNHFNHJHPE = 1.0;
        local_a0.fields._index = local_b8.fields._index;
        local_a0.fields._version = local_b8.fields._version;
        local_a0.fields._list = local_b8.fields._list;
        local_a0.fields._current = local_b8.fields._current;
        CJNHFNHJHPE_00 = 1.0;
        while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_a0,
                                  Method_System_Collections_Generic_List_Enumerator<CNIGOFCKBGI>_MoveNext__
                                 ), bVar3) {
          if (local_a0.fields._current != (Il2CppObject *)0x0) {
            bVar2 = (PLIKNCJICMM_TypeInfo->_2).naturalAligment;
            if ((bVar2 <= ((local_a0.fields._current)->klass->_2).naturalAligment) &&
               (((local_a0.fields._current)->klass->_2).typeHierarchy[(ulong)bVar2 - 1] ==
                (Il2CppClass *)PLIKNCJICMM_TypeInfo)) {
              KGLJICLJHEL = local_a0.fields._current[7].klass;
              iVar1 = *(int *)&local_a0.fields._current[7].monitor;
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
              pAVar6 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
              if (pAVar6 == (ACHLOMELAJE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              __this_02 = (pAVar6->fields).MLNLNNNNPGH;
              if (__this_02 == (AKADDLNNLKH_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              iVar4 = AKADDLNNLKH__CBGJMMDIFGA
                                (__this_02,(System_String_o *)KGLJICLJHEL,(MethodInfo *)0x0);
              if (iVar4 < iVar1) {
                if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                fVar7 = MGNPHCAAEIO__NEOLDJIJDFP((MethodInfo *)0x0);
                fVar8 = MGNPHCAAEIO__NEOLDJIJDFP((MethodInfo *)0x0);
                fVar7 = exp2f((float)(iVar1 - iVar4) / fVar7);
                fVar8 = exp2f((float)(iVar4 - iVar1) / fVar8);
                CJNHFNHJHPE_00 = CJNHFNHJHPE_00 * fVar8;
                CJNHFNHJHPE = CJNHFNHJHPE * fVar7;
              }
            }
          }
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_a0,
                   Method_System_Collections_Generic_List_Enumerator<CNIGOFCKBGI>_Dispose__);
        if ((__this_00 != (OLKKAIFGGAK_o *)0x0) &&
           (OLKKAIFGGAK__JLOBFPEOCCO(__this_00,CJNHFNHJHPE_00,(MethodInfo *)0x0),
           __this_01 != (OLKKAIFGGAK_o *)0x0)) {
          OLKKAIFGGAK__JLOBFPEOCCO(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

