// OJHODFIGFMA$$PKGNIKHFJPK @ RVA 0x3241EFC

/* WARNING: Removing unreachable block (ram,0x03342a3c) */
/* WARNING: Removing unreachable block (ram,0x03342368) */
/* WARNING: Removing unreachable block (ram,0x033425e8) */
/* WARNING: Removing unreachable block (ram,0x03342a54) */
/* WARNING: Removing unreachable block (ram,0x03342a48) */
/* WARNING: Removing unreachable block (ram,0x033427bc) */
/* WARNING: Removing unreachable block (ram,0x03342a5c) */

void OJHODFIGFMA__PKGNIKHFJPK
               (OJHODFIGFMA_o *__this,ECENNHNBAME_o *NLEBDPHNIDI,bool INPNAICDDJN,bool JHMMNIMBIKL,
               bool FGFJCJHGFHB,bool OMECOCNLHEE,bool JECKCMKCNCH,bool ABOGGPJGIAI,
               MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  bool bVar6;
  System_Collections_Generic_IEnumerable_OJHODFIGFMA_MJOLIJOPBMO__o *pSVar7;
  VirtualInvokeData *pVVar8;
  long *plVar9;
  undefined8 *puVar10;
  OJHODFIGFMA_MJOLIJOPBMO_o *pOVar11;
  MethodInfo *pMVar12;
  System_Collections_Generic_IEnumerable_OJHODFIGFMA_MJOLIJOPBMO__c *pSVar13;
  long lVar14;
  LKPNOBFEAKD_o *pLVar15;
  HOOAAGABMBL_o *pHVar16;
  ulong uVar17;
  PJKHAJKEHEL_o *pPVar18;
  int32_t *piVar19;
  int *piVar20;
  System_String_o *a;
  
  pMVar12 = (MethodInfo *)(ulong)INPNAICDDJN;
                    /* try { // try from 03341f04 to 0344213b has its CatchHandler @ 03341f04
                       catch() { ... } // from try @ 03341f04 with catch @ 03341f04
                       catch() { ... } // from try @ 033421c8 with catch @ 03341f04
                       catch() { ... } // from try @ 0334223c with catch @ 03341f04
                       catch() { ... } // from try @ 03342264 with catch @ 03341f04
                       catch() { ... } // from try @ 033422e4 with catch @ 03341f04 */
  if ((DAT_04567094 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&StringLiteral_7049);
    FUN_01bab630(&StringLiteral_3516);
    FUN_01bab630(&StringLiteral_7050);
    FUN_01bab630(&StringLiteral_11342);
    FUN_01bab630(&StringLiteral_6479);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_5405);
    DAT_04567094 = 1;
  }
  if ((!JECKCMKCNCH) && (JHMMNIMBIKL)) {
    pSVar7 = OJHODFIGFMA__HKEFJFNDHDO(__this,StringLiteral_6479,pMVar12);
    if (pSVar7 != (System_Collections_Generic_IEnumerable_OJHODFIGFMA_MJOLIJOPBMO__o *)0x0) {
      pSVar13 = pSVar7->klass;
      uVar1._0_1_ = (pSVar13->_2).rank;
      uVar1._1_1_ = (pSVar13->_2).minimumAlignment;
      uVar17 = (ulong)uVar1;
      if (uVar17 != 0) {
        piVar19 = &((pSVar13->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar19 + -2))->interfaceType ==
              (Il2CppClass *)
              System_Collections_Generic_IEnumerable<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo) {
            pVVar8 = pSVar13->vtable + *piVar19;
            goto LAB_03342050;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      pMVar12 = (MethodInfo *)0x0;
      pVVar8 = (VirtualInvokeData *)FUN_01b81914(pSVar7);
LAB_03342050:
      plVar9 = (long *)(*pVVar8->methodPtr)(pSVar7,pVVar8->method);
      do {
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03342a14 to 03442a17 has its CatchHandler @ 03342a34 */
          FUN_01bab8c8();
        }
        lVar14 = *plVar9;
        uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar17 != 0) {
          piVar20 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar20 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar10 = (undefined8 *)(lVar14 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_033420c0;
            }
            uVar17 = uVar17 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar17 != 0);
        }
        pMVar12 = (MethodInfo *)0x0;
        puVar10 = (undefined8 *)FUN_01b81914(plVar9);
LAB_033420c0:
        uVar17 = (*(code *)*puVar10)(plVar9,puVar10[1]);
        if ((uVar17 & 1) == 0) {
                    /* try { // try from 0334213c to 03442143 has its CatchHandler @ 03342240 */
          if (plVar9 == (long *)0x0) goto LAB_0334219c;
          lVar14 = *plVar9;
          uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar17 == 0) goto LAB_03342170;
                    /* try { // try from 03342154 to 034421c7 has its CatchHandler @ 03342248 */
          piVar20 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          goto LAB_03342158;
        }
        lVar14 = *plVar9;
        uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar17 != 0) {
          piVar20 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(System_Collections_Generic_IEnumerator_OJHODFIGFMA_MJOLIJOPBMO__c **)
                 (piVar20 + -2) ==
                System_Collections_Generic_IEnumerator<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo) {
              puVar10 = (undefined8 *)(lVar14 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_0334211c;
            }
            uVar17 = uVar17 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar17 != 0);
        }
        pMVar12 = (MethodInfo *)0x0;
        puVar10 = (undefined8 *)FUN_01b81914(plVar9);
