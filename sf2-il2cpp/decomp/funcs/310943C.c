// OPNFCOGALLI$$BDHAMOEKNNK @ RVA 0x310943C

void OPNFCOGALLI__BDHAMOEKNNK(OPNFCOGALLI_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t iVar3;
  int32_t iVar4;
  MBDJMJLHFOO_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *extraout_x1;
  MethodInfo *method_04;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_05;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *method_06;
  MethodInfo *extraout_x1_03;
  MethodInfo *pMVar5;
  MethodInfo *method_07;
  MethodInfo *in_x3;
  undefined4 uVar6;
  undefined4 uVar7;
  
  (__this->fields).FBGLMJNEPOF = (__this->fields).FBGLMJNEPOF + 1;
  if ((__this->fields).AANDHIFMLHC == false) {
    if ((__this->fields).PIODLNMKAGJ == false) {
      return;
    }
    if ((__this->fields).NDBPNFLAKDL == (ECENNHNBAME_o *)0x0) {
      return;
    }
    (__this->fields).BPIIACENHPE = (__this->fields).BPIIACENHPE + 3;
    OPNFCOGALLI__FJCKMGLHDGG(__this,method);
    (__this->fields).PIODLNMKAGJ = false;
    return;
  }
  iVar1 = (__this->fields).KDJBKDMJKHK;
  if (iVar1 == -3) {
    if ((__this->fields).JJIDKDIGGEK == 0) {
      (__this->fields).FANDONIBLKC = 0;
    }
  }
  else {
    (__this->fields).KDJBKDMJKHK = iVar1 + 1;
  }
  OPNFCOGALLI__CNJDMGLAFNA(__this,method);
  __this_00 = (__this->fields).EJNOBBDDBDO;
  if (__this_00 == (MBDJMJLHFOO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  iVar3 = MBDJMJLHFOO__CGBLCMEMAPH(__this_00,(MethodInfo *)0x0);
  bVar2 = OPNFCOGALLI__ICJLPHPDDEO(__this,method_00);
  if (bVar2) {
    OPNFCOGALLI__BGEKGOEAPKE(__this,method_01);
    (__this->fields).FANDONIBLKC = (__this->fields).FANDONIBLKC + 1;
    OPNFCOGALLI__LCEFIPCHKMN(__this,method_02);
    bVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)
                       (__this->fields).BHJAJHGCMIB.fields,(MethodInfo *)0x0);
    if (!bVar2) {
      return;
    }
    bVar2 = OPNFCOGALLI__ICJLPHPDDEO(__this,method_03);
    if (bVar2) {
      return;
    }
    if ((__this->fields).BPIIACENHPE + 2 < iVar3) {
      return;
    }
    method_07 = (MethodInfo *)0x0;
    bVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)
                       (__this->fields).GFPACGPFOPI.fields,(MethodInfo *)0x0);
    pMVar5 = extraout_x1;
    if (bVar2) {
      iVar3 = (__this->fields).BPIIACENHPE;
      iVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         (__this->fields).KINFMBHKNLA.fields,(MethodInfo *)0x0);
      OPNFCOGALLI__KCOKKAHCOLG(__this,iVar3,iVar4 + 1,in_x3);
      iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         (__this->fields).KINFMBHKNLA.fields,(MethodInfo *)0x0);
      (__this->fields).BPIIACENHPE = iVar3;
      return;
    }
  }
  else {
    bVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)
                       (__this->fields).BHJAJHGCMIB.fields,(MethodInfo *)0x0);
    iVar1 = (__this->fields).BPIIACENHPE + 2;
    if ((bVar2) || (iVar1 < iVar3)) {
      pMVar5 = method_04;
      if ((iVar1 < iVar3) &&
         (bVar2 = OPNFCOGALLI__ICJLPHPDDEO(__this,method_04), pMVar5 = extraout_x1_01, !bVar2)) {
        OPNFCOGALLI__KCOKKAHCOLG(__this,-1,-1,in_x3);
        pMVar5 = extraout_x1_02;
      }
      bVar2 = OPNFCOGALLI__ICJLPHPDDEO(__this,pMVar5);
      pMVar5 = method_06;
      if (bVar2) {
        OPNFCOGALLI__BGEKGOEAPKE(__this,method_06);
        pMVar5 = extraout_x1_03;
      }
      uVar6 = (__this->fields).JJIDKDIGGEK;
      uVar7 = (__this->fields).BPIIACENHPE;
      (__this->fields).FANDONIBLKC = (__this->fields).FANDONIBLKC + 1;
      (__this->fields).JJIDKDIGGEK = uVar6 + 1;
      (__this->fields).BPIIACENHPE = uVar7 + 1;
      OPNFCOGALLI__FJCKMGLHDGG(__this,pMVar5);
      return;
    }
    method_07 = (MethodInfo *)0x0;
    bVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)
                       (__this->fields).GFPACGPFOPI.fields,(MethodInfo *)0x0);
    pMVar5 = extraout_x1_00;
    if (bVar2) {
      iVar3 = (__this->fields).BPIIACENHPE;
      iVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         (__this->fields).KINFMBHKNLA.fields,(MethodInfo *)0x0);
      OPNFCOGALLI__KCOKKAHCOLG(__this,iVar3,iVar4 + 1,in_x3);
      iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         (__this->fields).KINFMBHKNLA.fields,(MethodInfo *)0x0);
      (__this->fields).BPIIACENHPE = iVar3 + 1;
      OPNFCOGALLI__BGEKGOEAPKE(__this,method_05);
      (__this->fields).FANDONIBLKC = (__this->fields).FANDONIBLKC + 1;
      return;
    }
  }
  (__this->fields).AANDHIFMLHC = false;
  OPNFCOGALLI__EABJNHKPJOM(__this,pMVar5);
  OPNFCOGALLI__EFNENLMNEII(__this,(__this->fields).NDBPNFLAKDL,method_07);
  (__this->fields).AANDHIFMLHC = false;
  (__this->fields).PIODLNMKAGJ = true;
  return;
}

