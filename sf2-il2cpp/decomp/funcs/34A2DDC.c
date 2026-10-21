// LCOODJKAICL$$IPFHDLKHBDC @ RVA 0x34A2DDC

System_String_o * LCOODJKAICL__IPFHDLKHBDC(System_String_o *AAIHDEKMIJG,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_045684b9 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1);
    DAT_045684b9 = 1;
    method = extraout_x1;
  }
  bVar1 = LCOODJKAICL__KFFIFGDKGCE(AAIHDEKMIJG,method);
  if (bVar1) {
    return AAIHDEKMIJG;
  }
  pSVar2 = System_String__Concat(StringLiteral_1,AAIHDEKMIJG,(MethodInfo *)0x0);
  return pSVar2;
}

