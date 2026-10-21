// EPFMFHDGMCE$$JOEBJJLKEOH @ RVA 0x3536768

int32_t EPFMFHDGMCE__JOEBJJLKEOH
                  (EPFMFHDGMCE_o *__this,System_String_o *HCBBECJJIKK,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  
  if ((DAT_04568a9b & 1) == 0) {
    FUN_01bab630(&StringLiteral_14587);
    FUN_01bab630(&StringLiteral_10213);
    DAT_04568a9b = 1;
  }
  bVar1 = System_String__op_Equality(HCBBECJJIKK,StringLiteral_10213,(MethodInfo *)0x0);
  if (bVar1) {
    iVar2 = 1;
  }
  else {
    bVar1 = System_String__op_Equality(HCBBECJJIKK,StringLiteral_14587,(MethodInfo *)0x0);
    iVar2 = 2;
    if (!bVar1) {
      iVar2 = 0;
    }
  }
  return iVar2;
}

