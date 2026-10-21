// IMAPABEJECG$$HEHBOCDCKEN @ RVA 0x35C1B8C

void IMAPABEJECG__HEHBOCDCKEN(MethodInfo *method)

{
  NHJCFGACFDF_o *pNVar1;
  
  if ((DAT_04568f28 & 1) == 0) {
    method = (MethodInfo *)FUN_01bab630(&IMAPABEJECG_TypeInfo);
    DAT_04568f28 = 1;
  }
  IMAPABEJECG__PPCPAHAPCNB(method);
  pNVar1 = IMAPABEJECG_TypeInfo->static_fields->KAKIHIMNDAE;
  if (pNVar1 != (NHJCFGACFDF_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x036c1be4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pNVar1->klass[1]._1.byval_arg.data)(pNVar1,*(undefined8 *)&pNVar1->klass[1]._1.byval_arg.bits)
    ;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

