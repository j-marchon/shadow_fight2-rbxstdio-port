// CCLKPGBIBOP$$CompareTo @ RVA 0x33BDD40

int32_t CCLKPGBIBOP__CompareTo(CCLKPGBIBOP_o *__this,CCLKPGBIBOP_o *IBKIPBJJCPG,MethodInfo *method)

{
  int32_t iVar1;
  int32_t local_4;
  
  if (IBKIPBJJCPG != (CCLKPGBIBOP_o *)0x0) {
    local_4 = (IBKIPBJJCPG->fields)._NHDNPAAJKBN_k__BackingField;
    iVar1 = System_Int32__CompareTo
                      ((int32_t)&local_4,(__this->fields)._NHDNPAAJKBN_k__BackingField,
                       (MethodInfo *)0x0);
    return iVar1;
  }
  return 1;
}

