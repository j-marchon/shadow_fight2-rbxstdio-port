// OLKKAIFGGAK$$CBHNPDFKELD @ RVA 0x34EEB60

bool OLKKAIFGGAK__CBHNPDFKELD(OLKKAIFGGAK_o *__this,MethodInfo *method)

{
  bool bVar1;
  PJKHAJKEHEL_o *pPVar2;
  HOOAAGABMBL_o *pHVar3;
  undefined1 auVar4 [16];
  
  auVar4._8_8_ = method;
  auVar4._0_8_ = __this;
  if ((DAT_045687a6 & 1) == 0) {
    auVar4 = FUN_01bab630(&StringLiteral_5494);
    DAT_045687a6 = 1;
  }
  pPVar2 = (__this->fields).FAPMJJBOFEF;
  if ((pPVar2 != (PJKHAJKEHEL_o *)0x0) &&
     (pHVar3 = (pPVar2->fields).PEMECEBIJDM, pHVar3 != (HOOAAGABMBL_o *)0x0)) {
    bVar1 = System_String__op_Equality
                      ((pHVar3->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_5494,
                       (MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar4._0_8_,auVar4._8_8_);
}

