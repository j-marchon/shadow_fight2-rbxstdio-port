// NECMEJDCLHM$$EPBENPDCBFE @ RVA 0x3506678

bool NECMEJDCLHM__EPBENPDCBFE(NECMEJDCLHM_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,MethodInfo *method)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  
  if ((DAT_045688a0 & 1) == 0) {
    FUN_01bab630(&StringLiteral_12372);
    FUN_01bab630(&StringLiteral_6310);
    FUN_01bab630(&StringLiteral_5749);
    FUN_01bab630(&StringLiteral_13946);
    DAT_045688a0 = 1;
  }
  if (AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  iVar3 = (AHEFOIOKDOK->fields).LGKFKNGIPDM;
  if (iVar3 == 1) {
    bVar1 = System_String__op_Equality
                      ((__this->fields).IIHMOBEGOGI,StringLiteral_12372,(MethodInfo *)0x0);
    if (!bVar1) {
      iVar3 = (AHEFOIOKDOK->fields).LGKFKNGIPDM;
      goto LAB_036066fc;
    }
  }
  else {
LAB_036066fc:
    if (iVar3 == 2) {
      bVar1 = System_String__op_Equality
                        ((__this->fields).IIHMOBEGOGI,StringLiteral_6310,(MethodInfo *)0x0);
      if (bVar1) goto LAB_03606770;
      iVar3 = (AHEFOIOKDOK->fields).LGKFKNGIPDM;
    }
    if (iVar3 == 3) {
      bVar1 = System_String__op_Equality
                        ((__this->fields).IIHMOBEGOGI,StringLiteral_5749,(MethodInfo *)0x0);
      if (bVar1) goto LAB_03606770;
      iVar3 = (AHEFOIOKDOK->fields).LGKFKNGIPDM;
    }
    if ((iVar3 != 7) ||
       (bVar1 = System_String__op_Equality
                          ((__this->fields).IIHMOBEGOGI,StringLiteral_13946,(MethodInfo *)0x0),
       !bVar1)) {
      bVar2 = 0;
      goto LAB_0360677c;
    }
  }
LAB_03606770:
  bVar2 = 1;
LAB_0360677c:
  return (bool)(bVar2 ^ (__this->fields).super.GBBHFPBFOPI != false);
}

