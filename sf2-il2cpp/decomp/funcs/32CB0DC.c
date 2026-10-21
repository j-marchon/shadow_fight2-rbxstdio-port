// KJKIPGGDKLG$$NKLGCNHLBAF @ RVA 0x32CB0DC

/* WARNING: Removing unreachable block (ram,0x033cb504) */
/* WARNING: Removing unreachable block (ram,0x033cb450) */

void KJKIPGGDKLG__NKLGCNHLBAF(KJKIPGGDKLG_o *__this,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  AAPGCAPGBLG_o *__this_00;
  System_Collections_Generic_HashSet_object__o *__this_01;
  VirtualInvokeData *pVVar3;
  long *plVar4;
  undefined8 *puVar5;
  System_Collections_Generic_HashSet_object__o *__this_02;
  System_String_o *pSVar6;
  CFEJGBOOCOG_c *pCVar7;
  long lVar8;
  DOPEEDABNEK_o *pDVar9;
  ulong uVar10;
  int32_t *piVar11;
  int *piVar12;
  CFEJGBOOCOG_o *pCVar13;
  
  if ((DAT_0456751b & 1) == 0) {
    FUN_01bab630(&CFEJGBOOCOG_TypeInfo);
    FUN_01bab630(&Method_System_Linq_Enumerable_Any<string>__);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_Contains__);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_HashSet<string>_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<ProductDefinition>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<ProductDefinition>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&StringLiteral_5329);
    FUN_01bab630(&StringLiteral_3698);
    FUN_01bab630(&StringLiteral_48);
    DAT_0456751b = 1;
  }
  __this_00 = (__this->fields).APEEANDPFCG;
  if (__this_00 != (AAPGCAPGBLG_o *)0x0) {
    bVar2 = AAPGCAPGBLG__BAFDBLCFCPO(__this_00,StringLiteral_3698,(MethodInfo *)0x0);
    if (!bVar2) goto LAB_033cb4b0;
    __this_01 = (System_Collections_Generic_HashSet_object__o *)
                thunk_FUN_01bda818(System_Collections_Generic_HashSet<string>_TypeInfo);
    System_Collections_Generic_HashSet<object>___ctor
              (__this_01,Method_System_Collections_Generic_HashSet<string>__ctor__);
    pCVar13 = (__this->fields).AJAPLLENPMB;
    if (pCVar13 != (CFEJGBOOCOG_o *)0x0) {
      pCVar7 = pCVar13->klass;
      uVar1._0_1_ = (pCVar7->_2).rank;
      uVar1._1_1_ = (pCVar7->_2).minimumAlignment;
      uVar10 = (ulong)uVar1;
      if (uVar10 != 0) {
        piVar11 = &((pCVar7->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
              (Il2CppClass *)CFEJGBOOCOG_TypeInfo) {
            pVVar3 = pCVar7->vtable + (*piVar11 + 2);
            goto LAB_033cb248;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      pVVar3 = (VirtualInvokeData *)FUN_01b81914(pCVar13,CFEJGBOOCOG_TypeInfo,2);
LAB_033cb248:
      plVar4 = (long *)(*pVVar3->methodPtr)(pCVar13,pVVar3->method);
      if (plVar4 != (long *)0x0) {
        lVar8 = *plVar4;
                    /* try { // try from 033cb260 to 034cb267 has its CatchHandler @ 033cb3b4 */
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
                    /* try { // try from 033cb27c to 034cb283 has its CatchHandler @ 033cb3ac */
            if (*(System_Collections_Generic_IEnumerable_ProductDefinition__c **)(piVar12 + -2) ==
                System_Collections_Generic_IEnumerable<ProductDefinition>_TypeInfo) {
                    /* try { // try from 033cb2a4 to 034cb2a7 has its CatchHandler @ 033cb390 */
              puVar5 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_033cb2b0;
            }
            uVar10 = uVar10 - 1;
                    /* try { // try from 033cb28c to 034cb293 has its CatchHandler @ 033cb3a4 */
            piVar12 = piVar12 + 4;
          } while (uVar10 != 0);
        }
        puVar5 = (undefined8 *)
                 FUN_01b81914(plVar4,
                              System_Collections_Generic_IEnumerable<ProductDefinition>_TypeInfo,0);
LAB_033cb2b0:
                    /* try { // try from 033cb2b0 to 034cb2cb has its CatchHandler @ 033cb394 */
        plVar4 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        do {
          lVar8 = *plVar4;
          uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar10 != 0) {
            piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar12 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                    /* try { // try from 033cb328 to 034cb34b has its CatchHandler @ 033cb3a0 */
                puVar5 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_033cb330;
              }
              uVar10 = uVar10 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar10 != 0);
          }
          puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_033cb330:
          uVar10 = (*(code *)*puVar5)(plVar4,puVar5[1]);
          if ((uVar10 & 1) == 0) {
            if (plVar4 == (long *)0x0) goto LAB_033cb444;
            lVar8 = *plVar4;
                    /* catch() { ... } // from try @ 033cb3cc with catch @ 033cb3f0 */
            uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
                    /* try { // try from 033cb3f8 to 034cb3ff has its CatchHandler @ 033cb414 */
            if (uVar10 == 0) goto LAB_033cb41c;
                    /* try { // try from 033cb400 to 034cb40b has its CatchHandler @ 033cb0a0 */
            piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            goto LAB_033cb404;
          }
          lVar8 = *plVar4;
          uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
                    /* try { // try from 033cb34c to 034cb37b has its CatchHandler @ 033cb0a0 */
          if (uVar10 != 0) {
            piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(System_Collections_Generic_IEnumerator_ProductDefinition__c **)(piVar12 + -2) ==
                  System_Collections_Generic_IEnumerator<ProductDefinition>_TypeInfo) {
                    /* try { // try from 033cb380 to 034cb387 has its CatchHandler @ 033cb3a8 */
                    /* try { // try from 033cb388 to 034cb38b has its CatchHandler @ 033cb398 */
                puVar5 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_033cb38c;
              }
              uVar10 = uVar10 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar10 != 0);
          }
          puVar5 = (undefined8 *)
                   FUN_01b81914(plVar4,
                                System_Collections_Generic_IEnumerator<ProductDefinition>_TypeInfo,0
                               );
                    /* try { // try from 033cb37c to 034cb37f has its CatchHandler @ 033cb3b0 */
