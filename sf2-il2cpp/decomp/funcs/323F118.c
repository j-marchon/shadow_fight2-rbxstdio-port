// OJHODFIGFMA$$PDIKBIJADEO @ RVA 0x323F118

/* WARNING: Removing unreachable block (ram,0x0333f3b4) */

void OJHODFIGFMA__PDIKBIJADEO(OJHODFIGFMA_o *__this,DNELIPCHKLK_o *DBIAAJNKHLH,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  System_Collections_Generic_IEnumerable_OJHODFIGFMA_MJOLIJOPBMO__o *pSVar3;
  VirtualInvokeData *pVVar4;
  long *plVar5;
  undefined8 *puVar6;
  OJHODFIGFMA_MJOLIJOPBMO_o *MLNEFBDGKEK;
  MethodInfo *method_00;
  System_Collections_Generic_IEnumerable_OJHODFIGFMA_MJOLIJOPBMO__c *pSVar7;
  long lVar8;
  LKPNOBFEAKD_o *pLVar9;
  ulong uVar10;
  int32_t *piVar11;
  int *piVar12;
  
  if ((DAT_0456707e & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&StringLiteral_6332);
    DAT_0456707e = 1;
  }
  pSVar3 = OJHODFIGFMA__HKEFJFNDHDO(__this,StringLiteral_6332,method);
  if (pSVar3 == (System_Collections_Generic_IEnumerable_OJHODFIGFMA_MJOLIJOPBMO__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar7 = pSVar3->klass;
  uVar1._0_1_ = (pSVar7->_2).rank;
  uVar1._1_1_ = (pSVar7->_2).minimumAlignment;
  uVar10 = (ulong)uVar1;
  if (uVar10 != 0) {
    piVar11 = &((pSVar7->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IEnumerable<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo) {
        pVVar4 = pSVar7->vtable + *piVar11;
        goto LAB_0333f1f0;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  pVVar4 = (VirtualInvokeData *)
           FUN_01b81914(pSVar3,
                        System_Collections_Generic_IEnumerable<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo,0);
LAB_0333f1f0:
  plVar5 = (long *)(*pVVar4->methodPtr)(pSVar3,pVVar4->method);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_0333f21c:
  lVar8 = *plVar5;
  uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar10 != 0) {
    piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(System_Collections_IEnumerator_c **)(piVar12 + -2) ==
          System_Collections_IEnumerator_TypeInfo) {
        puVar6 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_0333f268;
      }
      uVar10 = uVar10 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar10 != 0);
  }
  puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_0333f268:
  uVar10 = (*(code *)*puVar6)(plVar5,puVar6[1]);
  if ((uVar10 & 1) != 0) {
    lVar8 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(System_Collections_Generic_IEnumerator_OJHODFIGFMA_MJOLIJOPBMO__c **)(piVar12 + -2) ==
            System_Collections_Generic_IEnumerator<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0333f2c4;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01b81914(plVar5,
                          System_Collections_Generic_IEnumerator<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo,0
                         );
LAB_0333f2c4:
    MLNEFBDGKEK = (OJHODFIGFMA_MJOLIJOPBMO_o *)(*(code *)*puVar6)(plVar5,puVar6[1]);
    if (MLNEFBDGKEK == (OJHODFIGFMA_MJOLIJOPBMO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pLVar9 = (MLNEFBDGKEK->fields).ADHFHEJFJPK;
    if (pLVar9 == (LKPNOBFEAKD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (DBIAAJNKHLH == (DNELIPCHKLK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    method_00 = (MethodInfo *)0x0;
    bVar2 = DNELIPCHKLK__LFHPFJOAJIO(DBIAAJNKHLH,(pLVar9->fields).HMKKKKOPIJH,(MethodInfo *)0x0);
    if (!bVar2) goto code_r0x0333f2f8;
    goto LAB_0333f314;
  }
  if (plVar5 == (long *)0x0) {
    return;
  }
  lVar8 = *plVar5;
  uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar10 == 0) goto LAB_0333f35c;
  piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
  goto LAB_0333f344;
code_r0x0333f2f8:
  pLVar9 = (MLNEFBDGKEK->fields).ADHFHEJFJPK;
  if (pLVar9 == (LKPNOBFEAKD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  method_00 = (MethodInfo *)0x0;
  bVar2 = DNELIPCHKLK__LFHPFJOAJIO(DBIAAJNKHLH,(pLVar9->fields).BDJGFOGHDKK,(MethodInfo *)0x0);
  if (bVar2) {
LAB_0333f314:
    OJHODFIGFMA__LJOAPAKCNLD(__this,MLNEFBDGKEK,method_00);
  }
  goto LAB_0333f21c;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar12 = piVar12 + 4;
    if (uVar10 == 0) break;
LAB_0333f344:
    if (*(System_IDisposable_c **)(piVar12 + -2) == System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_0333f378;
    }
  }
LAB_0333f35c:
  puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
LAB_0333f378:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return;
}

