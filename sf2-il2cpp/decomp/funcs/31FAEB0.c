// NLPJLHOEAOE$$OMFGGNJKKAJ @ RVA 0x31FAEB0

bool NLPJLHOEAOE__OMFGGNJKKAJ
               (IGFGDDANEPE_o *ENHJPOHLMCL,int32_t DFIBGGDJPLM,bool LCACCHKGPGC,MethodInfo *method)

{
  bool bVar1;
  int iVar2;
  int32_t iVar3;
  ACHLOMELAJE_o *pAVar4;
  HOOAAGABMBL_o *__this;
  GGHCLMEFIGO_o *__this_00;
  MethodInfo *method_00;
  
  if ((DAT_04566e32 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566e32 = 1;
  }
  if (ENHJPOHLMCL == (IGFGDDANEPE_o *)0x0) {
    bVar1 = false;
  }
  else {
    iVar2 = IGFGDDANEPE__LDJLMEFOMLG(ENHJPOHLMCL,(MethodInfo *)0x0);
    if (DFIBGGDJPLM <= iVar2) {
      iVar2 = DFIBGGDJPLM;
    }
    iVar3 = IGFGDDANEPE__LDJLMEFOMLG(ENHJPOHLMCL,(MethodInfo *)0x0);
    IGFGDDANEPE__PICGGLNNJFA(ENHJPOHLMCL,iVar3 - iVar2,(MethodInfo *)0x0);
    iVar3 = IGFGDDANEPE__LDJLMEFOMLG(ENHJPOHLMCL,(MethodInfo *)0x0);
    if (iVar3 == 0) {
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
      pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (pAVar4 == (ACHLOMELAJE_o *)0x0) {
LAB_032fb04c:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 032fb04c to 033fb11b has its CatchHandler @ 032fad50 */
        FUN_01bab8c8();
      }
      bVar1 = ACHLOMELAJE__FKLEDLIAGHJ(pAVar4,(ENHJPOHLMCL->fields).PCBECBEFJOI,(MethodInfo *)0x0);
      if (bVar1) {
        __this = (ENHJPOHLMCL->fields).PCBECBEFJOI;
        if (__this != (HOOAAGABMBL_o *)0x0) {
          HOOAAGABMBL__GCCIINEMMKE(__this,(MethodInfo *)0x0);
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        NLPJLHOEAOE__CCPLLOAKNIL(ENHJPOHLMCL,false,true,method);
                    /* try { // try from 032fafc4 to 033fafcb has its CatchHandler @ 032fb1ac */
        NLPJLHOEAOE__KENEIABLCEN((ENHJPOHLMCL->fields).PCBECBEFJOI,method_00);
      }
      if (LCACCHKGPGC) {
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (DAT_04565b7d == '\0') {
                    /* try { // try from 032fafe8 to 033fafeb has its CatchHandler @ 032fb154 */
                    /* try { // try from 032fafec to 033fb023 has its CatchHandler @ 032fad50 */
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b7d = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if ((pAVar4 == (ACHLOMELAJE_o *)0x0) ||
           (__this_00 = (pAVar4->fields).OIDPLCLELEN, __this_00 == (GGHCLMEFIGO_o *)0x0))
        goto LAB_032fb04c;
                    /* try { // try from 032fb024 to 033fb02b has its CatchHandler @ 032fb158 */
        GGHCLMEFIGO__OMFGGNJKKAJ(__this_00,ENHJPOHLMCL,(MethodInfo *)0x0);
      }
    }
    bVar1 = true;
  }
                    /* try { // try from 032fb048 to 033fb04b has its CatchHandler @ 032fb148 */
  return bVar1;
}

