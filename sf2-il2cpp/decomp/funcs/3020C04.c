// PAMEPBLOLPB$$FCLKGNDPKDI @ RVA 0x3020C04

void PAMEPBLOLPB__FCLKGNDPKDI(PAMEPBLOLPB_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  ACHLOMELAJE_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
                    /* try { // try from 03120c18 to 03220c1b has its CatchHandler @ 03120c4c */
  if ((DAT_04565c4d & 1) == 0) {
                    /* catch() { ... } // from try @ 03120bf8 with catch @ 03120c2c */
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
                    /* catch() { ... } // from try @ 03120be8 with catch @ 03120c30 */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565c4d = 1;
    method = extraout_x1;
  }
                    /* try { // try from 03120c44 to 03220c63 has its CatchHandler @ 03120c78 */
                    /* catch() { ... } // from try @ 03120c18 with catch @ 03120c4c */
  if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(LIIFLGALGNK_TypeInfo,method);
  }
                    /* try { // try from 03120c64 to 03220c6f has its CatchHandler @ 031203d4 */
  iVar1 = LIIFLGALGNK__HLMBDJOGONJ(0x7fffffff,(MethodInfo *)0x0);
                    /* try { // try from 03120c70 to 03220c77 has its CatchHandler @ 03120c78 */
  PAMEPBLOLPB__CPIINGDCHIH(__this,iVar1,in_x2);
                    /* catch() { ... } // from try @ 03120c44 with catch @ 03120c78
                       catch() { ... } // from try @ 03120c70 with catch @ 03120c78 */
  iVar1 = LIIFLGALGNK__HLMBDJOGONJ(0x7fffffff,(MethodInfo *)0x0);
  PAMEPBLOLPB__HMMOOLJEJOJ(__this,iVar1,in_x2);
  (__this->fields).DCNLAEJAKIE = true;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b87 == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b87 = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  PAMEPBLOLPB__HHCDIDGFNHI(__this,NLPJLHOEAOE_TypeInfo->static_fields->CBPPFGLIODM,in_x2);
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this_00 != (ACHLOMELAJE_o *)0x0) {
    CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_00,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

