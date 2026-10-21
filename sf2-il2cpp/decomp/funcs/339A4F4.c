// HCAICJLDDJO$$AEFGCHDNCDG @ RVA 0x339A4F4

bool HCAICJLDDJO__AEFGCHDNCDG(IGFGDDANEPE_o *ENHJPOHLMCL,MethodInfo *method)

{
  bool bVar1;
  int64_t iVar2;
  
  if ((DAT_04567c73 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04567c73 = 1;
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
    if (NLPJLHOEAOE_TypeInfo->static_fields->CBPPFGLIODM < iVar2) {
      bVar1 = IGFGDDANEPE__DABHOGHGNBB(ENHJPOHLMCL,(MethodInfo *)0x0);
      return bVar1;
    }
    bVar1 = true;
  }
  return bVar1;
}

