// NCNJEIBHGBH$$OMFIAFKMCMF @ RVA 0x32F23F0

bool NCNJEIBHGBH__OMFIAFKMCMF(NCNJEIBHGBH_o *__this,HOOAAGABMBL_o *IHGFKLOLPOK,MethodInfo *method)

{
  bool_conflict bVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  ACHLOMELAJE_o *__this_00;
  
                    /* try { // try from 033f23f0 to 034f23fb has its CatchHandler @ 033ef1b0 */
                    /* try { // try from 033f23fc to 034f2403 has its CatchHandler @ 033f2404 */
                    /* catch() { ... } // from try @ 033f1fdc with catch @ 033f2404
                       catch() { ... } // from try @ 033f20b4 with catch @ 033f2404
                       catch() { ... } // from try @ 033f223c with catch @ 033f2404
                       catch() { ... } // from try @ 033f2314 with catch @ 033f2404
                       catch() { ... } // from try @ 033f2380 with catch @ 033f2404
                       catch() { ... } // from try @ 033f23fc with catch @ 033f2404 */
  if ((DAT_04567694 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04567694 = 1;
  }
  if (IHGFKLOLPOK == (HOOAAGABMBL_o *)0x0) {
    bVar4 = false;
  }
  else {
    bVar2 = (*(IHGFKLOLPOK->klass->vtable)._4_OIEONLNFHKC.methodPtr)
                      (IHGFKLOLPOK,(IHGFKLOLPOK->klass->vtable)._4_OIEONLNFHKC.method);
    bVar1 = (IHGFKLOLPOK->fields)._ILHGDFFOGHP_k__BackingField;
    bVar3 = (*(IHGFKLOLPOK->klass->vtable)._5_EFLKILFFJKH.methodPtr)
                      (IHGFKLOLPOK,(IHGFKLOLPOK->klass->vtable)._5_EFLKILFFJKH.method);
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
    if (__this_00 == (ACHLOMELAJE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar4 = ACHLOMELAJE__MHLDNEBLNJG
                      (__this_00,(IHGFKLOLPOK->fields)._ILMMODKJGFK_k__BackingField,
                       (MethodInfo *)0x0);
    bVar4 = (bool)(bVar2 & bVar1 != false & (bVar3 ^ 1) & bVar4);
  }
  return bVar4;
}

