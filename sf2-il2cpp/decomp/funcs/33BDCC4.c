// CCLKPGBIBOP$$Equals @ RVA 0x33BDCC4

bool CCLKPGBIBOP__Equals(CCLKPGBIBOP_o *__this,CCLKPGBIBOP_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  int32_t local_4;
  
  if (IBKIPBJJCPG == (CCLKPGBIBOP_o *)0x0) {
    bVar1 = false;
  }
  else {
    local_4 = (IBKIPBJJCPG->fields)._NHDNPAAJKBN_k__BackingField;
    bVar1 = System_Int32__Equals
                      ((int32_t)&local_4,(__this->fields)._NHDNPAAJKBN_k__BackingField,
                       (MethodInfo *)0x0);
  }
  return bVar1;
}

