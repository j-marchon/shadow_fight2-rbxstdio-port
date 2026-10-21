// DBGBHDDCAJC$$DHJEDGPHIEL @ RVA 0x31D8C40

int32_t DBGBHDDCAJC__DHJEDGPHIEL(System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  
  if ((DAT_04566d00 & 1) == 0) {
    FUN_01bab630(&StringLiteral_8302);
    FUN_01bab630(&StringLiteral_6978);
    FUN_01bab630(&StringLiteral_8719);
    DAT_04566d00 = 1;
  }
  bVar1 = System_String__op_Equality(KGLJICLJHEL,StringLiteral_8302,(MethodInfo *)0x0);
  if (bVar1) {
    iVar2 = 0;
  }
  else {
    bVar1 = System_String__op_Equality(KGLJICLJHEL,StringLiteral_8719,(MethodInfo *)0x0);
    if (bVar1) {
      iVar2 = 1;
    }
    else {
      bVar1 = System_String__op_Equality(KGLJICLJHEL,StringLiteral_6978,(MethodInfo *)0x0);
      iVar2 = 2;
      if (!bVar1) {
        iVar2 = 3;
      }
    }
  }
  return iVar2;
}

