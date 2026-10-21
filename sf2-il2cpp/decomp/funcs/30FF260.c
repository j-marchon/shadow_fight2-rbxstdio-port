// AGILEPNENOH$$IMAKPJNJIJF @ RVA 0x30FF260

int64_t AGILEPNENOH__IMAKPJNJIJF(MethodInfo *method)

{
  int64_t iVar1;
  AGILEPNENOH_StaticFields *pAVar2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_40;
  
  if ((DAT_045664b4 & 1) == 0) {
    FUN_01bab630(&AGILEPNENOH_TypeInfo);
                    /* try { // try from 031ff28c to 032ff4b7 has its CatchHandler @ 031ff28c
                       catch() { ... } // from try @ 031ff28c with catch @ 031ff28c
                       catch() { ... } // from try @ 031ffa40 with catch @ 031ff28c
                       catch() { ... } // from try @ 031ffaf8 with catch @ 031ff28c
                       catch() { ... } // from try @ 031ffb00 with catch @ 031ff28c
                       catch() { ... } // from try @ 031ffc54 with catch @ 031ff28c */
    DAT_045664b4 = 1;
  }
  if ((AGILEPNENOH_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pAVar2 = AGILEPNENOH_TypeInfo->static_fields;
  local_40.fields.fakeValueActive = (pAVar2->GKGHELAOIBG).fields.fakeValueActive;
  local_40.fields.inited = (pAVar2->GKGHELAOIBG).fields.inited;
  local_40.fields._26_6_ = *(undefined6 *)&(pAVar2->GKGHELAOIBG).fields.field_0x1a;
  local_40.fields.fakeValue = (pAVar2->GKGHELAOIBG).fields.fakeValue;
  local_40.fields.hiddenValue = (pAVar2->GKGHELAOIBG).fields.hiddenValue;
  local_40.fields.currentCryptoKey = (pAVar2->GKGHELAOIBG).fields.currentCryptoKey;
  iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_40,(MethodInfo *)0x0);
  return iVar1;
}

