// LFDEBALJBHC$$IHLKNJDGOMK @ RVA 0x32CE070

int32_t LFDEBALJBHC__IHLKNJDGOMK
                  (LFDEBALJBHC_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  
                    /* try { // try from 033ce078 to 034ce1ab has its CatchHandler @ 033ce078
                       catch() { ... } // from try @ 033ce078 with catch @ 033ce078
                       catch() { ... } // from try @ 033ce1b4 with catch @ 033ce078
                       catch() { ... } // from try @ 033ce22c with catch @ 033ce078
                       catch() { ... } // from try @ 033ce26c with catch @ 033ce078 */
  if ((DAT_04567536 & 1) == 0) {
    FUN_01bab630(&StringLiteral_12023);
    FUN_01bab630(&StringLiteral_12001);
    FUN_01bab630(&StringLiteral_12022);
    FUN_01bab630(&StringLiteral_6310);
    FUN_01bab630(&StringLiteral_12028);
    FUN_01bab630(&StringLiteral_10491);
    FUN_01bab630(&StringLiteral_12053);
    FUN_01bab630(&StringLiteral_12029);
    FUN_01bab630(&StringLiteral_12042);
    FUN_01bab630(&StringLiteral_12041);
    DAT_04567536 = 1;
  }
  uVar2 = <PrivateImplementationDetails>__ComputeStringHash(KGLJICLJHEL,(MethodInfo *)0x0);
  if (uVar2 < 0x8ce13ca6) {
    if (uVar2 < 0x2c6b1c98) {
      if (uVar2 == 0x14752a48) {
                    /* try { // try from 033ce278 to 034ce27f has its CatchHandler @ 033ce280 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033ce264 with catch @ 033ce280
                       catch(type#2 @ 00000000) { ... } // from try @ 033ce278 with catch @ 033ce280
                        */
        bVar1 = System_String__op_Equality(KGLJICLJHEL,StringLiteral_12028,(MethodInfo *)0x0);
        if (bVar1) {
          return 5;
        }
      }
      else if ((uVar2 == 0x2c6b1c97) &&
              (bVar1 = System_String__op_Equality(KGLJICLJHEL,StringLiteral_12022,(MethodInfo *)0x0)
              , bVar1)) {
        return 7;
      }
    }
    else if (uVar2 == 0x8ce13ca5) {
      bVar1 = System_String__op_Equality(KGLJICLJHEL,StringLiteral_12053,(MethodInfo *)0x0);
      if (bVar1) {
        return 2;
      }
    }
    else if (uVar2 == 0x34dbdd85) {
      bVar1 = System_String__op_Equality(KGLJICLJHEL,StringLiteral_12023,(MethodInfo *)0x0);
      if (bVar1) {
        return 3;
      }
    }
    else {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033ce1ac with catch @ 033ce210
                        */
      if ((uVar2 == 0x57fc3f87) &&
         (bVar1 = System_String__op_Equality(KGLJICLJHEL,StringLiteral_12041,(MethodInfo *)0x0),
         bVar1)) {
        return 8;
      }
    }
  }
  else if (uVar2 < 0xcd17328f) {
    if (uVar2 == 0xbfb47077) {
      bVar1 = System_String__op_Equality(KGLJICLJHEL,StringLiteral_12029,(MethodInfo *)0x0);
      if (bVar1) {
        return 4;
      }
    }
    else {
                    /* try { // try from 033ce1ac to 034ce1b3 has its CatchHandler @ 033ce210 */
                    /* try { // try from 033ce1b4 to 034ce227 has its CatchHandler @ 033ce078 */
      if ((uVar2 == 0xcd17328e) &&
         (bVar1 = System_String__op_Equality(KGLJICLJHEL,StringLiteral_10491,(MethodInfo *)0x0),
         bVar1)) {
        return 9;
      }
    }
  }
  else {
                    /* try { // try from 033ce228 to 034ce22b has its CatchHandler @ 033ce254 */
                    /* try { // try from 033ce22c to 034ce263 has its CatchHandler @ 033ce078 */
    if (uVar2 == 0xcd184169) {
      bVar1 = System_String__op_Equality(KGLJICLJHEL,StringLiteral_6310,(MethodInfo *)0x0);
      if (bVar1) {
        return 10;
      }
    }
    else if (uVar2 == 0xf8ea2b99) {
      bVar1 = System_String__op_Equality(KGLJICLJHEL,StringLiteral_12042,(MethodInfo *)0x0);
      if (bVar1) {
        return 6;
      }
    }
    else {
                    /* catch() { ... } // from try @ 033ce228 with catch @ 033ce254 */
                    /* try { // try from 033ce264 to 034ce26b has its CatchHandler @ 033ce280 */
      if ((uVar2 == 0xfea4ae60) &&
         (bVar1 = System_String__op_Equality(KGLJICLJHEL,StringLiteral_12001,(MethodInfo *)0x0),
         bVar1)) {
        return 1;
      }
    }
  }
  return 0;
}

