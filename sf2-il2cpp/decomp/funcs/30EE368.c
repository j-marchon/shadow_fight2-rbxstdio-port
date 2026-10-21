// HOOAAGABMBL$$OIEONLNFHKC @ RVA 0x30EE368

bool HOOAAGABMBL__OIEONLNFHKC(NMAHEBEALAB_o *DKMMBMBMJBO,int64_t CDLNPAAECKM,MethodInfo *method)

{
  int64_t iVar1;
  long lVar2;
  
  if ((DAT_0456641a & 1) == 0) {
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_0456641a = 1;
  }
  if (CDLNPAAECKM < 1) {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b87 == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b87 = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    lVar2 = NLPJLHOEAOE_TypeInfo->static_fields->CBPPFGLIODM;
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(EOAOCPLIKOI_TypeInfo);
    }
    iVar1 = EOAOCPLIKOI__BAIKGKFPDGC((MethodInfo *)0x0);
    CDLNPAAECKM = iVar1 + lVar2;
  }
  if (DKMMBMBMJBO != (NMAHEBEALAB_o *)0x0) {
    if ((DKMMBMBMJBO->fields).CKGAMIHJOMC == false) {
      return true;
    }
    if ((DKMMBMBMJBO->fields).LKENIPBKAJI < CDLNPAAECKM) {
      return CDLNPAAECKM < (DKMMBMBMJBO->fields).ALLCFABAGOB;
    }
  }
  return false;
}

