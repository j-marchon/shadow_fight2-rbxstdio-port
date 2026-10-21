// NLPJLHOEAOE$$CIMINDLGIEI @ RVA 0x32042D4

bool NLPJLHOEAOE__CIMINDLGIEI(int64_t JBEOPEACEJE,MethodInfo *method)

{
  long CJNHFNHJHPE;
  ACHLOMELAJE_o *pAVar1;
  int64_t iVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  
  if ((DAT_04566e35 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566e35 = 1;
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
  if (pAVar1 != (ACHLOMELAJE_o *)0x0) {
    iVar2 = ACHLOMELAJE__IMLCNMCBEEN(pAVar1,(MethodInfo *)0x0);
    CJNHFNHJHPE = iVar2 + JBEOPEACEJE;
    if (-1 < CJNHFNHJHPE) {
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
      pAVar1 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (pAVar1 == (ACHLOMELAJE_o *)0x0) goto LAB_033043d8;
      ACHLOMELAJE__CEICBEHCCDA(pAVar1,CJNHFNHJHPE,false,(MethodInfo *)0x0);
    }
    return (bool)((byte)((ulong)CJNHFNHJHPE >> 0x3f) ^ 1);
  }
LAB_033043d8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

