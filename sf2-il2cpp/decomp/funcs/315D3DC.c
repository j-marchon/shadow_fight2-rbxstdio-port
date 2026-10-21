// BLFFMBFLIMI$$FAMOFCBLIAM @ RVA 0x315D3DC

int32_t BLFFMBFLIMI__FAMOFCBLIAM
                  (BLFFMBFLIMI_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  
  if ((DAT_04566874 & 1) == 0) {
    FUN_01bab630(&StringLiteral_13972);
    FUN_01bab630(&StringLiteral_7019);
    FUN_01bab630(&StringLiteral_4848);
    FUN_01bab630(&StringLiteral_2789);
    FUN_01bab630(&StringLiteral_6273);
    FUN_01bab630(&StringLiteral_3572);
    DAT_04566874 = 1;
  }
  bVar1 = System_String__op_Equality(KGLJICLJHEL,StringLiteral_13972,(MethodInfo *)0x0);
  if (bVar1) {
    iVar2 = 0;
  }
  else {
    bVar1 = System_String__op_Equality(KGLJICLJHEL,StringLiteral_7019,(MethodInfo *)0x0);
    if (bVar1) {
      iVar2 = 1;
    }
    else {
      bVar1 = System_String__op_Equality(KGLJICLJHEL,StringLiteral_3572,(MethodInfo *)0x0);
      if (bVar1) {
        iVar2 = 2;
      }
      else {
        bVar1 = System_String__op_Equality(KGLJICLJHEL,StringLiteral_2789,(MethodInfo *)0x0);
        if (bVar1) {
          iVar2 = 3;
        }
        else {
          bVar1 = System_String__op_Equality(KGLJICLJHEL,StringLiteral_4848,(MethodInfo *)0x0);
          if (bVar1) {
            iVar2 = 4;
          }
          else {
            bVar1 = System_String__op_Equality(KGLJICLJHEL,StringLiteral_6273,(MethodInfo *)0x0);
            iVar2 = 5;
            if (!bVar1) {
              iVar2 = -1;
            }
          }
        }
      }
    }
  }
  return iVar2;
}

