// FPPKHNNABAD$$IFJOLFPNNJF @ RVA 0x322097C

int32_t FPPKHNNABAD__IFJOLFPNNJF
                  (FPPKHNNABAD_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  
  if ((DAT_04566f2f & 1) == 0) {
    FUN_01bab630(&StringLiteral_3697);
    FUN_01bab630(&StringLiteral_2616);
    FUN_01bab630(&StringLiteral_14167);
    DAT_04566f2f = 1;
  }
  bVar1 = System_String__op_Equality(CJNHFNHJHPE,StringLiteral_14167,(MethodInfo *)0x0);
  if (bVar1) {
    iVar2 = 0;
  }
  else {
    bVar1 = System_String__op_Equality(CJNHFNHJHPE,StringLiteral_2616,(MethodInfo *)0x0);
    if (bVar1) {
      iVar2 = 1;
    }
    else {
      bVar1 = System_String__op_Equality(CJNHFNHJHPE,StringLiteral_3697,(MethodInfo *)0x0);
      iVar2 = 2;
      if (!bVar1) {
        iVar2 = 0;
      }
    }
  }
  return iVar2;
}

