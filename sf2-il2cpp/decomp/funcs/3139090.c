// NJNCPNBIPCD$$GCAIMMCAPFP @ RVA 0x3139090

void NJNCPNBIPCD__GCAIMMCAPFP(NJNCPNBIPCD_o *__this,HOOAAGABMBL_o *IKKAMAMLIKA,MethodInfo *method)

{
  bool bVar1;
  GGHCLMEFIGO_o *pGVar2;
  IGFGDDANEPE_o *ENHJPOHLMCL;
  ACHLOMELAJE_o *pAVar3;
  
  if ((DAT_04566715 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566715 = 1;
  }
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
  if (((pAVar3 != (ACHLOMELAJE_o *)0x0) &&
      (pGVar2 = (pAVar3->fields).OIDPLCLELEN, pGVar2 != (GGHCLMEFIGO_o *)0x0)) &&
     (GGHCLMEFIGO__BOEFGIBCIIL(pGVar2,IKKAMAMLIKA,true,(MethodInfo *)0x0),
     IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0)) {
    ENHJPOHLMCL = NLPJLHOEAOE__JNFIBDBHNOA
                            ((IKKAMAMLIKA->fields)._COIPKAKHDFP_k__BackingField,(MethodInfo *)0x0);
    bVar1 = HCAICJLDDJO__OLKMIPIPMIG(ENHJPOHLMCL,(MethodInfo *)0x0);
    if (bVar1) {
      do {
        bVar1 = AMIINPEKKFB__JJFBBLPMPAE(IKKAMAMLIKA,(MethodInfo *)0x0);
        if (!bVar1) {
          return;
        }
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
           (pGVar2 = (pAVar3->fields).OIDPLCLELEN, pGVar2 == (GGHCLMEFIGO_o *)0x0))
        goto LAB_032391e0;
        GGHCLMEFIGO__BOEFGIBCIIL(pGVar2,IKKAMAMLIKA,true,(MethodInfo *)0x0);
        bVar1 = HCAICJLDDJO__OLKMIPIPMIG(ENHJPOHLMCL,(MethodInfo *)0x0);
      } while (bVar1);
    }
    return;
  }
LAB_032391e0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

