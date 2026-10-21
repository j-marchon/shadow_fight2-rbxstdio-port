// IMAPABEJECG$$OPAJGJEKAPD @ RVA 0x35C19C0

void IMAPABEJECG__OPAJGJEKAPD(System_String_o *OGPGLGPMEPD,bool HLJOHNIDBDM,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  NHJCFGACFDF_o *pNVar2;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036c19ac with catch @ 036c19c0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036c18e0 with catch @ 036c19c4
                        */
  method_00 = (MethodInfo *)OGPGLGPMEPD;
  if ((DAT_04568f35 & 1) == 0) {
                    /* try { // try from 036c19dc to 037c19df has its CatchHandler @ 036c1a08 */
                    /* try { // try from 036c19e0 to 037c1a17 has its CatchHandler @ 036c1808 */
    method_00 = (MethodInfo *)FUN_01bab630(&IMAPABEJECG_TypeInfo);
    DAT_04568f35 = 1;
  }
  IMAPABEJECG__PPCPAHAPCNB(method_00);
  bVar1 = IMAPABEJECG__HCDIBNJMKLH(method_01);
  if (bVar1) {
                    /* catch() { ... } // from try @ 036c19dc with catch @ 036c1a08 */
    pNVar2 = IMAPABEJECG_TypeInfo->static_fields->KAKIHIMNDAE;
    if (pNVar2 != (NHJCFGACFDF_o *)0x0) {
                    /* try { // try from 036c1a18 to 037c1a1f has its CatchHandler @ 036c1a34 */
                    /* try { // try from 036c1a20 to 037c1a2b has its CatchHandler @ 036c1808 */
                    /* try { // try from 036c1a2c to 037c1a33 has its CatchHandler @ 036c1a34 */
                    /* WARNING: Could not recover jumptable at 0x036c1a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)pNVar2->klass[1]._1.name)
                (pNVar2,OGPGLGPMEPD,HLJOHNIDBDM,pNVar2->klass[1]._1.namespaze);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 036c1a18 with catch @ 036c1a34
                       catch(type#2 @ 00000000) { ... } // from try @ 036c1a2c with catch @ 036c1a34
                        */
  return;
}

