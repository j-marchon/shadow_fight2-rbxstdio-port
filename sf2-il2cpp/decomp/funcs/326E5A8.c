// ECNCJPCKOLN$$OMOPOJIJEMG @ RVA 0x326E5A8

System_String_o * ECNCJPCKOLN__OMOPOJIJEMG(int32_t OHLKNCPBCBL,MethodInfo *method)

{
  undefined8 *puVar1;
  
  if ((DAT_04567207 & 1) == 0) {
    FUN_01bab630(&StringLiteral_12557);
    FUN_01bab630(&StringLiteral_12559);
    FUN_01bab630(&StringLiteral_12556);
    FUN_01bab630(&StringLiteral_12554);
    FUN_01bab630(&StringLiteral_12558);
    FUN_01bab630(&StringLiteral_12555);
    DAT_04567207 = 1;
  }
  if ((uint)OHLKNCPBCBL < 4) {
                    /* try { // try from 0336e61c to 0346e80f has its CatchHandler @ 0336e61c
                       catch() { ... } // from try @ 0336e61c with catch @ 0336e61c
                       catch() { ... } // from try @ 0336eb64 with catch @ 0336e61c
                       catch() { ... } // from try @ 0336ec2c with catch @ 0336e61c
                       catch() { ... } // from try @ 0336ec3c with catch @ 0336e61c
                       catch() { ... } // from try @ 0336ec48 with catch @ 0336e61c
                       catch() { ... } // from try @ 0336ed74 with catch @ 0336e61c */
    puVar1 = (undefined8 *)(&PTR_StringLiteral_12555_03fc65a0)[OHLKNCPBCBL];
  }
  else {
    puVar1 = &StringLiteral_12554;
    if (OHLKNCPBCBL - 0x66U < 4) {
      puVar1 = &StringLiteral_12557;
    }
  }
  return (System_String_o *)*puVar1;
}

