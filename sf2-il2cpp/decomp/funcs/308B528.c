// IEFEBEDLHNN$$GNLPNKGBAFL @ RVA 0x308B528

void IEFEBEDLHNN__GNLPNKGBAFL(IEFEBEDLHNN_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  bool_conflict bVar1;
  bool bVar2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields CJNHFNHJHPE_00;
  
  (__this->fields).JBNGADJBDHB = CJNHFNHJHPE;
  CJNHFNHJHPE_00 =
       (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields)
       CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                 (CJNHFNHJHPE == 0,(MethodInfo *)0x0);
  bVar1 = (__this->fields).BEGOLMJFLCG;
  (__this->fields).DOMBDCPDKMD.fields = CJNHFNHJHPE_00;
  if (bVar1 == false) {
    bVar2 = false;
  }
  else {
    bVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)CJNHFNHJHPE_00,
                       (MethodInfo *)0x0);
  }
  (__this->fields).LAIDIGOPNLB = bVar2;
  if ((__this->fields).MCAILHLELHB == false) {
    bVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)
                       (__this->fields).DOMBDCPDKMD.fields,(MethodInfo *)0x0);
    bVar2 = !bVar2;
  }
  else {
    bVar2 = true;
  }
  (__this->fields).MCKFLABMNAK = bVar2;
  return;
}

