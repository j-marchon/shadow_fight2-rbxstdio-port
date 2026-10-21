// LCOODJKAICL$$DDGMDKMKBHH @ RVA 0x34A2E98

System_String_o * LCOODJKAICL__DDGMDKMKBHH(System_String_o *AAIHDEKMIJG,MethodInfo *method)

{
  int32_t length;
  int32_t startIndex;
  System_String_o *pSVar1;
  MethodInfo *in_x2;
  
  if ((DAT_045684ba & 1) == 0) {
    FUN_01bab630(&StringLiteral_2098);
    DAT_045684ba = 1;
  }
  startIndex = LCOODJKAICL__FIGCOMDDIOM(AAIHDEKMIJG,StringLiteral_2098,in_x2);
  if (AAIHDEKMIJG != (System_String_o *)0x0) {
    length = (AAIHDEKMIJG->fields)._stringLength;
    if (startIndex < length) {
      pSVar1 = System_String__Substring(AAIHDEKMIJG,startIndex,length,(MethodInfo *)0x0);
      return pSVar1;
    }
    return AAIHDEKMIJG;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

