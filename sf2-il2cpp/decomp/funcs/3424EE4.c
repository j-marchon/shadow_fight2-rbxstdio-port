// PEEIMHCMDND$$LHBDILNHLAH @ RVA 0x3424EE4

void PEEIMHCMDND__LHBDILNHLAH(PEEIMHCMDND_o *__this,MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  VirtualInvokeData *pVVar3;
  PEEIMHCMDND_o *__this_00;
  MethodInfo *method_00;
  PBAKFOBIHEG_c *pPVar4;
  ulong uVar5;
  int32_t *piVar6;
  System_Collections_IEnumerator_o *pSVar7;
  
  if ((DAT_04568101 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04568101 = 1;
  }
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  if (pPVar2 != (PBAKFOBIHEG_o *)0x0) {
    pPVar4 = pPVar2->klass;
    pSVar7 = (__this->fields).EMFMPPIGHKC;
    uVar1._0_1_ = (pPVar4->_2).rank;
    uVar1._1_1_ = (pPVar4->_2).minimumAlignment;
    uVar5 = (ulong)uVar1;
                    /* try { // try from 03524f48 to 03624f4f has its CatchHandler @ 03524fa0 */
    if (uVar5 != 0) {
      piVar6 = &((pPVar4->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
            (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
          pVVar3 = pPVar4->vtable + (*piVar6 + 1);
          goto LAB_03524f90;
        }
                    /* try { // try from 03524f64 to 03624f67 has its CatchHandler @ 03524f98 */
        uVar5 = uVar5 - 1;
                    /* try { // try from 03524f68 to 03624f6f has its CatchHandler @ 03524f9c */
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
                    /* try { // try from 03524f70 to 03624fb7 has its CatchHandler @ 03524ea4 */
    pVVar3 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,1);
LAB_03524f90:
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03524f64 with catch @ 03524f98
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03524f68 with catch @ 03524f9c
                        */
    (*pVVar3->methodPtr)(pPVar2,pSVar7,pVVar3->method);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03524f48 with catch @ 03524fa0
                        */
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = HJPEKDOPBHN__JHBLAJKKPFG((MethodInfo *)0x0);
                    /* try { // try from 03524fb8 to 03624fbb has its CatchHandler @ 03524fe4 */
    if (__this_00 != (PEEIMHCMDND_o *)0x0) {
                    /* try { // try from 03524fbc to 03624ff3 has its CatchHandler @ 03524ea4 */
      PEEIMHCMDND__CKFELMACGEH(__this_00,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

