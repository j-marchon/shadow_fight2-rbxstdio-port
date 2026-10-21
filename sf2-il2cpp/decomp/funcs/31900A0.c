// Nekki.SF2.GUI.Shop.ShopTableViewCell$$ProbabilityCheck @ RVA 0x31900A0

void Nekki_SF2_GUI_Shop_ShopTableViewCell__ProbabilityCheck
               (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *__this,MethodInfo *method)

{
  byte bVar1;
  Nekki_SF2_GUI_Dialogs_Raids_ProbabilityDialog_c *pNVar2;
  HOOAAGABMBL_c *LMMIEAICFHL;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar3;
  HOOAAGABMBL_o *pHVar4;
  Il2CppClass **ppIVar5;
  long lVar6;
  
                    /* try { // try from 032900a4 to 033900a7 has its CatchHandler @ 032900d0 */
                    /* try { // try from 032900a8 to 033900df has its CatchHandler @ 0328ffb0 */
  if ((DAT_04566a3c & 1) == 0) {
    FUN_01bab630(&FAIJGJCCKJC_TypeInfo);
                    /* catch() { ... } // from try @ 032900a4 with catch @ 032900d0 */
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_ProbabilityDialog_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
                    /* try { // try from 032900e0 to 033900e7 has its CatchHandler @ 032900fc */
    DAT_04566a3c = 1;
  }
                    /* try { // try from 032900e8 to 033900f3 has its CatchHandler @ 0328ffb0 */
  pHVar4 = (__this->fields).IHKJJFAEEHM;
  if (pHVar4 != (HOOAAGABMBL_o *)0x0) {
                    /* try { // try from 032900f4 to 033900fb has its CatchHandler @ 032900fc */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032900e0 with catch @ 032900fc
                       catch(type#2 @ 00000000) { ... } // from try @ 032900f4 with catch @ 032900fc
                        */
                    /* try { // try from 03290100 to 033901cb has its CatchHandler @ 03290100
                       catch() { ... } // from try @ 03290100 with catch @ 03290100
                       catch() { ... } // from try @ 032901f0 with catch @ 03290100
                       catch() { ... } // from try @ 03290298 with catch @ 03290100
                       catch() { ... } // from try @ 032902e0 with catch @ 03290100
                       catch() { ... } // from try @ 03290368 with catch @ 03290100
                       catch() { ... } // from try @ 032903b0 with catch @ 03290100
                       catch() { ... } // from try @ 032903cc with catch @ 03290100
                       catch() { ... } // from try @ 0329040c with catch @ 03290100 */
    bVar1 = (FAIJGJCCKJC_TypeInfo->_2).naturalAligment;
    if ((bVar1 <= (pHVar4->klass->_2).naturalAligment) &&
       ((pHVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)FAIJGJCCKJC_TypeInfo))
    {
      LMMIEAICFHL = pHVar4[1].klass;
      if (LMMIEAICFHL != (HOOAAGABMBL_c *)0x0) {
        if (*(char *)&(LMMIEAICFHL->_1).interfaceOffsets == '\0') {
          return;
        }
        pNVar3 = JJPNLEPEAFM__FOMGGGJEKEA
                           ((JMDPBFOCHHP_ENBCJNLAHAC_o *)LMMIEAICFHL,
                            (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0,(System_Action_object__o *)0x0,
                            StringLiteral_1,StringLiteral_1,false,1,2,(System_String_o *)0x0,
                            (System_String_o *)0x0,1,1,false,(MethodInfo *)0x0);
        pNVar2 = Nekki_SF2_GUI_Dialogs_Raids_ProbabilityDialog_TypeInfo;
        if (pNVar3 != (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) {
          bVar1 = (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityDialog_TypeInfo->_2).naturalAligment;
          if (bVar1 <= (pNVar3->klass->_2).naturalAligment) {
            ppIVar5 = (pNVar3->klass->_2).typeHierarchy;
            lVar6 = (ulong)bVar1 - 1;
            if (ppIVar5[lVar6] ==
                (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_ProbabilityDialog_TypeInfo) {
              pNVar3[1].fields._btnCancel = (LabelButton_o *)(__this->fields).IHKJJFAEEHM;
                    /* try { // try from 032901cc to 033901d3 has its CatchHandler @ 032903b0 */
              if (ppIVar5[lVar6] != (Il2CppClass *)pNVar2) {
                pNVar3 = (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0;
              }
              thunk_FUN_01c20e04(&pNVar3[1].fields._btnCancel);
              return;
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}