LAB_0334211c:
        pOVar11 = (OJHODFIGFMA_MJOLIJOPBMO_o *)(*(code *)*puVar10)(plVar9,puVar10[1]);
        OJHODFIGFMA__LJOAPAKCNLD(__this,pOVar11,pMVar12);
      } while( true );
    }
    goto LAB_03342a38;
  }
  goto LAB_0334219c;
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar20 = piVar20 + 4;
    if (uVar17 == 0) break;
LAB_03342158:
    if (*(System_IDisposable_c **)(piVar20 + -2) == System_IDisposable_TypeInfo) {
      puVar10 = (undefined8 *)(lVar14 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_0334218c;
    }
  }
LAB_03342170:
  pMVar12 = (MethodInfo *)0x0;
  puVar10 = (undefined8 *)FUN_01b81914(plVar9);
LAB_0334218c:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
LAB_0334219c:
  if (FGFJCJHGFHB) {
    pSVar7 = OJHODFIGFMA__HKEFJFNDHDO(__this,StringLiteral_5405,pMVar12);
    if (pSVar7 != (System_Collections_Generic_IEnumerable_OJHODFIGFMA_MJOLIJOPBMO__o *)0x0) {
      pSVar13 = pSVar7->klass;
      uVar2._0_1_ = (pSVar13->_2).rank;
      uVar2._1_1_ = (pSVar13->_2).minimumAlignment;
      uVar17 = (ulong)uVar2;
                    /* try { // try from 033421c8 to 0344222f has its CatchHandler @ 03341f04 */
      if (uVar17 != 0) {
        piVar19 = &((pSVar13->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar19 + -2))->interfaceType ==
              (Il2CppClass *)
              System_Collections_Generic_IEnumerable<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo) {
            pVVar8 = pSVar13->vtable + *piVar19;
            goto LAB_03342210;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      pMVar12 = (MethodInfo *)0x0;
      pVVar8 = (VirtualInvokeData *)FUN_01b81914(pSVar7);
LAB_03342210:
      plVar9 = (long *)(*pVVar8->methodPtr)(pSVar7,pVVar8->method);
      do {
                    /* try { // try from 03342230 to 0344223b has its CatchHandler @ 03342244 */
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03342a18 to 03442a1b has its CatchHandler @ 03342a30 */
          FUN_01bab8c8();
        }
        lVar14 = *plVar9;
                    /* try { // try from 0334223c to 0344225f has its CatchHandler @ 03341f04 */
        uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0334213c with catch @ 03342240
                        */
        if (uVar17 != 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03342230 with catch @ 03342244
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03342154 with catch @ 03342248
                        */
          piVar20 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar20 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar10 = (undefined8 *)(lVar14 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_03342280;
            }
            uVar17 = uVar17 - 1;
            piVar20 = piVar20 + 4;
                    /* try { // try from 03342260 to 03442263 has its CatchHandler @ 033422cc */
          } while (uVar17 != 0);
        }
                    /* try { // try from 03342264 to 034422db has its CatchHandler @ 03341f04 */
        pMVar12 = (MethodInfo *)0x0;
        puVar10 = (undefined8 *)FUN_01b81914(plVar9);
LAB_03342280:
        uVar17 = (*(code *)*puVar10)(plVar9,puVar10[1]);
        if ((uVar17 & 1) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033422dc with catch @ 033422f8
                       catch(type#2 @ 00000000) { ... } // from try @ 033422f0 with catch @ 033422f8
                        */
          if (plVar9 == (long *)0x0) goto LAB_0334236c;
          lVar14 = *plVar9;
          uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar17 == 0) goto LAB_03342334;
          piVar20 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          goto LAB_0334231c;
        }
        lVar14 = *plVar9;
        uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar17 != 0) {
          piVar20 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(System_Collections_Generic_IEnumerator_OJHODFIGFMA_MJOLIJOPBMO__c **)
                 (piVar20 + -2) ==
                System_Collections_Generic_IEnumerator<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo) {
              puVar10 = (undefined8 *)(lVar14 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_033422dc;
            }
            uVar17 = uVar17 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar17 != 0);
        }
        pMVar12 = (MethodInfo *)0x0;
        puVar10 = (undefined8 *)FUN_01b81914(plVar9);
                    /* catch() { ... } // from try @ 03342260 with catch @ 033422cc */
