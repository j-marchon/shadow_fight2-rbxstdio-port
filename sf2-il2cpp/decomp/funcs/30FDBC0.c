// AGILEPNENOH$$LLCONNGHGKD @ RVA 0x30FDBC0

void AGILEPNENOH__LLCONNGHGKD(AGILEPNENOH_o *__this,int64_t LFJGFLNMBMC,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_AGILEPNENOH__o *__this_00;
  ACHLOMELAJE_o *__this_01;
  AGILEPNENOH_StaticFields *pAVar2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  bool_conflict bStack_68;
  bool_conflict bStack_67;
  undefined6 uStack_66;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_045664a8 & 1) == 0) {
    FUN_01bab630(&AGILEPNENOH_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AGILEPNENOH>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AGILEPNENOH>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AGILEPNENOH>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AGILEPNENOH>_GetEnumerator__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045664a8 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  AGILEPNENOH__MEAECAEGGOD(__this,LFJGFLNMBMC,method);
  if ((AGILEPNENOH_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = AGILEPNENOH_TypeInfo->static_fields->DEKLKEHGJEB;
  if (__this_00 != (System_Collections_Generic_List_AGILEPNENOH__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_80,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<AGILEPNENOH>_GetEnumerator__);
    local_60.fields._index = local_80.fields._index;
    local_60.fields._version = local_80.fields._version;
    local_60.fields._list = local_80.fields._list;
    local_60.fields._current = local_80.fields._current;
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_60,
                              Method_System_Collections_Generic_List_Enumerator<AGILEPNENOH>_MoveNext__
                             ), bVar1) {
      if ((AGILEPNENOH_o *)local_60.fields._current != __this) {
        if ((AGILEPNENOH_o *)local_60.fields._current == (AGILEPNENOH_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        AGILEPNENOH__MEAECAEGGOD((AGILEPNENOH_o *)local_60.fields._current,LFJGFLNMBMC,method);
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_60,Method_System_Collections_Generic_List_Enumerator<AGILEPNENOH>_Dispose__);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
              (&local_a0,LFJGFLNMBMC,(MethodInfo *)0x0);
    local_80.fields._index = (undefined4)local_a0.fields.hiddenValue;
    local_80.fields._version = local_a0.fields.hiddenValue._4_4_;
    local_80.fields._list = (System_Collections_Generic_List_T__o *)local_a0.fields.currentCryptoKey
    ;
    bStack_68 = local_a0.fields.fakeValueActive;
    bStack_67 = local_a0.fields.inited;
    uStack_66 = local_a0.fields._26_6_;
    local_80.fields._current = (Il2CppObject *)local_a0.fields.fakeValue;
    if ((AGILEPNENOH_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar2 = AGILEPNENOH_TypeInfo->static_fields;
    (pAVar2->DKMPMFFECBK).fields.fakeValueActive = bStack_68;
    (pAVar2->DKMPMFFECBK).fields.inited = bStack_67;
    *(undefined6 *)&(pAVar2->DKMPMFFECBK).fields.field_0x1a = uStack_66;
    (pAVar2->DKMPMFFECBK).fields.fakeValue = (int64_t)local_80.fields._current;
    (pAVar2->DKMPMFFECBK).fields.hiddenValue = local_80.fields._8_8_;
    (pAVar2->DKMPMFFECBK).fields.currentCryptoKey = (int64_t)local_80.fields._list;
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
    __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (__this_01 != (ACHLOMELAJE_o *)0x0) {
      ACHLOMELAJE__EFMHMBBCBGM(__this_01,LFJGFLNMBMC,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

