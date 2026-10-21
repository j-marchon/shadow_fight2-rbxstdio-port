// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$OCGIOGEIOCE @ RVA 0x325697C

void Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__OCGIOGEIOCE
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  Nekki_SF2_GUI_Shop_SidePanel_o *pNVar3;
  PBAKFOBIHEG_o *pPVar4;
  System_Collections_IEnumerator_o *pSVar5;
  VirtualInvokeData *pVVar6;
  MethodInfo *method_00;
  MethodInfo *method_01;
  PBAKFOBIHEG_c *pPVar7;
  ulong uVar8;
  int32_t *piVar9;
  System_Collections_IEnumerator_o **ppSVar10;
  
                    /* try { // try from 03356984 to 0345698b has its CatchHandler @ 033569fc */
                    /* try { // try from 0335698c to 0345699b has its CatchHandler @ 033569f8 */
  if ((DAT_04567169 & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
                    /* try { // try from 033569a0 to 034569ab has its CatchHandler @ 033569f0 */
    DAT_04567169 = 1;
  }
  pNVar3 = (__this->fields)._sidePanel;
  if (pNVar3 != (Nekki_SF2_GUI_Shop_SidePanel_o *)0x0) {
    bVar2 = Nekki_SF2_GUI_Shop_SidePanel__IsTweening(pNVar3,(MethodInfo *)0x0);
    if (bVar2) {
      return;
    }
    pNVar3 = (__this->fields)._sidePanel;
    if (pNVar3 != (Nekki_SF2_GUI_Shop_SidePanel_o *)0x0) {
                    /* try { // try from 033569c8 to 034569cb has its CatchHandler @ 03356a20 */
      if ((pNVar3->fields).DBNELADJPIJ == false) {
        return;
      }
      ppSVar10 = &(__this->fields).OALIOADCDAP;
                    /* try { // try from 033569cc to 034569cf has its CatchHandler @ 03356a14 */
                    /* try { // try from 033569d0 to 034569d7 has its CatchHandler @ 03356a1c */
      if (*ppSVar10 != (System_Collections_IEnumerator_o *)0x0) {
        return;
      }
                    /* try { // try from 033569d8 to 034569db has its CatchHandler @ 03356a0c */
                    /* try { // try from 033569dc to 034569df has its CatchHandler @ 03356a08 */
                    /* try { // try from 033569e0 to 034569e3 has its CatchHandler @ 03356a04 */
                    /* try { // try from 033569e4 to 034569e7 has its CatchHandler @ 03356a00 */
      bVar2 = HPHIGFJMKAC__JMHANNNMOEA
                        ((System_Collections_Generic_IEnumerable_RectTransform__o *)
                         (__this->fields)._touchDetectors,false,(MethodInfo *)0x0);
                    /* try { // try from 033569e8 to 034569eb has its CatchHandler @ 033569fc */
      if (!bVar2) {
        return;
      }
                    /* try { // try from 033569ec to 034569ef has its CatchHandler @ 033569f8 */
                    /* catch() { ... } // from try @ 033569a0 with catch @ 033569f0
                       try { // try from 033569f0 to 03456a37 has its CatchHandler @ 03356814 */
      Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__IKIMAGJOBLI(__this,method_00);
                    /* catch() { ... } // from try @ 033568c0 with catch @ 033569f4 */
                    /* catch() { ... } // from try @ 0335698c with catch @ 033569f8
                       catch() { ... } // from try @ 033569ec with catch @ 033569f8 */
      pPVar4 = CoroutineManager__get_Current((MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03356984 with catch @ 033569fc
                       catch() { ... } // from try @ 033569e8 with catch @ 033569fc */
                    /* catch() { ... } // from try @ 0335696c with catch @ 03356a00
                       catch() { ... } // from try @ 033569e4 with catch @ 03356a00 */
                    /* catch() { ... } // from try @ 03356948 with catch @ 03356a04
                       catch() { ... } // from try @ 033569e0 with catch @ 03356a04 */
      pSVar5 = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__MDLEKAACDNA(__this,method_01);
                    /* catch() { ... } // from try @ 0335692c with catch @ 03356a08
                       catch() { ... } // from try @ 033569dc with catch @ 03356a08 */
      if (pPVar4 != (PBAKFOBIHEG_o *)0x0) {
                    /* catch() { ... } // from try @ 03356904 with catch @ 03356a0c
                       catch() { ... } // from try @ 033569d8 with catch @ 03356a0c */
                    /* catch() { ... } // from try @ 033568a4 with catch @ 03356a10 */
        pPVar7 = pPVar4->klass;
        uVar1._0_1_ = (pPVar7->_2).rank;
        uVar1._1_1_ = (pPVar7->_2).minimumAlignment;
                    /* catch() { ... } // from try @ 033569cc with catch @ 03356a14 */
                    /* catch() { ... } // from try @ 03356888 with catch @ 03356a18 */
                    /* catch() { ... } // from try @ 033568ec with catch @ 03356a1c
                       catch() { ... } // from try @ 033569d0 with catch @ 03356a1c */
        uVar8 = (ulong)uVar1;
                    /* catch() { ... } // from try @ 03356878 with catch @ 03356a20
                       catch() { ... } // from try @ 033569c8 with catch @ 03356a20 */
        if (uVar8 != 0) {
          piVar9 = &((pPVar7->_1).interfaceOffsets)->offset;
          do {
                    /* try { // try from 03356a38 to 03456a4f has its CatchHandler @ 03356ae4 */
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
                (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
              pVVar6 = pPVar7->vtable + *piVar9;
              goto LAB_03356a70;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
                    /* try { // try from 03356a50 to 03456ad3 has its CatchHandler @ 03356814 */
        pVVar6 = (VirtualInvokeData *)FUN_01b81914(pPVar4,PBAKFOBIHEG_TypeInfo,0);
LAB_03356a70:
        pSVar5 = (System_Collections_IEnumerator_o *)
                 (*pVVar6->methodPtr)(pPVar4,pSVar5,1,pVVar6->method);
        *ppSVar10 = pSVar5;
        thunk_FUN_01c20e04(ppSVar10,pSVar5);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

