// BKFFOLFKECB$$CJOHHBMFAAG @ RVA 0x32D4450

Il2CppObject * BKFFOLFKECB__CJOHHBMFAAG(BKFFOLFKECB_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  int32_t iVar3;
  int32_t iVar4;
  int32_t iVar5;
  int32_t iVar6;
  ACHLOMELAJE_o *__this_00;
  Il2CppObject *pIVar7;
  int local_44;
  
  if ((DAT_04567574 & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04567574 = 1;
  }
  iVar1 = HPEENDCCJND__MGOAMGFLEAL((HPEENDCCJND_o *)__this,1,(MethodInfo *)0x0);
  iVar2 = HPEENDCCJND__MGOAMGFLEAL((HPEENDCCJND_o *)__this,2,(MethodInfo *)0x0);
  iVar3 = HPEENDCCJND__MGOAMGFLEAL((HPEENDCCJND_o *)__this,3,(MethodInfo *)0x0);
  iVar4 = HPEENDCCJND__MGOAMGFLEAL((HPEENDCCJND_o *)__this,4,(MethodInfo *)0x0);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this_00 != (ACHLOMELAJE_o *)0x0) {
    iVar5 = ACHLOMELAJE__EOEAKGGDBFH(__this_00,(MethodInfo *)0x0);
    iVar6 = HPEENDCCJND__MGOAMGFLEAL((HPEENDCCJND_o *)__this,5,(MethodInfo *)0x0);
    local_44 = iVar2 * iVar1 - (iVar4 * iVar3 + iVar6 * iVar5);
    pIVar7 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_44);
    return pIVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

