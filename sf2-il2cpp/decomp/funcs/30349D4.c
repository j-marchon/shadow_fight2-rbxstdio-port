// FJNIPMODEPO$$ACNFBPJGBDP @ RVA 0x30349D4

void FJNIPMODEPO__ACNFBPJGBDP(FJNIPMODEPO_o *__this,System_String_o *CEHOJOFLMFF,MethodInfo *method)

{
  System_String_o **ppSVar1;
  MethodInfo *in_x3;
  
  if ((DAT_04565d31 & 1) == 0) {
    FUN_01bab630(&FJNIPMODEPO_AIMMBNHMBFL_TypeInfo);
    FUN_01bab630(&StringLiteral_3008);
    DAT_04565d31 = 1;
  }
  if ((__this->fields).ECCPBJGMNPE != false) {
    FJNIPMODEPO__BNEHJLHGBCD(__this,StringLiteral_3008,CEHOJOFLMFF,in_x3);
    return;
  }
  if ((FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  ppSVar1 = &FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->static_fields->MBNNPFMBPOD;
  *ppSVar1 = CEHOJOFLMFF;
  thunk_FUN_01c20e04(ppSVar1,CEHOJOFLMFF);
  return;
}

