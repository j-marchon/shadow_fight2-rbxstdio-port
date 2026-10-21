// OJHODFIGFMA$$NCENBOMEPBN @ RVA 0x3240E48

/* WARNING: Removing unreachable block (ram,0x03341290) */

void OJHODFIGFMA__NCENBOMEPBN(OJHODFIGFMA_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  System_Collections_Generic_IEnumerable_OJHODFIGFMA_MJOLIJOPBMO__o *pSVar3;
  VirtualInvokeData *pVVar4;
  long *plVar5;
  undefined8 *puVar6;
  OJHODFIGFMA_MJOLIJOPBMO_o *pOVar7;
  System_Collections_Generic_IEnumerable_OJHODFIGFMA_MJOLIJOPBMO__c *pSVar8;
  long lVar9;
  ulong uVar10;
  LKPNOBFEAKD_o *pLVar11;
  int32_t *piVar12;
  int *piVar13;
  
  if ((DAT_0456708a & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&StringLiteral_11437);
    FUN_01bab630(&StringLiteral_11435);
    DAT_0456708a = 1;
  }
  pSVar3 = OJHODFIGFMA__HKEFJFNDHDO(__this,StringLiteral_11437,method);
  if (pSVar3 != (System_Collections_Generic_IEnumerable_OJHODFIGFMA_MJOLIJOPBMO__o *)0x0) {
    pSVar8 = pSVar3->klass;
    uVar1._0_1_ = (pSVar8->_2).rank;
    uVar1._1_1_ = (pSVar8->_2).minimumAlignment;
    uVar10 = (ulong)uVar1;
    if (uVar10 != 0) {
      piVar12 = &((pSVar8->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_Generic_IEnumerable<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo)
        {
          pVVar4 = pSVar8->vtable + *piVar12;
          goto LAB_03340f30;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    method = (MethodInfo *)0x0;
    pVVar4 = (VirtualInvokeData *)FUN_01b81914(pSVar3);
LAB_03340f30:
    plVar5 = (long *)(*pVVar4->methodPtr)(pSVar3,pVVar4->method);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      lVar9 = *plVar5;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_03340fac;
          }
          uVar10 = uVar10 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar10 != 0);
      }
      method = (MethodInfo *)0x0;
      puVar6 = (undefined8 *)FUN_01b81914(plVar5);
LAB_03340fac:
      uVar10 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      if ((uVar10 & 1) == 0) {
        if (plVar5 == (long *)0x0) goto LAB_033410a0;
        lVar9 = *plVar5;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 == 0) goto LAB_03341078;
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto LAB_03341060;
      }
      lVar9 = *plVar5;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(System_Collections_Generic_IEnumerator_OJHODFIGFMA_MJOLIJOPBMO__c **)(piVar13 + -2)
              == System_Collections_Generic_IEnumerator<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_03341008;
          }
          uVar10 = uVar10 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar10 != 0);
      }
      method = (MethodInfo *)0x0;
      puVar6 = (undefined8 *)FUN_01b81914(plVar5);
LAB_03341008:
      pOVar7 = (OJHODFIGFMA_MJOLIJOPBMO_o *)(*(code *)*puVar6)(plVar5,puVar6[1]);
      if (pOVar7 == (OJHODFIGFMA_MJOLIJOPBMO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pLVar11 = (pOVar7->fields).ADHFHEJFJPK;
      if (pLVar11 == (LKPNOBFEAKD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if ((float)CJNHFNHJHPE <= (pLVar11->fields).JAICMIMBIOA) {
        OJHODFIGFMA__LJOAPAKCNLD(__this,pOVar7,method);
      }
    } while( true );
  }
  goto LAB_0334128c;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar13 = piVar13 + 4;
    if (uVar10 == 0) break;
LAB_03341220:
    if (*(System_IDisposable_c **)(piVar13 + -2) == System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_03341254;
    }
  }
LAB_03341238:
  puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
LAB_03341254:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar13 = piVar13 + 4;
    if (uVar10 == 0) break;
LAB_03341060:
    if (*(System_IDisposable_c **)(piVar13 + -2) == System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_03341094;
    }
  }
LAB_03341078:
  method = (MethodInfo *)0x0;
  puVar6 = (undefined8 *)FUN_01b81914(plVar5);
LAB_03341094:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
LAB_033410a0:
  pSVar3 = OJHODFIGFMA__HKEFJFNDHDO(__this,StringLiteral_11435,method);
  if (pSVar3 != (System_Collections_Generic_IEnumerable_OJHODFIGFMA_MJOLIJOPBMO__o *)0x0) {
    pSVar8 = pSVar3->klass;
    uVar2._0_1_ = (pSVar8->_2).rank;
    uVar2._1_1_ = (pSVar8->_2).minimumAlignment;
    uVar10 = (ulong)uVar2;
    if (uVar10 != 0) {
      piVar12 = &((pSVar8->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_Generic_IEnumerable<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo)
        {
          pVVar4 = pSVar8->vtable + *piVar12;
          goto LAB_0334110c;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    method = (MethodInfo *)0x0;
    pVVar4 = (VirtualInvokeData *)FUN_01b81914(pSVar3);
LAB_0334110c:
    plVar5 = (long *)(*pVVar4->methodPtr)(pSVar3,pVVar4->method);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      lVar9 = *plVar5;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_0334116c;
          }
          uVar10 = uVar10 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar10 != 0);
      }
      method = (MethodInfo *)0x0;
      puVar6 = (undefined8 *)FUN_01b81914(plVar5);
LAB_0334116c:
      uVar10 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      if ((uVar10 & 1) == 0) {
        if (plVar5 == (long *)0x0) {
          return;
        }
        lVar9 = *plVar5;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 == 0) goto LAB_03341238;
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto LAB_03341220;
      }
      lVar9 = *plVar5;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(System_Collections_Generic_IEnumerator_OJHODFIGFMA_MJOLIJOPBMO__c **)(piVar13 + -2)
              == System_Collections_Generic_IEnumerator<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_033411c8;
          }
          uVar10 = uVar10 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar10 != 0);
      }
      method = (MethodInfo *)0x0;
      puVar6 = (undefined8 *)FUN_01b81914(plVar5);
LAB_033411c8:
      pOVar7 = (OJHODFIGFMA_MJOLIJOPBMO_o *)(*(code *)*puVar6)(plVar5,puVar6[1]);
      if (pOVar7 == (OJHODFIGFMA_MJOLIJOPBMO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pLVar11 = (pOVar7->fields).ADHFHEJFJPK;
      if (pLVar11 == (LKPNOBFEAKD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if ((pLVar11->fields).JAICMIMBIOA <= (float)CJNHFNHJHPE) {
        OJHODFIGFMA__LJOAPAKCNLD(__this,pOVar7,method);
      }
    } while( true );
  }
LAB_0334128c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

