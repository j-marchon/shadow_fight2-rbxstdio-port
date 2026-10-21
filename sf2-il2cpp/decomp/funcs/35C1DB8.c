// IMAPABEJECG$$ADBBGOBBAJA @ RVA 0x35C1DB8

System_String_o * IMAPABEJECG__ADBBGOBBAJA(MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  NHJCFGACFDF_o *pNVar2;
  System_String_o *pSVar3;
  
  if ((DAT_04568f2c & 1) == 0) {
    FUN_01bab630(&IMAPABEJECG_TypeInfo);
    method = (MethodInfo *)FUN_01bab630(&string_TypeInfo);
    DAT_04568f2c = 1;
  }
  IMAPABEJECG__PPCPAHAPCNB(method);
  bVar1 = IMAPABEJECG__HCDIBNJMKLH(method_00);
                    /* try { // try from 036c1df0 to 037c1df7 has its CatchHandler @ 036c1f34 */
  if (bVar1) {
    pNVar2 = IMAPABEJECG_TypeInfo->static_fields->KAKIHIMNDAE;
    if (pNVar2 != (NHJCFGACFDF_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x036c1e1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pSVar3 = (System_String_o *)(*pNVar2->klass[1]._1.image)(pNVar2,pNVar2->klass[1]._1.gc_desc);
      return pSVar3;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 036c1e30 to 037c1e3b has its CatchHandler @ 036c1f2c */
  return string_TypeInfo->static_fields->Empty;
}

