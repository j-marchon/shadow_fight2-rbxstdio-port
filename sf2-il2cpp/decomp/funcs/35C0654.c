// IKCANHIFLGJ$$NEHFPNBCOLO @ RVA 0x35C0654

bool IKCANHIFLGJ__NEHFPNBCOLO(IKCANHIFLGJ_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04568f15 & 1) == 0) {
    __this = (IKCANHIFLGJ_o *)FUN_01bab630(&StringLiteral_9327);
    DAT_04568f15 = 1;
  }
  if (KGLJICLJHEL != (System_String_o *)0x0) {
    bVar1 = System_String__StartsWith(KGLJICLJHEL,StringLiteral_9327,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

