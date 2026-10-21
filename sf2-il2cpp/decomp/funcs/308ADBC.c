// LabelButton$$GetBtnColor @ RVA 0x308ADBC

int32_t LabelButton__GetBtnColor(System_String_o *OCNICPPCHLK,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  
  if ((DAT_0456604f & 1) == 0) {
    FUN_01bab630(&StringLiteral_14941);
    FUN_01bab630(&StringLiteral_6868);
    FUN_01bab630(&StringLiteral_11121);
    FUN_01bab630(&StringLiteral_3453);
    FUN_01bab630(&StringLiteral_6913);
    DAT_0456604f = 1;
  }
  bVar1 = System_String__op_Equality(OCNICPPCHLK,StringLiteral_11121,(MethodInfo *)0x0);
  if (bVar1) {
    iVar2 = 0;
  }
  else {
    bVar1 = System_String__op_Equality(OCNICPPCHLK,StringLiteral_6913,(MethodInfo *)0x0);
    if (bVar1) {
      iVar2 = 2;
    }
    else {
      bVar1 = System_String__op_Equality(OCNICPPCHLK,StringLiteral_14941,(MethodInfo *)0x0);
      if ((bVar1) ||
         (bVar1 = System_String__op_Equality(OCNICPPCHLK,StringLiteral_3453,(MethodInfo *)0x0),
         bVar1)) {
        iVar2 = 1;
      }
      else {
        bVar1 = System_String__op_Equality(OCNICPPCHLK,StringLiteral_6868,(MethodInfo *)0x0);
        iVar2 = 6;
        if (!bVar1) {
          iVar2 = 1;
        }
      }
    }
  }
  return iVar2;
}

