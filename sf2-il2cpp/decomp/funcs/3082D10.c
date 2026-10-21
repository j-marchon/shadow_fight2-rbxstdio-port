// KFCFGKEHPNK$$LKMPIPHGNKF @ RVA 0x3082D10

void KFCFGKEHPNK__LKMPIPHGNKF(int32_t AIJPKOCFDJP,MethodInfo *method)

{
  uint CJNHFNHJHPE;
  EEGDOGKBLNG_o *pEVar1;
  System_String_o *CJNHFNHJHPE_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  ACHLOMELAJE_o *pAVar2;
  LPAPAMPGDFN_o *pLVar3;
  uint local_24;
  
                    /* try { // try from 03182d24 to 03282d2f has its CatchHandler @ 03182d54 */
  if ((DAT_04566010 & 1) == 0) {
                    /* try { // try from 03182d30 to 03282d6f has its CatchHandler @ 03182cb0 */
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&KDDOKHLOKMI_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03182d04 with catch @ 03182d50
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03182d24 with catch @ 03182d54
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03182d08 with catch @ 03182d58
                        */
    FUN_01bab630(&StringLiteral_17504);
    DAT_04566010 = 1;
    method = extraout_x1;
  }
  if (AIJPKOCFDJP == 0) {
    return;
  }
                    /* try { // try from 03182d70 to 03282d87 has its CatchHandler @ 03182dc4 */
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
                    /* try { // try from 03182d88 to 03282db3 has its CatchHandler @ 03182cb0 */
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
                    /* try { // try from 03182db4 to 03282dc3 has its CatchHandler @ 03182dc4 */
  pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                    /* catch() { ... } // from try @ 03182d70 with catch @ 03182dc4
                       catch() { ... } // from try @ 03182db4 with catch @ 03182dc4 */
  if ((pAVar2 != (ACHLOMELAJE_o *)0x0) &&
     (pLVar3 = (pAVar2->fields).LMCDOMHENMC, pLVar3 != (LPAPAMPGDFN_o *)0x0)) {
                    /* try { // try from 03182dc8 to 03282dcb has its CatchHandler @ 03182dd4 */
                    /* try { // try from 03182dcc to 03282dd7 has its CatchHandler @ 03182cb0 */
    CJNHFNHJHPE = (pLVar3->fields).AHLHMBIFONA | AIJPKOCFDJP;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03182dc8 with catch @ 03182dd4
                        */
    local_24 = CJNHFNHJHPE;
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if ((pAVar2 != (ACHLOMELAJE_o *)0x0) &&
       (pLVar3 = (pAVar2->fields).LMCDOMHENMC, pLVar3 != (LPAPAMPGDFN_o *)0x0)) {
      LPAPAMPGDFN__MKACHLMIINH(pLVar3,CJNHFNHJHPE,(MethodInfo *)0x0);
      if ((KDDOKHLOKMI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (KDDOKHLOKMI_TypeInfo->static_fields->MANGIHDNLPM != false) {
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pEVar1 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
        CJNHFNHJHPE_00 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
        if (pEVar1 == (EEGDOGKBLNG_o *)0x0) goto LAB_03182ecc;
        EEGDOGKBLNG__IOCIGCHAANI(pEVar1,StringLiteral_17504,CJNHFNHJHPE_00,(MethodInfo *)0x0);
      }
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pEVar1 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
      if (pEVar1 != (EEGDOGKBLNG_o *)0x0) {
        EEGDOGKBLNG__BBMCMFOPMFN(pEVar1,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_03182ecc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

