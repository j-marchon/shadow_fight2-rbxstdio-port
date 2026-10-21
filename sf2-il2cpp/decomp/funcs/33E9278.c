// FCJBEKHDLAF$$KOCIFGIDHOI @ RVA 0x33E9278

void FCJBEKHDLAF__KOCIFGIDHOI(FCJBEKHDLAF_o *__this,MethodInfo *method)

{
  byte bVar1;
  OLKKAIFGGAK_o *pOVar2;
  JMDPBFOCHHP_o *pJVar3;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_01;
  MethodInfo *extraout_x1_01;
  MethodInfo *in_x2;
  MethodInfo *in_x3;
  AFFHKININGD_o *pAVar4;
  OLKKAIFGGAK_o **ppOVar5;
  ADGIHFGIFHO_o *JMCEAKJCJLH;
  
  if ((DAT_04567f0c & 1) == 0) {
    FUN_01bab630(&ADGIHFGIFHO_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04567f0c = 1;
  }
  pOVar2 = FCJBEKHDLAF__OCJCMHLABBF(__this,(__this->fields).KCHOEJOHIMM,in_x2);
  (__this->fields).LAMENNMGPBN = pOVar2;
  thunk_FUN_01c20e04();
  pOVar2 = FCJBEKHDLAF__OCJCMHLABBF(__this,(__this->fields).JEDELFOBLEN,in_x2);
  ppOVar5 = &(__this->fields).CLEKIBBCAOJ;
  *ppOVar5 = pOVar2;
  thunk_FUN_01c20e04(ppOVar5,pOVar2);
  pAVar4 = (__this->fields).FBFPLEFCDOK;
  if (pAVar4 == (AFFHKININGD_o *)0x0) goto LAB_034e93a4;
  method_01 = extraout_x1;
  if ((pAVar4->fields).JDNKKGPNHPB != 0x14) goto LAB_034e9384;
  JMCEAKJCJLH = (ADGIHFGIFHO_o *)(__this->fields).KCHOEJOHIMM;
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pJVar3 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if (pJVar3 == (JMDPBFOCHHP_o *)0x0) goto LAB_034e93a4;
  if (JMCEAKJCJLH == (ADGIHFGIFHO_o *)0x0) {
LAB_034e9350:
    JMCEAKJCJLH = (ADGIHFGIFHO_o *)0x0;
  }
  else {
    bVar1 = (ADGIHFGIFHO_TypeInfo->_2).naturalAligment;
    if ((((PJKHAJKEHEL_c *)JMCEAKJCJLH->klass)->_2).naturalAligment < bVar1) goto LAB_034e9350;
    if ((((PJKHAJKEHEL_c *)JMCEAKJCJLH->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)ADGIHFGIFHO_TypeInfo) {
      JMCEAKJCJLH = (ADGIHFGIFHO_o *)0x0;
    }
  }
  FCJBEKHDLAF__AGNJLMJFNCO(__this,JMCEAKJCJLH,(pJVar3->fields)._MFDCPFIBKNL_k__BackingField,in_x3);
  FCJBEKHDLAF__DHMCIFLBCPJ(__this,method_00);
  pAVar4 = (__this->fields).FBFPLEFCDOK;
  method_01 = extraout_x1_00;
  if (pAVar4 != (AFFHKININGD_o *)0x0) {
LAB_034e9384:
    if ((pAVar4->fields).JDNKKGPNHPB != 0) {
      FCJBEKHDLAF__AIFOMGABBBA(__this,method_01);
      method_01 = extraout_x1_01;
    }
    FCJBEKHDLAF__GMLKPOHJCHH(__this,method_01);
    return;
  }
LAB_034e93a4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

