// OJHODFIGFMA$$LIMMPMGLOHC @ RVA 0x323FB68

bool OJHODFIGFMA__LIMMPMGLOHC
               (OJHODFIGFMA_o *__this,System_String_o *ACDJDOCKBKC,System_String_o *EEPLADJHMEB,
               MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  OJHODFIGFMA_o *__this_00;
  MethodInfo *method_00;
  IFBJEEAJGEO_o *pIVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
                    /* try { // try from 0333fb68 to 0343fcef has its CatchHandler @ 0333f990 */
  if ((DAT_04567081 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1);
    DAT_04567081 = 1;
  }
  bVar1 = System_String__op_Equality(ACDJDOCKBKC,StringLiteral_1,(MethodInfo *)0x0);
  if ((bVar1) &&
     (bVar1 = System_String__op_Equality(EEPLADJHMEB,StringLiteral_1,(MethodInfo *)0x0), bVar1)) {
    return true;
  }
  bVar1 = System_String__op_Inequality(ACDJDOCKBKC,StringLiteral_1,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)0x0;
  bVar2 = System_String__op_Inequality(EEPLADJHMEB,StringLiteral_1,(MethodInfo *)0x0);
  fVar4 = OJHODFIGFMA__JNPDHEDIOPF((OJHODFIGFMA_o *)(ulong)bVar2,ACDJDOCKBKC,method_00);
  fVar5 = OJHODFIGFMA__JNPDHEDIOPF(__this_00,EEPLADJHMEB,method_00);
  if ((bVar1) && (bVar2)) {
    pIVar3 = (__this->fields).APPPNIFKKCH;
    if (pIVar3 != (IFBJEEAJGEO_o *)0x0) {
      fVar6 = (pIVar3->fields).KHNHBNKJPAE;
      if (fVar6 <= fVar4) {
        return false;
      }
LAB_0333fc64:
      return fVar6 < fVar5;
    }
  }
  else if (bVar1) {
    pIVar3 = (__this->fields).APPPNIFKKCH;
    if (pIVar3 != (IFBJEEAJGEO_o *)0x0) {
      return fVar4 < (pIVar3->fields).KHNHBNKJPAE;
    }
  }
  else {
    if (!bVar2) {
      return false;
    }
    pIVar3 = (__this->fields).APPPNIFKKCH;
    if (pIVar3 != (IFBJEEAJGEO_o *)0x0) {
      fVar6 = (pIVar3->fields).KHNHBNKJPAE;
      goto LAB_0333fc64;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

