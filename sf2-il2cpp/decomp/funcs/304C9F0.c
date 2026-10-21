// EGMONPGHHDP.BBJDAAOJLFM$$NHLLMBGFKOK @ RVA 0x304C9F0

bool EGMONPGHHDP_BBJDAAOJLFM__NHLLMBGFKOK
               (EGMONPGHHDP_BBJDAAOJLFM_o *__this,HOOAAGABMBL_o *x,MethodInfo *method)

{
  bool bVar1;
  System_String_o *b;
  EGMONPGHHDP_o *pEVar2;
  JMDPBFOCHHP_JMEJFGKJNEA_o *pJVar3;
  
                    /* catch() { ... } // from try @ 0314c9dc with catch @ 0314c9f4 */
  if ((x != (HOOAAGABMBL_o *)0x0) &&
     (pEVar2 = (__this->fields).__4__this, pEVar2 != (EGMONPGHHDP_o *)0x0)) {
                    /* try { // try from 0314ca00 to 0324ca17 has its CatchHandler @ 0314ca30 */
    pJVar3 = (pEVar2->fields)._BJALAALAIDH_k__BackingField;
    if (pJVar3 == (JMDPBFOCHHP_JMEJFGKJNEA_o *)0x0) {
      b = (System_String_o *)0x0;
    }
    else {
      b = (pJVar3->fields).COENDIKFHPA;
    }
                    /* try { // try from 0314ca18 to 0324ca27 has its CatchHandler @ 0314c894 */
    bVar1 = System_String__op_Equality((x->fields)._COIPKAKHDFP_k__BackingField,b,(MethodInfo *)0x0)
    ;
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

