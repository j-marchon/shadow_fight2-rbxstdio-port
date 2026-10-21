// IMAPABEJECG$$PLPICDIFHHG @ RVA 0x35C1EA8

System_String_o * IMAPABEJECG__PLPICDIFHHG(MethodInfo *method)

{
  NHJCFGACFDF_o *pNVar1;
  System_String_o *pSVar2;
  
  if ((DAT_04568f32 & 1) == 0) {
    method = (MethodInfo *)FUN_01bab630(&IMAPABEJECG_TypeInfo);
    DAT_04568f32 = 1;
  }
  IMAPABEJECG__PPCPAHAPCNB(method);
  pNVar1 = IMAPABEJECG_TypeInfo->static_fields->KAKIHIMNDAE;
  if (pNVar1 != (NHJCFGACFDF_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x036c1f00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pSVar2 = (System_String_o *)(*pNVar1->klass[1]._1.interopData)(pNVar1,pNVar1->klass[1]._1.klass)
    ;
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

