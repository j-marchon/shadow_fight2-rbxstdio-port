// IOIKBGAJIGO$$JJDDMIBJDKG @ RVA 0x3375660

bool IOIKBGAJIGO__JJDDMIBJDKG
               (System_String_o *IIDPDAKKFFN,System_String_o *DDGBMJNBFPF,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  
  if ((DAT_04567b46 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1);
    DAT_04567b46 = 1;
  }
  bVar1 = System_String__op_Equality(IIDPDAKKFFN,DDGBMJNBFPF,(MethodInfo *)0x0);
  if ((!bVar1) &&
     (bVar1 = System_String__op_Equality(IIDPDAKKFFN,StringLiteral_1,(MethodInfo *)0x0), !bVar1)) {
    bVar1 = System_String__op_Inequality(DDGBMJNBFPF,StringLiteral_1,(MethodInfo *)0x0);
    if (bVar1) {
      iVar2 = System_String__Compare(IIDPDAKKFFN,DDGBMJNBFPF,(MethodInfo *)0x0);
      return SUB41((uint)iVar2 >> 0x1f,0);
    }
    return false;
  }
  return true;
}

