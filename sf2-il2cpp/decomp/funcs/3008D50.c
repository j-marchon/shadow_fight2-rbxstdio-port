// Nekki.SF2.GUI.Shop.InfoPanelContent$$GetItemTimer @ RVA 0x3008D50

int64_t Nekki_SF2_GUI_Shop_InfoPanelContent__GetItemTimer
                  (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,MethodInfo *method)

{
  bool bVar1;
  IGFGDDANEPE_o *__this_00;
  int64_t iVar2;
  long lVar3;
  HOOAAGABMBL_o *pHVar4;
  long lVar5;
  
                    /* try { // try from 03108d5c to 03208d67 has its CatchHandler @ 03108ed0 */
  if ((DAT_04565b76 & 1) == 0) {
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
                    /* try { // try from 03108d78 to 03208d7f has its CatchHandler @ 03108ecc */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_10876);
    FUN_01bab630(&StringLiteral_10823);
    DAT_04565b76 = 1;
  }
                    /* try { // try from 03108da0 to 03208daf has its CatchHandler @ 03108ef0 */
  if (((__this->fields).AMLKHDGJPGJ == false) ||
     (__this_00 = (__this->fields).AAIHPGBKKNM, __this_00 == (IGFGDDANEPE_o *)0x0)) {
    pHVar4 = (__this->fields).BBODGCMLKFP;
    if (pHVar4 == (HOOAAGABMBL_o *)0x0) {
      return 0;
    }
    if ((pHVar4->fields)._NPMFPMGCNEC_k__BackingField != false) {
      lVar3 = (*(pHVar4->klass->vtable)._6_PDECHBMCBDB.methodPtr)
                        (pHVar4,0,(pHVar4->klass->vtable)._6_PDECHBMCBDB.method);
      if (lVar3 == 0) {
        return 0;
      }
      lVar3 = *(long *)(lVar3 + 0x70);
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
      }
                    /* try { // try from 03108e68 to 03208e73 has its CatchHandler @ 03108ed8 */
      if (DAT_04565b87 == '\0') {
                    /* try { // try from 03108e74 to 03208e9f has its CatchHandler @ 03108cac */
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b87 = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 03108ea0 to 03208ec3 has its CatchHandler @ 03108ef8 */
      lVar5 = NLPJLHOEAOE_TypeInfo->static_fields->CBPPFGLIODM;
      if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(EOAOCPLIKOI_TypeInfo);
      }
      iVar2 = EOAOCPLIKOI__BAIKGKFPDGC((MethodInfo *)0x0);
                    /* try { // try from 03108ec4 to 03208ecb has its CatchHandler @ 03108ed8 */
      lVar3 = (lVar3 - lVar5) - iVar2;
      goto joined_r0x03108fc8;
    }
                    /* catch() { ... } // from try @ 03108d3c with catch @ 03108ee4 */
                    /* catch() { ... } // from try @ 03108da0 with catch @ 03108ef0 */
                    /* catch() { ... } // from try @ 03108db4 with catch @ 03108ef4 */
    bVar1 = System_String__op_Equality
                      ((pHVar4->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_10876,
                       (MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03108ea0 with catch @ 03108ef8 */
    if (!bVar1) {
      pHVar4 = (__this->fields).BBODGCMLKFP;
      if (pHVar4 == (HOOAAGABMBL_o *)0x0) goto LAB_03108fd0;
                    /* try { // try from 03108f0c to 03208f0f has its CatchHandler @ 03108f74 */
      bVar1 = System_String__op_Equality
                        ((pHVar4->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_10823,
                         (MethodInfo *)0x0);
      if (!bVar1) {
        return 0;
      }
    }
                    /* try { // try from 03108f20 to 03208f2b has its CatchHandler @ 03108fa4 */
    pHVar4 = (__this->fields).BBODGCMLKFP;
    if (pHVar4 == (HOOAAGABMBL_o *)0x0) {
LAB_03108fd0:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 03108f2c to 03208f47 has its CatchHandler @ 03108cac */
    lVar3 = (*(pHVar4->klass->vtable)._6_PDECHBMCBDB.methodPtr)
                      (pHVar4,0,(pHVar4->klass->vtable)._6_PDECHBMCBDB.method);
    if (lVar3 == 0) {
      return 0;
    }
    lVar3 = *(long *)(lVar3 + 0x70);
                    /* try { // try from 03108f48 to 03208f4b has its CatchHandler @ 03108f80 */
                    /* try { // try from 03108f4c to 03208f6b has its CatchHandler @ 03108cac */
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
    }
    if (DAT_04565b87 == '\0') {
                    /* try { // try from 03108f6c to 03208f8f has its CatchHandler @ 03108fa4 */
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* catch() { ... } // from try @ 03108f0c with catch @ 03108f74 */
      DAT_04565b87 = '\x01';
    }
                    /* catch() { ... } // from try @ 03108f48 with catch @ 03108f80 */
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 03108f90 to 03208f9b has its CatchHandler @ 03108cac */
                    /* try { // try from 03108f9c to 03208fa3 has its CatchHandler @ 03108fa4 */
    lVar5 = NLPJLHOEAOE_TypeInfo->static_fields->CBPPFGLIODM;
                    /* catch() { ... } // from try @ 03108f20 with catch @ 03108fa4
                       catch() { ... } // from try @ 03108f6c with catch @ 03108fa4
                       catch() { ... } // from try @ 03108f9c with catch @ 03108fa4 */
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(EOAOCPLIKOI_TypeInfo);
    }
    iVar2 = EOAOCPLIKOI__BAIKGKFPDGC((MethodInfo *)0x0);
    lVar3 = (lVar3 - lVar5) - iVar2;
  }
  else {
                    /* try { // try from 03108db4 to 03208e53 has its CatchHandler @ 03108ef4 */
    iVar2 = IGFGDDANEPE__OMMIKNKEKJN(__this_00,(MethodInfo *)0x0);
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
    }
    if (DAT_04565b87 == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b87 = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    lVar3 = iVar2 - NLPJLHOEAOE_TypeInfo->static_fields->CBPPFGLIODM;
  }
joined_r0x03108fc8:
  if (lVar3 < 1) {
                    /* catch() { ... } // from try @ 03108d5c with catch @ 03108ed0 */
                    /* catch() { ... } // from try @ 03108d2c with catch @ 03108ed4 */
                    /* catch() { ... } // from try @ 03108e68 with catch @ 03108ed8
                       catch() { ... } // from try @ 03108ec4 with catch @ 03108ed8 */
    return 0;
  }
  return lVar3;
}

