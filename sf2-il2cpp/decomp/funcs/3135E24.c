// OFFIONDOEPM$$GHALIMLMDOP @ RVA 0x3135E24

System_String_o *
OFFIONDOEPM__GHALIMLMDOP
          (System_String_o *IEPECMCLKJB,System_String_o *AAIHDEKMIJG,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_String_o *pSVar3;
  
  if ((DAT_04566701 & 1) == 0) {
    FUN_01bab630(&StringLiteral_15862);
    FUN_01bab630(&StringLiteral_10185);
    FUN_01bab630(&StringLiteral_21214);
    FUN_01bab630(&StringLiteral_1377);
    DAT_04566701 = 1;
  }
  bVar1 = System_String__op_Equality(IEPECMCLKJB,StringLiteral_21214,(MethodInfo *)0x0);
  if (bVar1) {
LAB_03235f10:
    pSVar3 = System_String__Concat(AAIHDEKMIJG,IEPECMCLKJB,(MethodInfo *)0x0);
    return pSVar3;
  }
  if (IEPECMCLKJB != (System_String_o *)0x0) {
    bVar1 = System_String__StartsWith(IEPECMCLKJB,StringLiteral_10185,(MethodInfo *)0x0);
    if (!bVar1) {
      return IEPECMCLKJB;
    }
    iVar2 = System_String__IndexOf(IEPECMCLKJB,StringLiteral_1377,(MethodInfo *)0x0);
    pSVar3 = System_String__Substring(IEPECMCLKJB,iVar2 + 1,(MethodInfo *)0x0);
    if (pSVar3 != (System_String_o *)0x0) {
      iVar2 = System_String__IndexOf(pSVar3,StringLiteral_15862,(MethodInfo *)0x0);
      IEPECMCLKJB = System_String__Substring(pSVar3,iVar2 + 1,(MethodInfo *)0x0);
      goto LAB_03235f10;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

