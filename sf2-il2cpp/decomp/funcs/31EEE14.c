// NLPJLHOEAOE$$FJAMHGJGMDF @ RVA 0x31EEE14

bool NLPJLHOEAOE__FJAMHGJGMDF(HOOAAGABMBL_o *IKKAMAMLIKA,MethodInfo *method)

{
  bool bVar1;
  IGFGDDANEPE_o *__this;
  ACHLOMELAJE_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_String_o *KGLJICLJHEL;
  
  if ((DAT_04566db7 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566db7 = 1;
    method = extraout_x1;
  }
  if (IKKAMAMLIKA == (HOOAAGABMBL_o *)0x0) {
    return false;
  }
  KGLJICLJHEL = (IKKAMAMLIKA->fields)._COIPKAKHDFP_k__BackingField;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method = extraout_x1_00;
  }
  __this = NLPJLHOEAOE__JNFIBDBHNOA(KGLJICLJHEL,method);
  if (__this != (IGFGDDANEPE_o *)0x0) {
    IGFGDDANEPE__DOOKHLFKCAI(__this,0,(MethodInfo *)0x0);
    IGFGDDANEPE__FDAILKOHIKF(__this,-1,(MethodInfo *)0x0);
    HOOAAGABMBL__GEBIJFANLGH(IKKAMAMLIKA,true,(MethodInfo *)0x0);
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
      bVar1 = ACHLOMELAJE__JJOKIGNAPNH(__this_00,__this,false,(MethodInfo *)0x0);
      return bVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