LAB_033422dc:
                    /* try { // try from 033422dc to 034422e3 has its CatchHandler @ 033422f8 */
                    /* try { // try from 033422e4 to 034422ef has its CatchHandler @ 03341f04 */
        pOVar11 = (OJHODFIGFMA_MJOLIJOPBMO_o *)(*(code *)*puVar10)(plVar9,puVar10[1]);
                    /* try { // try from 033422f0 to 034422f7 has its CatchHandler @ 033422f8 */
        OJHODFIGFMA__LJOAPAKCNLD(__this,pOVar11,pMVar12);
      } while( true );
    }
  }
  else {
LAB_0334236c:
    pSVar7 = OJHODFIGFMA__HKEFJFNDHDO(__this,StringLiteral_11342,pMVar12);
    if (pSVar7 != (System_Collections_Generic_IEnumerable_OJHODFIGFMA_MJOLIJOPBMO__o *)0x0) {
      pSVar13 = pSVar7->klass;
      uVar3._0_1_ = (pSVar13->_2).rank;
      uVar3._1_1_ = (pSVar13->_2).minimumAlignment;
      uVar17 = (ulong)uVar3;
      if (uVar17 != 0) {
        piVar19 = &((pSVar13->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar19 + -2))->interfaceType ==
              (Il2CppClass *)
              System_Collections_Generic_IEnumerable<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo) {
            pVVar8 = pSVar13->vtable + *piVar19;
            goto LAB_033423dc;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      pMVar12 = (MethodInfo *)0x0;
      pVVar8 = (VirtualInvokeData *)FUN_01b81914(pSVar7);
LAB_033423dc:
      plVar9 = (long *)(*pVVar8->methodPtr)(pSVar7,pVVar8->method);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 033426e0 with catch @ 03342a44 */
        FUN_01bab8c8();
      }
      do {
        lVar14 = *plVar9;
        uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar17 != 0) {
          piVar20 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar20 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar10 = (undefined8 *)(lVar14 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_0334245c;
            }
            uVar17 = uVar17 - 1;
            piVar20 = piVar20 + 4;
                    /* try { // try from 0334243c to 0344258f has its CatchHandler @ 0334243c
                       catch() { ... } // from try @ 0334243c with catch @ 0334243c
                       catch() { ... } // from try @ 03342934 with catch @ 0334243c
                       catch() { ... } // from try @ 0334296c with catch @ 0334243c
                       catch() { ... } // from try @ 03342a0c with catch @ 0334243c
                       catch() { ... } // from try @ 03342a20 with catch @ 0334243c
                       catch() { ... } // from try @ 03342abc with catch @ 0334243c
                       catch() { ... } // from try @ 03342b08 with catch @ 0334243c */
          } while (uVar17 != 0);
        }
        pMVar12 = (MethodInfo *)0x0;
        puVar10 = (undefined8 *)FUN_01b81914(plVar9);
LAB_0334245c:
        uVar17 = (*(code *)*puVar10)(plVar9,puVar10[1]);
        if ((uVar17 & 1) == 0) {
          if (plVar9 == (long *)0x0) goto LAB_033425dc;
          lVar14 = *plVar9;
          uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
                    /* try { // try from 03342590 to 03442597 has its CatchHandler @ 03342aa8 */
          if (uVar17 == 0) goto LAB_033425b4;
          piVar20 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          goto LAB_0334259c;
        }
        lVar14 = *plVar9;
        uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar17 != 0) {
          piVar20 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(System_Collections_Generic_IEnumerator_OJHODFIGFMA_MJOLIJOPBMO__c **)
                 (piVar20 + -2) ==
                System_Collections_Generic_IEnumerator<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo) {
              puVar10 = (undefined8 *)(lVar14 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_033424b8;
            }
            uVar17 = uVar17 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar17 != 0);
        }
        pMVar12 = (MethodInfo *)0x0;
        puVar10 = (undefined8 *)FUN_01b81914(plVar9);
