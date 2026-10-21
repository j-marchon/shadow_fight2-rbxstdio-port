// CHDGOFBHAFI$$BGHMPINAEDC @ RVA 0x324363C

System_String_o * CHDGOFBHAFI__BGHMPINAEDC(CHDGOFBHAFI_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  int local_14;
  
  if ((DAT_045670a4 & 1) == 0) {
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    FUN_01bab630(&StringLiteral_10846);
    DAT_045670a4 = 1;
    method = extraout_x1;
  }
  if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(LIIFLGALGNK_TypeInfo,method);
  }
  iVar1 = LIIFLGALGNK__HLMBDJOGONJ(5,(MethodInfo *)0x0);
  local_14 = iVar1 + 1;
  pSVar2 = System_Int32__ToString((int32_t)&local_14,(MethodInfo *)0x0);
  pSVar2 = System_String__Concat(StringLiteral_10846,pSVar2,(MethodInfo *)0x0);
  return pSVar2;
}

