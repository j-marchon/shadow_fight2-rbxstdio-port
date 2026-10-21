// KFOPKHPGAAK$$CNOMHMIIEAB @ RVA 0x34A54FC

int32_t KFOPKHPGAAK__CNOMHMIIEAB
                  (KFOPKHPGAAK_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  
  if ((DAT_045684e6 & 1) == 0) {
    FUN_01bab630(&StringLiteral_8617);
    FUN_01bab630(&StringLiteral_8662);
    DAT_045684e6 = 1;
  }
  bVar1 = System_String__op_Equality(CJNHFNHJHPE,StringLiteral_8617,(MethodInfo *)0x0);
  if (bVar1) {
    iVar2 = 1;
  }
  else {
    bVar1 = System_String__op_Equality(CJNHFNHJHPE,StringLiteral_8662,(MethodInfo *)0x0);
    iVar2 = 2;
    if (!bVar1) {
      iVar2 = 0;
    }
  }
                    /* try { // try from 035a5584 to 036a5617 has its CatchHandler @ 035a5584
                       catch() { ... } // from try @ 035a5584 with catch @ 035a5584
                       catch() { ... } // from try @ 035a563c with catch @ 035a5584
                       catch() { ... } // from try @ 035a5670 with catch @ 035a5584
                       catch() { ... } // from try @ 035a5698 with catch @ 035a5584
                       catch() { ... } // from try @ 035a56c8 with catch @ 035a5584 */
  return iVar2;
}

