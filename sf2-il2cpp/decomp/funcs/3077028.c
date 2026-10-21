// KKCBGIBKOCP$$KMCFMENCOAH @ RVA 0x3077028

System_String_o * KKCBGIBKOCP__KMCFMENCOAH(System_String_o *LFGKEPCBPKF,MethodInfo *method)

{
  bool bVar1;
  int32_t length;
  System_String_o *pSVar2;
  
  if ((DAT_04565fb8 & 1) == 0) {
    FUN_01bab630(&StringLiteral_16730);
    FUN_01bab630(&StringLiteral_20237);
    FUN_01bab630(&StringLiteral_19269);
    FUN_01bab630(&StringLiteral_19270);
    FUN_01bab630(&StringLiteral_21489);
    DAT_04565fb8 = 1;
  }
  if (LFGKEPCBPKF != (System_String_o *)0x0) {
    length = System_String__LastIndexOf(LFGKEPCBPKF,0x2e,(MethodInfo *)0x0);
    if (0 < length) {
      pSVar2 = System_String__Substring(LFGKEPCBPKF,length + 1,(MethodInfo *)0x0);
      if (pSVar2 == (System_String_o *)0x0) goto LAB_03177178;
      pSVar2 = System_String__ToLower(pSVar2,(MethodInfo *)0x0);
      bVar1 = System_String__op_Equality(pSVar2,StringLiteral_20237,(MethodInfo *)0x0);
      if ((((bVar1) ||
           (bVar1 = System_String__op_Equality(pSVar2,StringLiteral_19270,(MethodInfo *)0x0), bVar1)
           ) || (bVar1 = System_String__op_Equality(pSVar2,StringLiteral_19269,(MethodInfo *)0x0),
                bVar1)) ||
         ((bVar1 = System_String__op_Equality(pSVar2,StringLiteral_21489,(MethodInfo *)0x0), bVar1
          || (bVar1 = System_String__op_Equality(pSVar2,StringLiteral_16730,(MethodInfo *)0x0),
             bVar1)))) {
        pSVar2 = System_String__Substring(LFGKEPCBPKF,0,length,(MethodInfo *)0x0);
        return pSVar2;
      }
    }
    return LFGKEPCBPKF;
  }
LAB_03177178:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

