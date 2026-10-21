// LCOODJKAICL$$KFFIFGDKGCE @ RVA 0x34A2E44

bool LCOODJKAICL__KFFIFGDKGCE(System_String_o *AAIHDEKMIJG,MethodInfo *method)

{
  bool bVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = AAIHDEKMIJG;
  if ((DAT_045684b8 & 1) == 0) {
    auVar2 = FUN_01bab630(&StringLiteral_1);
    DAT_045684b8 = 1;
  }
  if (AAIHDEKMIJG != (System_String_o *)0x0) {
    bVar1 = System_String__Contains(AAIHDEKMIJG,StringLiteral_1,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}

