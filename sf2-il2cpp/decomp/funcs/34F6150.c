// OLKKAIFGGAK$$BOEHEIGENMA @ RVA 0x34F6150

void OLKKAIFGGAK__BOEHEIGENMA(OLKKAIFGGAK_o *__this,bool MEMJLGHJDCN,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  OLKKAIFGGAK_EAOIGPODIAI_o *pOVar3;
  Il2CppObject **ppIVar4;
  FCJBEKHDLAF_o *__this_00;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields CVar5;
  
  if ((DAT_045687df & 1) == 0) {
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    DAT_045687df = 1;
  }
  if (MEMJLGHJDCN) {
    iVar1 = (__this->fields).ACFHDECBFOG;
    if (0 < iVar1) {
      (__this->fields).ACFHDECBFOG = iVar1 + -1;
      return;
    }
    if (iVar1 == 0) {
      CVar5 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields)
              CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO(true,(MethodInfo *)0x0);
      (__this->fields).NFPJNKOIFCJ.fields = CVar5;
      (__this->fields).ACFHDECBFOG = -1;
    }
    else {
      CVar5 = (__this->fields).NFPJNKOIFCJ.fields;
    }
    bVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)CVar5,(MethodInfo *)0x0);
    if (!bVar2) {
      return;
    }
    CVar5 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields)
            CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO(false,(MethodInfo *)0x0);
    (__this->fields).NFPJNKOIFCJ.fields = CVar5;
  }
  pOVar3 = (__this->fields).PDCHNCOIHHA;
  if (pOVar3 != (OLKKAIFGGAK_EAOIGPODIAI_o *)0x0) {
    ppIVar4 = &(pOVar3->fields).KOANCCDDBDA;
    *ppIVar4 = (Il2CppObject *)0x0;
    thunk_FUN_01c20e04(ppIVar4,0);
    if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7f == '\0') {
      FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
      DAT_04565b7f = '\x01';
    }
    if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO == (FCJBEKHDLAF_o *)0x0) {
      return;
    }
    if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7f == '\0') {
      FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
      DAT_04565b7f = '\x01';
    }
    if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO;
    if (__this_00 != (FCJBEKHDLAF_o *)0x0) {
      FCJBEKHDLAF__AJINIIENFDH(__this_00,(__this->fields).PDCHNCOIHHA,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

