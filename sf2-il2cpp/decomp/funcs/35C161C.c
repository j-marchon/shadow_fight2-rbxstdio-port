// IMAPABEJECG$$KNLFICNFHBE @ RVA 0x35C161C

void IMAPABEJECG__KNLFICNFHBE(MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  NHJCFGACFDF_o *pNVar2;
  
  if ((DAT_04568f21 & 1) == 0) {
    method = (MethodInfo *)FUN_01bab630(&IMAPABEJECG_TypeInfo);
    DAT_04568f21 = 1;
  }
  IMAPABEJECG__PPCPAHAPCNB(method);
  bVar1 = IMAPABEJECG__HCDIBNJMKLH(method_00);
  if (bVar1) {
    pNVar2 = IMAPABEJECG_TypeInfo->static_fields->KAKIHIMNDAE;
    if (pNVar2 != (NHJCFGACFDF_o *)0x0) {
                    /* try { // try from 036c1668 to 037c166f has its CatchHandler @ 036c17a4 */
                    /* WARNING: Could not recover jumptable at 0x036c1674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)pNVar2->klass[1]._1.interfaceOffsets)(pNVar2,pNVar2->klass[1].static_fields);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

