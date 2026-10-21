// FPPKHNNABAD$$KBMJOICLEHN @ RVA 0x321FB3C

int32_t FPPKHNNABAD__KBMJOICLEHN(System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  undefined1 auVar3 [16];
  
  auVar3._8_8_ = method;
  auVar3._0_8_ = CJNHFNHJHPE;
  if ((DAT_04566f2b & 1) == 0) {
    FUN_01bab630(&StringLiteral_6310);
    FUN_01bab630(&StringLiteral_5455);
    auVar3 = FUN_01bab630(&StringLiteral_8819);
    DAT_04566f2b = 1;
  }
  if (CJNHFNHJHPE == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(auVar3._0_8_,auVar3._8_8_);
  }
  bVar1 = System_String__Equals(CJNHFNHJHPE,StringLiteral_6310,(MethodInfo *)0x0);
  if (bVar1) {
    iVar2 = 6;
  }
  else {
    bVar1 = System_String__Equals(CJNHFNHJHPE,StringLiteral_5455,(MethodInfo *)0x0);
    if (bVar1) {
      iVar2 = 3;
    }
    else {
      bVar1 = System_String__Equals(CJNHFNHJHPE,StringLiteral_8819,(MethodInfo *)0x0);
      iVar2 = 5;
      if (!bVar1) {
        iVar2 = -1;
      }
    }
  }
  return iVar2;
}

