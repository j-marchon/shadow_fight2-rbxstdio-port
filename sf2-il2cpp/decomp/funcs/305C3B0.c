// ACHLOMELAJE$$ILELLIOBAAM @ RVA 0x305C3B0

bool ACHLOMELAJE__ILELLIOBAAM
               (ACHLOMELAJE_o *__this,System_String_o *ACCIHBHMFPN,System_String_o *KGLJICLJHEL,
               MethodInfo *method)

{
  bool bVar1;
  BNKBGIIJNLF_o *pBVar2;
  MethodInfo *method_00;
  
  if ((DAT_04565e96 & 1) == 0) {
    FUN_01bab630(&StringLiteral_3535);
    FUN_01bab630(&StringLiteral_4921);
    FUN_01bab630(&StringLiteral_6868);
    DAT_04565e96 = 1;
  }
  bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_6868,(MethodInfo *)0x0);
  if ((bVar1) ||
     (bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_3535,(MethodInfo *)0x0), bVar1))
  {
    bVar1 = true;
  }
  else {
    method_00 = (MethodInfo *)0x0;
    bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_4921,(MethodInfo *)0x0);
    if ((bVar1) ||
       (bVar1 = System_String__IsNullOrEmpty(ACCIHBHMFPN,(MethodInfo *)0x0),
       KGLJICLJHEL = ACCIHBHMFPN, !bVar1)) {
      pBVar2 = ACHLOMELAJE__CJLEHKJCCBE(__this,KGLJICLJHEL,method_00);
      bVar1 = pBVar2 != (BNKBGIIJNLF_o *)0x0;
    }
    else {
      bVar1 = false;
    }
  }
  return bVar1;
}

