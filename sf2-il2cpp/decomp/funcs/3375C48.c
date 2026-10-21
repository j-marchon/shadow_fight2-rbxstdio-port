// IOIKBGAJIGO$$JHFDCPKENHD @ RVA 0x3375C48

void IOIKBGAJIGO__JHFDCPKENHD(System_String_o *LFGKEPCBPKF,MethodInfo *method)

{
  System_Byte_array *inArray;
  System_String_o *pSVar1;
  
  if ((DAT_04567b47 & 1) == 0) {
    FUN_01bab630(&System_Convert_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&OCLJMFBDKOA_TypeInfo);
    FUN_01bab630(&StringLiteral_57);
    FUN_01bab630(&StringLiteral_5046);
    FUN_01bab630(&StringLiteral_56);
    DAT_04567b47 = 1;
  }
  inArray = CMEBCBKGFFL__JKGGKELPNKJ(LFGKEPCBPKF,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat(StringLiteral_5046,LFGKEPCBPKF,StringLiteral_56,(MethodInfo *)0x0);
  if ((OCLJMFBDKOA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(OCLJMFBDKOA_TypeInfo);
  }
  OCLJMFBDKOA__JAFHOLNKKBD(pSVar1,(MethodInfo *)0x0);
  if ((System_Convert_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = System_Convert__ToBase64String(inArray,(MethodInfo *)0x0);
  OCLJMFBDKOA__JAFHOLNKKBD(pSVar1,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__Log(StringLiteral_57,(MethodInfo *)0x0);
  return;
}

