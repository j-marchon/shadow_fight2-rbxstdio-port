// IMAPABEJECG$$NHOLBMHOMCM @ RVA 0x35C1F08

bool IMAPABEJECG__NHOLBMHOMCM(MethodInfo *method)

{
  undefined1 uVar1;
  NHJCFGACFDF_o *pNVar2;
  
                    /* try { // try from 036c1f10 to 037c1f13 has its CatchHandler @ 036c1f30 */
                    /* try { // try from 036c1f14 to 037c1f4b has its CatchHandler @ 036c1c5c */
  if ((DAT_04568f33 & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036c1e40 with catch @ 036c1f28
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036c1e30 with catch @ 036c1f2c
                        */
    method = (MethodInfo *)FUN_01bab630(&IMAPABEJECG_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036c1f10 with catch @ 036c1f30
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036c1df0 with catch @ 036c1f34
                        */
    DAT_04568f33 = 1;
  }
  IMAPABEJECG__PPCPAHAPCNB(method);
  pNVar2 = IMAPABEJECG_TypeInfo->static_fields->KAKIHIMNDAE;
  if (pNVar2 != (NHJCFGACFDF_o *)0x0) {
                    /* try { // try from 036c1f4c to 037c1f4f has its CatchHandler @ 036c1f70 */
                    /* try { // try from 036c1f50 to 037c1f77 has its CatchHandler @ 036c1c5c */
                    /* WARNING: Could not recover jumptable at 0x036c1f5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(pNVar2->klass->vtable)._11_NHOLBMHOMCM.methodPtr)
                      (pNVar2,(pNVar2->klass->vtable)._11_NHOLBMHOMCM.method);
    return (bool)uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

