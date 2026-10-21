// NLPJLHOEAOE$$CAJMJMJHCAD @ RVA 0x31FEF24

void NLPJLHOEAOE__CAJMJMJHCAD(NLPJLHOEAOE_o *__this,MethodInfo *method)

{
  DOPEEDABNEK_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  
                    /* try { // try from 032fef24 to 033fef2b has its CatchHandler @ 032fef2c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032fef10 with catch @ 032fef2c
                       catch(type#2 @ 00000000) { ... } // from try @ 032fef24 with catch @ 032fef2c
                        */
  if ((DAT_04566e0c & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566e0c = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04563eaa == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04563eaa = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
  if (__this_00 != (DOPEEDABNEK_o *)0x0) {
    DOPEEDABNEK__HNIHOIAMDPC(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

