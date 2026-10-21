// AGILEPNENOH$$NCENBOMEPBN @ RVA 0x30FE468

void AGILEPNENOH__NCENBOMEPBN(AGILEPNENOH_o *__this,int64_t CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  int64_t iVar2;
  System_Collections_Generic_List_AFFHKININGD__o *__this_00;
  AGILEPNENOH_StaticFields *pAVar3;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_d0;
  int64_t local_b0;
  int64_t iStack_a8;
  int64_t iStack_a0;
  bool_conflict bStack_98;
  bool_conflict bStack_97;
  undefined6 uStack_96;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_90;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_70;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_045664aa & 1) == 0) {
    FUN_01bab630(&AGILEPNENOH_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AFFHKININGD>_GetEnumerator__);
    DAT_045664aa = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if ((AGILEPNENOH_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pAVar3 = AGILEPNENOH_TypeInfo->static_fields;
  local_70.fields.fakeValueActive = (pAVar3->DKMPMFFECBK).fields.fakeValueActive;
  local_70.fields.inited = (pAVar3->DKMPMFFECBK).fields.inited;
  local_70.fields._26_6_ = *(undefined6 *)&(pAVar3->DKMPMFFECBK).fields.field_0x1a;
  local_70.fields.fakeValue = (pAVar3->DKMPMFFECBK).fields.fakeValue;
  local_70.fields.hiddenValue = (pAVar3->DKMPMFFECBK).fields.hiddenValue;
  local_70.fields.currentCryptoKey = (pAVar3->DKMPMFFECBK).fields.currentCryptoKey;
  iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_70,(MethodInfo *)0x0);
  if (iVar2 < 1) {
    iVar2 = -1;
  }
  else {
    if ((AGILEPNENOH_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar3 = AGILEPNENOH_TypeInfo->static_fields;
    local_90.fields.fakeValueActive = (pAVar3->DKMPMFFECBK).fields.fakeValueActive;
    local_90.fields.inited = (pAVar3->DKMPMFFECBK).fields.inited;
    local_90.fields._26_6_ = *(undefined6 *)&(pAVar3->DKMPMFFECBK).fields.field_0x1a;
    local_90.fields.fakeValue = (pAVar3->DKMPMFFECBK).fields.fakeValue;
    local_90.fields.hiddenValue = (pAVar3->DKMPMFFECBK).fields.hiddenValue;
    local_90.fields.currentCryptoKey = (pAVar3->DKMPMFFECBK).fields.currentCryptoKey;
    iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_90,(MethodInfo *)0x0)
    ;
    iVar2 = CJNHFNHJHPE - iVar2;
  }
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_d0,iVar2,(MethodInfo *)0x0);
  iStack_a8 = local_d0.fields.hiddenValue;
  local_b0 = local_d0.fields.currentCryptoKey;
  bStack_98 = local_d0.fields.fakeValueActive;
  bStack_97 = local_d0.fields.inited;
  uStack_96 = local_d0.fields._26_6_;
  iStack_a0 = local_d0.fields.fakeValue;
  if ((AGILEPNENOH_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pAVar3 = AGILEPNENOH_TypeInfo->static_fields;
  (pAVar3->GKGHELAOIBG).fields.fakeValueActive = bStack_98;
  (pAVar3->GKGHELAOIBG).fields.inited = bStack_97;
  *(undefined6 *)&(pAVar3->GKGHELAOIBG).fields.field_0x1a = uStack_96;
  (pAVar3->GKGHELAOIBG).fields.fakeValue = iStack_a0;
  (pAVar3->GKGHELAOIBG).fields.hiddenValue = iStack_a8;
  (pAVar3->GKGHELAOIBG).fields.currentCryptoKey = local_b0;
  __this_00 = (__this->fields).super.HDDNEKLMLMF;
  if (__this_00 != (System_Collections_Generic_List_AFFHKININGD__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<AFFHKININGD>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_48,
                   Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__);
        return;
      }
      if ((AFFHKININGD_o *)local_48.fields._current == (AFFHKININGD_o *)0x0) break;
      AFFHKININGD__NCENBOMEPBN
                ((AFFHKININGD_o *)local_48.fields._current,CJNHFNHJHPE,(MethodInfo *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

