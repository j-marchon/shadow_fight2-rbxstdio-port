// MGNPHCAAEIO.ONAGKGIEEGI$$KKDGMGAEHMD @ RVA 0x3411448

System_Collections_Generic_Dictionary_string__LKPNOBFEAKD__o *
MGNPHCAAEIO_ONAGKGIEEGI__KKDGMGAEHMD
          (MGNPHCAAEIO_ONAGKGIEEGI_o *__this,AFFHKININGD_o *FBFPLEFCDOK,MethodInfo *method)

{
  ACHLOMELAJE_o *pAVar1;
  System_Collections_Generic_Dictionary_string__LKPNOBFEAKD__o **ppSVar2;
  
  if ((DAT_04568086 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568086 = 1;
  }
  if ((FBFPLEFCDOK == (AFFHKININGD_o *)0x0) || ((FBFPLEFCDOK->fields).JDNKKGPNHPB != 0x14)) {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar1 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar1 == (ACHLOMELAJE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    ppSVar2 = &(__this->fields).BLAMCAPFOPD;
    if ((pAVar1->fields).IOHEOKOOJFA != true) {
      ppSVar2 = &(__this->fields).MEMCHPHKGHF;
    }
  }
  else {
    ppSVar2 = &(__this->fields).FEGHKKNNNLE;
  }
  return *ppSVar2;
}

