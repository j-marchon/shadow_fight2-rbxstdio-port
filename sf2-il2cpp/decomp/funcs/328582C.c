// OOMHDDBCBJP$$FLIFCMONJKF @ RVA 0x328582C

void OOMHDDBCBJP__FLIFCMONJKF(OOMHDDBCBJP_o *__this,System_String_o *ACCIHBHMFPN,MethodInfo *method)

{
  int32_t CJNHFNHJHPE;
  NLPJLHOEAOE_o *__this_00;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar1;
  
  if ((DAT_045672c3 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045672c3 = 1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 != (NLPJLHOEAOE_o *)0x0) {
    CJNHFNHJHPE = NLPJLHOEAOE__JCFMJBBOPMH(__this_00,ACCIHBHMFPN,(MethodInfo *)0x0);
    CVar1 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
            CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      (CJNHFNHJHPE,(MethodInfo *)0x0);
    (__this->fields).JDNKKGPNHPB.fields = CVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

