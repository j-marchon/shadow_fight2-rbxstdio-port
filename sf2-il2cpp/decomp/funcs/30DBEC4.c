// LMICCGAMENM$$GNGNDDJJMFC @ RVA 0x30DBEC4

void LMICCGAMENM__GNGNDDJJMFC
               (LMICCGAMENM_o *__this,LMICCGAMENM_LMHCLNAKOBO_o *HPACPFLKHPK,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  GGHCLMEFIGO_o *__this_00;
  IGFGDDANEPE_o *__this_01;
  System_String_o *__this_02;
  EILGGBOIMGE_FMFDKGKCBBG_o *pEVar3;
  ACHLOMELAJE_o *__this_03;
  double dVar4;
  
  if ((DAT_0456635b & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_14589);
    DAT_0456635b = 1;
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
  __this_03 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((((__this_03 != (ACHLOMELAJE_o *)0x0) && (HPACPFLKHPK != (LMICCGAMENM_LMHCLNAKOBO_o *)0x0)) &&
      (pEVar3 = (HPACPFLKHPK->fields).DJELHJIIPLG, pEVar3 != (EILGGBOIMGE_FMFDKGKCBBG_o *)0x0)) &&
     (__this_00 = (__this_03->fields).OIDPLCLELEN, __this_00 != (GGHCLMEFIGO_o *)0x0)) {
    __this_01 = GGHCLMEFIGO__JNFIBDBHNOA(__this_00,(pEVar3->fields).DFJBJLBLBGB,(MethodInfo *)0x0);
    if (__this_01 == (IGFGDDANEPE_o *)0x0) {
      return;
    }
    pEVar3 = (HPACPFLKHPK->fields).LIDMBHDEIFP;
    if ((pEVar3 != (EILGGBOIMGE_FMFDKGKCBBG_o *)0x0) &&
       (__this_02 = (pEVar3->fields).DFJBJLBLBGB, __this_02 != (System_String_o *)0x0)) {
      bVar1 = System_String__Equals(__this_02,StringLiteral_14589,(MethodInfo *)0x0);
      if (!bVar1) {
        return;
      }
      pEVar3 = (HPACPFLKHPK->fields).EOLKPCIKAFA;
      if (pEVar3 != (EILGGBOIMGE_FMFDKGKCBBG_o *)0x0) {
        dVar4 = (pEVar3->fields).HNFHNNLOLGK;
        iVar2 = -0x80000000;
        if (dVar4 != INFINITY) {
          iVar2 = (int)dVar4;
        }
        IGFGDDANEPE__DJJHOOKLHHL(__this_01,iVar2,(MethodInfo *)0x0);
        iVar2 = ACHLOMELAJE__EOEAKGGDBFH(__this_03,(MethodInfo *)0x0);
        IGFGDDANEPE__GIIJHCLHFDK(__this_01,iVar2,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

