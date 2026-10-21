// IMAPABEJECG$$FNGMPMDBIKB @ RVA 0x35C21D0

void IMAPABEJECG__FNGMPMDBIKB(MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  NHJCFGACFDF_o *pNVar2;
  
                    /* try { // try from 036c21dc to 037c21e3 has its CatchHandler @ 036c2310 */
  if ((DAT_04568f39 & 1) == 0) {
    method = (MethodInfo *)FUN_01bab630(&IMAPABEJECG_TypeInfo);
    DAT_04568f39 = 1;
  }
  IMAPABEJECG__PPCPAHAPCNB(method);
  bVar1 = IMAPABEJECG__NCLOHJCDCEJ(method_00);
  if (bVar1) {
    pNVar2 = IMAPABEJECG_TypeInfo->static_fields->KAKIHIMNDAE;
    if (pNVar2 != (NHJCFGACFDF_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x036c2228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)pNVar2->klass[1]._1.declaringType)(pNVar2,pNVar2->klass[1]._1.parent);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