LAB_033424b8:
        pOVar11 = (OJHODFIGFMA_MJOLIJOPBMO_o *)(*(code *)*puVar10)(plVar9,puVar10[1]);
        if (pOVar11 == (OJHODFIGFMA_MJOLIJOPBMO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03342a0c to 03442a0f has its CatchHandler @ 0334243c */
          FUN_01bab8c8();
        }
        if ((pOVar11->fields).GBBHFPBFOPI == false) {
          pLVar15 = (pOVar11->fields).ADHFHEJFJPK;
          if (pLVar15 == (LKPNOBFEAKD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03342a1c to 03442a1f has its CatchHandler @ 03342a2c */
            FUN_01bab8c8();
          }
          if (NLEBDPHNIDI == (ECENNHNBAME_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03342968 with catch @ 03342a20
                       try { // try from 03342a20 to 03442ab7 has its CatchHandler @ 0334243c */
            FUN_01bab8c8();
          }
          pMVar12 = (MethodInfo *)0x0;
          bVar6 = ECENNHNBAME__NHELADLJDNP
                            (NLEBDPHNIDI,(pLVar15->fields).BNGDONJEHMH,(MethodInfo *)0x0);
          if (!bVar6) {
            (pOVar11->fields).GBBHFPBFOPI = true;
          }
        }
        pLVar15 = (pOVar11->fields).ADHFHEJFJPK;
        if (pLVar15 == (LKPNOBFEAKD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03342a08 to 03442a0b has its CatchHandler @ 03342a68 */
          FUN_01bab8c8();
        }
        pPVar18 = (__this->fields).NDOMOKBINFD;
        if (pPVar18 == (PJKHAJKEHEL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03342a10 to 03442a13 has its CatchHandler @ 03342a38 */
          FUN_01bab8c8();
        }
        if ((pPVar18->fields).PNAAPNFPCPI != (HOOAAGABMBL_o *)0x0) {
          a = (pLVar15->fields).GNCBIPJFEGB;
          pMVar12 = (MethodInfo *)0x0;
          bVar6 = System_String__op_Inequality(a,StringLiteral_1,(MethodInfo *)0x0);
          if (bVar6) {
            pPVar18 = (__this->fields).NDOMOKBINFD;
            if (pPVar18 == (PJKHAJKEHEL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pHVar16 = (pPVar18->fields).PNAAPNFPCPI;
            if (pHVar16 == (HOOAAGABMBL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pMVar12 = (MethodInfo *)0x0;
            bVar6 = System_String__op_Inequality
                              ((pHVar16->fields)._COIPKAKHDFP_k__BackingField,a,(MethodInfo *)0x0);
            if (bVar6) {
              (pOVar11->fields).GBBHFPBFOPI = true;
            }
          }
        }
        if ((OMECOCNLHEE) && ((pOVar11->fields).GBBHFPBFOPI == false)) {
          OJHODFIGFMA__LJOAPAKCNLD(__this,pOVar11,pMVar12);
        }
      } while( true );
    }
  }
  goto LAB_03342a38;
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar20 = piVar20 + 4;
    if (uVar17 == 0) break;
LAB_0334231c:
    if (*(System_IDisposable_c **)(piVar20 + -2) == System_IDisposable_TypeInfo) {
      puVar10 = (undefined8 *)(lVar14 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_03342350;
    }
  }
LAB_03342334:
  pMVar12 = (MethodInfo *)0x0;
  puVar10 = (undefined8 *)FUN_01b81914(plVar9);
LAB_03342350:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
  goto LAB_0334236c;
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar20 = piVar20 + 4;
                    /* try { // try from 033425b0 to 034425bf has its CatchHandler @ 03342aa0 */
    if (uVar17 == 0) break;
LAB_0334259c:
    if (*(System_IDisposable_c **)(piVar20 + -2) == System_IDisposable_TypeInfo) {
      puVar10 = (undefined8 *)(lVar14 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_033425d0;
    }
  }
LAB_033425b4:
  pMVar12 = (MethodInfo *)0x0;
  puVar10 = (undefined8 *)FUN_01b81914(plVar9);
LAB_033425d0:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
LAB_033425dc:
                    /* try { // try from 033425dc to 034425e3 has its CatchHandler @ 03342a8c */
                    /* try { // try from 033425ec to 034425f3 has its CatchHandler @ 03342a88 */
  if (OMECOCNLHEE) {
    if (INPNAICDDJN) {
                    /* try { // try from 033425fc to 03442607 has its CatchHandler @ 03342a9c */
      pSVar7 = OJHODFIGFMA__HKEFJFNDHDO(__this,StringLiteral_7049,pMVar12);
      if (pSVar7 != (System_Collections_Generic_IEnumerable_OJHODFIGFMA_MJOLIJOPBMO__o *)0x0) {
                    /* try { // try from 0334260c to 03442617 has its CatchHandler @ 03342a98 */
        pSVar13 = pSVar7->klass;
        uVar4._0_1_ = (pSVar13->_2).rank;
        uVar4._1_1_ = (pSVar13->_2).minimumAlignment;
        uVar17 = (ulong)uVar4;
        if (uVar17 != 0) {
          piVar19 = &((pSVar13->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar19 + -2))->interfaceType ==
                (Il2CppClass *)
                System_Collections_Generic_IEnumerable<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo) {
                    /* try { // try from 0334265c to 0344266f has its CatchHandler @ 03342a50 */
              pVVar8 = pSVar13->vtable + *piVar19;
              goto LAB_03342664;
            }
            uVar17 = uVar17 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar17 != 0);
        }
        pMVar12 = (MethodInfo *)0x0;
        pVVar8 = (VirtualInvokeData *)FUN_01b81914(pSVar7);
LAB_03342664:
        plVar9 = (long *)(*pVVar8->methodPtr)(pSVar7,pVVar8->method);
        do {
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03342a14 with catch @ 03342a34 */
            FUN_01bab8c8();
          }
          lVar14 = *plVar9;
                    /* try { // try from 03342690 to 034426b7 has its CatchHandler @ 03342a54 */
          uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar17 != 0) {
            piVar20 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar20 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                    /* try { // try from 033426cc to 034426db has its CatchHandler @ 03342a48 */
                puVar10 = (undefined8 *)(lVar14 + (long)*piVar20 * 0x10 + 0x138);
                goto LAB_033426d4;
              }
              uVar17 = uVar17 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar17 != 0);
          }
                    /* try { // try from 033426b8 to 034426c3 has its CatchHandler @ 03342a4c */
          pMVar12 = (MethodInfo *)0x0;
          puVar10 = (undefined8 *)FUN_01b81914(plVar9);
LAB_033426d4:
          uVar17 = (*(code *)*puVar10)(plVar9,puVar10[1]);
                    /* try { // try from 033426e0 to 034426eb has its CatchHandler @ 03342a44 */
          if ((uVar17 & 1) == 0) {
                    /* try { // try from 0334274c to 03442757 has its CatchHandler @ 03342940 */
            if (plVar9 == (long *)0x0) goto LAB_033427c0;
            lVar14 = *plVar9;
            uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar17 == 0) goto LAB_03342788;
                    /* try { // try from 0334276c to 03442793 has its CatchHandler @ 03342954 */
            piVar20 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            goto LAB_03342770;
          }
          lVar14 = *plVar9;
          uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar17 != 0) {
            piVar20 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
                    /* try { // try from 03342700 to 03442707 has its CatchHandler @ 03342a40 */
              if (*(System_Collections_Generic_IEnumerator_OJHODFIGFMA_MJOLIJOPBMO__c **)
                   (piVar20 + -2) ==
                  System_Collections_Generic_IEnumerator<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo) {
                puVar10 = (undefined8 *)(lVar14 + (long)*piVar20 * 0x10 + 0x138);
                goto LAB_03342730;
              }
              uVar17 = uVar17 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar17 != 0);
          }
          pMVar12 = (MethodInfo *)0x0;
                    /* try { // try from 0334271c to 03442723 has its CatchHandler @ 03342950 */
          puVar10 = (undefined8 *)FUN_01b81914(plVar9);
LAB_03342730:
          pOVar11 = (OJHODFIGFMA_MJOLIJOPBMO_o *)(*(code *)*puVar10)(plVar9,puVar10[1]);
                    /* try { // try from 0334273c to 03442743 has its CatchHandler @ 03342938 */
          OJHODFIGFMA__LJOAPAKCNLD(__this,pOVar11,pMVar12);
        } while( true );
      }
      goto LAB_03342a38;
    }
    goto LAB_033427c0;
  }
  goto LAB_033427f4;
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar20 = piVar20 + 4;
    if (uVar17 == 0) break;
