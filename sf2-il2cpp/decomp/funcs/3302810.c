// AEGOLGIJEBI$$FPLAOOJFKGJ @ RVA 0x3302810

System_String_o * AEGOLGIJEBI__FPLAOOJFKGJ(System_String_o *JGHIJMJNJLE,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  MethodInfo *method_00;
  undefined1 auVar3 [16];
  
  auVar3._8_8_ = method;
  auVar3._0_8_ = JGHIJMJNJLE;
  if ((DAT_0456772e & 1) == 0) {
    FUN_01bab630(&StringLiteral_2421);
    FUN_01bab630(&StringLiteral_562);
    FUN_01bab630(&StringLiteral_529);
    FUN_01bab630(&StringLiteral_528);
    FUN_01bab630(&StringLiteral_561);
    FUN_01bab630(&StringLiteral_2475);
    auVar3 = FUN_01bab630(&StringLiteral_1497);
    DAT_0456772e = 1;
  }
  if (JGHIJMJNJLE != (System_String_o *)0x0) {
    bVar1 = System_String__Contains(JGHIJMJNJLE,StringLiteral_2421,(MethodInfo *)0x0);
    if (bVar1) {
      method_00 = (MethodInfo *)0x0;
      pSVar2 = System_String__Replace
                         (JGHIJMJNJLE,StringLiteral_1497,StringLiteral_2475,(MethodInfo *)0x0);
      pSVar2 = AEGOLGIJEBI__HFNAALDHDFI(pSVar2,StringLiteral_529,StringLiteral_528,method_00);
      pSVar2 = AEGOLGIJEBI__HFNAALDHDFI(pSVar2,StringLiteral_562,StringLiteral_561,method_00);
      return pSVar2;
    }
    return JGHIJMJNJLE;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar3._0_8_,auVar3._8_8_);
}

