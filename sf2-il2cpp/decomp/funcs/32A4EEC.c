// DBIJLEGANCE$$MPHDDHOPIJH @ RVA 0x32A4EEC

System_String_o * DBIJLEGANCE__MPHDDHOPIJH(System_Byte_array *GGJDFLFMCAH,MethodInfo *method)

{
  System_Byte_array *pSVar1;
  System_Text_Encoding_o *pSVar2;
  System_String_o *pSVar3;
  MethodInfo *extraout_x1;
  
  if ((DAT_045673e4 & 1) == 0) {
    FUN_01bab630(&GCFMDIJNNBO_TypeInfo);
    DAT_045673e4 = 1;
    method = extraout_x1;
  }
  if ((GCFMDIJNNBO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(GCFMDIJNNBO_TypeInfo,method);
  }
  pSVar1 = GCFMDIJNNBO__LKOIJMPGNDA(GGJDFLFMCAH,(MethodInfo *)0x0);
  pSVar2 = System_Text_Encoding__get_Unicode((MethodInfo *)0x0);
  if (pSVar2 != (System_Text_Encoding_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033a4f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pSVar3 = (System_String_o *)
             (*(pSVar2->klass->vtable)._37_GetString.methodPtr)
                       (pSVar2,pSVar1,(pSVar2->klass->vtable)._37_GetString.method);
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

