// CFJANHACGMG$$DPHMDPHEIKO @ RVA 0x3597DC0

System_String_o * CFJANHACGMG__DPHMDPHEIKO(System_String_o *LBPBGBIFMAK,MethodInfo *method)

{
  MethodInfo *str1;
  MethodInfo *method_00;
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568dab & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&CFJANHACGMG_TypeInfo);
    DAT_04568dab = 1;
    method = extraout_x1;
  }
  if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Application_TypeInfo,method);
  }
  str1 = (MethodInfo *)UnityEngine_Application__get_identifier((MethodInfo *)0x0);
  method_00 = str1;
  if ((CFJANHACGMG_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (MethodInfo *)thunk_FUN_01ba7564(CFJANHACGMG_TypeInfo);
  }
  pSVar1 = CFJANHACGMG__MDCGMNHJPFN(method_00);
  pSVar1 = System_String__Concat(LBPBGBIFMAK,(System_String_o *)str1,pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}

