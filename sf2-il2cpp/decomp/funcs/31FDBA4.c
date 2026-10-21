// NLPJLHOEAOE$$OHLEKAMFNBE @ RVA 0x31FDBA4

void NLPJLHOEAOE__OHLEKAMFNBE(HOOAAGABMBL_o *IHGFKLOLPOK,MethodInfo *method)

{
  ACHLOMELAJE_o *__this;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  
                    /* try { // try from 032fdbc0 to 033fdcb3 has its CatchHandler @ 032fdbc0
                       catch() { ... } // from try @ 032fdbc0 with catch @ 032fdbc0
                       catch() { ... } // from try @ 032fdcd8 with catch @ 032fdbc0
                       catch() { ... } // from try @ 032fdd9c with catch @ 032fdbc0
                       catch() { ... } // from try @ 032fddc4 with catch @ 032fdbc0
                       catch() { ... } // from try @ 032fde04 with catch @ 032fdbc0 */
  if ((DAT_04566dfb & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566dfb = 1;
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
  __this = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this != (ACHLOMELAJE_o *)0x0) {
    ACHLOMELAJE__OHLEKAMFNBE(__this,IHGFKLOLPOK,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

