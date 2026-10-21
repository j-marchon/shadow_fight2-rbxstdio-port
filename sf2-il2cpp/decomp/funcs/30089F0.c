// Nekki.SF2.GUI.Shop.InfoPanelContent$$GHEBFAHKFBG @ RVA 0x30089F0

System_String_o *
Nekki_SF2_GUI_Shop_InfoPanelContent__GHEBFAHKFBG
          (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,System_String_o *JCLPIKHEKBB,
          MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int32_t iVar4;
  System_String_o *pSVar5;
  int iVar6;
  int iVar7;
  
                    /* try { // try from 031089f4 to 032089fb has its CatchHandler @ 03108a08 */
                    /* catch() { ... } // from try @ 0310891c with catch @ 031089fc
                       try { // try from 031089fc to 03208a3f has its CatchHandler @ 03108860 */
                    /* catch() { ... } // from try @ 03108900 with catch @ 03108a00 */
                    /* catch() { ... } // from try @ 031088d4 with catch @ 03108a04 */
                    /* catch() { ... } // from try @ 031089b0 with catch @ 03108a08
                       catch() { ... } // from try @ 031089f4 with catch @ 03108a08 */
                    /* catch() { ... } // from try @ 031088e4 with catch @ 03108a14 */
  if ((DAT_04565b78 & 1) == 0) {
                    /* catch() { ... } // from try @ 03108944 with catch @ 03108a20 */
    FUN_01bab630(&StringLiteral_22230);
                    /* catch() { ... } // from try @ 03108958 with catch @ 03108a24 */
                    /* catch() { ... } // from try @ 031089e4 with catch @ 03108a28 */
    FUN_01bab630(&StringLiteral_167);
    FUN_01bab630(&StringLiteral_20362);
                    /* try { // try from 03108a40 to 03208a43 has its CatchHandler @ 03108aa8 */
    FUN_01bab630(&StringLiteral_2274);
    FUN_01bab630(&StringLiteral_22500);
                    /* try { // try from 03108a54 to 03208a5f has its CatchHandler @ 03108ad8 */
    FUN_01bab630(&StringLiteral_1);
                    /* try { // try from 03108a60 to 03208a7b has its CatchHandler @ 03108860 */
    DAT_04565b78 = 1;
  }
  bVar2 = System_String__IsNullOrEmpty(JCLPIKHEKBB,(MethodInfo *)0x0);
  if (!bVar2) {
    if (JCLPIKHEKBB == (System_String_o *)0x0) {
LAB_03108c94:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 03108a7c to 03208a7f has its CatchHandler @ 03108ab4 */
                    /* try { // try from 03108a80 to 03208a9f has its CatchHandler @ 03108860 */
    bVar2 = System_String__Contains(JCLPIKHEKBB,StringLiteral_22230,(MethodInfo *)0x0);
    if (bVar2) {
                    /* try { // try from 03108aa0 to 03208ac3 has its CatchHandler @ 03108ad8 */
                    /* catch() { ... } // from try @ 03108a40 with catch @ 03108aa8 */
                    /* catch() { ... } // from try @ 03108a7c with catch @ 03108ab4 */
      iVar1 = 0;
      iVar6 = 0;
                    /* try { // try from 03108ac4 to 03208acf has its CatchHandler @ 03108860 */
                    /* try { // try from 03108ad0 to 03208ad7 has its CatchHandler @ 03108ad8 */
                    /* catch() { ... } // from try @ 03108a54 with catch @ 03108ad8
                       catch() { ... } // from try @ 03108aa0 with catch @ 03108ad8
                       catch() { ... } // from try @ 03108ad0 with catch @ 03108ad8 */
      while (((iVar7 = iVar1, -1 < iVar6 && (iVar6 + 1 < (JCLPIKHEKBB->fields)._stringLength)) &&
             (uVar3 = System_String__IndexOf
                                (JCLPIKHEKBB,StringLiteral_22230,iVar6 + 1,(MethodInfo *)0x0),
             uVar3 != 0xffffffff))) {
        iVar6 = uVar3 + 1;
        iVar4 = System_String__IndexOf(JCLPIKHEKBB,StringLiteral_22500,iVar6,(MethodInfo *)0x0);
        if (iVar4 == -1) break;
        pSVar5 = System_String__Substring(JCLPIKHEKBB,iVar6,iVar4 + ~uVar3,(MethodInfo *)0x0);
        if (pSVar5 == (System_String_o *)0x0) goto LAB_03108c94;
        bVar2 = System_String__Contains(pSVar5,StringLiteral_20362,(MethodInfo *)0x0);
        iVar1 = iVar7;
        if (!bVar2) {
          pSVar5 = System_String__Replace
                             (pSVar5,StringLiteral_2274,StringLiteral_167,(MethodInfo *)0x0);
          if (pSVar5 == (System_String_o *)0x0) goto LAB_03108c94;
          iVar1 = (pSVar5->fields)._stringLength;
          iVar6 = iVar4;
          if (iVar1 <= iVar7) {
            iVar1 = iVar7;
          }
        }
      }
      iVar6 = 0;
      while (-1 < iVar6) {
        if (JCLPIKHEKBB == (System_String_o *)0x0) goto LAB_03108c94;
        if ((JCLPIKHEKBB->fields)._stringLength <= iVar6 + 1) {
          return JCLPIKHEKBB;
        }
        uVar3 = System_String__IndexOf(JCLPIKHEKBB,StringLiteral_22230,iVar6 + 1,(MethodInfo *)0x0);
        if (uVar3 == 0xffffffff) {
          return JCLPIKHEKBB;
        }
        iVar6 = uVar3 + 1;
        iVar4 = System_String__IndexOf(JCLPIKHEKBB,StringLiteral_22500,iVar6,(MethodInfo *)0x0);
        if (iVar4 == -1) {
          return JCLPIKHEKBB;
        }
        pSVar5 = System_String__Substring(JCLPIKHEKBB,iVar6,iVar4 + ~uVar3,(MethodInfo *)0x0);
        if (pSVar5 == (System_String_o *)0x0) goto LAB_03108c94;
        bVar2 = System_String__Contains(pSVar5,StringLiteral_20362,(MethodInfo *)0x0);
        if (!bVar2) {
          pSVar5 = System_String__Replace
                             (pSVar5,StringLiteral_2274,StringLiteral_167,(MethodInfo *)0x0);
          if (pSVar5 == (System_String_o *)0x0) goto LAB_03108c94;
          iVar6 = iVar7 - (pSVar5->fields)._stringLength;
          pSVar5 = StringLiteral_1;
          if (0 < iVar6) {
            do {
              pSVar5 = System_String__Concat(pSVar5,StringLiteral_2274,(MethodInfo *)0x0);
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
          JCLPIKHEKBB = System_String__Insert(JCLPIKHEKBB,iVar4,pSVar5,(MethodInfo *)0x0);
          if (pSVar5 == (System_String_o *)0x0) goto LAB_03108c94;
          iVar6 = (pSVar5->fields)._stringLength + iVar4;
        }
      }
    }
  }
  return JCLPIKHEKBB;
}

