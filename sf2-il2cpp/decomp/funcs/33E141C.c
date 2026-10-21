// HDBNGIBFEBA$$MGGHPGELKIP @ RVA 0x33E141C

int32_t HDBNGIBFEBA__MGGHPGELKIP
                  (HDBNGIBFEBA_o *__this,System_String_o *HEHMPFLAEGE,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04567ea1 & 1) == 0) {
    FUN_01bab630(&StringLiteral_8907);
    FUN_01bab630(&StringLiteral_5759);
    DAT_04567ea1 = 1;
  }
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(HEHMPFLAEGE,(MethodInfo *)0x0);
  if (!bVar1) {
    if (HEHMPFLAEGE == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = System_String__Equals(HEHMPFLAEGE,StringLiteral_8907,(MethodInfo *)0x0);
    if (!bVar1) {
      bVar1 = System_String__Equals(HEHMPFLAEGE,StringLiteral_5759,(MethodInfo *)0x0);
      if (bVar1) {
        return 2;
      }
      return 0;
    }
  }
  return 1;
}

