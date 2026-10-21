// PJKHAJKEHEL$$AKIBJLFMCEF @ RVA 0x30411AC

bool PJKHAJKEHEL__AKIBJLFMCEF(PJKHAJKEHEL_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *b;
  MethodInfo *extraout_x1;
  HOOAAGABMBL_o *pHVar2;
  System_String_o *a;
  
                    /* try { // try from 031411b0 to 032411b7 has its CatchHandler @ 031411b8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03141198 with catch @ 031411b8
                       catch(type#2 @ 00000000) { ... } // from try @ 031411b0 with catch @ 031411b8
                        */
                    /* catch() { ... } // from try @ 03141254 with catch @ 031411c0
                       catch() { ... } // from try @ 03141334 with catch @ 031411c0 */
  if ((DAT_04565db2 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&StringLiteral_8772);
    DAT_04565db2 = 1;
    method = extraout_x1;
  }
  pHVar2 = (__this->fields).AIDDHEHFBEG;
  if (pHVar2 != (HOOAAGABMBL_o *)0x0) {
                    /* try { // try from 031411f0 to 03241203 has its CatchHandler @ 031412ec */
    a = (pHVar2->fields)._COIPKAKHDFP_k__BackingField;
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
    }
    b = MGNPHCAAEIO__OKOJOGAHMFP(StringLiteral_8772,(MethodInfo *)0x0);
                    /* try { // try from 0314122c to 0324122f has its CatchHandler @ 031412e4 */
    bVar1 = System_String__op_Inequality(a,b,(MethodInfo *)0x0);
    return bVar1;
  }
  return false;
}

