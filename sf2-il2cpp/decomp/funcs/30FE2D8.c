// AGILEPNENOH$$CMNDDAHEGBG @ RVA 0x30FE2D8

void AGILEPNENOH__CMNDDAHEGBG(AGILEPNENOH_o *__this,int64_t LFJGFLNMBMC,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_AFFHKININGD__o *__this_00;
  AGILEPNENOH_StaticFields *pAVar2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_90;
  int64_t local_70;
  int64_t iStack_68;
  int64_t iStack_60;
  bool_conflict bStack_58;
  bool_conflict bStack_57;
  undefined6 uStack_56;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_045664b2 & 1) == 0) {
    FUN_01bab630(&AGILEPNENOH_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AFFHKININGD>_GetEnumerator__);
    DAT_045664b2 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
            (&local_90,LFJGFLNMBMC,(MethodInfo *)0x0);
  iStack_68 = local_90.fields.hiddenValue;
  local_70 = local_90.fields.currentCryptoKey;
  bStack_58 = local_90.fields.fakeValueActive;
  bStack_57 = local_90.fields.inited;
  uStack_56 = local_90.fields._26_6_;
  iStack_60 = local_90.fields.fakeValue;
  if ((AGILEPNENOH_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pAVar2 = AGILEPNENOH_TypeInfo->static_fields;
  (pAVar2->MKMJJANAAFD).fields.fakeValueActive = bStack_58;
  (pAVar2->MKMJJANAAFD).fields.inited = bStack_57;
  *(undefined6 *)&(pAVar2->MKMJJANAAFD).fields.field_0x1a = uStack_56;
  (pAVar2->MKMJJANAAFD).fields.fakeValue = iStack_60;
  (pAVar2->MKMJJANAAFD).fields.hiddenValue = iStack_68;
  (pAVar2->MKMJJANAAFD).fields.currentCryptoKey = local_70;
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
      if (local_48.fields._current == (Il2CppObject *)0x0) break;
      local_48.fields._current[5].monitor = (void *)LFJGFLNMBMC;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

