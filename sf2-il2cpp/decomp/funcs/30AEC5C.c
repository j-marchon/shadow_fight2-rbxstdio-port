// CFEANGJDHEE$$FHEDJOBDEPF @ RVA 0x30AEC5C

System_String_o * CFEANGJDHEE__FHEDJOBDEPF(System_String_o *MAGODFJLJGG,MethodInfo *method)

{
  CFEANGJDHEE_c *method_00;
  CFEANGJDHEE_o *pCVar1;
  ABMPAOFAAEI_o *__this;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_045661c9 & 1) == 0) {
    FUN_01bab630(&CFEANGJDHEE_TypeInfo);
    DAT_045661c9 = 1;
    method = extraout_x1;
  }
  method_00 = CFEANGJDHEE_TypeInfo;
  if ((CFEANGJDHEE_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (CFEANGJDHEE_c *)thunk_FUN_01ba7564(CFEANGJDHEE_TypeInfo,method);
  }
  pCVar1 = CFEANGJDHEE__AIHNLLGNBLC((MethodInfo *)method_00);
  if ((pCVar1 != (CFEANGJDHEE_o *)0x0) &&
     (__this = (pCVar1->fields).MMFAILFMCJC, __this != (ABMPAOFAAEI_o *)0x0)) {
    pSVar2 = ABMPAOFAAEI__FHEDJOBDEPF(__this,MAGODFJLJGG,(MethodInfo *)0x0);
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

