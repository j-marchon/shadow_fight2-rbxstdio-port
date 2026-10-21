// NLHMCOFIBKF$$GKHFOGJEDPN @ RVA 0x316491C

System_String_o *
NLHMCOFIBKF__GKHFOGJEDPN(NLHMCOFIBKF_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_String_o *pSVar3;
  
  if ((DAT_045668aa & 1) == 0) {
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    DAT_045668aa = 1;
  }
  bVar1 = System_String__IsNullOrEmpty((__this->fields).IFAEOOBNDDH,(MethodInfo *)0x0);
  if (bVar1) {
    pSVar3 = (System_String_o *)0x0;
  }
  else {
    pSVar3 = (__this->fields).IFAEOOBNDDH;
    if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar3 = MFBNFJGBPBB__HAKLDDOPIAF(AAJBIMFNMBB,pSVar3,(MethodInfo *)0x0);
    iVar2 = PCOEHCPGBBG__DGMBALOKJDJ(pSVar3,0x2e,(MethodInfo *)0x0);
    if (iVar2 != 3) {
      pSVar3 = (System_String_o *)0x0;
    }
  }
  return pSVar3;
}

