// AGILEPNENOH$$.cctor @ RVA 0x30FF0F8

void AGILEPNENOH___cctor(MethodInfo *method)

{
  System_Collections_Generic_List_AGILEPNENOH__o *__this;
  AGILEPNENOH_StaticFields *pAVar1;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_90;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_70;
  int64_t local_50;
  int64_t iStack_48;
  int64_t iStack_40;
  bool_conflict bStack_38;
  bool_conflict bStack_37;
  undefined6 uStack_36;
  
  if ((DAT_045664b1 & 1) == 0) {
    FUN_01bab630(&AGILEPNENOH_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<AGILEPNENOH>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<AGILEPNENOH>_TypeInfo);
    DAT_045664b1 = 1;
  }
  __this = (System_Collections_Generic_List_AGILEPNENOH__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<AGILEPNENOH>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this,
             Method_System_Collections_Generic_List<AGILEPNENOH>__ctor__);
  AGILEPNENOH_TypeInfo->static_fields->DEKLKEHGJEB = __this;
  thunk_FUN_01c20e04(AGILEPNENOH_TypeInfo->static_fields,__this);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_70,0,(MethodInfo *)0x0);
  iStack_48 = local_70.fields.hiddenValue;
  local_50 = local_70.fields.currentCryptoKey;
  bStack_38 = local_70.fields.fakeValueActive;
  bStack_37 = local_70.fields.inited;
  uStack_36 = local_70.fields._26_6_;
  iStack_40 = local_70.fields.fakeValue;
  pAVar1 = AGILEPNENOH_TypeInfo->static_fields;
  (pAVar1->GKGHELAOIBG).fields.fakeValueActive = local_70.fields.fakeValueActive;
  (pAVar1->GKGHELAOIBG).fields.inited = local_70.fields.inited;
  *(undefined6 *)&(pAVar1->GKGHELAOIBG).fields.field_0x1a = local_70.fields._26_6_;
  (pAVar1->GKGHELAOIBG).fields.fakeValue = local_70.fields.fakeValue;
  (pAVar1->GKGHELAOIBG).fields.hiddenValue = local_70.fields.hiddenValue;
  (pAVar1->GKGHELAOIBG).fields.currentCryptoKey = local_70.fields.currentCryptoKey;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_90,0,(MethodInfo *)0x0);
  pAVar1 = AGILEPNENOH_TypeInfo->static_fields;
  (pAVar1->MKMJJANAAFD).fields.fakeValueActive = local_90.fields.fakeValueActive;
  (pAVar1->MKMJJANAAFD).fields.inited = local_90.fields.inited;
  *(undefined6 *)&(pAVar1->MKMJJANAAFD).fields.field_0x1a = local_90.fields._26_6_;
  (pAVar1->MKMJJANAAFD).fields.fakeValue = local_90.fields.fakeValue;
  (pAVar1->MKMJJANAAFD).fields.hiddenValue = local_90.fields.hiddenValue;
  (pAVar1->MKMJJANAAFD).fields.currentCryptoKey = local_90.fields.currentCryptoKey;
  return;
}

