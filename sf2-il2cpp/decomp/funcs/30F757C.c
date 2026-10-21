// Nekki.SF2.GUI.Dialogs.NotificationsGame$$HAMGAOBNHDF @ RVA 0x30F757C

void Nekki_SF2_GUI_Dialogs_NotificationsGame__HAMGAOBNHDF
               (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *__this,MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  VirtualInvokeData *pVVar3;
  PBAKFOBIHEG_c *pPVar4;
  ulong uVar5;
  int32_t *piVar6;
  System_Collections_IEnumerator_o **ppSVar7;
  System_Collections_IEnumerator_o *pSVar8;
  
  if ((DAT_04566470 & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
                    /* try { // try from 031f75a4 to 032f75af has its CatchHandler @ 031f763c */
    DAT_04566470 = 1;
  }
  ppSVar7 = &(__this->fields).NKCJILMGJKB;
  if (*ppSVar7 == (System_Collections_IEnumerator_o *)0x0) {
                    /* catch() { ... } // from try @ 031f7494 with catch @ 031f760c */
                    /* catch() { ... } // from try @ 031f7444 with catch @ 031f7610 */
                    /* catch() { ... } // from try @ 031f7398 with catch @ 031f7614 */
    return;
  }
                    /* try { // try from 031f75b0 to 032f75d3 has its CatchHandler @ 031f7204 */
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  if (pPVar2 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 031f7320 with catch @ 031f7650 */
    FUN_01bab8c8();
  }
  pPVar4 = pPVar2->klass;
  pSVar8 = *ppSVar7;
  uVar1._0_1_ = (pPVar4->_2).rank;
  uVar1._1_1_ = (pPVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
                    /* try { // try from 031f75d4 to 032f75d7 has its CatchHandler @ 031f7620 */
                    /* try { // try from 031f75d8 to 032f75db has its CatchHandler @ 031f7604 */
  if (uVar5 != 0) {
                    /* try { // try from 031f75dc to 032f75df has its CatchHandler @ 031f75f8 */
                    /* catch() { ... } // from try @ 031f7504 with catch @ 031f75e0
                       try { // try from 031f75e0 to 032f768f has its CatchHandler @ 031f7204 */
    piVar6 = &((pPVar4->_1).interfaceOffsets)->offset;
    do {
                    /* catch() { ... } // from try @ 031f7470 with catch @ 031f75e4 */
                    /* catch() { ... } // from try @ 031f73c4 with catch @ 031f75e8 */
                    /* catch() { ... } // from try @ 031f72f4 with catch @ 031f75ec */
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
                    /* catch() { ... } // from try @ 031f747c with catch @ 031f7618 */
                    /* catch() { ... } // from try @ 031f73d8 with catch @ 031f761c */
                    /* catch() { ... } // from try @ 031f75d4 with catch @ 031f7620 */
        pVVar3 = pPVar4->vtable + (*piVar6 + 1);
        goto LAB_031f7628;
      }
                    /* catch() { ... } // from try @ 031f74f4 with catch @ 031f75f0 */
      uVar5 = uVar5 - 1;
                    /* catch() { ... } // from try @ 031f74e8 with catch @ 031f75f4 */
      piVar6 = piVar6 + 4;
                    /* catch() { ... } // from try @ 031f75dc with catch @ 031f75f8 */
    } while (uVar5 != 0);
  }
                    /* catch() { ... } // from try @ 031f74cc with catch @ 031f75fc */
                    /* catch() { ... } // from try @ 031f74c4 with catch @ 031f7600 */
                    /* catch() { ... } // from try @ 031f75d8 with catch @ 031f7604 */
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,1);
                    /* catch() { ... } // from try @ 031f74a4 with catch @ 031f7608 */
LAB_031f7628:
                    /* catch() { ... } // from try @ 031f72f8 with catch @ 031f7628 */
  (*pVVar3->methodPtr)(pPVar2,pSVar8,pVVar3->method);
  *ppSVar7 = (System_Collections_IEnumerator_o *)0x0;
                    /* catch() { ... } // from try @ 031f7378 with catch @ 031f763c
                       catch() { ... } // from try @ 031f7424 with catch @ 031f763c
                       catch() { ... } // from try @ 031f7544 with catch @ 031f763c
                       catch() { ... } // from try @ 031f75a4 with catch @ 031f763c */
                    /* catch() { ... } // from try @ 031f73e8 with catch @ 031f7644 */
                    /* catch() { ... } // from try @ 031f7334 with catch @ 031f7648 */
  thunk_FUN_01c20e04(ppSVar7,0);
  return;
}

