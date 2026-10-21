// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$IKIMAGJOBLI @ RVA 0x32546C4

void Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__IKIMAGJOBLI
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  VirtualInvokeData *pVVar3;
  PBAKFOBIHEG_c *pPVar4;
  ulong uVar5;
  int32_t *piVar6;
  System_Collections_IEnumerator_o **ppSVar7;
  System_Collections_IEnumerator_o *pSVar8;
  
                    /* catch() { ... } // from try @ 03354430 with catch @ 033546c4 */
                    /* catch() { ... } // from try @ 03354494 with catch @ 033546c8 */
                    /* catch() { ... } // from try @ 03354688 with catch @ 033546cc */
                    /* catch() { ... } // from try @ 03354450 with catch @ 033546d0 */
                    /* catch() { ... } // from try @ 033543c4 with catch @ 033546d4 */
                    /* catch() { ... } // from try @ 03354368 with catch @ 033546d8 */
  if ((DAT_04567167 & 1) == 0) {
                    /* catch() { ... } // from try @ 033544c0 with catch @ 033546dc */
                    /* catch() { ... } // from try @ 03354670 with catch @ 033546e0 */
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04567167 = 1;
  }
  ppSVar7 = &(__this->fields).OALIOADCDAP;
  if (*ppSVar7 == (System_Collections_IEnumerator_o *)0x0) {
    return;
  }
                    /* try { // try from 033546f8 to 034546fb has its CatchHandler @ 0335470c */
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  if (pPVar2 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03354798 to 0345479f has its CatchHandler @ 033547a0 */
    FUN_01bab8c8();
  }
  pPVar4 = pPVar2->klass;
                    /* catch() { ... } // from try @ 033546f8 with catch @ 0335470c */
  pSVar8 = *ppSVar7;
  uVar1._0_1_ = (pPVar4->_2).rank;
  uVar1._1_1_ = (pPVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
                    /* try { // try from 0335471c to 0345478b has its CatchHandler @ 033547a0 */
  if (uVar5 != 0) {
    piVar6 = &((pPVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
        pVVar3 = pPVar4->vtable + (*piVar6 + 1);
        goto LAB_03354770;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,1);
LAB_03354770:
  (*pVVar3->methodPtr)(pPVar2,pSVar8,pVVar3->method);
  *ppSVar7 = (System_Collections_IEnumerator_o *)0x0;
                    /* try { // try from 0335478c to 03454797 has its CatchHandler @ 033541e4 */
  thunk_FUN_01c20e04(ppSVar7,0);
  return;
}

