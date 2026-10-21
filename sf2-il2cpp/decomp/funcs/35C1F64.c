// IMAPABEJECG$$KFHNHPGBJBH @ RVA 0x35C1F64

int32_t IMAPABEJECG__KFHNHPGBJBH(MethodInfo *method)

{
  int32_t iVar1;
  NHJCFGACFDF_o *pNVar2;
  
                    /* catch() { ... } // from try @ 036c1f4c with catch @ 036c1f70 */
                    /* try { // try from 036c1f78 to 037c1f7f has its CatchHandler @ 036c1f94 */
  if ((DAT_04568f34 & 1) == 0) {
                    /* try { // try from 036c1f80 to 037c1f8b has its CatchHandler @ 036c1c5c */
    method = (MethodInfo *)FUN_01bab630(&IMAPABEJECG_TypeInfo);
                    /* try { // try from 036c1f8c to 037c1f93 has its CatchHandler @ 036c1f94 */
    DAT_04568f34 = 1;
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 036c1f78 with catch @ 036c1f94
                       catch(type#2 @ 00000000) { ... } // from try @ 036c1f8c with catch @ 036c1f94
                        */
  IMAPABEJECG__PPCPAHAPCNB(method);
                    /* try { // try from 036c1f98 to 037c20a7 has its CatchHandler @ 036c1f98
                       catch() { ... } // from try @ 036c1f98 with catch @ 036c1f98
                       catch() { ... } // from try @ 036c2294 with catch @ 036c1f98
                       catch() { ... } // from try @ 036c2308 with catch @ 036c1f98
                       catch() { ... } // from try @ 036c2370 with catch @ 036c1f98
                       catch() { ... } // from try @ 036c23a0 with catch @ 036c1f98 */
  pNVar2 = IMAPABEJECG_TypeInfo->static_fields->KAKIHIMNDAE;
  if (pNVar2 != (NHJCFGACFDF_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x036c1fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*(pNVar2->klass->vtable)._7_unknown.methodPtr)
                      (pNVar2,(pNVar2->klass->vtable)._7_unknown.method);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

