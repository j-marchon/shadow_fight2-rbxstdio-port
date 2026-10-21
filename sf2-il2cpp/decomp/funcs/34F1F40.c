// OLKKAIFGGAK$$HKOFNNIMLNM @ RVA 0x34F1F40

void OLKKAIFGGAK__HKOFNNIMLNM(OLKKAIFGGAK_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  OLKKAIFGGAK_HBMHDMCMABJ_o *pOVar1;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_58;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_40;
  
  pOVar1 = (__this->fields).BOCILPDBPGH;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_58,0.0,(MethodInfo *)0x0);
  local_40.hiddenValueOldByte4.fields = local_58.hiddenValueOldByte4.fields;
  local_40.fakeValue = local_58.fakeValue;
  local_40.currentCryptoKey = local_58.currentCryptoKey;
  local_40.hiddenValue = local_58.hiddenValue;
  local_40.fakeValueActive = local_58.fakeValueActive;
  local_40.inited = local_58.inited;
  local_40._18_2_ = local_58._18_2_;
  if (pOVar1 != (OLKKAIFGGAK_HBMHDMCMABJ_o *)0x0) {
    (pOVar1->fields).MIHDGBBEPOI.fields.fakeValueActive = local_58.fakeValueActive;
    (pOVar1->fields).MIHDGBBEPOI.fields.inited = local_58.inited;
    *(undefined2 *)&(pOVar1->fields).MIHDGBBEPOI.fields.field_0x12 = local_58._18_2_;
    (pOVar1->fields).MIHDGBBEPOI.fields.hiddenValueOldByte4 =
         (CodeStage_AntiCheat_Common_ACTkByte4_o)local_58.hiddenValueOldByte4.fields;
    (pOVar1->fields).MIHDGBBEPOI.fields.fakeValue = local_58.fakeValue;
    (pOVar1->fields).MIHDGBBEPOI.fields.currentCryptoKey = local_58.currentCryptoKey;
    (pOVar1->fields).MIHDGBBEPOI.fields.hiddenValue = local_58.hiddenValue;
    pOVar1 = (__this->fields).BOCILPDBPGH;
    if (pOVar1 != (OLKKAIFGGAK_HBMHDMCMABJ_o *)0x0) {
      (pOVar1->fields).CFPJBIDBCDG = true;
      OLKKAIFGGAK__DBPIPGCPGHG(__this,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

