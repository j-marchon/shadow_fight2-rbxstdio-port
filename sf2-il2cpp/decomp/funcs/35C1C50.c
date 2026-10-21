// IMAPABEJECG$$AJBOOGOHPAI @ RVA 0x35C1C50

LFEFCNOBPGB_o * IMAPABEJECG__AJBOOGOHPAI(MethodInfo *method)

{
  bool bVar1;
  LFEFCNOBPGB_o *__this;
  
                    /* try { // try from 036c1c5c to 037c1def has its CatchHandler @ 036c1c5c
                       catch() { ... } // from try @ 036c1c5c with catch @ 036c1c5c
                       catch() { ... } // from try @ 036c1e4c with catch @ 036c1c5c
                       catch() { ... } // from try @ 036c1f14 with catch @ 036c1c5c
                       catch() { ... } // from try @ 036c1f50 with catch @ 036c1c5c
                       catch() { ... } // from try @ 036c1f80 with catch @ 036c1c5c */
  if ((DAT_04568f2e & 1) == 0) {
    method = (MethodInfo *)FUN_01bab630(&HLMLENLKHFF_TypeInfo);
    DAT_04568f2e = 1;
  }
  bVar1 = IMAPABEJECG__EMBIGPDBNKJ(method);
  if (bVar1) {
    __this = (LFEFCNOBPGB_o *)thunk_FUN_01bda818(HLMLENLKHFF_TypeInfo);
    HLMLENLKHFF___ctor((HLMLENLKHFF_o *)__this,(MethodInfo *)0x0);
  }
  else {
    __this = (LFEFCNOBPGB_o *)0x0;
  }
  return __this;
}

