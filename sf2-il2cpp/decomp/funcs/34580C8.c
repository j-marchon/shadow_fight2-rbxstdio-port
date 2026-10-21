// Nekki.SF2.GUI.Dialogs.Raids.ProbabilityContent$$FHPNDJBMBLN @ RVA 0x34580C8

bool Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent__FHPNDJBMBLN
               (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_o *__this,KBAIDAHOMHA_o *GBCPJHKADAD,
               KBAIDAHOMHA_o *PGEOELLFHCH,int32_t ACCIHBHMFPN,MethodInfo *method)

{
  bool bVar1;
  HOOAAGABMBL_o *pHVar2;
  HOOAAGABMBL_o *pHVar3;
  
                    /* catch() { ... } // from try @ 03556168 with catch @ 035580c8 */
                    /* catch() { ... } // from try @ 03556160 with catch @ 035580cc */
                    /* catch() { ... } // from try @ 03556148 with catch @ 035580d0 */
  if ((uint)ACCIHBHMFPN < 2) {
                    /* catch() { ... } // from try @ 03556028 with catch @ 035580f4 */
    if (GBCPJHKADAD == (KBAIDAHOMHA_o *)0x0) goto LAB_03558148;
                    /* catch() { ... } // from try @ 0355601c with catch @ 035580f8 */
                    /* catch() { ... } // from try @ 03556004 with catch @ 035580fc */
    if ((GBCPJHKADAD->fields).IAMKPGAKFNH != false) {
                    /* catch() { ... } // from try @ 03555fa0 with catch @ 03558100 */
      if (PGEOELLFHCH != (KBAIDAHOMHA_o *)0x0) {
                    /* catch() { ... } // from try @ 03555f88 with catch @ 03558104 */
        return (PGEOELLFHCH->fields).IAMKPGAKFNH;
                    /* catch() { ... } // from try @ 03555f7c with catch @ 03558108 */
      }
      goto LAB_03558148;
    }
                    /* catch() { ... } // from try @ 03555f64 with catch @ 0355810c */
    if (PGEOELLFHCH == (KBAIDAHOMHA_o *)0x0) goto LAB_03558148;
                    /* catch() { ... } // from try @ 03556b44 with catch @ 03558110
                       catch() { ... } // from try @ 03556c34 with catch @ 03558110 */
                    /* catch() { ... } // from try @ 03556aa4 with catch @ 03558114
                       catch() { ... } // from try @ 03557b98 with catch @ 03558114 */
    if ((PGEOELLFHCH->fields).IAMKPGAKFNH != false) {
      return false;
    }
                    /* catch() { ... } // from try @ 03556800 with catch @ 03558124
                       catch() { ... } // from try @ 03557b88 with catch @ 03558124 */
    pHVar2 = (GBCPJHKADAD->fields).CJLNOJMBNPN;
                    /* catch() { ... } // from try @ 0355673c with catch @ 03558128
                       catch() { ... } // from try @ 03557b84 with catch @ 03558128 */
    if (pHVar2 == (HOOAAGABMBL_o *)0x0) goto LAB_03558148;
                    /* catch() { ... } // from try @ 03557070 with catch @ 0355812c
                       catch() { ... } // from try @ 03557bb8 with catch @ 0355812c */
    pHVar3 = (PGEOELLFHCH->fields).CJLNOJMBNPN;
  }
  else {
                    /* catch() { ... } // from try @ 0355613c with catch @ 035580d4 */
    if (ACCIHBHMFPN != 2) {
                    /* catch() { ... } // from try @ 03556a3c with catch @ 03558118
                       catch() { ... } // from try @ 03557b94 with catch @ 03558118 */
                    /* catch() { ... } // from try @ 03556978 with catch @ 0355811c
                       catch() { ... } // from try @ 03557b90 with catch @ 0355811c */
                    /* catch() { ... } // from try @ 035568c4 with catch @ 03558120
                       catch() { ... } // from try @ 03557b8c with catch @ 03558120 */
      return false;
    }
                    /* catch() { ... } // from try @ 03556124 with catch @ 035580d8 */
                    /* catch() { ... } // from try @ 035560d8 with catch @ 035580dc */
                    /* catch() { ... } // from try @ 035560d0 with catch @ 035580e0 */
                    /* catch() { ... } // from try @ 035560b8 with catch @ 035580e4 */
    if (((GBCPJHKADAD == (KBAIDAHOMHA_o *)0x0) ||
        (pHVar2 = (HOOAAGABMBL_o *)(GBCPJHKADAD->fields).IEINLOAOCLD, pHVar2 == (HOOAAGABMBL_o *)0x0
        )) || (PGEOELLFHCH == (KBAIDAHOMHA_o *)0x0)) goto LAB_03558148;
                    /* catch() { ... } // from try @ 035560ac with catch @ 035580e8 */
    pHVar3 = (HOOAAGABMBL_o *)(PGEOELLFHCH->fields).IEINLOAOCLD;
                    /* catch() { ... } // from try @ 03556094 with catch @ 035580ec */
  }
                    /* catch() { ... } // from try @ 0355704c with catch @ 03558130 */
  if (pHVar3 != (HOOAAGABMBL_o *)0x0) {
                    /* catch() { ... } // from try @ 0355703c with catch @ 03558134
                       catch() { ... } // from try @ 03557bb4 with catch @ 03558134 */
                    /* catch() { ... } // from try @ 03556fc0 with catch @ 03558138 */
                    /* catch() { ... } // from try @ 03556fa8 with catch @ 0355813c
                       catch() { ... } // from try @ 03557bb0 with catch @ 0355813c */
                    /* catch() { ... } // from try @ 03556f2c with catch @ 03558140 */
                    /* catch() { ... } // from try @ 03556f14 with catch @ 03558144
                       catch() { ... } // from try @ 03557bac with catch @ 03558144 */
    bVar1 = System_String__op_Equality
                      ((pHVar2->fields)._COIPKAKHDFP_k__BackingField,
                       (pHVar3->fields)._COIPKAKHDFP_k__BackingField,(MethodInfo *)0x0);
    return bVar1;
  }
LAB_03558148:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03556e9c with catch @ 03558148 */
  FUN_01bab8c8();
}