LAB_033429a4:
    if (*(System_IDisposable_c **)(piVar20 + -2) == System_IDisposable_TypeInfo) {
      puVar10 = (undefined8 *)(lVar14 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_033429d8;
    }
  }
LAB_033429bc:
                    /* try { // try from 033429bc to 034429bf has its CatchHandler @ 03342aa4 */
                    /* try { // try from 033429c0 to 034429c3 has its CatchHandler @ 03342a94 */
  puVar10 = (undefined8 *)FUN_01b81914(plVar9,System_IDisposable_TypeInfo,0);
LAB_033429d8:
                    /* try { // try from 033429dc to 034429fb has its CatchHandler @ 03342b1c */
  (*(code *)*puVar10)(plVar9,puVar10[1]);
  return;
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar20 = piVar20 + 4;
    if (uVar17 == 0) break;
LAB_03342770:
    if (*(System_IDisposable_c **)(piVar20 + -2) == System_IDisposable_TypeInfo) {
      puVar10 = (undefined8 *)(lVar14 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_033427a4;
    }
  }
LAB_03342788:
  pMVar12 = (MethodInfo *)0x0;
  puVar10 = (undefined8 *)FUN_01b81914(plVar9);
                    /* try { // try from 03342794 to 0344279f has its CatchHandler @ 03342948 */
