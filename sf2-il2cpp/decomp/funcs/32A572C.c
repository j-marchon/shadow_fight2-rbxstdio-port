// ProfitViewer$$OnDestroy @ RVA 0x32A572C

void ProfitViewer__OnDestroy(ProfitViewer_o *__this,MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  VirtualInvokeData *pVVar3;
  PBAKFOBIHEG_c *pPVar4;
  ulong uVar5;
  int32_t *piVar6;
  System_Collections_IEnumerator_o **ppSVar7;
  System_Collections_IEnumerator_o *pSVar8;
  
  if ((DAT_045673eb & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
                    /* try { // try from 033a5750 to 034a575f has its CatchHandler @ 033a5794 */
    DAT_045673eb = 1;
  }
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  ppSVar7 = &(__this->fields).EFFEJDCPDPB;
                    /* try { // try from 033a5760 to 034a5767 has its CatchHandler @ 033a5790 */
  pSVar8 = *ppSVar7;
  if (pPVar2 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar4 = pPVar2->klass;
  uVar1._0_1_ = (pPVar4->_2).rank;
  uVar1._1_1_ = (pPVar4->_2).minimumAlignment;
                    /* try { // try from 033a5778 to 034a577f has its CatchHandler @ 033a5788 */
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
                    /* try { // try from 033a5784 to 034a5787 has its CatchHandler @ 033a578c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033a5778 with catch @ 033a5788
                       try { // try from 033a5788 to 034a57ab has its CatchHandler @ 033a5704 */
    piVar6 = &((pPVar4->_1).interfaceOffsets)->offset;
    do {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033a5784 with catch @ 033a578c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033a5760 with catch @ 033a5790
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033a5750 with catch @ 033a5794
                        */
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
        pVVar3 = pPVar4->vtable + (*piVar6 + 1);
        goto LAB_033a57c4;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
                    /* try { // try from 033a57ac to 034a57c3 has its CatchHandler @ 033a58ac */
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,1);
LAB_033a57c4:
                    /* try { // try from 033a57c4 to 034a589b has its CatchHandler @ 033a5704 */
  (*pVVar3->methodPtr)(pPVar2,pSVar8,pVVar3->method);
  *ppSVar7 = (System_Collections_IEnumerator_o *)0x0;
  thunk_FUN_01c20e04(ppSVar7,0);
  return;
}

