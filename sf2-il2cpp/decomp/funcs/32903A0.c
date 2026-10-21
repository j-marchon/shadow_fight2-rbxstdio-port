// MCBGINPGJCD$$CENGCEHFGFN @ RVA 0x32903A0

System_String_o *
MCBGINPGJCD__CENGCEHFGFN(MCBGINPGJCD_o *__this,System_String_o *AELIJDOOOPN,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((DAT_04567314 & 1) == 0) {
    FUN_01bab630(&StringLiteral_990);
    DAT_04567314 = 1;
  }
  pSVar1 = PCOEHCPGBBG__DJGMLBHEPLF(AELIJDOOOPN,StringLiteral_990,(MethodInfo *)0x0);
  if (pSVar1 != (System_String_o *)0x0) {
    pSVar1 = System_String__TrimStart(pSVar1,0x20,(MethodInfo *)0x0);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

