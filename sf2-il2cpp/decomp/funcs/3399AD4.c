// MMDPNDAECII$$OLIPOLKMNGL @ RVA 0x3399AD4

float MMDPNDAECII__OLIPOLKMNGL(MMDPNDAECII_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  OLKKAIFGGAK_o *pOVar3;
  GBJGJEGPHKD_o *pGVar4;
  float fVar5;
  
  if (DAT_04567c95 == '\0') {
    FUN_01bab630(&EBGMOLCMOHK_TypeInfo);
    DAT_04567c95 = '\x01';
  }
  pGVar4 = (__this->fields).HMIAFJALFCJ;
  if ((pGVar4 != (GBJGJEGPHKD_o *)0x0) &&
     (pOVar3 = (pGVar4->fields).KOHECBJAFKG, pOVar3 != (OLKKAIFGGAK_o *)0x0)) {
    fVar5 = EBGMOLCMOHK_TypeInfo->static_fields->CEICIBAGEFP;
    iVar1 = OLKKAIFGGAK__HEOILELLFLL(pOVar3,(MethodInfo *)0x0);
    pGVar4 = (__this->fields).HMIAFJALFCJ;
    if ((pGVar4 != (GBJGJEGPHKD_o *)0x0) &&
       (pOVar3 = (pGVar4->fields).KOHECBJAFKG, pOVar3 != (OLKKAIFGGAK_o *)0x0)) {
      iVar2 = OLKKAIFGGAK__HEOILELLFLL(pOVar3,(MethodInfo *)0x0);
      return fVar5 / (float)(iVar2 * iVar1);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

