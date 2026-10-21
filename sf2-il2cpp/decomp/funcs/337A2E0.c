// LLDOMGIEPNE$$DGLJCGNHLIG @ RVA 0x337A2E0

void LLDOMGIEPNE__DGLJCGNHLIG(MethodInfo *method)

{
  MethodInfo *in_x1;
  MethodInfo *extraout_x1;
  LLDOMGIEPNE_StaticFields *pLVar1;
  
  if ((DAT_04567b79 & 1) == 0) {
    FUN_01bab630(&LLDOMGIEPNE_TypeInfo);
    DAT_04567b79 = 1;
    in_x1 = extraout_x1;
  }
  pLVar1 = LLDOMGIEPNE_TypeInfo->static_fields;
  if (pLVar1->CBDMFFMCJBK != (LLDOMGIEPNE_o *)0x0) {
    LLDOMGIEPNE__Dispose(pLVar1->CBDMFFMCJBK,in_x1);
    pLVar1 = LLDOMGIEPNE_TypeInfo->static_fields;
  }
  pLVar1->CBDMFFMCJBK = (LLDOMGIEPNE_o *)0x0;
  thunk_FUN_01c20e04(LLDOMGIEPNE_TypeInfo->static_fields,0);
  return;
}

