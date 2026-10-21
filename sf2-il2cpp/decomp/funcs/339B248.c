// HCAICJLDDJO$$MINAKLNNDBL @ RVA 0x339B248

bool HCAICJLDDJO__MINAKLNNDBL(HOOAAGABMBL_o *ANMFBABEMFD,bool MHKEJNCJFFM,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  GGHCLMEFIGO_o *__this;
  IGFGDDANEPE_o *__this_00;
  ACHLOMELAJE_o *pAVar3;
  
  if ((DAT_04567c78 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04567c78 = 1;
  }
  if (ANMFBABEMFD == (HOOAAGABMBL_o *)0x0) {
    bVar1 = false;
  }
  else {
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
    pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if ((pAVar3 == (ACHLOMELAJE_o *)0x0) ||
       (__this = (pAVar3->fields).OIDPLCLELEN, __this == (GGHCLMEFIGO_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_00 = GGHCLMEFIGO__JNFIBDBHNOA(__this,ANMFBABEMFD,(MethodInfo *)0x0);
    bVar1 = __this_00 != (IGFGDDANEPE_o *)0x0;
    if ((__this_00 != (IGFGDDANEPE_o *)0x0) && (MHKEJNCJFFM)) {
      iVar2 = IGFGDDANEPE__LDJLMEFOMLG(__this_00,(MethodInfo *)0x0);
      bVar1 = 0 < iVar2;
    }
  }
  return bVar1;
}

