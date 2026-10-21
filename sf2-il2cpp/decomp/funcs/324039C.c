// OJHODFIGFMA$$JMDPIKBAPCH @ RVA 0x324039C

/* WARNING: Removing unreachable block (ram,0x033405d0) */

void OJHODFIGFMA__JMDPIKBAPCH(OJHODFIGFMA_o *__this,System_String_o *NBCKHHACFGH,MethodInfo *method)

{
  ushort uVar1;
  System_Collections_Generic_IEnumerable_OJHODFIGFMA_MJOLIJOPBMO__o *pSVar2;
  VirtualInvokeData *pVVar3;
  long *plVar4;
  undefined8 *puVar5;
  OJHODFIGFMA_MJOLIJOPBMO_o *MLNEFBDGKEK;
  System_Collections_Generic_IEnumerable_OJHODFIGFMA_MJOLIJOPBMO__c *pSVar6;
  long lVar7;
  ulong uVar8;
  int32_t *piVar9;
  int *piVar10;
  
                    /* try { // try from 033403a8 to 034403af has its CatchHandler @ 033404d0 */
  if ((DAT_0456708e & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
                    /* try { // try from 033403f0 to 03440413 has its CatchHandler @ 033404d8 */
    DAT_0456708e = 1;
  }
  pSVar2 = OJHODFIGFMA__HKEFJFNDHDO(__this,NBCKHHACFGH,method);
  if (pSVar2 == (System_Collections_Generic_IEnumerable_OJHODFIGFMA_MJOLIJOPBMO__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar6 = pSVar2->klass;
  uVar1._0_1_ = (pSVar6->_2).rank;
  uVar1._1_1_ = (pSVar6->_2).minimumAlignment;
  uVar8 = (ulong)uVar1;
  if (uVar8 != 0) {
                    /* try { // try from 03340424 to 0344042f has its CatchHandler @ 033404d0 */
    piVar9 = &((pSVar6->_1).interfaceOffsets)->offset;
    do {
                    /* try { // try from 03340430 to 0344047f has its CatchHandler @ 0333ff44 */
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IEnumerable<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo) {
        pVVar3 = pSVar6->vtable + *piVar9;
        goto LAB_03340460;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  method = (MethodInfo *)0x0;
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pSVar2);
LAB_03340460:
  plVar4 = (long *)(*pVVar3->methodPtr)(pSVar2,pVVar3->method);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar7 = *plVar4;
                    /* try { // try from 03340490 to 03440497 has its CatchHandler @ 033404dc */
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
                    /* catch() { ... } // from try @ 03340144 with catch @ 033404a4 */
        if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
                    /* catch() { ... } // from try @ 033403a8 with catch @ 033404d0
                       catch() { ... } // from try @ 03340424 with catch @ 033404d0
                       try { // try from 033404d0 to 034404ff has its CatchHandler @ 0333ff44 */
                    /* catch() { ... } // from try @ 0334035c with catch @ 033404d4 */
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_033404d8;
        }
        uVar8 = uVar8 - 1;
                    /* try { // try from 033404b4 to 034404bb has its CatchHandler @ 03340554 */
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
                    /* try { // try from 033404bc to 034404c7 has its CatchHandler @ 0333ff44 */
    method = (MethodInfo *)0x0;
    puVar5 = (undefined8 *)FUN_01b81914(plVar4);
                    /* try { // try from 033404c8 to 034404cf has its CatchHandler @ 03340554 */
LAB_033404d8:
                    /* catch() { ... } // from try @ 033403f0 with catch @ 033404d8 */
                    /* catch() { ... } // from try @ 03340490 with catch @ 033404dc */
                    /* catch() { ... } // from try @ 03340484 with catch @ 033404e0 */
    uVar8 = (*(code *)*puVar5)(plVar4,puVar5[1]);
                    /* catch() { ... } // from try @ 03340480 with catch @ 033404e4 */
    if ((uVar8 & 1) == 0) break;
                    /* catch() { ... } // from try @ 03340488 with catch @ 033404e8 */
    lVar7 = *plVar4;
                    /* catch() { ... } // from try @ 03340348 with catch @ 033404ec */
                    /* catch() { ... } // from try @ 0334032c with catch @ 033404f0 */
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
                    /* try { // try from 03340500 to 03440503 has its CatchHandler @ 03340530 */
                    /* try { // try from 03340504 to 0344053f has its CatchHandler @ 0333ff44 */
        if (*(System_Collections_Generic_IEnumerator_OJHODFIGFMA_MJOLIJOPBMO__c **)(piVar10 + -2) ==
            System_Collections_Generic_IEnumerator<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo) {
                    /* catch() { ... } // from try @ 03340500 with catch @ 03340530 */
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03340534;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    method = (MethodInfo *)0x0;
    puVar5 = (undefined8 *)FUN_01b81914(plVar4);
LAB_03340534:
    MLNEFBDGKEK = (OJHODFIGFMA_MJOLIJOPBMO_o *)(*(code *)*puVar5)(plVar4,puVar5[1]);
                    /* try { // try from 03340540 to 03440553 has its CatchHandler @ 03340554 */
    OJHODFIGFMA__LJOAPAKCNLD(__this,MLNEFBDGKEK,method);
  } while( true );
                    /* catch() { ... } // from try @ 033404b4 with catch @ 03340554
                       catch() { ... } // from try @ 033404c8 with catch @ 03340554
                       catch() { ... } // from try @ 03340540 with catch @ 03340554 */
  if (plVar4 != (long *)0x0) {
                    /* try { // try from 03340558 to 03440677 has its CatchHandler @ 03340558
                       catch() { ... } // from try @ 03340558 with catch @ 03340558
                       catch() { ... } // from try @ 033406e8 with catch @ 03340558
                       catch() { ... } // from try @ 03340774 with catch @ 03340558
                       catch() { ... } // from try @ 033407a4 with catch @ 03340558
                       catch() { ... } // from try @ 033407d4 with catch @ 03340558 */
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(System_IDisposable_c **)(piVar10 + -2) == System_IDisposable_TypeInfo) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_033405a4;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_033405a4:
    (*(code *)*puVar5)(plVar4,puVar5[1]);
  }
  return;
}

