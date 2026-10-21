// OFFIONDOEPM$$JPCINFBICKE @ RVA 0x3135F44

void OFFIONDOEPM__JPCINFBICKE(OFFIONDOEPM_o *__this,MethodInfo *method)

{
  long lVar1;
  MethodInfo *in_x3;
  ulong uVar2;
  ulong uVar3;
  
  if ((DAT_04566702 & 1) == 0) {
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_16988);
    FUN_01bab630(&StringLiteral_16991);
    FUN_01bab630(&StringLiteral_16990);
    FUN_01bab630(&StringLiteral_10853);
    FUN_01bab630(&StringLiteral_16989);
    FUN_01bab630(&StringLiteral_17976);
    DAT_04566702 = 1;
  }
  lVar1 = FUN_01bab718(string___TypeInfo,5);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (*(int *)(lVar1 + 0x18) != 0) {
    *(undefined8 *)(lVar1 + 0x20) = StringLiteral_16988;
    thunk_FUN_01c20e04((undefined8 *)(lVar1 + 0x20));
    if (1 < *(uint *)(lVar1 + 0x18)) {
      *(undefined8 *)(lVar1 + 0x28) = StringLiteral_16989;
      thunk_FUN_01c20e04((undefined8 *)(lVar1 + 0x28));
      if (2 < *(uint *)(lVar1 + 0x18)) {
        *(undefined8 *)(lVar1 + 0x30) = StringLiteral_16990;
        thunk_FUN_01c20e04((undefined8 *)(lVar1 + 0x30));
        if (3 < *(uint *)(lVar1 + 0x18)) {
          *(undefined8 *)(lVar1 + 0x38) = StringLiteral_16991;
          thunk_FUN_01c20e04((undefined8 *)(lVar1 + 0x38));
          if (4 < *(uint *)(lVar1 + 0x18)) {
            *(undefined8 *)(lVar1 + 0x40) = StringLiteral_17976;
            thunk_FUN_01c20e04((undefined8 *)(lVar1 + 0x40));
            if (0 < (int)*(ulong *)(lVar1 + 0x18)) {
              uVar3 = 0;
              uVar2 = *(ulong *)(lVar1 + 0x18) & 0xffffffff;
              do {
                if (uVar2 <= uVar3) goto LAB_032360f4;
                OFFIONDOEPM__JPCINFBICKE
                          (__this,*(System_String_o **)(lVar1 + 0x20 + uVar3 * 8),
                           StringLiteral_10853,in_x3);
                uVar2 = (ulong)*(uint *)(lVar1 + 0x18);
                uVar3 = uVar3 + 1;
              } while ((long)uVar3 < (long)(int)*(uint *)(lVar1 + 0x18));
            }
            return;
          }
        }
      }
    }
  }
LAB_032360f4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}

