// MGNPHCAAEIO$$GJFJEHANLBD @ RVA 0x33FF8D4

bool MGNPHCAAEIO__GJFJEHANLBD(HOOAAGABMBL_o *IKKAMAMLIKA,MethodInfo *method)

{
  bool bVar1;
  System_String_o *a;
  
  if ((DAT_04567ffd & 1) == 0) {
    FUN_01bab630(&StringLiteral_14870);
    FUN_01bab630(&StringLiteral_3076);
    FUN_01bab630(&StringLiteral_8772);
    FUN_01bab630(&StringLiteral_11017);
    FUN_01bab630(&StringLiteral_7066);
    DAT_04567ffd = 1;
  }
  if (IKKAMAMLIKA == (HOOAAGABMBL_o *)0x0) {
    bVar1 = false;
  }
  else {
    a = (IKKAMAMLIKA->fields)._GMPAEDFIIHF_k__BackingField;
    bVar1 = System_String__op_Equality(a,StringLiteral_14870,(MethodInfo *)0x0);
    if ((((!bVar1) &&
         (bVar1 = System_String__op_Equality(a,StringLiteral_3076,(MethodInfo *)0x0), !bVar1)) &&
        (bVar1 = System_String__op_Equality(a,StringLiteral_7066,(MethodInfo *)0x0), !bVar1)) &&
       (bVar1 = System_String__op_Equality(a,StringLiteral_11017,(MethodInfo *)0x0), !bVar1)) {
      bVar1 = System_String__op_Equality(a,StringLiteral_8772,(MethodInfo *)0x0);
      return bVar1;
    }
    bVar1 = true;
  }
  return bVar1;
}

