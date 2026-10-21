// IMAPABEJECG$$FOGOMNAOMBD @ RVA 0x35C1BEC

void IMAPABEJECG__FOGOMNAOMBD(MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  NHJCFGACFDF_o *pNVar2;
  
  if ((DAT_04568f29 & 1) == 0) {
    method = (MethodInfo *)FUN_01bab630(&IMAPABEJECG_TypeInfo);
    DAT_04568f29 = 1;
  }
  IMAPABEJECG__PPCPAHAPCNB(method);
  bVar1 = IMAPABEJECG__HCDIBNJMKLH(method_00);
  if (bVar1) {
    pNVar2 = IMAPABEJECG_TypeInfo->static_fields->KAKIHIMNDAE;
    if (pNVar2 != (NHJCFGACFDF_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x036c1c40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pNVar2->klass->vtable)._6_unknown.methodPtr)
                (pNVar2,(pNVar2->klass->vtable)._6_unknown.method);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

