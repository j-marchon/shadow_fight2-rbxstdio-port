// ONEDJCACCGM$$EGENCJMCCEJ @ RVA 0x31DEA80

System_String_o * ONEDJCACCGM__EGENCJMCCEJ(System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  MEMHEPBAJJA_HIAEDCDJJDJ_Fields *pMVar1;
  ACHLOMELAJE_o *__this;
  MEMHEPBAJJA_HIAEDCDJJDJ_o *pMVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  
                    /* try { // try from 032dea9c to 033dea9f has its CatchHandler @ 032deaac */
  if ((DAT_04566d2a & 1) == 0) {
                    /* try { // try from 032deaa0 to 033deac7 has its CatchHandler @ 032de860 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032de99c with catch @ 032deaa4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032de98c with catch @ 032deaa8
                        */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032dea9c with catch @ 032deaac
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032de9ac with catch @ 032deab0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032de978 with catch @ 032deab4
                        */
    FUN_01bab630(&StringLiteral_1);
    DAT_04566d2a = 1;
    method = extraout_x1;
  }
                    /* try { // try from 032deac8 to 033deacb has its CatchHandler @ 032deaf0 */
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 032deacc to 033deaf7 has its CatchHandler @ 032de860 */
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
                    /* catch() { ... } // from try @ 032deac8 with catch @ 032deaf0 */
                    /* try { // try from 032deaf8 to 033deaff has its CatchHandler @ 032deb18 */
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
                    /* try { // try from 032deb00 to 033deb0f has its CatchHandler @ 032de860 */
  }
  __this = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this != (ACHLOMELAJE_o *)0x0) {
                    /* try { // try from 032deb10 to 033deb17 has its CatchHandler @ 032deb18 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032deaf8 with catch @ 032deb18
                       catch(type#2 @ 00000000) { ... } // from try @ 032deb10 with catch @ 032deb18
                        */
    pMVar2 = ACHLOMELAJE__HKIEGNBOFCD(__this,KGLJICLJHEL,0,(MethodInfo *)0x0);
    pMVar1 = (MEMHEPBAJJA_HIAEDCDJJDJ_Fields *)&StringLiteral_1;
    if (pMVar2 != (MEMHEPBAJJA_HIAEDCDJJDJ_o *)0x0) {
      pMVar1 = &pMVar2->fields;
    }
    return pMVar1->JAICMIMBIOA;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