LAB_033427a4:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
LAB_033427c0:
                    /* try { // try from 033427c4 to 034427cf has its CatchHandler @ 03342944 */
  pOVar11 = OJHODFIGFMA__POHJNBHBIFB(__this,StringLiteral_3516,pMVar12);
                    /* try { // try from 033427e8 to 034427ef has its CatchHandler @ 03342a3c */
  if (((pOVar11 != (OJHODFIGFMA_MJOLIJOPBMO_o *)0x0) && ((pOVar11->fields).GBBHFPBFOPI == false)) &&
     ((__this->fields).LDKCAIDMEDK != false)) {
    OJHODFIGFMA__LJOAPAKCNLD(__this,pOVar11,pMVar12);
  }
LAB_033427f4:
  if (JECKCMKCNCH || !INPNAICDDJN) {
                    /* try { // try from 033429fc to 034429ff has its CatchHandler @ 03342a84 */
                    /* try { // try from 03342a00 to 03442a03 has its CatchHandler @ 03342a78 */
                    /* try { // try from 03342a04 to 03442a07 has its CatchHandler @ 03342a74 */
    return;
  }
                    /* try { // try from 03342810 to 03442817 has its CatchHandler @ 03342a64 */
  pSVar7 = OJHODFIGFMA__HKEFJFNDHDO(__this,StringLiteral_7050,pMVar12);
  if (pSVar7 != (System_Collections_Generic_IEnumerable_OJHODFIGFMA_MJOLIJOPBMO__o *)0x0) {
    pSVar13 = pSVar7->klass;
    uVar5._0_1_ = (pSVar13->_2).rank;
    uVar5._1_1_ = (pSVar13->_2).minimumAlignment;
                    /* try { // try from 03342820 to 0344282b has its CatchHandler @ 03342a60 */
    uVar17 = (ulong)uVar5;
    if (uVar17 != 0) {
      piVar19 = &((pSVar13->_1).interfaceOffsets)->offset;
      do {
                    /* try { // try from 03342840 to 03442867 has its CatchHandler @ 03342a90 */
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar19 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_Generic_IEnumerable<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo)
        {
                    /* try { // try from 03342868 to 03442873 has its CatchHandler @ 03342a5c */
          pVVar8 = pSVar13->vtable + *piVar19;
          goto LAB_03342874;
        }
        uVar17 = uVar17 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar17 != 0);
    }
    pVVar8 = (VirtualInvokeData *)
             FUN_01b81914(pSVar7,
                          System_Collections_Generic_IEnumerable<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo,0
                         );
