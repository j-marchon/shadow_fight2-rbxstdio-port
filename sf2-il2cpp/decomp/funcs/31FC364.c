// NLPJLHOEAOE$$KMHLEKHPLBL @ RVA 0x31FC364

bool NLPJLHOEAOE__KMHLEKHPLBL(int64_t DCDLMCEEOCC,MethodInfo *method)

{
  Il2CppObject *__this;
  bool bVar1;
  bool bVar2;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_00;
  int64_t iVar3;
  ACHLOMELAJE_o *pAVar4;
  GGHCLMEFIGO_o *__this_01;
  IGFGDDANEPE_o *pIVar5;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  DOPEEDABNEK_o *pDVar6;
  int iVar7;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_b0;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04566dee & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566dee = 1;
    method = extraout_x1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04563eaa == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04563eaa = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  pDVar6 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
  if ((pDVar6 == (DOPEEDABNEK_o *)0x0) ||
     (__this_00 = (pDVar6->fields).DIGBEFKAPHM,
     __this_00 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_88,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
  local_70.fields._index = local_88.fields._index;
  local_70.fields._version = local_88.fields._version;
  local_70.fields._list = local_88.fields._list;
  local_70.fields._current = local_88.fields._current;
  do {
    do {
      do {
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_70,
                           Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__
                          );
        __this = local_70.fields._current;
        if (!bVar1) {
          iVar7 = 5;
          goto LAB_032fc57c;
        }
        if ((HOOAAGABMBL_o *)local_70.fields._current == (HOOAAGABMBL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        local_b0.fields.fakeValueActive = *(bool_conflict *)&local_70.fields._current[0x10].klass;
        local_b0.fields.inited = *(bool_conflict *)((long)&local_70.fields._current[0x10].klass + 1)
        ;
        local_b0.fields._26_6_ = *(undefined6 *)((long)&local_70.fields._current[0x10].klass + 2);
        local_b0.fields.fakeValue =
             (((HOOAAGABMBL_Fields *)((long)local_70.fields._current + 0x10))->
             _JIJJJBAGEFK_k__BackingField).fields.fakeValue;
        local_b0.fields.hiddenValue =
             (((HOOAAGABMBL_Fields *)((long)local_70.fields._current + 0x10))->
             _JIJJJBAGEFK_k__BackingField).fields.hiddenValue;
        local_b0.fields.currentCryptoKey =
             (((HOOAAGABMBL_Fields *)((long)local_70.fields._current + 0x10))->
             _JIJJJBAGEFK_k__BackingField).fields.currentCryptoKey;
        iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                          (&local_b0,(MethodInfo *)0x0);
      } while ((iVar3 == 0) ||
              (iVar3 = HOOAAGABMBL__ICMFLAFFOFM((HOOAAGABMBL_o *)__this,(MethodInfo *)0x0),
              DCDLMCEEOCC < iVar3));
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
      pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (pAVar4 == (ACHLOMELAJE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar2 = ACHLOMELAJE__NIEKNLDMABC
                        (pAVar4,((HOOAAGABMBL_Fields *)((long)__this + 0x10))->
                                _ILMMODKJGFK_k__BackingField,(MethodInfo *)0x0);
    } while (bVar2);
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
    pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar4 == (ACHLOMELAJE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_01 = (pAVar4->fields).OIDPLCLELEN;
    if (__this_01 == (GGHCLMEFIGO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pIVar5 = GGHCLMEFIGO__JNFIBDBHNOA(__this_01,(HOOAAGABMBL_o *)__this,(MethodInfo *)0x0);
  } while (pIVar5 != (IGFGDDANEPE_o *)0x0);
  iVar7 = 4;
LAB_032fc57c:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_70,Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
  return bVar1 && iVar7 == 4;
}

