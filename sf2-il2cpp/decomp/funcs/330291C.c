// AEGOLGIJEBI$$HFNAALDHDFI @ RVA 0x330291C

System_String_o *
AEGOLGIJEBI__HFNAALDHDFI
          (System_String_o *JGHIJMJNJLE,System_String_o *DLNELFKJCII,System_String_o *LBLEPJOEKHP,
          MethodInfo *method)

{
  int iVar1;
  int iVar2;
  int32_t FEDCJPALCBN;
  int32_t LCOKDKPMKIE;
  MethodInfo *in_x5;
  int startIndex;
  
  if ((DAT_04567734 & 1) == 0) {
    FUN_01bab630(&StringLiteral_2421);
    FUN_01bab630(&StringLiteral_2475);
    DAT_04567734 = 1;
  }
  if (JGHIJMJNJLE != (System_String_o *)0x0) {
    if (0 < (JGHIJMJNJLE->fields)._stringLength) {
      startIndex = 0;
      do {
        FEDCJPALCBN = System_String__IndexOf
                                (JGHIJMJNJLE,StringLiteral_2421,startIndex,(MethodInfo *)0x0);
        if (FEDCJPALCBN < 0) {
          return JGHIJMJNJLE;
        }
        if (StringLiteral_2421 == (System_String_o *)0x0) goto LAB_03402a38;
                    /* try { // try from 034029c0 to 03502bb7 has its CatchHandler @ 034029c0
                       catch() { ... } // from try @ 034029c0 with catch @ 034029c0
                       catch() { ... } // from try @ 03402cb4 with catch @ 034029c0
                       catch() { ... } // from try @ 03402dc0 with catch @ 034029c0
                       catch() { ... } // from try @ 03402dc8 with catch @ 034029c0
                       catch() { ... } // from try @ 03402e9c with catch @ 034029c0 */
        LCOKDKPMKIE = System_String__IndexOf
                                (JGHIJMJNJLE,StringLiteral_2475,
                                 (StringLiteral_2421->fields)._stringLength + FEDCJPALCBN,
                                 (MethodInfo *)0x0);
        if (LCOKDKPMKIE < 0) {
          return JGHIJMJNJLE;
        }
        iVar1 = (JGHIJMJNJLE->fields)._stringLength;
        JGHIJMJNJLE = AEGOLGIJEBI__PHGPECNGPEG
                                (JGHIJMJNJLE,FEDCJPALCBN,LCOKDKPMKIE,DLNELFKJCII,LBLEPJOEKHP,in_x5);
        if ((JGHIJMJNJLE == (System_String_o *)0x0) ||
           (StringLiteral_2475 == (System_String_o *)0x0)) goto LAB_03402a38;
        iVar2 = (JGHIJMJNJLE->fields)._stringLength;
        startIndex = ((LCOKDKPMKIE + startIndex) - iVar1) + iVar2 +
                     (StringLiteral_2475->fields)._stringLength;
      } while (startIndex < iVar2);
    }
    return JGHIJMJNJLE;
  }
LAB_03402a38:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

