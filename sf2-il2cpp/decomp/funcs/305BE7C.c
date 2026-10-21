// ACHLOMELAJE$$AKJBHHAHMPG @ RVA 0x305BE7C

void ACHLOMELAJE__AKJBHHAHMPG(ACHLOMELAJE_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  int32_t CJNHFNHJHPE_00;
  PJKHAJKEHEL_o *pPVar1;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar2;
  
  if ((DAT_04565e90 & 1) == 0) {
    FUN_01bab630(&StringLiteral_8409);
    DAT_04565e90 = 1;
  }
  pPVar1 = (__this->fields).MFLNIMCFPDK;
  if (pPVar1 != (PJKHAJKEHEL_o *)0x0) {
    CVar2 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
            CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      (CJNHFNHJHPE,(MethodInfo *)0x0);
    (pPVar1->fields).EMHKAKPKLHI.fields = CVar2;
    pPVar1 = (__this->fields).MFLNIMCFPDK;
    if (pPVar1 != (PJKHAJKEHEL_o *)0x0) {
      CJNHFNHJHPE_00 =
           CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                     ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                      (pPVar1->fields).EMHKAKPKLHI.fields,(MethodInfo *)0x0);
      KIHIPAJGNBF__MLDEHFFGJDP
                ((KIHIPAJGNBF_o *)__this,StringLiteral_8409,CJNHFNHJHPE_00,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

