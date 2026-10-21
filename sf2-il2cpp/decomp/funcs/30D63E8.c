// CONLFJJLALA$$GKMAFGODLLG @ RVA 0x30D63E8

System_String_o * CONLFJJLALA__GKMAFGODLLG(int32_t OOGPLJBADCD,MethodInfo *method)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
                    /* try { // try from 031d63f8 to 032d63ff has its CatchHandler @ 031d644c */
  if ((DAT_04566331 & 1) == 0) {
                    /* try { // try from 031d6404 to 032d6407 has its CatchHandler @ 031d6430 */
                    /* try { // try from 031d6408 to 032d640b has its CatchHandler @ 031d643c */
    FUN_01bab630(&StringLiteral_10848);
                    /* try { // try from 031d640c to 032d640f has its CatchHandler @ 031d642c */
                    /* try { // try from 031d6410 to 032d641b has its CatchHandler @ 031d6078 */
    FUN_01bab630(&StringLiteral_10963);
                    /* try { // try from 031d641c to 032d641f has its CatchHandler @ 031d6428 */
                    /* try { // try from 031d6420 to 032d6463 has its CatchHandler @ 031d6078 */
    FUN_01bab630(&StringLiteral_10858);
                    /* catch() { ... } // from try @ 031d641c with catch @ 031d6428 */
                    /* catch() { ... } // from try @ 031d640c with catch @ 031d642c */
    FUN_01bab630(&StringLiteral_13976);
                    /* catch() { ... } // from try @ 031d6404 with catch @ 031d6430 */
                    /* catch() { ... } // from try @ 031d62f0 with catch @ 031d6434 */
                    /* catch() { ... } // from try @ 031d630c with catch @ 031d6438 */
    FUN_01bab630(&StringLiteral_9626);
                    /* catch() { ... } // from try @ 031d6408 with catch @ 031d643c */
                    /* catch() { ... } // from try @ 031d6320 with catch @ 031d6440 */
                    /* catch() { ... } // from try @ 031d6288 with catch @ 031d6444 */
    FUN_01bab630(&StringLiteral_10805);
                    /* catch() { ... } // from try @ 031d622c with catch @ 031d6448 */
                    /* catch() { ... } // from try @ 031d63f8 with catch @ 031d644c */
    FUN_01bab630(&StringLiteral_8371);
    FUN_01bab630(&StringLiteral_6487);
                    /* try { // try from 031d6464 to 032d6467 has its CatchHandler @ 031d6478 */
    DAT_04566331 = 1;
  }
  if (OOGPLJBADCD < 0xb) {
    if (OOGPLJBADCD == -10) {
      puVar3 = &StringLiteral_10805;
                    /* try { // try from 031d64e8 to 032d64f3 has its CatchHandler @ 031d6078 */
    }
    else if (OOGPLJBADCD == 0) {
      puVar3 = &StringLiteral_10858;
                    /* try { // try from 031d64f4 to 032d64fb has its CatchHandler @ 031d64fc */
    }
    else if (OOGPLJBADCD == 10) {
      puVar3 = &StringLiteral_6487;
    }
    else {
                    /* catch() { ... } // from try @ 031d6480 with catch @ 031d64fc
                       catch() { ... } // from try @ 031d64f4 with catch @ 031d64fc */
      puVar3 = &StringLiteral_9626;
    }
  }
  else {
                    /* catch() { ... } // from try @ 031d6464 with catch @ 031d6478 */
    if (OOGPLJBADCD < 0x1f) {
      puVar3 = &StringLiteral_10848;
      puVar2 = &StringLiteral_8371;
      if (OOGPLJBADCD != 0x1e) {
        puVar2 = &StringLiteral_9626;
      }
      bVar1 = OOGPLJBADCD == 0x14;
    }
    else {
                    /* try { // try from 031d6480 to 032d64e7 has its CatchHandler @ 031d64fc */
      puVar3 = &StringLiteral_10963;
      puVar2 = &StringLiteral_13976;
      if (OOGPLJBADCD != 0x32) {
        puVar2 = &StringLiteral_9626;
      }
      bVar1 = OOGPLJBADCD == 0x28;
    }
    if (!bVar1) {
      puVar3 = puVar2;
    }
  }
  return (System_String_o *)*puVar3;
}

