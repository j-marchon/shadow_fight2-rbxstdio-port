// OPNFCOGALLI$$MKIHMHHJLHE @ RVA 0x3106A18

int32_t OPNFCOGALLI__MKIHMHHJLHE(OPNFCOGALLI_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  int iVar3;
  ECENNHNBAME_o *pEVar4;
  
  pEVar4 = (__this->fields).NDBPNFLAKDL;
  if (pEVar4 != (ECENNHNBAME_o *)0x0) {
    iVar3 = (__this->fields).BPIIACENHPE;
    if ((pEVar4->fields).BFMPHOCJIHP == false) {
      iVar1 = 0;
      if (2 < iVar3) {
        iVar1 = iVar3 + -2;
      }
      iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         (__this->fields).KINFMBHKNLA.fields,(MethodInfo *)0x0);
      iVar3 = iVar2 + iVar1;
    }
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

