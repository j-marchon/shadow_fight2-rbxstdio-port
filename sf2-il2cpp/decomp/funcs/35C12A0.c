// IMAPABEJECG$$PPCPAHAPCNB @ RVA 0x35C12A0

void IMAPABEJECG__PPCPAHAPCNB(MethodInfo *method)

{
  MethodInfo *method_00;
  NHJCFGACFDF_o *pNVar1;
  CNOGBOOJFIP_o *pCVar2;
  MethodInfo *method_01;
  MethodInfo *method_02;
  NHJCFGACFDF_o **ppNVar3;
  CNOGBOOJFIP_o **ppCVar4;
  IMAPABEJECG_ADAMKJAHPLL_o local_30;
  
  if ((DAT_04568f2a & 1) == 0) {
    method = (MethodInfo *)FUN_01bab630(&IMAPABEJECG_TypeInfo);
    DAT_04568f2a = 1;
  }
  local_30.fields.dataHolder = (LFEFCNOBPGB_o *)0x0;
  local_30.fields.googlePlayDataHolder = (OCHIFKHFMAC_o *)0x0;
  if (IMAPABEJECG_TypeInfo->static_fields->ECCPBJGMNPE == false) {
    IMAPABEJECG_TypeInfo->static_fields->ECCPBJGMNPE = true;
    local_30.fields.dataHolder = IMAPABEJECG__AJBOOGOHPAI(method);
    method_00 = (MethodInfo *)thunk_FUN_01c20e04(&local_30,local_30.fields.dataHolder);
    local_30.fields.googlePlayDataHolder = IMAPABEJECG__LPBAKNGGBMK(method_00);
    thunk_FUN_01c20e04(&local_30.fields.googlePlayDataHolder);
    pNVar1 = IMAPABEJECG__ILHMBENENJF(&local_30,method_01);
    ppNVar3 = &IMAPABEJECG_TypeInfo->static_fields->KAKIHIMNDAE;
    *ppNVar3 = pNVar1;
    thunk_FUN_01c20e04(ppNVar3,pNVar1);
    pCVar2 = IMAPABEJECG__OLNHKPOOCMA(&local_30,method_02);
    ppCVar4 = &IMAPABEJECG_TypeInfo->static_fields->BPIIMPKLPCP;
    *ppCVar4 = pCVar2;
    thunk_FUN_01c20e04(ppCVar4,pCVar2);
    pNVar1 = IMAPABEJECG_TypeInfo->static_fields->KAKIHIMNDAE;
    if (pNVar1 != (NHJCFGACFDF_o *)0x0) {
      (*(pNVar1->klass->vtable)._8_unknown.methodPtr)
                (pNVar1,(pNVar1->klass->vtable)._8_unknown.method);
    }
  }
  return;
}

