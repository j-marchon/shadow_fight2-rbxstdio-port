// IMAPABEJECG$$OLGAHLHLCKH @ RVA 0x35C1E40

void IMAPABEJECG__OLGAHLHLCKH(MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  NHJCFGACFDF_o *pNVar2;
  
                    /* try { // try from 036c1e40 to 037c1e4b has its CatchHandler @ 036c1f28 */
                    /* try { // try from 036c1e4c to 037c1f0f has its CatchHandler @ 036c1c5c */
  if ((DAT_04568f30 & 1) == 0) {
    method = (MethodInfo *)FUN_01bab630(&IMAPABEJECG_TypeInfo);
    DAT_04568f30 = 1;
  }
  IMAPABEJECG__PPCPAHAPCNB(method);
  bVar1 = IMAPABEJECG__HCDIBNJMKLH(method_00);
  if (bVar1) {
    pNVar2 = IMAPABEJECG_TypeInfo->static_fields->KAKIHIMNDAE;
    if (pNVar2 != (NHJCFGACFDF_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x036c1e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)pNVar2->klass[1].rgctx_data)(pNVar2,pNVar2->klass[1]._2.typeHierarchy);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

