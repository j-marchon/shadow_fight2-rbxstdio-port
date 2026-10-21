// IMAPABEJECG$$KCHJCGEMCGE @ RVA 0x35C14A8

System_String_o * IMAPABEJECG__KCHJCGEMCGE(MethodInfo *method)

{
  NHJCFGACFDF_o *pNVar1;
  System_String_o *pSVar2;
  
  if ((DAT_04568f1f & 1) == 0) {
    method = (MethodInfo *)FUN_01bab630(&IMAPABEJECG_TypeInfo);
    DAT_04568f1f = 1;
  }
  IMAPABEJECG__PPCPAHAPCNB(method);
  pNVar1 = IMAPABEJECG_TypeInfo->static_fields->KAKIHIMNDAE;
  if (pNVar1 != (NHJCFGACFDF_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x036c1500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pSVar2 = (System_String_o *)
             (*pNVar1->klass[1]._1.generic_class)(pNVar1,pNVar1->klass[1]._1.typeMetadataHandle);
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

