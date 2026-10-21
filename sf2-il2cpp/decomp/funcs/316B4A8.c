// NFGLEDADCGL$$PHLAMLIGMHG @ RVA 0x316B4A8

int32_t NFGLEDADCGL__PHLAMLIGMHG(NFGLEDADCGL_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  GGHCLMEFIGO_o *__this_00;
  IGFGDDANEPE_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  ACHLOMELAJE_o *pAVar2;
  
  if ((DAT_045668f6 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_10237);
    DAT_045668f6 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 0326b4ec to 0336b4ef has its CatchHandler @ 0326b508 */
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0326b4f0 to 0336b4f3 has its CatchHandler @ 0326adb8 */
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
                    /* try { // try from 0326b4f4 to 0336b4f7 has its CatchHandler @ 0326b500 */
                    /* try { // try from 0326b4f8 to 0336b51f has its CatchHandler @ 0326adb8 */
  if (DAT_04565b7d == '\0') {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0326b4f4 with catch @ 0326b500
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0326b4ec with catch @ 0326b508
                        */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0326b180 with catch @ 0326b50c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0326b124 with catch @ 0326b510
                        */
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0326b520 to 0336b523 has its CatchHandler @ 0326b53c */
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((pAVar2 != (ACHLOMELAJE_o *)0x0) &&
     (__this_00 = (pAVar2->fields).OIDPLCLELEN, __this_00 != (GGHCLMEFIGO_o *)0x0)) {
                    /* catch() { ... } // from try @ 0326b520 with catch @ 0326b53c */
    __this_01 = GGHCLMEFIGO__JNFIBDBHNOA(__this_00,StringLiteral_10237,(MethodInfo *)0x0);
    if (__this_01 != (IGFGDDANEPE_o *)0x0) {
      iVar1 = IGFGDDANEPE__LDJLMEFOMLG(__this_01,(MethodInfo *)0x0);
      return iVar1;
    }
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

