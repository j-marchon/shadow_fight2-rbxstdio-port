// IMAPABEJECG$$CLKGKNCGJID @ RVA 0x35C1920

void IMAPABEJECG__CLKGKNCGJID
               (System_String_o *OGPGLGPMEPD,int32_t HFELHFCLPJE,int32_t PKEAOHMFMFD,
               bool HLJOHNIDBDM,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  NHJCFGACFDF_o *pNVar2;
  
  method_00 = (MethodInfo *)OGPGLGPMEPD;
  if ((DAT_04568f31 & 1) == 0) {
    method_00 = (MethodInfo *)FUN_01bab630(&IMAPABEJECG_TypeInfo,HFELHFCLPJE,PKEAOHMFMFD);
    DAT_04568f31 = 1;
  }
  IMAPABEJECG__PPCPAHAPCNB(method_00);
  bVar1 = IMAPABEJECG__HCDIBNJMKLH(method_01);
  if (bVar1) {
    pNVar2 = IMAPABEJECG_TypeInfo->static_fields->KAKIHIMNDAE;
    if (pNVar2 != (NHJCFGACFDF_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x036c19a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)pNVar2->klass[1]._1.element_class)
                (pNVar2,OGPGLGPMEPD,HFELHFCLPJE,PKEAOHMFMFD,HLJOHNIDBDM,
                 pNVar2->klass[1]._1.castClass);
      return;
    }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036c19b4 with catch @ 036c19bc
                       try { // try from 036c19bc to 037c19db has its CatchHandler @ 036c1808 */
    FUN_01bab8c8();
  }
                    /* try { // try from 036c19ac to 037c19af has its CatchHandler @ 036c19c0 */
                    /* try { // try from 036c19b0 to 037c19b3 has its CatchHandler @ 036c1808 */
                    /* try { // try from 036c19b4 to 037c19bb has its CatchHandler @ 036c19bc */
  return;
}

