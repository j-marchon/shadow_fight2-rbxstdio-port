// LJNJDFEAIOH$$BHCEMNBGKGA @ RVA 0x3039600

void LJNJDFEAIOH__BHCEMNBGKGA(LJNJDFEAIOH_o *__this,MethodInfo *method)

{
  NDPMLPGANCI_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  ACHLOMELAJE_o *pAVar1;
  LPAPAMPGDFN_o *pLVar2;
  
  if ((DAT_04565d67 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565d67 = 1;
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
  pAVar1 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((pAVar1 != (ACHLOMELAJE_o *)0x0) &&
     (pLVar2 = (pAVar1->fields).LMCDOMHENMC, pLVar2 != (LPAPAMPGDFN_o *)0x0)) {
    if ((pLVar2->fields).AMIMEMOELHE == 0x32) {
      return;
    }
    __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_00 != (NDPMLPGANCI_o *)0x0) {
      NDPMLPGANCI__KJGGEPNHOBK(__this_00,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

