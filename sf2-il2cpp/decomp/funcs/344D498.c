// Nekki.SF2.GUI.Menu.MenuMoneyPanel$$GOLKBFHLOBJ @ RVA 0x344D498

void Nekki_SF2_GUI_Menu_MenuMoneyPanel__GOLKBFHLOBJ
               (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *__this,MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  VirtualInvokeData *pVVar3;
  PBAKFOBIHEG_c *pPVar4;
  ulong uVar5;
  int32_t *piVar6;
  System_Collections_IEnumerator_o **ppSVar7;
  System_Collections_IEnumerator_o *pSVar8;
  
                    /* try { // try from 0354d4a4 to 0364d4ab has its CatchHandler @ 0354d4e0 */
                    /* try { // try from 0354d4ac to 0364d4af has its CatchHandler @ 0354d4cc */
  if ((DAT_0456827e & 1) == 0) {
                    /* try { // try from 0354d4b0 to 0364d4b3 has its CatchHandler @ 0354d4c8 */
                    /* try { // try from 0354d4b4 to 0364d4b7 has its CatchHandler @ 0354d258 */
                    /* try { // try from 0354d4b8 to 0364d4bb has its CatchHandler @ 0354d4c4 */
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
                    /* try { // try from 0354d4bc to 0364d4f7 has its CatchHandler @ 0354d258 */
    DAT_0456827e = 1;
  }
  ppSVar7 = &(__this->fields).LNNAAJMEJGJ;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0354d4b8 with catch @ 0354d4c4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0354d4b0 with catch @ 0354d4c8
                        */
  if (*ppSVar7 == (System_Collections_IEnumerator_o *)0x0) {
    return;
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0354d4ac with catch @ 0354d4cc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0354d3e8 with catch @ 0354d4d0
                        */
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0354d380 with catch @ 0354d4d4
                        */
  if (pPVar2 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0354d324 with catch @ 0354d4d8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0354d3f8 with catch @ 0354d4dc
                        */
  pPVar4 = pPVar2->klass;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0354d4a4 with catch @ 0354d4e0
                        */
  pSVar8 = *ppSVar7;
  uVar1._0_1_ = (pPVar4->_2).rank;
  uVar1._1_1_ = (pPVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
                    /* try { // try from 0354d4f8 to 0364d4fb has its CatchHandler @ 0354d508 */
    piVar6 = &((pPVar4->_1).interfaceOffsets)->offset;
    do {
                    /* catch() { ... } // from try @ 0354d4f8 with catch @ 0354d508 */
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
        pVVar3 = pPVar4->vtable + (*piVar6 + 1);
        goto LAB_0354d544;
      }
      uVar5 = uVar5 - 1;
                    /* try { // try from 0354d510 to 0364d577 has its CatchHandler @ 0354d58c */
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,1);
LAB_0354d544:
  (*pVVar3->methodPtr)(pPVar2,pSVar8,pVVar3->method);
  *ppSVar7 = (System_Collections_IEnumerator_o *)0x0;
  thunk_FUN_01c20e04(ppSVar7,0);
  return;
}

