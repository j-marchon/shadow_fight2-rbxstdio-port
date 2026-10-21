// MDAPDLLMOMF.DOPLCEEGPAO$$.ctor @ RVA 0x30C3A4C

void MDAPDLLMOMF_DOPLCEEGPAO___ctor
               (MDAPDLLMOMF_DOPLCEEGPAO_o *__this,System_String_o *DEKCPPOJFEH,int32_t GCCDHHLPMIG,
               int32_t EIIHABBFIKD,MethodInfo *method)

{
  MDAPDLLMOMF_DOPLCEEGPAO_Fields *pMVar1;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar2;
  
  if ((DAT_045662a1 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1);
    DAT_045662a1 = 1;
  }
  pMVar1 = &__this->fields;
  pMVar1->JIJLBFGKNJK = StringLiteral_1;
  thunk_FUN_01c20e04(pMVar1);
  CVar2 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(-1,(MethodInfo *)0x0);
  (__this->fields).IELLEFEFFJD.fields = CVar2;
  CVar2 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(-1,(MethodInfo *)0x0);
  (__this->fields).CMKEIKEBPMN.fields = CVar2;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  pMVar1->JIJLBFGKNJK = DEKCPPOJFEH;
  thunk_FUN_01c20e04(pMVar1,DEKCPPOJFEH);
  CVar2 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(GCCDHHLPMIG,(MethodInfo *)0x0);
  (__this->fields).IELLEFEFFJD.fields = CVar2;
  CVar2 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(EIIHABBFIKD,(MethodInfo *)0x0);
  (__this->fields).CMKEIKEBPMN.fields = CVar2;
  return;
}