LAB_03342874:
                    /* try { // try from 0334287c to 0344288b has its CatchHandler @ 03342a70 */
    plVar9 = (long *)(*pVVar8->methodPtr)(pSVar7,pVVar8->method);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0334265c with catch @ 03342a50 */
      FUN_01bab8c8();
    }
    do {
      lVar14 = *plVar9;
      uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar17 != 0) {
        piVar20 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
                    /* try { // try from 033428b4 to 034428bf has its CatchHandler @ 03342a58 */
          if (*(System_Collections_IEnumerator_c **)(piVar20 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar10 = (undefined8 *)(lVar14 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_033428e4;
          }
          uVar17 = uVar17 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar17 != 0);
      }
      puVar10 = (undefined8 *)FUN_01b81914(plVar9,System_Collections_IEnumerator_TypeInfo,0);
LAB_033428e4:
      uVar17 = (*(code *)*puVar10)(plVar9,puVar10[1]);
                    /* try { // try from 033428f0 to 034428f7 has its CatchHandler @ 03342a80 */
      if ((uVar17 & 1) == 0) {
        if (plVar9 == (long *)0x0) {
          return;
        }
        lVar14 = *plVar9;
        uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar17 == 0) goto LAB_033429bc;
        piVar20 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        goto LAB_033429a4;
      }
      lVar14 = *plVar9;
      uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
                    /* try { // try from 03342900 to 0344291f has its CatchHandler @ 03342a7c */
      if (uVar17 != 0) {
        piVar20 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(System_Collections_Generic_IEnumerator_OJHODFIGFMA_MJOLIJOPBMO__c **)(piVar20 + -2)
              == System_Collections_Generic_IEnumerator<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo) {
                    /* try { // try from 03342934 to 03442967 has its CatchHandler @ 0334243c */
                    /* catch() { ... } // from try @ 0334273c with catch @ 03342938 */
                    /* catch() { ... } // from try @ 03342930 with catch @ 0334293c */
            puVar10 = (undefined8 *)(lVar14 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_03342940;
          }
          uVar17 = uVar17 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar17 != 0);
      }
      puVar10 = (undefined8 *)
                FUN_01b81914(plVar9,
                             System_Collections_Generic_IEnumerator<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo
                             ,0);
                    /* try { // try from 03342930 to 03442933 has its CatchHandler @ 0334293c */
LAB_03342940:
                    /* catch() { ... } // from try @ 0334274c with catch @ 03342940 */
                    /* catch() { ... } // from try @ 033427c4 with catch @ 03342944 */
                    /* catch() { ... } // from try @ 03342794 with catch @ 03342948 */
      pOVar11 = (OJHODFIGFMA_MJOLIJOPBMO_o *)(*(code *)*puVar10)(plVar9,puVar10[1]);
                    /* catch() { ... } // from try @ 033427b4 with catch @ 0334294c */
                    /* catch() { ... } // from try @ 0334271c with catch @ 03342950 */
      if (pOVar11 != (OJHODFIGFMA_MJOLIJOPBMO_o *)0x0) {
                    /* catch() { ... } // from try @ 0334276c with catch @ 03342954 */
        pLVar15 = (pOVar11->fields).ADHFHEJFJPK;
        if (pLVar15 == (LKPNOBFEAKD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03342a1c with catch @ 03342a2c */
          FUN_01bab8c8();
        }
        if (NLEBDPHNIDI == (ECENNHNBAME_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03342a18 with catch @ 03342a30 */
          FUN_01bab8c8();
        }
                    /* try { // try from 03342968 to 0344296b has its CatchHandler @ 03342a20 */
        pMVar12 = (MethodInfo *)0x0;
                    /* try { // try from 0334296c to 034429bb has its CatchHandler @ 0334243c */
        bVar6 = ECENNHNBAME__NHELADLJDNP
                          (NLEBDPHNIDI,(pLVar15->fields).BNGDONJEHMH,(MethodInfo *)0x0);
        if (bVar6) {
          OJHODFIGFMA__LJOAPAKCNLD(__this,pOVar11,pMVar12);
        }
      }
    } while( true );
  }
LAB_03342a38:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03342a10 with catch @ 03342a38 */
  FUN_01bab8c8();
}

