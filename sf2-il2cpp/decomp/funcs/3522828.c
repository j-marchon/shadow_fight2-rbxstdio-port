// LLKDCCJMFLE$$LFLPHHEOPOE @ RVA 0x3522828

int32_t LLKDCCJMFLE__LFLPHHEOPOE(System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  int iVar2;
  
                    /* try { // try from 03622834 to 0372285f has its CatchHandler @ 03622ba8 */
  if ((DAT_045689dc & 1) == 0) {
    FUN_01bab630(&StringLiteral_8302);
    FUN_01bab630(&StringLiteral_6978);
    DAT_045689dc = 1;
  }
  bVar1 = System_String__op_Equality(CJNHFNHJHPE,StringLiteral_6978,(MethodInfo *)0x0);
  if (bVar1) {
    iVar2 = 1;
  }
  else {
    bVar1 = System_String__op_Equality(CJNHFNHJHPE,StringLiteral_8302,(MethodInfo *)0x0);
                    /* try { // try from 0362289c to 037228a3 has its CatchHandler @ 03622ba4 */
    iVar2 = bVar1 - 1;
  }
  return iVar2;
}

