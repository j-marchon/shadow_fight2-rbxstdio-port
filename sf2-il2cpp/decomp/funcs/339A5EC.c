// HCAICJLDDJO$$LKBMNAHLCEK @ RVA 0x339A5EC

bool HCAICJLDDJO__LKBMNAHLCEK(IGFGDDANEPE_o *ENHJPOHLMCL,MethodInfo *method)

{
  bool bVar1;
  int64_t iVar2;
  
  if ((DAT_04567c74 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04567c74 = 1;
  }
  if (ENHJPOHLMCL == (IGFGDDANEPE_o *)0x0) {
    bVar1 = false;
  }
  else {
    iVar2 = IGFGDDANEPE__OMMIKNKEKJN(ENHJPOHLMCL,(MethodInfo *)0x0);
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
    }
    if (DAT_04565b87 == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b87 = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = NLPJLHOEAOE_TypeInfo->static_fields->CBPPFGLIODM < iVar2;
  }
  return bVar1;
}

