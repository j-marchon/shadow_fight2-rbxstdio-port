// ADAHHFAPLLM$$DGLJCGNHLIG @ RVA 0x30C8CF4

void ADAHHFAPLLM__DGLJCGNHLIG(MethodInfo *method)

{
  MethodInfo *in_x1;
  MethodInfo *extraout_x1;
  ADAHHFAPLLM_StaticFields *pAVar1;
  
  if ((DAT_045662c4 & 1) == 0) {
    FUN_01bab630(&ADAHHFAPLLM_TypeInfo);
    DAT_045662c4 = 1;
    in_x1 = extraout_x1;
  }
  pAVar1 = ADAHHFAPLLM_TypeInfo->static_fields;
  if (pAVar1->CBDMFFMCJBK != (ADAHHFAPLLM_o *)0x0) {
    ADAHHFAPLLM__Dispose(pAVar1->CBDMFFMCJBK,in_x1);
    pAVar1 = ADAHHFAPLLM_TypeInfo->static_fields;
  }
  pAVar1->CBDMFFMCJBK = (ADAHHFAPLLM_o *)0x0;
  thunk_FUN_01c20e04(ADAHHFAPLLM_TypeInfo->static_fields,0);
  return;
}

