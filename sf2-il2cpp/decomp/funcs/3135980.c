// ABHILFLLPOD$$GKKINGGIKFI @ RVA 0x3135980

int32_t ABHILFLLPOD__GKKINGGIKFI
                  (ABHILFLLPOD_o *__this,System_String_o *HCBBECJJIKK,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  
  if ((DAT_045666fd & 1) == 0) {
    FUN_01bab630(&StringLiteral_12327);
    __this = (ABHILFLLPOD_o *)FUN_01bab630(&StringLiteral_10572);
    DAT_045666fd = 1;
  }
  if (HCBBECJJIKK == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(__this);
  }
  bVar1 = System_String__Equals(HCBBECJJIKK,StringLiteral_10572,(MethodInfo *)0x0);
  if (bVar1) {
    iVar2 = 1;
  }
  else {
    bVar1 = System_String__Equals(HCBBECJJIKK,StringLiteral_12327,(MethodInfo *)0x0);
    iVar2 = 2;
    if (!bVar1) {
      iVar2 = 0;
    }
  }
  return iVar2;
}

