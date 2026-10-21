// NFGLEDADCGL$$DBOOGGKPPIP @ RVA 0x316B280

int32_t NFGLEDADCGL__DBOOGGKPPIP(NFGLEDADCGL_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  ACHLOMELAJE_o *__this_00;
  EPFMFHDGMCE_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  KJBGNIGNECD_o *pKVar2;
  System_Collections_Generic_List_KJBGNIGNECD_AHICALNEICM__o *pSVar3;
  
  if ((DAT_045668f4 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<KJBGNIGNECD_AHICALNEICM>_get_Count__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045668f4 = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  iVar1 = 0;
  if (__this_00 != (ACHLOMELAJE_o *)0x0) {
    iVar1 = ACHLOMELAJE__EOEAKGGDBFH(__this_00,(MethodInfo *)0x0);
    pKVar2 = (__this->fields).GMHDPMNODMF;
    if (((pKVar2 != (KJBGNIGNECD_o *)0x0) &&
        ((pKVar2->fields).GJBLBEALOBO !=
         (System_Collections_Generic_List_KJBGNIGNECD_AHICALNEICM__o *)0x0)) &&
       (__this_01 = EPFMFHDGMCE__ICEPMHDMFLM((MethodInfo *)0x0), iVar1 = 0,
       __this_01 != (EPFMFHDGMCE_o *)0x0)) {
      iVar1 = EPFMFHDGMCE__KHPKOIMEPBK(__this_01,(MethodInfo *)0x0);
      pKVar2 = (__this->fields).GMHDPMNODMF;
      if ((pKVar2 != (KJBGNIGNECD_o *)0x0) &&
         (pSVar3 = (pKVar2->fields).GJBLBEALOBO,
         pSVar3 != (System_Collections_Generic_List_KJBGNIGNECD_AHICALNEICM__o *)0x0)) {
        return iVar1 - (pSVar3->fields)._size;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(iVar1);
}

