// OLKKAIFGGAK$$FJKLMBLJPGA @ RVA 0x34F707C

void OLKKAIFGGAK__FJKLMBLJPGA(OLKKAIFGGAK_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  PJKHAJKEHEL_o *pPVar3;
  CAAJMGKIPIE_o *pCVar4;
  
  if ((DAT_045687ed & 1) == 0) {
    FUN_01bab630(&OCMLPCKBHPN_TypeInfo);
    DAT_045687ed = 1;
    method = extraout_x1;
  }
  pPVar3 = (__this->fields).FAPMJJBOFEF;
  if (pPVar3 == (PJKHAJKEHEL_o *)0x0) {
LAB_035f7178:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((pPVar3->fields).BLJLIBHLGLI == false) {
    if ((OCMLPCKBHPN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(OCMLPCKBHPN_TypeInfo,method);
      method = extraout_x1_00;
    }
    if (DAT_045684c5 == '\0') {
      FUN_01bab630(&OCMLPCKBHPN_TypeInfo);
      DAT_045684c5 = '\x01';
      method = extraout_x1_01;
    }
    if ((OCMLPCKBHPN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(OCMLPCKBHPN_TypeInfo,method);
    }
    if (OCMLPCKBHPN_TypeInfo->static_fields->NJHNCECPFLF == false) {
      return;
    }
  }
  method_01 = (MethodInfo *)0x0;
  iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                     (__this->fields).LGKFKNGIPDM.fields,(MethodInfo *)0x0);
  if (iVar2 == 2) {
    pPVar3 = (__this->fields).FAPMJJBOFEF;
    if (pPVar3 == (PJKHAJKEHEL_o *)0x0) goto LAB_035f7178;
    pCVar4 = (pPVar3->fields).DNAFFNAIDLB;
    if (pCVar4 != (CAAJMGKIPIE_o *)0x0) {
      iVar1 = (pCVar4->fields).JDNKKGPNHPB;
      if (iVar1 == 2) {
        OLKKAIFGGAK__MBPMJDLCCDF(__this,method_00);
        return;
      }
      if (iVar1 == 1) {
        OLKKAIFGGAK__BOEHEIGENMA(__this,true,method_01);
        return;
      }
    }
  }
  return;
}

