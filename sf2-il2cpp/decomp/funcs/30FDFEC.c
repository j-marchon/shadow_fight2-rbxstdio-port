// AGILEPNENOH$$DKFHOCKJKPG @ RVA 0x30FDFEC

void AGILEPNENOH__DKFHOCKJKPG(int32_t MHAHPACPGCC,int64_t PIBELEMLEPN,MethodInfo *method)

{
  bool bVar1;
  AGILEPNENOH_c *pAVar2;
  Il2CppObject *__this;
  bool bVar3;
  System_Collections_Generic_List_AGILEPNENOH__o *__this_00;
  long lVar4;
  AGILEPNENOH_StaticFields *pAVar5;
  MGNPHCAAEIO_StaticFields *pMVar6;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_a0;
  System_Collections_Generic_List_T__o *local_80;
  int64_t iStack_78;
  AGILEPNENOH_o *pAStack_70;
  bool_conflict bStack_68;
  bool_conflict bStack_67;
  undefined6 uStack_66;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_045664a9 & 1) == 0) {
    FUN_01bab630(&AGILEPNENOH_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AGILEPNENOH>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AGILEPNENOH>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AGILEPNENOH>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AGILEPNENOH>_GetEnumerator__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&StringLiteral_3441);
    DAT_045664a9 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
            (&local_a0,PIBELEMLEPN,(MethodInfo *)0x0);
  iStack_78 = local_a0.fields.hiddenValue;
  local_80 = (System_Collections_Generic_List_T__o *)local_a0.fields.currentCryptoKey;
  bStack_68 = local_a0.fields.fakeValueActive;
  bStack_67 = local_a0.fields.inited;
  uStack_66 = local_a0.fields._26_6_;
  pAStack_70 = (AGILEPNENOH_o *)local_a0.fields.fakeValue;
  if ((AGILEPNENOH_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pAVar2 = AGILEPNENOH_TypeInfo;
  pAVar5 = AGILEPNENOH_TypeInfo->static_fields;
  (pAVar5->DKMPMFFECBK).fields.fakeValueActive = bStack_68;
  (pAVar5->DKMPMFFECBK).fields.inited = bStack_67;
  *(undefined6 *)&(pAVar5->DKMPMFFECBK).fields.field_0x1a = uStack_66;
  (pAVar5->DKMPMFFECBK).fields.fakeValue = (int64_t)pAStack_70;
  (pAVar5->DKMPMFFECBK).fields.hiddenValue = iStack_78;
  (pAVar5->DKMPMFFECBK).fields.currentCryptoKey = (int64_t)local_80;
  __this_00 = pAVar2->static_fields->DEKLKEHGJEB;
  if (__this_00 != (System_Collections_Generic_List_AGILEPNENOH__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&local_a0,
               (System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<AGILEPNENOH>_GetEnumerator__);
    local_60.fields._index = (undefined4)local_a0.fields.hiddenValue;
    local_60.fields._version = local_a0.fields.hiddenValue._4_4_;
    local_60.fields._list = (System_Collections_Generic_List_T__o *)local_a0.fields.currentCryptoKey
    ;
    local_60.fields._current = (Il2CppObject *)local_a0.fields.fakeValue;
    bVar1 = false;
    while( true ) {
      bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_60,
                         Method_System_Collections_Generic_List_Enumerator<AGILEPNENOH>_MoveNext__);
      __this = local_60.fields._current;
      if (!bVar3) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_60,
                   Method_System_Collections_Generic_List_Enumerator<AGILEPNENOH>_Dispose__);
        if (!bVar1) {
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogError(StringLiteral_3441,(MethodInfo *)0x0);
        }
        return;
      }
      if ((AGILEPNENOH_o *)local_60.fields._current == (AGILEPNENOH_o *)0x0) break;
      AGILEPNENOH__MEAECAEGGOD((AGILEPNENOH_o *)local_60.fields._current,PIBELEMLEPN,method);
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
      }
      pMVar6 = MGNPHCAAEIO_TypeInfo->static_fields;
      if (pMVar6->JKJKPJHBFIO != false) {
        if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
          pMVar6 = MGNPHCAAEIO_TypeInfo->static_fields;
        }
        AGILEPNENOH__CMNDDAHEGBG((AGILEPNENOH_o *)__this,pMVar6->CIKPLHLKPKJ,method);
      }
      bVar3 = !bVar1;
      bVar1 = true;
      if ((bVar3) &&
         (bVar1 = false, (((AGILEPNENOH_Fields *)((long)__this + 0x10))->super).KIHDFNGKPGN != 0)) {
        method = (((AGILEPNENOH_c *)__this->klass)->vtable)._16_EPLGFIOJNDK.method;
        lVar4 = (*(((AGILEPNENOH_c *)__this->klass)->vtable)._16_EPLGFIOJNDK.methodPtr)(__this,0);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                  (&local_a0,*(int64_t *)(lVar4 + 0x58),(MethodInfo *)0x0);
        iStack_78 = local_a0.fields.hiddenValue;
        local_80 = (System_Collections_Generic_List_T__o *)local_a0.fields.currentCryptoKey;
        bStack_68 = local_a0.fields.fakeValueActive;
        bStack_67 = local_a0.fields.inited;
        uStack_66 = local_a0.fields._26_6_;
        pAStack_70 = (AGILEPNENOH_o *)local_a0.fields.fakeValue;
        if ((AGILEPNENOH_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pAVar5 = AGILEPNENOH_TypeInfo->static_fields;
        (pAVar5->MKMJJANAAFD).fields.fakeValueActive = bStack_68;
        (pAVar5->MKMJJANAAFD).fields.inited = bStack_67;
        *(undefined6 *)&(pAVar5->MKMJJANAAFD).fields.field_0x1a = uStack_66;
        (pAVar5->MKMJJANAAFD).fields.fakeValue = (int64_t)pAStack_70;
        (pAVar5->MKMJJANAAFD).fields.hiddenValue = iStack_78;
        (pAVar5->MKMJJANAAFD).fields.currentCryptoKey = (int64_t)local_80;
        bVar1 = true;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

