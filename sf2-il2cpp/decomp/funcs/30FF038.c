// AGILEPNENOH$$NDNPGAKJLHM @ RVA 0x30FF038

void AGILEPNENOH__NDNPGAKJLHM(MethodInfo *method)

{
  int32_t length;
  System_Collections_Generic_List_AGILEPNENOH__o *pSVar1;
  AGILEPNENOH_StaticFields *pAVar2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_60 [2];
  
  if ((DAT_045664b0 & 1) == 0) {
    FUN_01bab630(&AGILEPNENOH_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<AGILEPNENOH>_Clear__);
    DAT_045664b0 = 1;
  }
  if ((AGILEPNENOH_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = AGILEPNENOH_TypeInfo->static_fields->DEKLKEHGJEB;
  if (pSVar1 != (System_Collections_Generic_List_AGILEPNENOH__o *)0x0) {
    length = (pSVar1->fields)._size;
    (pSVar1->fields)._size = 0;
    (pSVar1->fields)._version = (pSVar1->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar1->fields)._items,0,length,(MethodInfo *)0x0);
    }
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(local_60,0,(MethodInfo *)0x0);
    pAVar2 = AGILEPNENOH_TypeInfo->static_fields;
    (pAVar2->GKGHELAOIBG).fields.fakeValueActive = local_60[0].fields.fakeValueActive;
    (pAVar2->GKGHELAOIBG).fields.inited = local_60[0].fields.inited;
    *(undefined6 *)&(pAVar2->GKGHELAOIBG).fields.field_0x1a = local_60[0].fields._26_6_;
    (pAVar2->GKGHELAOIBG).fields.fakeValue = local_60[0].fields.fakeValue;
    (pAVar2->GKGHELAOIBG).fields.hiddenValue = local_60[0].fields.hiddenValue;
    (pAVar2->GKGHELAOIBG).fields.currentCryptoKey = local_60[0].fields.currentCryptoKey;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

