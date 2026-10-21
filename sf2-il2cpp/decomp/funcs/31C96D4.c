// CNOGDCKPLMJ$$NLDHFFIEJDD @ RVA 0x31C96D4

bool CNOGDCKPLMJ__NLDHFFIEJDD
               (CNOGDCKPLMJ_o *__this,System_String_o *LKFJAPPLGFE,System_String_o *OCHLLMNLADJ,
               System_String_o **KIALMCJDLOP,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  
  if ((DAT_04566c55 & 1) == 0) {
                    /* try { // try from 032c9708 to 033c970f has its CatchHandler @ 032c97ec */
    FUN_01bab630(&StringLiteral_15864);
                    /* try { // try from 032c9718 to 033c9727 has its CatchHandler @ 032c97f4 */
    DAT_04566c55 = 1;
  }
  bVar1 = System_String__op_Inequality(LKFJAPPLGFE,StringLiteral_15864,(MethodInfo *)0x0);
                    /* try { // try from 032c9738 to 033c973f has its CatchHandler @ 032c97dc */
  if ((bVar1) &&
     (bVar1 = System_String__op_Inequality(OCHLLMNLADJ,StringLiteral_15864,(MethodInfo *)0x0), bVar1
     )) {
LAB_032c97a4:
    bVar1 = true;
  }
  else {
                    /* try { // try from 032c9744 to 033c975b has its CatchHandler @ 032c97f0 */
    bVar1 = System_String__op_Equality(LKFJAPPLGFE,OCHLLMNLADJ,(MethodInfo *)0x0);
    if (!bVar1) {
                    /* try { // try from 032c9760 to 033c976b has its CatchHandler @ 032c97e8 */
      method_00 = (MethodInfo *)0x0;
      bVar1 = System_String__op_Equality(LKFJAPPLGFE,StringLiteral_15864,(MethodInfo *)0x0);
                    /* try { // try from 032c9770 to 033c9777 has its CatchHandler @ 032c97e4 */
      if (!bVar1) {
        OCHLLMNLADJ = LKFJAPPLGFE;
      }
                    /* try { // try from 032c9778 to 033c97d3 has its CatchHandler @ 032c9508 */
      bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(*KIALMCJDLOP,(MethodInfo *)0x0);
      if ((bVar1) && (bVar1 = CNOGDCKPLMJ__FDLDELKMPHI(__this,OCHLLMNLADJ,method_00), bVar1)) {
        *KIALMCJDLOP = OCHLLMNLADJ;
        thunk_FUN_01c20e04(KIALMCJDLOP,OCHLLMNLADJ);
        goto LAB_032c97a4;
      }
    }
    bVar1 = false;
  }
  return bVar1;
}

