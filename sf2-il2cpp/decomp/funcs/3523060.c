// LLKDCCJMFLE$$HEHLBJLOCOO @ RVA 0x3523060

int32_t LLKDCCJMFLE__HEHLBJLOCOO(MethodInfo *method)

{
  FGKGKDEJCOG_o *pFVar1;
  
  if ((DAT_045689e5 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045689e5 = 1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565e59 == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565e59 = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pFVar1 = NLPJLHOEAOE_TypeInfo->static_fields->EIHHKABBIMJ;
  if (pFVar1 != (FGKGKDEJCOG_o *)0x0) {
    return (int32_t)((pFVar1->fields).ILACIHPOGDC != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

