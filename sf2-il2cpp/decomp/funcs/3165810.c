// GALHNMPIEHA$$JLEKFKKNFPB @ RVA 0x3165810

void GALHNMPIEHA__JLEKFKKNFPB(int32_t CJNHFNHJHPE,MethodInfo *method)

{
  System_String_o *CJNHFNHJHPE_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  ACHLOMELAJE_o *pAVar1;
  int32_t local_24;
  
                    /* try { // try from 03265830 to 03365857 has its CatchHandler @ 032668f4 */
  local_24 = CJNHFNHJHPE;
  if ((DAT_045668bd & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_9418);
    DAT_045668bd = 1;
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
                    /* try { // try from 0326588c to 033658b7 has its CatchHandler @ 032668f0 */
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  pAVar1 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  CJNHFNHJHPE_00 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
  if (pAVar1 != (ACHLOMELAJE_o *)0x0) {
    ACHLOMELAJE__LMJFPPDAPBF(pAVar1,StringLiteral_9418,CJNHFNHJHPE_00,0,(MethodInfo *)0x0);
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
                    /* try { // try from 032658ec to 033658f7 has its CatchHandler @ 03266828 */
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 032658f8 to 03365a67 has its CatchHandler @ 03263c08 */
      thunk_FUN_01ba7564();
    }
    pAVar1 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar1 != (ACHLOMELAJE_o *)0x0) {
      CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)pAVar1,false,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

