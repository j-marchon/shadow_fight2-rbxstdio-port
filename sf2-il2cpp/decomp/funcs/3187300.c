// GJAEIBMAFGE$$OFIKNKILDCH @ RVA 0x3187300

int32_t GJAEIBMAFGE__OFIKNKILDCH(System_String_o *LOAHEPDBFAO,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  
  if ((DAT_045669e7 & 1) == 0) {
    FUN_01bab630(&StringLiteral_10290);
    FUN_01bab630(&StringLiteral_8632);
    FUN_01bab630(&StringLiteral_8168);
    FUN_01bab630(&StringLiteral_7004);
    FUN_01bab630(&StringLiteral_15069);
    FUN_01bab630(&StringLiteral_15063);
    FUN_01bab630(&StringLiteral_13985);
    FUN_01bab630(&StringLiteral_8169);
    FUN_01bab630(&StringLiteral_12545);
                    /* try { // try from 03287384 to 03387393 has its CatchHandler @ 03287574 */
    DAT_045669e7 = 1;
  }
  bVar1 = System_String__IsNullOrEmpty(LOAHEPDBFAO,(MethodInfo *)0x0);
                    /* try { // try from 03287398 to 0338739f has its CatchHandler @ 032873dc */
  if (bVar1) {
    iVar2 = 0x67;
  }
  else {
                    /* try { // try from 032873a4 to 033873a7 has its CatchHandler @ 032873c4 */
    if (LOAHEPDBFAO == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 032873ac to 033873af has its CatchHandler @ 032873c0 */
                    /* try { // try from 032873b4 to 033873b7 has its CatchHandler @ 032873bc */
                    /* try { // try from 032873b8 to 033873f7 has its CatchHandler @ 03286ea4 */
                    /* catch() { ... } // from try @ 032873b4 with catch @ 032873bc */
    bVar1 = System_String__Contains(LOAHEPDBFAO,StringLiteral_15063,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 032873ac with catch @ 032873c0 */
                    /* catch() { ... } // from try @ 032873a4 with catch @ 032873c4 */
                    /* catch() { ... } // from try @ 03287294 with catch @ 032873c8 */
                    /* catch() { ... } // from try @ 032872ac with catch @ 032873cc */
                    /* catch() { ... } // from try @ 032872c0 with catch @ 032873d0 */
                    /* catch() { ... } // from try @ 032872cc with catch @ 032873d4 */
                    /* catch() { ... } // from try @ 03287274 with catch @ 032873d8 */
                    /* catch() { ... } // from try @ 03287398 with catch @ 032873dc */
                    /* catch() { ... } // from try @ 03287210 with catch @ 032873e0 */
                    /* catch() { ... } // from try @ 032871b0 with catch @ 032873e4 */
                    /* try { // try from 032873f8 to 033873fb has its CatchHandler @ 03287564 */
    if (((bVar1) ||
        (bVar1 = System_String__Contains(LOAHEPDBFAO,StringLiteral_15069,(MethodInfo *)0x0), bVar1))
       || (bVar1 = System_String__Contains(LOAHEPDBFAO,StringLiteral_8632,(MethodInfo *)0x0), bVar1)
       ) {
                    /* try { // try from 032873fc to 033874b7 has its CatchHandler @ 03286ea4 */
      iVar2 = 0;
    }
    else {
      bVar1 = System_String__Contains(LOAHEPDBFAO,StringLiteral_10290,(MethodInfo *)0x0);
      if (bVar1) {
        iVar2 = 1;
      }
      else {
        bVar1 = System_String__op_Equality(LOAHEPDBFAO,StringLiteral_7004,(MethodInfo *)0x0);
        if (((bVar1) ||
            (bVar1 = System_String__op_Equality(LOAHEPDBFAO,StringLiteral_13985,(MethodInfo *)0x0),
            bVar1)) ||
           (bVar1 = System_String__op_Equality(LOAHEPDBFAO,StringLiteral_12545,(MethodInfo *)0x0),
           bVar1)) {
          iVar2 = 100;
        }
        else {
          bVar1 = System_String__op_Equality(LOAHEPDBFAO,StringLiteral_8168,(MethodInfo *)0x0);
          if (bVar1) {
            iVar2 = 0x65;
          }
          else {
                    /* try { // try from 032874b8 to 03387503 has its CatchHandler @ 0328766c */
            bVar1 = System_String__op_Equality(LOAHEPDBFAO,StringLiteral_8169,(MethodInfo *)0x0);
            iVar2 = 0x66;
            if (!bVar1) {
              iVar2 = 0x67;
            }
          }
        }
      }
    }
  }
  return iVar2;
}

