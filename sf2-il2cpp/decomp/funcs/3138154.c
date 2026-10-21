// OFFIONDOEPM$$HKFFICMNPOA @ RVA 0x3138154

void OFFIONDOEPM__HKFFICMNPOA(OFFIONDOEPM_o *__this,MethodInfo *method)

{
  long lVar1;
  OFFIONDOEPM_o *__this_00;
  MethodInfo *in_x4;
  ulong uVar2;
  System_String_o *str1;
  ulong uVar3;
  
  if ((DAT_0456670e & 1) == 0) {
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_17875);
    FUN_01bab630(&StringLiteral_17879);
    FUN_01bab630(&StringLiteral_17878);
    FUN_01bab630(&StringLiteral_17877);
    FUN_01bab630(&StringLiteral_18943);
    FUN_01bab630(&StringLiteral_17880);
    FUN_01bab630(&StringLiteral_17876);
    DAT_0456670e = 1;
  }
  lVar1 = FUN_01bab718(string___TypeInfo,6);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (*(int *)(lVar1 + 0x18) != 0) {
    *(undefined8 *)(lVar1 + 0x20) = StringLiteral_17875;
    thunk_FUN_01c20e04((undefined8 *)(lVar1 + 0x20));
    if (1 < *(uint *)(lVar1 + 0x18)) {
      *(undefined8 *)(lVar1 + 0x28) = StringLiteral_17877;
      thunk_FUN_01c20e04((undefined8 *)(lVar1 + 0x28));
      if (2 < *(uint *)(lVar1 + 0x18)) {
        *(undefined8 *)(lVar1 + 0x30) = StringLiteral_17878;
        thunk_FUN_01c20e04((undefined8 *)(lVar1 + 0x30));
        if (3 < *(uint *)(lVar1 + 0x18)) {
          *(undefined8 *)(lVar1 + 0x38) = StringLiteral_17879;
          thunk_FUN_01c20e04((undefined8 *)(lVar1 + 0x38));
          if (4 < *(uint *)(lVar1 + 0x18)) {
            *(undefined8 *)(lVar1 + 0x40) = StringLiteral_17880;
            thunk_FUN_01c20e04((undefined8 *)(lVar1 + 0x40));
            if (5 < *(uint *)(lVar1 + 0x18)) {
              *(undefined8 *)(lVar1 + 0x48) = StringLiteral_17876;
              thunk_FUN_01c20e04((undefined8 *)(lVar1 + 0x48));
              if (0 < (int)*(ulong *)(lVar1 + 0x18)) {
                uVar3 = 0;
                uVar2 = *(ulong *)(lVar1 + 0x18) & 0xffffffff;
                do {
                  if (uVar2 <= uVar3) goto LAB_03238354;
                  str1 = *(System_String_o **)(lVar1 + 0x20 + uVar3 * 8);
                  __this_00 = (OFFIONDOEPM_o *)
                              System_String__Concat(StringLiteral_18943,str1,(MethodInfo *)0x0);
                  OFFIONDOEPM__DIKJNJNDEMN
                            (__this_00,str1,(System_String_o *)__this_00,
                             (__this->fields).DAPLPNKJGCJ,in_x4);
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
  }
LAB_03238354:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}

