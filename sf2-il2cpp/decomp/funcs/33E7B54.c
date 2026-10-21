// FCJBEKHDLAF$$KGOFOEKMOFG @ RVA 0x33E7B54

bool FCJBEKHDLAF__KGOFOEKMOFG(FCJBEKHDLAF_o *__this,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  int32_t iVar3;
  OLKKAIFGGAK_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  FCJBEKHDLAF_o *pFVar4;
  ADGIHFGIFHO_o *__this_01;
  AFFHKININGD_o *pAVar5;
  
  if ((DAT_04567ed8 & 1) == 0) {
    FUN_01bab630(&ADGIHFGIFHO_TypeInfo);
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
                    /* try { // try from 034e7b8c to 035e7cc3 has its CatchHandler @ 034e7b8c
                       catch() { ... } // from try @ 034e7b8c with catch @ 034e7b8c
                       catch() { ... } // from try @ 034e7d4c with catch @ 034e7b8c
                       catch() { ... } // from try @ 034e7e2c with catch @ 034e7b8c
                       catch() { ... } // from try @ 034e7e64 with catch @ 034e7b8c
                       catch() { ... } // from try @ 034e7e98 with catch @ 034e7b8c */
    DAT_04567ed8 = 1;
    method = extraout_x1;
  }
  if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(FCJBEKHDLAF_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7f == '\0') {
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    DAT_04565b7f = '\x01';
    method = extraout_x1_01;
  }
  if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(FCJBEKHDLAF_TypeInfo,method);
  }
  pFVar4 = FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO;
  if (pFVar4 == (FCJBEKHDLAF_o *)0x0) goto LAB_034e7c80;
  __this_01 = (ADGIHFGIFHO_o *)(pFVar4->fields).KCHOEJOHIMM;
  if (__this_01 == (ADGIHFGIFHO_o *)0x0) {
LAB_034e7c0c:
    __this_01 = (ADGIHFGIFHO_o *)0x0;
  }
  else {
    bVar1 = (ADGIHFGIFHO_TypeInfo->_2).naturalAligment;
    if ((((PJKHAJKEHEL_c *)__this_01->klass)->_2).naturalAligment < bVar1) goto LAB_034e7c0c;
    if ((((PJKHAJKEHEL_c *)__this_01->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)ADGIHFGIFHO_TypeInfo) {
      __this_01 = (ADGIHFGIFHO_o *)0x0;
    }
  }
  pAVar5 = (__this->fields).FBFPLEFCDOK;
  if (pAVar5 == (AFFHKININGD_o *)0x0) {
LAB_034e7c80:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar2 = false;
  if ((__this_01 != (ADGIHFGIFHO_o *)0x0) && ((pAVar5->fields).JDNKKGPNHPB == 0x14)) {
    bVar2 = ADGIHFGIFHO__DBLMHBMKCFJ(__this_01,(MethodInfo *)0x0);
    if (bVar2) {
      __this_00 = (__this->fields).LAMENNMGPBN;
      if (__this_00 == (OLKKAIFGGAK_o *)0x0) goto LAB_034e7c80;
      iVar3 = OLKKAIFGGAK__POIDJCKLINH(__this_00,(MethodInfo *)0x0);
      bVar2 = 0 < iVar3;
    }
    else {
      bVar2 = false;
    }
  }
  return bVar2;
}

