// HFCOLPLEANG$$JEAKAHJDIJM @ RVA 0x324AB2C

void HFCOLPLEANG__JEAKAHJDIJM(HFCOLPLEANG_o *__this,MethodInfo *method)

{
  long lVar1;
  int32_t PIDMGHLCFAJ;
  ACHLOMELAJE_o *__this_00;
  int64_t iVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  AGHKMJNGFOB_o *__this_01;
  double dVar3;
  float fVar4;
  double __x;
  double local_28;
  
  if ((DAT_045670ef & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&System_Math_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045670ef = 1;
    method = extraout_x1;
  }
                    /* try { // try from 0334ab78 to 0344af5b has its CatchHandler @ 0334ab78
                       catch() { ... } // from try @ 0334ab78 with catch @ 0334ab78
                       catch() { ... } // from try @ 0334af80 with catch @ 0334ab78
                       catch() { ... } // from try @ 0334b0e0 with catch @ 0334ab78
                       catch() { ... } // from try @ 0334b108 with catch @ 0334ab78
                       catch() { ... } // from try @ 0334b148 with catch @ 0334ab78 */
  if ((__this->fields).super.field_0x6 == '\0') {
    return;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
    method = extraout_x1_00;
  }
  __this_01 = MGNPHCAAEIO_TypeInfo->static_fields->OHJNLLIAANL;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_01;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_02;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((__this_00 == (ACHLOMELAJE_o *)0x0) ||
     (PIDMGHLCFAJ = ACHLOMELAJE__EOEAKGGDBFH(__this_00,(MethodInfo *)0x0),
     __this_01 == (AGHKMJNGFOB_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  iVar2 = AGHKMJNGFOB__JPONFNMFHGE(__this_01,PIDMGHLCFAJ,(MethodInfo *)0x0);
  fVar4 = *(float *)&(__this->fields).PCNEDMAJMOJ;
  if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_Math_TypeInfo);
  }
  fVar4 = fVar4 * (float)iVar2;
  __x = (double)fVar4;
  dVar3 = modf(__x,&local_28);
  if (0.0 <= fVar4) {
    if (dVar3 != 0.5) {
      local_28 = (double)(long)(__x + 0.5);
      goto LAB_0334acb4;
    }
    dVar3 = 1.0;
  }
  else {
    if (dVar3 != -0.5) {
      local_28 = (double)(long)(__x + -0.5);
      goto LAB_0334acb4;
    }
    dVar3 = -1.0;
  }
  if (((long)local_28 & 1U) != 0) {
    local_28 = local_28 + dVar3;
  }
LAB_0334acb4:
  lVar1 = -0x8000000000000000;
  if (local_28 != INFINITY) {
    lVar1 = (long)local_28;
  }
  *(long *)&(__this->fields).LFACAEPBLCM = lVar1;
  (__this->fields).super.field_0x6 = 0;
  return;
}

