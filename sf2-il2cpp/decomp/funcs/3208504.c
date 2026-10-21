// NLPJLHOEAOE$$NKFHOECJPFO @ RVA 0x3208504

void NLPJLHOEAOE__NKFHOECJPFO(NLPJLHOEAOE_o *__this,MethodInfo *method)

{
  int iVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  ACHLOMELAJE_o *__this_00;
  
  if ((DAT_04566e4a & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566e4a = 1;
    method = extraout_x1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
    method = extraout_x1_00;
  }
  iVar1 = MGNPHCAAEIO_TypeInfo->static_fields->NGIGHBGFBAC;
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
  if (DAT_04565b87 == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b87 = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (__this_00 != (ACHLOMELAJE_o *)0x0) {
    ACHLOMELAJE__BJEPDEHPLJO
              (__this_00,NLPJLHOEAOE_TypeInfo->static_fields->CBPPFGLIODM + (long)iVar1,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03308610 to 03408b6f has its CatchHandler @ 03308610
                       catch() { ... } // from try @ 03308610 with catch @ 03308610
                       catch() { ... } // from try @ 03308bac with catch @ 03308610
                       catch() { ... } // from try @ 03308bf0 with catch @ 03308610
                       catch() { ... } // from try @ 03308c20 with catch @ 03308610
                       catch() { ... } // from try @ 03308c60 with catch @ 03308610 */
  FUN_01bab8c8();
}

