// HDBNGIBFEBA$$GMINMDIFAIE @ RVA 0x33E1350

int32_t HDBNGIBFEBA__GMINMDIFAIE
                  (HDBNGIBFEBA_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  
  if ((DAT_04567ea0 & 1) == 0) {
    FUN_01bab630(&StringLiteral_12372);
    FUN_01bab630(&StringLiteral_6310);
    FUN_01bab630(&StringLiteral_5749);
    DAT_04567ea0 = 1;
  }
  bVar1 = System_String__op_Equality(KGLJICLJHEL,StringLiteral_12372,(MethodInfo *)0x0);
  if (bVar1) {
    iVar2 = 1;
  }
  else {
    bVar1 = System_String__op_Equality(KGLJICLJHEL,StringLiteral_6310,(MethodInfo *)0x0);
    if (bVar1) {
      iVar2 = 2;
    }
    else {
      bVar1 = System_String__op_Equality(KGLJICLJHEL,StringLiteral_5749,(MethodInfo *)0x0);
      iVar2 = 3;
      if (!bVar1) {
        iVar2 = 0;
      }
    }
  }
  return iVar2;
}

