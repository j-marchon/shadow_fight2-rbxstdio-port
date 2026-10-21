// ANFOHCGLHID$$PPGCNAHEAME @ RVA 0x34E0208

System_String_o * ANFOHCGLHID__PPGCNAHEAME(MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_String_o *pSVar3;
  
  if ((DAT_04568732 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1612);
    FUN_01bab630(&StringLiteral_1978);
    DAT_04568732 = 1;
  }
  iVar2 = GBCDMPDHIDJ__PAFKHAKEDFL((MethodInfo *)0x0);
  bVar1 = GNAFJMPJNKI__KHIBBBCNMCJ(iVar2,(MethodInfo *)0x0);
  pSVar3 = StringLiteral_1978;
  if (!bVar1) {
    iVar2 = GBCDMPDHIDJ__PAFKHAKEDFL((MethodInfo *)0x0);
    bVar1 = GNAFJMPJNKI__GDIGIFHOPAK(iVar2,(MethodInfo *)0x0);
    pSVar3 = StringLiteral_1612;
    if (!bVar1) {
      pSVar3 = (System_String_o *)0x0;
    }
  }
  return pSVar3;
}

