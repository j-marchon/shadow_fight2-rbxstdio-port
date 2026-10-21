// JMDPBFOCHHP$$NNJKLBBDFFO @ RVA 0x2FF83B4

System_String_o * JMDPBFOCHHP__NNJKLBBDFFO(JMDPBFOCHHP_o *__this,MethodInfo *method)

{
  bool bVar1;
  GCPFDLNAFDF_o *PCMFDDODKED;
  System_String_o *pSVar2;
  Il2CppObject *arg1;
  MethodInfo *extraout_x1;
  int32_t local_24;
  
  if ((DAT_04565aba & 1) == 0) {
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_22431);
    DAT_04565aba = 1;
    method = extraout_x1;
  }
  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(IFAMAAGNCBJ_TypeInfo,method);
  }
  PCMFDDODKED = IFAMAAGNCBJ__AEJPBJCBICK((MethodInfo *)0x0);
  pSVar2 = BJFOKHADDPO__BBDBMLMOMDN((KADDELABILH_o *)PCMFDDODKED,(MethodInfo *)0x0);
  bVar1 = PCOEHCPGBBG__EDHHJAMCOJH(pSVar2,(MethodInfo *)0x0);
  if (bVar1) {
    pSVar2 = string_TypeInfo->static_fields->Empty;
  }
  else {
    if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    local_24 = LIIFLGALGNK__HLMBDJOGONJ(1000000,(MethodInfo *)0x0);
    arg1 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_24);
    pSVar2 = System_String__Format
                       (StringLiteral_22431,(Il2CppObject *)pSVar2,arg1,(MethodInfo *)0x0);
  }
  return pSVar2;
}

