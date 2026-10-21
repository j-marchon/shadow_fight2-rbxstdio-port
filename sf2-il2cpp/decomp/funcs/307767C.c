// KKCBGIBKOCP$$KMNFAKKBIHD @ RVA 0x307767C

bool KKCBGIBKOCP__KMNFAKKBIHD(System_String_o *LFGKEPCBPKF,MethodInfo *method)

{
  undefined1 auVar1 [16];
  bool bVar2;
  int32_t iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  auVar7._8_8_ = method;
  auVar7._0_8_ = LFGKEPCBPKF;
  if ((DAT_04565fb3 & 1) == 0) {
                    /* try { // try from 031776a0 to 032776a3 has its CatchHandler @ 03177d3c */
    FUN_01bab630(&string___TypeInfo);
                    /* try { // try from 031776a4 to 032776b3 has its CatchHandler @ 03177d6c */
    FUN_01bab630(&StringLiteral_1485);
                    /* try { // try from 031776b4 to 0327772f has its CatchHandler @ 031771b8 */
    FUN_01bab630(&StringLiteral_1475);
    FUN_01bab630(&StringLiteral_1474);
    FUN_01bab630(&StringLiteral_1459);
    auVar7 = FUN_01bab630(&StringLiteral_1480);
    DAT_04565fb3 = 1;
  }
  if (LFGKEPCBPKF != (System_String_o *)0x0) {
    iVar3 = System_String__LastIndexOf(LFGKEPCBPKF,0x2e,(MethodInfo *)0x0);
    if (iVar3 < 1) {
      return false;
    }
    auVar7 = FUN_01bab718(string___TypeInfo,5);
    lVar4 = auVar7._0_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = auVar7._8_8_;
    auVar7 = auVar1 << 0x40;
    if (lVar4 != 0) {
      if (*(int *)(lVar4 + 0x18) != 0) {
                    /* try { // try from 03177730 to 03277733 has its CatchHandler @ 03177d80 */
                    /* try { // try from 03177734 to 03277743 has its CatchHandler @ 03177f04 */
        *(undefined8 *)(lVar4 + 0x20) = StringLiteral_1480;
        thunk_FUN_01c20e04((undefined8 *)(lVar4 + 0x20));
                    /* try { // try from 03177744 to 032777bb has its CatchHandler @ 031771b8 */
        if (1 < *(uint *)(lVar4 + 0x18)) {
          *(undefined8 *)(lVar4 + 0x28) = StringLiteral_1475;
          thunk_FUN_01c20e04((undefined8 *)(lVar4 + 0x28));
          if (2 < *(uint *)(lVar4 + 0x18)) {
            *(undefined8 *)(lVar4 + 0x30) = StringLiteral_1474;
            thunk_FUN_01c20e04((undefined8 *)(lVar4 + 0x30));
            if (3 < *(uint *)(lVar4 + 0x18)) {
              *(undefined8 *)(lVar4 + 0x38) = StringLiteral_1485;
              thunk_FUN_01c20e04((undefined8 *)(lVar4 + 0x38));
                    /* try { // try from 031777bc to 032777bf has its CatchHandler @ 03177d60 */
                    /* try { // try from 031777c0 to 032777cf has its CatchHandler @ 03177d9c */
              if (4 < *(uint *)(lVar4 + 0x18)) {
                *(undefined8 *)(lVar4 + 0x40) = StringLiteral_1459;
                thunk_FUN_01c20e04((undefined8 *)(lVar4 + 0x40));
                    /* try { // try from 031777e8 to 032777eb has its CatchHandler @ 03177d88 */
                    /* try { // try from 031777ec to 032777f7 has its CatchHandler @ 03177fb4 */
                if ((int)*(ulong *)(lVar4 + 0x18) < 1) {
                  return false;
                }
                uVar6 = 0;
                uVar5 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
                    /* try { // try from 031777f8 to 032778ff has its CatchHandler @ 031771b8 */
                while (uVar6 < uVar5) {
                  bVar2 = System_String__EndsWith
                                    (LFGKEPCBPKF,*(System_String_o **)(lVar4 + 0x20 + uVar6 * 8),5,
                                     (MethodInfo *)0x0);
                  if (bVar2) {
                    return true;
                  }
                  uVar5 = (ulong)*(uint *)(lVar4 + 0x18);
                  uVar6 = uVar6 + 1;
                  if ((long)(int)*(uint *)(lVar4 + 0x18) <= (long)uVar6) {
                    return false;
                  }
                }
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar7._0_8_,auVar7._8_8_);
}

