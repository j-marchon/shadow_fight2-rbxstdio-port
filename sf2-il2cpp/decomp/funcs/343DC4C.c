// EJDKNOPLIBB$$INOIIEOAMKP @ RVA 0x343DC4C

bool EJDKNOPLIBB__INOIIEOAMKP
               (System_Byte_array *OFMEIMDFOFJ,System_Byte_array *GAODLOAEKJN,MethodInfo *method)

{
  bool bVar1;
  System_Byte_array *pSVar2;
  System_String_o *pSVar3;
  System_Security_Cryptography_HashAlgorithm_o *__this;
  MethodInfo *method_00;
  
  pSVar2 = OFMEIMDFOFJ;
  if ((DAT_045681f7 & 1) == 0) {
    pSVar2 = (System_Byte_array *)FUN_01bab630(&EGFFLEKJFGN_TypeInfo);
    DAT_045681f7 = 1;
  }
  pSVar3 = EJDKNOPLIBB__GOCGGDOHKPH((MethodInfo *)pSVar2);
  pSVar3 = EJDKNOPLIBB__NJIJBJDHOIB(pSVar3,method_00);
  __this = (System_Security_Cryptography_HashAlgorithm_o *)
           System_Security_Cryptography_SHA1__Create((MethodInfo *)0x0);
  if (__this != (System_Security_Cryptography_HashAlgorithm_o *)0x0) {
    pSVar2 = System_Security_Cryptography_HashAlgorithm__ComputeHash
                       (__this,OFMEIMDFOFJ,(MethodInfo *)0x0);
    if ((EGFFLEKJFGN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(EGFFLEKJFGN_TypeInfo);
    }
    bVar1 = EGFFLEKJFGN__DHFJMIIFDJC(pSVar2,GAODLOAEKJN,pSVar3,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

