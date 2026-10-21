// OLKKAIFGGAK$$OOCCDDNDPPG @ RVA 0x34F2294

void OLKKAIFGGAK__OOCCDDNDPPG
               (OLKKAIFGGAK_o *__this,uint8_t ACCIHBHMFPN,
               CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o CJNHFNHJHPE,MethodInfo *method)

{
  uint8_t uVar1;
  int32_t iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  OLKKAIFGGAK_o *pOVar5;
  OLKKAIFGGAK_o *pOVar6;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o CJNHFNHJHPE_00;
  
  uVar4 = CJNHFNHJHPE.fields._8_8_;
  if ((__this->fields).NFMBPIPEKGF != (OLKKAIFGGAK_o *)0x0) {
    return;
  }
  uVar3 = 0;
  iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(CJNHFNHJHPE,(MethodInfo *)0x0);
  pOVar6 = __this;
  if (iVar2 == 1) {
    CJNHFNHJHPE_00.fields.fakeValue = (int)uVar4;
    CJNHFNHJHPE_00.fields.fakeValueActive = (bool_conflict)(char)((ulong)uVar4 >> 0x20);
    CJNHFNHJHPE_00.fields.inited = (bool_conflict)(char)((ulong)uVar4 >> 0x28);
    CJNHFNHJHPE_00.fields._14_2_ = (short)((ulong)uVar4 >> 0x30);
    CJNHFNHJHPE_00.fields.currentCryptoKey = (int)uVar3;
    CJNHFNHJHPE_00.fields.hiddenValue = (int)((ulong)uVar3 >> 0x20);
    OLKKAIFGGAK__ODFNLOGGOBB(__this,ACCIHBHMFPN,CJNHFNHJHPE_00,method);
    return;
  }
  do {
    pOVar5 = pOVar6;
    pOVar6 = (pOVar5->fields).NFMBPIPEKGF;
  } while (pOVar6 != (OLKKAIFGGAK_o *)0x0);
  uVar1 = (pOVar5->fields).FCHLFGOJAAN;
  if (uVar1 == 2) {
    if (ACCIHBHMFPN < 2) goto LAB_035f2338;
  }
  else if ((uVar1 == 1) && (ACCIHBHMFPN == 0)) goto LAB_035f2338;
  OLKKAIFGGAK__NEJLOEMCOFO(__this,ACCIHBHMFPN,CJNHFNHJHPE,method);
LAB_035f2338:
  OLKKAIFGGAK__JHOBENHGLMH(__this,ACCIHBHMFPN,CJNHFNHJHPE,method);
  return;
}

