// OJHODFIGFMA$$BJBHFDDPMPB @ RVA 0x3241690

/* WARNING: Removing unreachable block (ram,0x03341908) */

void OJHODFIGFMA__BJBHFDDPMPB(OJHODFIGFMA_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

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
  LKPNOBFEAKD_o *pLVar9;
  int32_t *piVar10;
  int *piVar11;
  
  if ((DAT_0456708d & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&StringLiteral_12539);
    DAT_0456708d = 1;
  }
  pSVar2 = OJHODFIGFMA__HKEFJFNDHDO(__this,StringLiteral_12539,method);
  if (pSVar2 == (System_Collections_Generic_IEnumerable_OJHODFIGFMA_MJOLIJOPBMO__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar6 = pSVar2->klass;
  uVar1._0_1_ = (pSVar6->_2).rank;
  uVar1._1_1_ = (pSVar6->_2).minimumAlignment;
                    /* try { // try from 03341720 to 03441727 has its CatchHandler @ 033417cc */
  uVar8 = (ulong)uVar1;
  if (uVar8 != 0) {
                    /* try { // try from 03341734 to 03441743 has its CatchHandler @ 033417c4 */
    piVar10 = &((pSVar6->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IEnumerable<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo) {
                    /* try { // try from 03341764 to 034417b7 has its CatchHandler @ 03341674 */
        pVVar3 = pSVar6->vtable + *piVar10;
        goto LAB_0334176c;
      }
      uVar8 = uVar8 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar8 != 0);
  }
  method = (MethodInfo *)0x0;
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pSVar2);
                    /* try { // try from 0334175c to 03441763 has its CatchHandler @ 033417bc */
LAB_0334176c:
  plVar4 = (long *)(*pVVar3->methodPtr)(pSVar2,pVVar3->method);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
                    /* try { // try from 033417b8 to 034417bb has its CatchHandler @ 033417c8 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0334175c with catch @ 033417bc
                       try { // try from 033417bc to 034417e7 has its CatchHandler @ 03341674 */
        if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_033417e8;
        }
        uVar8 = uVar8 - 1;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03341734 with catch @ 033417c4
                        */
        piVar11 = piVar11 + 4;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033417b8 with catch @ 033417c8
                        */
      } while (uVar8 != 0);
    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03341720 with catch @ 033417cc
                        */
    method = (MethodInfo *)0x0;
    puVar5 = (undefined8 *)FUN_01b81914(plVar4);
LAB_033417e8:
                    /* try { // try from 033417e8 to 034417eb has its CatchHandler @ 03341820 */
                    /* try { // try from 033417ec to 0344182f has its CatchHandler @ 03341674 */
    uVar8 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if ((uVar8 & 1) == 0) {
      if (plVar4 == (long *)0x0) {
        return;
      }
      lVar7 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 == 0) goto LAB_033418b4;
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(System_Collections_Generic_IEnumerator_OJHODFIGFMA_MJOLIJOPBMO__c **)(piVar11 + -2) ==
            System_Collections_Generic_IEnumerator<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo) {
                    /* try { // try from 03341838 to 03441843 has its CatchHandler @ 03341674 */
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_03341844;
        }
        uVar8 = uVar8 - 1;
                    /* catch() { ... } // from try @ 033417e8 with catch @ 03341820 */
        piVar11 = piVar11 + 4;
      } while (uVar8 != 0);
    }
    method = (MethodInfo *)0x0;
                    /* try { // try from 03341830 to 03441837 has its CatchHandler @ 0334184c */
    puVar5 = (undefined8 *)FUN_01b81914(plVar4);
LAB_03341844:
                    /* try { // try from 03341844 to 0344184b has its CatchHandler @ 0334184c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03341830 with catch @ 0334184c
                       catch(type#2 @ 00000000) { ... } // from try @ 03341844 with catch @ 0334184c
                        */
    MLNEFBDGKEK = (OJHODFIGFMA_MJOLIJOPBMO_o *)(*(code *)*puVar5)(plVar4,puVar5[1]);
    if (MLNEFBDGKEK == (OJHODFIGFMA_MJOLIJOPBMO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pLVar9 = (MLNEFBDGKEK->fields).ADHFHEJFJPK;
    if (pLVar9 == (LKPNOBFEAKD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((pLVar9->fields).JAICMIMBIOA <= (float)CJNHFNHJHPE) {
      OJHODFIGFMA__LJOAPAKCNLD(__this,MLNEFBDGKEK,method);
    }
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar11 = piVar11 + 4;
    if (uVar8 == 0) break;
    if (*(System_IDisposable_c **)(piVar11 + -2) == System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_033418d0;
    }
  }
LAB_033418b4:
  puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_033418d0:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return;
}

