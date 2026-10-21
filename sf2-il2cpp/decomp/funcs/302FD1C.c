// BFKOGEBDAEH$$HDLGLCEKGAN @ RVA 0x302FD1C

int32_t BFKOGEBDAEH__HDLGLCEKGAN(System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_String_o *a;
  int32_t iVar2;
  undefined1 auVar3 [16];
  
  auVar3._8_8_ = method;
  auVar3._0_8_ = CJNHFNHJHPE;
  if ((DAT_04565cf0 & 1) == 0) {
    FUN_01bab630(&StringLiteral_21648);
    FUN_01bab630(&StringLiteral_18354);
    FUN_01bab630(&StringLiteral_18348);
    auVar3 = FUN_01bab630(&StringLiteral_19110);
    DAT_04565cf0 = 1;
  }
  if (CJNHFNHJHPE == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(auVar3._0_8_,auVar3._8_8_);
  }
  a = System_String__ToLower(CJNHFNHJHPE,(MethodInfo *)0x0);
  bVar1 = System_String__op_Equality(a,StringLiteral_19110,(MethodInfo *)0x0);
  if (bVar1) {
    iVar2 = 1;
  }
  else {
    bVar1 = System_String__op_Equality(a,StringLiteral_21648,(MethodInfo *)0x0);
    if (bVar1) {
      iVar2 = 2;
    }
    else {
      bVar1 = System_String__op_Equality(a,StringLiteral_18348,(MethodInfo *)0x0);
      if (bVar1) {
        iVar2 = 4;
      }
      else {
        bVar1 = System_String__op_Equality(a,StringLiteral_18354,(MethodInfo *)0x0);
        iVar2 = 8;
        if (!bVar1) {
          iVar2 = 0;
        }
      }
    }
  }
  return iVar2;
}

