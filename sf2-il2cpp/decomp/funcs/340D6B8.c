// MGNPHCAAEIO$$AFEAIGKCFBL @ RVA 0x340D6B8

System_String_o *
MGNPHCAAEIO__AFEAIGKCFBL
          (System_String_o *LLBGPJOMALE,int32_t KAPOHFHHDEP,float JKOJPEKLBCI,MethodInfo *method)

{
  System_String_array *values;
  System_String_o *pSVar1;
  float __this;
  float local_28;
  int32_t local_24;
  
                    /* try { // try from 0350d6bc to 0360d6bf has its CatchHandler @ 0350d774 */
                    /* try { // try from 0350d6c0 to 0360d6cb has its CatchHandler @ 0350d780 */
                    /* try { // try from 0350d6dc to 0360d6df has its CatchHandler @ 0350d770 */
                    /* try { // try from 0350d6e0 to 0360d6eb has its CatchHandler @ 0350d77c */
  local_28 = JKOJPEKLBCI;
  local_24 = KAPOHFHHDEP;
  if ((DAT_04568054 & 1) == 0) {
    FUN_01bab630(&string___TypeInfo);
                    /* try { // try from 0350d6f0 to 0360d6f7 has its CatchHandler @ 0350d778 */
    FUN_01bab630(&StringLiteral_250);
                    /* try { // try from 0350d700 to 0360d70f has its CatchHandler @ 0350d788 */
    FUN_01bab630(&StringLiteral_2422);
    FUN_01bab630(&StringLiteral_525);
    DAT_04568054 = 1;
  }
                    /* try { // try from 0350d720 to 0360d753 has its CatchHandler @ 0350d79c */
  values = (System_String_array *)FUN_01bab718(string___TypeInfo,6);
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      values->m_Items[0] = StringLiteral_2422;
      thunk_FUN_01c20e04(values->m_Items);
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = LLBGPJOMALE;
                    /* try { // try from 0350d76c to 0360d76f has its CatchHandler @ 0350d7a0 */
                    /* catch() { ... } // from try @ 0350d6dc with catch @ 0350d770
                       try { // try from 0350d770 to 0360d7bb has its CatchHandler @ 0350d5a4 */
        thunk_FUN_01c20e04(values->m_Items + 1,LLBGPJOMALE);
                    /* catch() { ... } // from try @ 0350d6bc with catch @ 0350d774 */
                    /* catch() { ... } // from try @ 0350d6f0 with catch @ 0350d778 */
                    /* catch() { ... } // from try @ 0350d6e0 with catch @ 0350d77c */
        if (2 < (uint)values->max_length) {
                    /* catch() { ... } // from try @ 0350d6c0 with catch @ 0350d780 */
                    /* catch() { ... } // from try @ 0350d678 with catch @ 0350d784 */
                    /* catch() { ... } // from try @ 0350d700 with catch @ 0350d788 */
                    /* catch() { ... } // from try @ 0350d660 with catch @ 0350d78c */
                    /* catch() { ... } // from try @ 0350d690 with catch @ 0350d790 */
          values->m_Items[2] = StringLiteral_525;
                    /* catch() { ... } // from try @ 0350d61c with catch @ 0350d794 */
                    /* catch() { ... } // from try @ 0350d60c with catch @ 0350d798 */
          __this = (float)thunk_FUN_01c20e04(values->m_Items + 2);
                    /* catch() { ... } // from try @ 0350d720 with catch @ 0350d79c */
                    /* catch() { ... } // from try @ 0350d648 with catch @ 0350d7a0
                       catch() { ... } // from try @ 0350d76c with catch @ 0350d7a0 */
                    /* catch() { ... } // from try @ 0350d634 with catch @ 0350d7a4 */
          pSVar1 = System_Single__ToString(__this,(MethodInfo *)&local_28);
          if (3 < (uint)values->max_length) {
            values->m_Items[3] = pSVar1;
                    /* try { // try from 0350d7bc to 0360d7d3 has its CatchHandler @ 0350d82c */
            thunk_FUN_01c20e04(values->m_Items + 3,pSVar1);
            if (4 < (uint)values->max_length) {
                    /* try { // try from 0350d7d4 to 0360d81b has its CatchHandler @ 0350d5a4 */
              values->m_Items[4] = StringLiteral_250;
              thunk_FUN_01c20e04(values->m_Items + 4);
              pSVar1 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
              if (5 < (uint)values->max_length) {
                values->m_Items[5] = pSVar1;
                thunk_FUN_01c20e04();
                    /* try { // try from 0350d81c to 0360d82b has its CatchHandler @ 0350d82c */
                pSVar1 = System_String__Concat(values,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0350d7bc with catch @ 0350d82c
                       catch() { ... } // from try @ 0350d81c with catch @ 0350d82c */
                    /* try { // try from 0350d830 to 0360d833 has its CatchHandler @ 0350d83c */
                return pSVar1;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0350d834 to 0360d83f has its CatchHandler @ 0350d5a4 */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

