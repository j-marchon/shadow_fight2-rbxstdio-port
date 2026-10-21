// ACHLOMELAJE$$KBKGBCEGIJF @ RVA 0x305BC54

void ACHLOMELAJE__KBKGBCEGIJF(ACHLOMELAJE_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  int32_t iVar3;
  uint CJNHFNHJHPE_00;
  MethodInfo *method_00;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CJNHFNHJHPE_01;
  
  if ((DAT_04565ebc & 1) == 0) {
    FUN_01bab630(&StringLiteral_10384);
    DAT_04565ebc = 1;
  }
  iVar1 = (__this->fields).BNDNKEHPKEO;
  if (iVar1 <= CJNHFNHJHPE) {
    CJNHFNHJHPE = iVar1;
  }
  iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                     (__this->fields).GMCNKDKMHII.fields,(MethodInfo *)0x0);
  if (CJNHFNHJHPE != iVar3) {
    CJNHFNHJHPE_01 =
         (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
         CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(CJNHFNHJHPE,(MethodInfo *)0x0);
    (__this->fields).GMCNKDKMHII.fields = CJNHFNHJHPE_01;
    CJNHFNHJHPE_00 =
         CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                   ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)CJNHFNHJHPE_01,
                    (MethodInfo *)0x0);
    method_00 = (MethodInfo *)(ulong)CJNHFNHJHPE_00;
    KIHIPAJGNBF__MLDEHFFGJDP
              ((KIHIPAJGNBF_o *)__this,StringLiteral_10384,CJNHFNHJHPE_00,(MethodInfo *)0x0);
    uVar2 = (__this->fields).BNDNKEHPKEO;
    if ((CJNHFNHJHPE_00 == uVar2) && (uVar2 != 0)) {
      ACHLOMELAJE__PJIENOHJGNJ(__this,-1,method_00);
      ACHLOMELAJE__CLDKAFICAIE(__this,-1,method_00);
      return;
    }
  }
  return;
}