LAB_033cb38c:
                    /* try { // try from 033cb38c to 034cb3cb has its CatchHandler @ 033cb0a0 */
                    /* catch() { ... } // from try @ 033cb2a4 with catch @ 033cb390 */
                    /* catch() { ... } // from try @ 033cb2b0 with catch @ 033cb394 */
          lVar8 = (*(code *)*puVar5)(plVar4,puVar5[1]);
                    /* catch() { ... } // from try @ 033cb388 with catch @ 033cb398 */
          pDVar9 = (__this->fields).DPOPJKJLDEE;
                    /* catch() { ... } // from try @ 033cb2e0 with catch @ 033cb39c */
          if (pDVar9 == (DOPEEDABNEK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
                    /* catch() { ... } // from try @ 033cb328 with catch @ 033cb3a0 */
                    /* catch() { ... } // from try @ 033cb28c with catch @ 033cb3a4 */
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
                    /* catch() { ... } // from try @ 033cb380 with catch @ 033cb3a8 */
          __this_02 = (System_Collections_Generic_HashSet_object__o *)(pDVar9->fields).HEOLJOBCFPB;
                    /* catch() { ... } // from try @ 033cb27c with catch @ 033cb3ac */
          if (__this_02 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
                    /* catch() { ... } // from try @ 033cb37c with catch @ 033cb3b0 */
                    /* catch() { ... } // from try @ 033cb260 with catch @ 033cb3b4 */
          bVar2 = System_Collections_Generic_HashSet<object>__Contains
                            (__this_02,*(Il2CppObject **)(lVar8 + 0x10),
                             Method_System_Collections_Generic_HashSet<string>_Contains__);
          if (!bVar2) {
            if (__this_01 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
                    /* try { // try from 033cb3cc to 034cb3cf has its CatchHandler @ 033cb3f0 */
                    /* try { // try from 033cb3d0 to 034cb3f7 has its CatchHandler @ 033cb0a0 */
            System_Collections_Generic_HashSet<object>__Add
                      (__this_01,*(Il2CppObject **)(lVar8 + 0x10),
                       Method_System_Collections_Generic_HashSet<string>_Add__);
          }
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar10 = uVar10 - 1;
                    /* catch() { ... } // from try @ 033cb3f8 with catch @ 033cb414
                       catch() { ... } // from try @ 033cb40c with catch @ 033cb414 */
    piVar12 = piVar12 + 4;
    if (uVar10 == 0) break;
LAB_033cb404:
                    /* try { // try from 033cb40c to 034cb413 has its CatchHandler @ 033cb414 */
    if (*(System_IDisposable_c **)(piVar12 + -2) == System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_033cb438;
    }
  }
LAB_033cb41c:
  puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_033cb438:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
LAB_033cb444:
  bVar2 = System_Linq_Enumerable__Any<object>
                    ((System_Collections_Generic_IEnumerable_TSource__o *)__this_01,
                     Method_System_Linq_Enumerable_Any<string>__);
  if (bVar2) {
    pSVar6 = System_String__Join(StringLiteral_48,
                                 (System_Collections_Generic_IEnumerable_string__o *)__this_01,
                                 (MethodInfo *)0x0);
    pSVar6 = System_String__Concat(StringLiteral_5329,pSVar6,(MethodInfo *)0x0);
    KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)__this,pSVar6,(MethodInfo *)0x0);
  }
LAB_033cb4b0:
  IJIHLBLCJMG__FGNINNOOCCL((IJIHLBLCJMG_o *)__this,true,(MethodInfo *)0x0);
  return;
}

