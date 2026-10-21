// CINMFAEJJOF$$.ctor @ RVA 0x30E0788

void CINMFAEJJOF___ctor(CINMFAEJJOF_o *__this,MethodInfo *method)

{
  System_Action_int__o **ppSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_int__o *pSVar2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar3;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields CVar4;
  
  if ((DAT_04566399 & 1) == 0) {
    FUN_01bab630(&System_Action<int>_TypeInfo);
    FUN_01bab630(&Method_CINMFAEJJOF_<>c_KMPAHBPEMPC__);
    FUN_01bab630(&CINMFAEJJOF_<>c_TypeInfo);
    DAT_04566399 = 1;
    method = extraout_x1;
  }
  if ((CINMFAEJJOF_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(CINMFAEJJOF_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar2 = CINMFAEJJOF_<>c_TypeInfo->static_fields->__9__20_0;
  if (pSVar2 == (System_Action_int__o *)0x0) {
    if ((CINMFAEJJOF_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(CINMFAEJJOF_<>c_TypeInfo,method);
    }
    pSVar2 = (System_Action_int__o *)thunk_FUN_01bda818(System_Action<int>_TypeInfo);
    System_Action<int>___ctor();
    ppSVar1 = &CINMFAEJJOF_<>c_TypeInfo->static_fields->__9__20_0;
    *ppSVar1 = pSVar2;
    thunk_FUN_01c20e04(ppSVar1,pSVar2);
  }
  if (__this != (CINMFAEJJOF_o *)0x0) {
    (__this->fields).JHJBEMDEEHG = pSVar2;
    thunk_FUN_01c20e04(&__this->fields,pSVar2);
    CVar3 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
            CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(0,(MethodInfo *)0x0);
    (__this->fields).HLNIJGJDDEE.fields = CVar3;
    CVar3 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
            CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(0,(MethodInfo *)0x0);
    (__this->fields).NELAFECPDOE.fields = CVar3;
    CVar3 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
            CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(0,(MethodInfo *)0x0);
    (__this->fields).KBIOJGFPIBJ.fields = CVar3;
    CVar4 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields)
            CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO(false,(MethodInfo *)0x0);
    (__this->fields).IPMGLPNEBJH.fields = CVar4;
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

