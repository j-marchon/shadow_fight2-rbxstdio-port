// IMAPABEJECG$$NCJLBDIMPED @ RVA 0x35C1AC8

bool IMAPABEJECG__NCJLBDIMPED(MethodInfo *method)

{
  undefined1 uVar1;
  NHJCFGACFDF_o *pNVar2;
  
  if ((DAT_04568f26 & 1) == 0) {
    method = (MethodInfo *)FUN_01bab630(&IMAPABEJECG_TypeInfo);
    DAT_04568f26 = 1;
  }
  IMAPABEJECG__PPCPAHAPCNB(method);
  pNVar2 = IMAPABEJECG_TypeInfo->static_fields->KAKIHIMNDAE;
  if (pNVar2 != (NHJCFGACFDF_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x036c1b1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(pNVar2->klass->vtable)._4_unknown.methodPtr)
                      (pNVar2,(pNVar2->klass->vtable)._4_unknown.method);
    return (bool)uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

