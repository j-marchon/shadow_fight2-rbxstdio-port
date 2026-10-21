// NLPJLHOEAOE$$JINOCBDFEIM @ RVA 0x3206028

bool NLPJLHOEAOE__JINOCBDFEIM(int64_t NBHHBBOJJME,MethodInfo *method)

{
  ACHLOMELAJE_o *__this;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  
  if ((DAT_04566e1e & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566e1e = 1;
    method = extraout_x1;
  }
  if (-1 < NBHHBBOJJME) {
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
    __this = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (__this == (ACHLOMELAJE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    ACHLOMELAJE__CEICBEHCCDA(__this,NBHHBBOJJME,false,(MethodInfo *)0x0);
  }
  return (bool)((byte)((ulong)NBHHBBOJJME >> 0x3f) ^ 1);
}

