// FJNIPMODEPO$$EHAJCBIIBKB @ RVA 0x3034B1C

void FJNIPMODEPO__EHAJCBIIBKB(FJNIPMODEPO_o *__this,System_String_o *NFDKMBAGHPD,MethodInfo *method)

{
  System_String_o **ppSVar1;
  MethodInfo *in_x3;
  
  if ((DAT_04565d32 & 1) == 0) {
    FUN_01bab630(&FJNIPMODEPO_AIMMBNHMBFL_TypeInfo);
    FUN_01bab630(&StringLiteral_8320);
    DAT_04565d32 = 1;
  }
  if ((__this->fields).ECCPBJGMNPE != false) {
    FJNIPMODEPO__BNEHJLHGBCD(__this,StringLiteral_8320,NFDKMBAGHPD,in_x3);
    return;
  }
  if ((FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  ppSVar1 = &FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->static_fields->AHAKHHLCPAB;
  *ppSVar1 = NFDKMBAGHPD;
  thunk_FUN_01c20e04(ppSVar1,NFDKMBAGHPD);
  return;
}

