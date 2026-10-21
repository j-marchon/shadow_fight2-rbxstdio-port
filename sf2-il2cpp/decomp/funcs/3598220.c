// CFJANHACGMG$$NHMHFGJNACD @ RVA 0x3598220

bool CFJANHACGMG__NHMHFGJNACD(MethodInfo *method)

{
  CFJANHACGMG_c *pCVar1;
  
                    /* catch() { ... } // from try @ 036980c4 with catch @ 03698220 */
                    /* catch() { ... } // from try @ 036981d8 with catch @ 03698224 */
                    /* catch() { ... } // from try @ 036981d0 with catch @ 03698228 */
                    /* catch() { ... } // from try @ 036981ec with catch @ 0369822c */
                    /* catch() { ... } // from try @ 03698048 with catch @ 03698230 */
                    /* catch() { ... } // from try @ 0369802c with catch @ 03698234 */
  if ((DAT_04568daf & 1) == 0) {
                    /* try { // try from 03698244 to 03798247 has its CatchHandler @ 03698570 */
    FUN_01bab630(&CFJANHACGMG_TypeInfo);
                    /* try { // try from 03698248 to 03798337 has its CatchHandler @ 03697d90 */
    DAT_04568daf = 1;
  }
  if ((CFJANHACGMG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04568e01 == '\0') {
    FUN_01bab630(&CFJANHACGMG_TypeInfo);
    DAT_04568e01 = '\x01';
  }
  if ((CFJANHACGMG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pCVar1 = CFJANHACGMG_TypeInfo;
  CFJANHACGMG_TypeInfo->static_fields->_PCFJKILMDCE_k__BackingField = true;
  if (DAT_04566d6b == '\0') {
    FUN_01bab630(&CFJANHACGMG_TypeInfo);
    DAT_04566d6b = '\x01';
    pCVar1 = CFJANHACGMG_TypeInfo;
  }
  if ((pCVar1->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    pCVar1 = CFJANHACGMG_TypeInfo;
  }
  return pCVar1->static_fields->_PCFJKILMDCE_k__BackingField;
}

