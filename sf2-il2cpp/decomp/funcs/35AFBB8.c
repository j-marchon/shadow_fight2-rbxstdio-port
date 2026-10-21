// EDFDANKEBGF$$PELKGCAGICG @ RVA 0x35AFBB8

int32_t EDFDANKEBGF__PELKGCAGICG(MethodInfo *method)

{
  int32_t iVar1;
  System_String_o *pSVar2;
  int local_14;
  
  if ((DAT_04568e84 & 1) == 0) {
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    FUN_01bab630(&StringLiteral_21097);
    DAT_04568e84 = 1;
  }
  if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  iVar1 = LIIFLGALGNK__HLMBDJOGONJ(4,(MethodInfo *)0x0);
  local_14 = iVar1 + 1;
  pSVar2 = System_Int32__ToString((int32_t)&local_14,(MethodInfo *)0x0);
  pSVar2 = System_String__Concat(StringLiteral_21097,pSVar2,(MethodInfo *)0x0);
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(PNLFHHJGDLI_TypeInfo);
  }
  iVar1 = PNLFHHJGDLI__CJKCKACIIHK(pSVar2,false,1.0,1.0,(MethodInfo *)0x0);
  return iVar1;
}

