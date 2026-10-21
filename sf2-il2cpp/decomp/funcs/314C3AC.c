// BKIEPGOFNHA$$IKNABHOIHHE @ RVA 0x314C3AC

System_String_o * BKIEPGOFNHA__IKNABHOIHHE(BKIEPGOFNHA_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  undefined8 *puVar2;
  
  if ((DAT_045667cf & 1) == 0) {
    FUN_01bab630(&StringLiteral_1411);
    FUN_01bab630(&StringLiteral_1440);
    FUN_01bab630(&StringLiteral_1404);
    FUN_01bab630(&StringLiteral_1149);
    FUN_01bab630(&StringLiteral_1316);
    FUN_01bab630(&StringLiteral_1403);
    DAT_045667cf = 1;
  }
  iVar1 = UnityEngine_Random__Range(0,10,(MethodInfo *)0x0);
  if (iVar1 < 10) {
    if (iVar1 == 9) {
      puVar2 = &StringLiteral_1440;
    }
    else if (iVar1 < 8) {
      if (iVar1 < 3) {
        puVar2 = &StringLiteral_1404;
        if (iVar1 != 2) {
          puVar2 = &StringLiteral_1403;
        }
      }
      else {
        puVar2 = &StringLiteral_1411;
      }
    }
    else {
      puVar2 = &StringLiteral_1149;
    }
  }
  else {
    puVar2 = &StringLiteral_1316;
  }
  return (System_String_o *)*puVar2;
}

