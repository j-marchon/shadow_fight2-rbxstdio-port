// EJDKNOPLIBB$$IKCICIMJLJJ @ RVA 0x343DF5C

System_Byte_array * EJDKNOPLIBB__IKCICIMJLJJ(System_Byte_array *HLHKHPHMGLP,MethodInfo *method)

{
  System_Byte_array *pSVar1;
  System_String_o *pSVar2;
  System_Byte_array *MLLHENCNAMI;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  pSVar1 = HLHKHPHMGLP;
  if ((DAT_045681fc & 1) == 0) {
    pSVar1 = (System_Byte_array *)FUN_01bab630(&System_Convert_TypeInfo);
    DAT_045681fc = 1;
  }
  pSVar2 = EJDKNOPLIBB__DACNMPHGEJD((MethodInfo *)pSVar1);
  pSVar2 = EJDKNOPLIBB__NJIJBJDHOIB(pSVar2,method_00);
  if ((System_Convert_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_Convert_TypeInfo);
  }
  pSVar1 = System_Convert__FromBase64String(pSVar2,(MethodInfo *)0x0);
  pSVar2 = EJDKNOPLIBB__LPPMBCGPCKF((MethodInfo *)pSVar1);
  pSVar2 = EJDKNOPLIBB__NJIJBJDHOIB(pSVar2,method_01);
  MLLHENCNAMI = System_Convert__FromBase64String(pSVar2,(MethodInfo *)0x0);
  pSVar1 = IBMPAMLCCHF__FHFADKNMJLB(HLHKHPHMGLP,pSVar1,MLLHENCNAMI,(MethodInfo *)0x0);
  return pSVar1;
}

