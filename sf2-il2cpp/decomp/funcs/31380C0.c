// OFFIONDOEPM$$GKMBNILEEDE @ RVA 0x31380C0

System_String_o *
OFFIONDOEPM__GKMBNILEEDE(bool FIICJBPKIJA,System_String_o *CIIDODDGNBA,MethodInfo *method)

{
  int32_t iVar1;
  System_String_o *pSVar2;
  
  if ((DAT_0456670c & 1) == 0) {
    FUN_01bab630(&StringLiteral_20276);
    FUN_01bab630(&StringLiteral_1377);
    DAT_0456670c = 1;
  }
  if (FIICJBPKIJA) {
    if (CIIDODDGNBA == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar1 = System_String__IndexOf(CIIDODDGNBA,StringLiteral_1377,(MethodInfo *)0x0);
    if (iVar1 < 0) {
      pSVar2 = System_String__Concat(StringLiteral_20276,CIIDODDGNBA,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
  return CIIDODDGNBA;
}

