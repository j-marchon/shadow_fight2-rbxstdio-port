// OJHODFIGFMA$$DAGBOCOBHMK @ RVA 0x3240024

/* WARNING: Removing unreachable block (ram,0x0334029c) */

void OJHODFIGFMA__DAGBOCOBHMK(OJHODFIGFMA_o *__this,int32_t PCAIKIGGBMJ,MethodInfo *method)

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
  
  if ((DAT_04567082 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&StringLiteral_4512);
    DAT_04567082 = 1;
  }
                    /* try { // try from 03340098 to 0344009f has its CatchHandler @ 03340134 */
  pSVar2 = OJHODFIGFMA__HKEFJFNDHDO(__this,StringLiteral_4512,method);
  if (pSVar2 == (System_Collections_Generic_IEnumerable_OJHODFIGFMA_MJOLIJOPBMO__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar6 = pSVar2->klass;
  uVar1._0_1_ = (pSVar6->_2).rank;
  uVar1._1_1_ = (pSVar6->_2).minimumAlignment;
                    /* try { // try from 033400b4 to 034400bf has its CatchHandler @ 03340128 */
  uVar8 = (ulong)uVar1;
                    /* try { // try from 033400c0 to 03440117 has its CatchHandler @ 0333ff44 */
  if (uVar8 != 0) {
    piVar10 = &((pSVar6->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IEnumerable<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo) {
        pVVar3 = pSVar6->vtable + *piVar10;
        goto LAB_03340100;
      }
      uVar8 = uVar8 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar8 != 0);
  }
  method = (MethodInfo *)0x0;
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pSVar2);
LAB_03340100:
  plVar4 = (long *)(*pVVar3->methodPtr)(pSVar2,pVVar3->method);
                    /* try { // try from 03340118 to 0344011b has its CatchHandler @ 03340130 */
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 03340120 to 03440123 has its CatchHandler @ 0334012c */
                    /* try { // try from 03340124 to 03440143 has its CatchHandler @ 0333ff44 */
                    /* catch() { ... } // from try @ 033400b4 with catch @ 03340128 */
                    /* catch() { ... } // from try @ 03340120 with catch @ 0334012c */
  do {
                    /* catch() { ... } // from try @ 03340118 with catch @ 03340130 */
    lVar7 = *plVar4;
                    /* catch() { ... } // from try @ 03340098 with catch @ 03340134 */
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
                    /* try { // try from 03340144 to 03440147 has its CatchHandler @ 033404a4 */
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
                    /* try { // try from 03340148 to 0344032b has its CatchHandler @ 0333ff44 */
        if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0334017c;
        }
        uVar8 = uVar8 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar8 != 0);
    }
    method = (MethodInfo *)0x0;
    puVar5 = (undefined8 *)FUN_01b81914(plVar4);
LAB_0334017c:
    uVar8 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if ((uVar8 & 1) == 0) {
      if (plVar4 == (long *)0x0) {
        return;
      }
      lVar7 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 == 0) goto LAB_03340248;
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
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_033401d8;
        }
        uVar8 = uVar8 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar8 != 0);
    }
    method = (MethodInfo *)0x0;
    puVar5 = (undefined8 *)FUN_01b81914(plVar4);
LAB_033401d8:
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
    if ((pLVar9->fields).JAICMIMBIOA <= (float)PCAIKIGGBMJ) {
      OJHODFIGFMA__LJOAPAKCNLD(__this,MLNEFBDGKEK,method);
    }
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar11 = piVar11 + 4;
    if (uVar8 == 0) break;
    if (*(System_IDisposable_c **)(piVar11 + -2) == System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_03340264;
    }
  }
LAB_03340248:
  puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_03340264:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return;
}

