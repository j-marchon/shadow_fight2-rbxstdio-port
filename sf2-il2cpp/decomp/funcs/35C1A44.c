// IMAPABEJECG$$DGLJCGNHLIG @ RVA 0x35C1A44

void IMAPABEJECG__DGLJCGNHLIG(MethodInfo *method)

{
  IMAPABEJECG_StaticFields *pIVar1;
  CNOGBOOJFIP_o **ppCVar2;
  NHJCFGACFDF_o *pNVar3;
  
  if ((DAT_04568f25 & 1) == 0) {
    FUN_01bab630(&IMAPABEJECG_TypeInfo);
    DAT_04568f25 = 1;
  }
  pIVar1 = IMAPABEJECG_TypeInfo->static_fields;
  pNVar3 = pIVar1->KAKIHIMNDAE;
  pIVar1->ECCPBJGMNPE = false;
  if (pNVar3 != (NHJCFGACFDF_o *)0x0) {
    (*(pNVar3->klass->vtable)._9_HNIHOIAMDPC.methodPtr)
              (pNVar3,(pNVar3->klass->vtable)._9_HNIHOIAMDPC.method);
    pIVar1 = IMAPABEJECG_TypeInfo->static_fields;
  }
  pIVar1->KAKIHIMNDAE = (NHJCFGACFDF_o *)0x0;
  thunk_FUN_01c20e04(&pIVar1->KAKIHIMNDAE,0);
  ppCVar2 = &IMAPABEJECG_TypeInfo->static_fields->BPIIMPKLPCP;
  *ppCVar2 = (CNOGBOOJFIP_o *)0x0;
  thunk_FUN_01c20e04(ppCVar2,0);
  return;
}

