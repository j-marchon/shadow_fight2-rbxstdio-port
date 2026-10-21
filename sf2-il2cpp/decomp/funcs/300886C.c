// Nekki.SF2.GUI.Shop.InfoPanelContent$$KGEIJMKKPNG @ RVA 0x300886C

/* WARNING: Type propagation algorithm not settling */

System_String_o *
Nekki_SF2_GUI_Shop_InfoPanelContent__KGEIJMKKPNG
          (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,System_String_o *CJNHFNHJHPE,
          MethodInfo *method)

{
  bool bVar1;
  uint uVar2;
  int32_t iVar3;
  System_String_o *pSVar4;
  System_String_o *value;
  int startIndex;
  
  if ((DAT_04565b75 & 1) == 0) {
    FUN_01bab630(&BJFCCEEPHOF_TypeInfo);
    FUN_01bab630(&StringLiteral_22230);
    FUN_01bab630(&StringLiteral_20362);
    __this = (Nekki_SF2_GUI_Shop_InfoPanelContent_o *)FUN_01bab630(&StringLiteral_22500);
    DAT_04565b75 = 1;
  }
                    /* try { // try from 031088d4 to 032088e3 has its CatchHandler @ 03108a04 */
                    /* try { // try from 031088e4 to 032088ff has its CatchHandler @ 03108a14 */
  startIndex = 0;
  while( true ) {
    do {
      if (startIndex < 0) {
                    /* try { // try from 031089e4 to 032089f3 has its CatchHandler @ 03108a28 */
        return (System_String_o *)(Nekki_SF2_GUI_Shop_InfoPanelContent_o *)CJNHFNHJHPE;
      }
      if ((Nekki_SF2_GUI_Shop_InfoPanelContent_o *)CJNHFNHJHPE ==
          (Nekki_SF2_GUI_Shop_InfoPanelContent_o *)0x0) goto LAB_031089ec;
                    /* try { // try from 03108900 to 0320890b has its CatchHandler @ 03108a00 */
      if ((int)(((Nekki_SF2_GUI_Shop_InfoPanelContent_o *)CJNHFNHJHPE)->fields).super.super.super.
               super.super.m_CachedPtr <= startIndex + 1) {
        return (System_String_o *)(Nekki_SF2_GUI_Shop_InfoPanelContent_o *)CJNHFNHJHPE;
      }
      uVar2 = System_String__IndexOf
                        (CJNHFNHJHPE,StringLiteral_22230,startIndex + 1,(MethodInfo *)0x0);
      if (uVar2 == 0xffffffff) {
        return (System_String_o *)(Nekki_SF2_GUI_Shop_InfoPanelContent_o *)CJNHFNHJHPE;
      }
                    /* try { // try from 0310891c to 03208923 has its CatchHandler @ 031089fc */
      startIndex = uVar2 + 1;
      iVar3 = System_String__IndexOf(CJNHFNHJHPE,StringLiteral_22500,startIndex,(MethodInfo *)0x0);
      if (iVar3 == -1) {
        return (System_String_o *)(Nekki_SF2_GUI_Shop_InfoPanelContent_o *)CJNHFNHJHPE;
      }
                    /* try { // try from 03108944 to 03208953 has its CatchHandler @ 03108a20 */
                    /* try { // try from 03108958 to 0320899b has its CatchHandler @ 03108a24 */
      pSVar4 = System_String__Substring(CJNHFNHJHPE,startIndex,iVar3 + ~uVar2,(MethodInfo *)0x0);
      __this = (Nekki_SF2_GUI_Shop_InfoPanelContent_o *)0x0;
      if (pSVar4 == (System_String_o *)0x0) goto LAB_031089ec;
      bVar1 = System_String__Contains(pSVar4,StringLiteral_20362,(MethodInfo *)0x0);
      __this = (Nekki_SF2_GUI_Shop_InfoPanelContent_o *)(ulong)bVar1;
    } while (bVar1);
    if ((BJFCCEEPHOF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    value = BJFCCEEPHOF__NMABDFPBIHH(pSVar4,(MethodInfo *)0x0);
    pSVar4 = System_String__Remove
                       (CJNHFNHJHPE,startIndex,(pSVar4->fields)._stringLength,(MethodInfo *)0x0);
    __this = (Nekki_SF2_GUI_Shop_InfoPanelContent_o *)0x0;
                    /* try { // try from 031089b0 to 032089bb has its CatchHandler @ 03108a08 */
                    /* try { // try from 031089bc to 032089e3 has its CatchHandler @ 03108860 */
    if ((pSVar4 == (System_String_o *)0x0) ||
       (__this = (Nekki_SF2_GUI_Shop_InfoPanelContent_o *)
                 System_String__Insert(pSVar4,startIndex,value,(MethodInfo *)0x0),
       value == (System_String_o *)0x0)) break;
    startIndex = (value->fields)._stringLength + iVar3;
    CJNHFNHJHPE = (System_String_o *)__this;
  }
LAB_031089ec:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

