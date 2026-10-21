// OPNMPAJKDMI$$EFKCEGNGGOI @ RVA 0x343E4AC

int64_t OPNMPAJKDMI__EFKCEGNGGOI(OPNMPAJKDMI_o *__this,MethodInfo *method)

{
  int64_t iVar1;
  long lVar2;
  System_String_o *KGLJICLJHEL;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *extraout_x1_03;
  MethodInfo *extraout_x1_04;
  MethodInfo *pMVar3;
  ACHLOMELAJE_o *pAVar4;
  LAMJOHEKJNJ_o *__this_00;
  
  if ((DAT_04568200 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568200 = 1;
    method = extraout_x1;
  }
  iVar1 = OPNMPAJKDMI__JDAOELAKDPF(__this,method);
  if (iVar1 < 1) {
    pMVar3 = method_00;
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      pMVar3 = extraout_x1_01;
    }
    if (DAT_04565b87 == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b87 = '\x01';
      pMVar3 = extraout_x1_02;
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      pMVar3 = extraout_x1_03;
    }
    lVar2 = NLPJLHOEAOE_TypeInfo->static_fields->CBPPFGLIODM;
    iVar1 = OPNMPAJKDMI__CNFMNJGPIAH(__this,pMVar3);
    lVar2 = iVar1 + lVar2;
    pMVar3 = extraout_x1_04;
  }
  else {
    lVar2 = OPNMPAJKDMI__JDAOELAKDPF(__this,method_00);
    pMVar3 = extraout_x1_00;
  }
  pAVar4 = (__this->fields).FOJBBDCJDFH;
  if (pAVar4 != (ACHLOMELAJE_o *)0x0) {
    __this_00 = (pAVar4->fields)._DDGPMHMNKNA_k__BackingField;
    KGLJICLJHEL = OPNMPAJKDMI__KBCKLCBBAJB(__this,pMVar3);
    if (__this_00 != (LAMJOHEKJNJ_o *)0x0) {
      LAMJOHEKJNJ__NCBMPCGHHFK(__this_00,KGLJICLJHEL,lVar2,(MethodInfo *)0x0);
      return lVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

