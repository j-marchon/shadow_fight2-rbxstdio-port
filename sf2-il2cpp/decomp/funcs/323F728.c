// OJHODFIGFMA$$CCHHDGCADPF @ RVA 0x323F728

/* WARNING: Removing unreachable block (ram,0x0333f994) */

void OJHODFIGFMA__CCHHDGCADPF(OJHODFIGFMA_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  ushort uVar1;
  System_Collections_Generic_IEnumerable_OJHODFIGFMA_MJOLIJOPBMO__o *pSVar2;
  VirtualInvokeData *pVVar3;
  long *plVar4;
  undefined8 *puVar5;
  OJHODFIGFMA_MJOLIJOPBMO_o *MLNEFBDGKEK;
  MethodInfo *in_x2;
  System_Collections_Generic_IEnumerable_OJHODFIGFMA_MJOLIJOPBMO__c *pSVar6;
  long lVar7;
  ulong uVar8;
  LKPNOBFEAKD_o *pLVar9;
  int32_t *piVar10;
  int *piVar11;
  
  if ((DAT_0456707f & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&StringLiteral_7062);
    DAT_0456707f = 1;
  }
  pSVar2 = OJHODFIGFMA__HKEFJFNDHDO(__this,StringLiteral_7062,in_x2);
  if (pSVar2 == (System_Collections_Generic_IEnumerable_OJHODFIGFMA_MJOLIJOPBMO__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar6 = pSVar2->klass;
  uVar1._0_1_ = (pSVar6->_2).rank;
  uVar1._1_1_ = (pSVar6->_2).minimumAlignment;
  uVar8 = (ulong)uVar1;
  if (uVar8 != 0) {
    piVar10 = &((pSVar6->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IEnumerable<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo) {
        pVVar3 = pSVar6->vtable + *piVar10;
        goto LAB_0333f800;
      }
      uVar8 = uVar8 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar8 != 0);
  }
  in_x2 = (MethodInfo *)0x0;
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pSVar2);
LAB_0333f800:
  plVar4 = (long *)(*pVVar3->methodPtr)(pSVar2,pVVar3->method);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0333f990 to 0343faf7 has its CatchHandler @ 0333f990
                       catch() { ... } // from try @ 0333f990 with catch @ 0333f990
                       catch() { ... } // from try @ 0333fb28 with catch @ 0333f990
                       catch() { ... } // from try @ 0333fb68 with catch @ 0333f990
                       catch() { ... } // from try @ 0333fcf8 with catch @ 0333f990
                       catch() { ... } // from try @ 0333fd24 with catch @ 0333f990
                       catch() { ... } // from try @ 0333fd5c with catch @ 0333f990
                       catch() { ... } // from try @ 0333fd78 with catch @ 0333f990
                       catch() { ... } // from try @ 0333fda8 with catch @ 0333f990 */
    FUN_01bab8c8();
  }
  do {
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0333f878;
        }
        uVar8 = uVar8 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar8 != 0);
    }
    in_x2 = (MethodInfo *)0x0;
    puVar5 = (undefined8 *)FUN_01b81914(plVar4);
LAB_0333f878:
    uVar8 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if ((uVar8 & 1) == 0) {
      if (plVar4 == (long *)0x0) {
        return;
      }
      lVar7 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 == 0) goto LAB_0333f944;
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
          goto LAB_0333f8d4;
        }
        uVar8 = uVar8 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar8 != 0);
    }
    in_x2 = (MethodInfo *)0x0;
    puVar5 = (undefined8 *)FUN_01b81914(plVar4);
LAB_0333f8d4:
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
    if (CJNHFNHJHPE <= (pLVar9->fields).JAICMIMBIOA) {
      OJHODFIGFMA__LJOAPAKCNLD(__this,MLNEFBDGKEK,in_x2);
    }
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar11 = piVar11 + 4;
    if (uVar8 == 0) break;
    if (*(System_IDisposable_c **)(piVar11 + -2) == System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_0333f960;
    }
  }
LAB_0333f944:
  puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_0333f960:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return;
}

