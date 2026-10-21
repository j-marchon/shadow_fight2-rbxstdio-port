// EGMONPGHHDP.DGJPDKNGGAJ$$CCKCKNLJALI @ RVA 0x304CA28

bool EGMONPGHHDP_DGJPDKNGGAJ__CCKCKNLJALI
               (EGMONPGHHDP_DGJPDKNGGAJ_o *__this,HOOAAGABMBL_o *x,MethodInfo *method)

{
  bool bVar1;
  System_String_o *b;
  EGMONPGHHDP_o *pEVar2;
  JMDPBFOCHHP_JMEJFGKJNEA_o *pJVar3;
  
                    /* try { // try from 0314ca28 to 0324ca2f has its CatchHandler @ 0314ca30 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0314c9b8 with catch @ 0314ca30
                       catch(type#2 @ 00000000) { ... } // from try @ 0314ca00 with catch @ 0314ca30
                       catch(type#2 @ 00000000) { ... } // from try @ 0314ca28 with catch @ 0314ca30
                        */
  if ((x != (HOOAAGABMBL_o *)0x0) &&
     (pEVar2 = (__this->fields).__4__this, pEVar2 != (EGMONPGHHDP_o *)0x0)) {
    pJVar3 = (pEVar2->fields)._BJALAALAIDH_k__BackingField;
    if (pJVar3 == (JMDPBFOCHHP_JMEJFGKJNEA_o *)0x0) {
      b = (System_String_o *)0x0;
    }
    else {
      b = (pJVar3->fields).COENDIKFHPA;
    }
    bVar1 = System_String__op_Equality((x->fields)._COIPKAKHDFP_k__BackingField,b,(MethodInfo *)0x0)
    ;
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

