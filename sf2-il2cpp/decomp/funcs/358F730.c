// EHCHALIPPEC$$EPBENPDCBFE @ RVA 0x358F730

bool EHCHALIPPEC__EPBENPDCBFE
               (EHCHALIPPEC_o *__this,NKPJLEMPIKD_GBBCKIANDCN_o *PHCGJGCHKCM,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t iVar3;
  OLKKAIFGGAK_o *pOVar4;
  
  bVar2 = NKPJLEMPIKD__EPBENPDCBFE((NKPJLEMPIKD_o *)__this,PHCGJGCHKCM,(MethodInfo *)0x0);
  if (bVar2) {
    if ((PHCGJGCHKCM == (NKPJLEMPIKD_GBBCKIANDCN_o *)0x0) ||
       (pOVar4 = (PHCGJGCHKCM->fields).EMCFCMFGPME, pOVar4 == (OLKKAIFGGAK_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                       (pOVar4->fields).LGKFKNGIPDM.fields,(MethodInfo *)0x0);
    iVar1 = (__this->fields)._FNMNJKAOMGH_k__BackingField;
    bVar2 = iVar1 == 0 || iVar1 == iVar3;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

