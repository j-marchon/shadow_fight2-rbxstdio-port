// ADJEBFOPFFF$$MIBNBHKOIEI @ RVA 0x31C1A20

bool ADJEBFOPFFF__MIBNBHKOIEI
               (ADJEBFOPFFF_o *__this,int32_t PGGOPJDLPDI,bool MHCCBMKBBBD,MethodInfo *method)

{
  ACHLOMELAJE_o *__this_00;
  ADJEBFOPFFF_o *__this_01;
  MethodInfo *method_00;
  
  if ((DAT_04566c16 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566c16 = 1;
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
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this_00 != (ACHLOMELAJE_o *)0x0) {
    __this_01 = (ADJEBFOPFFF_o *)ACHLOMELAJE__HEHFNBKGJLP(__this_00,(MethodInfo *)0x0);
    if (((long)__this_01 < (long)PGGOPJDLPDI) && (MHCCBMKBBBD)) {
      ADJEBFOPFFF__FKMEBLPLHIM(__this_01,method_00);
    }
    return (long)PGGOPJDLPDI <= (long)__this_01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

