// DOPEEDABNEK$$MOBLJOJLMDN @ RVA 0x32E294C

/* WARNING: Removing unreachable block (ram,0x033e2b78) */

void DOPEEDABNEK__MOBLJOJLMDN
               (DOPEEDABNEK_o *__this,
               System_Collections_Generic_IEnumerable_HOOAAGABMBL__o *AHLHPGEOKLM,
               int32_t GMALOFEKAHI,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  long *plVar3;
  undefined8 *puVar4;
  HOOAAGABMBL_o *__this_00;
  System_Collections_Generic_IEnumerable_HOOAAGABMBL__c *pSVar5;
  long lVar6;
  ulong uVar7;
  int32_t *piVar8;
  int *piVar9;
  
  if ((DAT_045675f3 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<HOOAAGABMBL>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<HOOAAGABMBL>_TypeInfo);
    __this = (DOPEEDABNEK_o *)FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    DAT_045675f3 = 1;
  }
  if (AHLHPGEOKLM == (System_Collections_Generic_IEnumerable_HOOAAGABMBL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(__this);
  }
  pSVar5 = AHLHPGEOKLM->klass;
  uVar1._0_1_ = (pSVar5->_2).rank;
  uVar1._1_1_ = (pSVar5->_2).minimumAlignment;
  uVar7 = (ulong)uVar1;
  if (uVar7 != 0) {
    piVar8 = &((pSVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IEnumerable<HOOAAGABMBL>_TypeInfo) {
        pVVar2 = pSVar5->vtable + *piVar8;
        goto LAB_033e2a00;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(AHLHPGEOKLM,System_Collections_Generic_IEnumerable<HOOAAGABMBL>_TypeInfo,0);
LAB_033e2a00:
  plVar3 = (long *)(*pVVar2->methodPtr)(AHLHPGEOKLM,pVVar2->method);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_033e2a78;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_033e2a78:
    uVar7 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar7 & 1) == 0) {
      if (plVar3 == (long *)0x0) {
        return;
      }
      lVar6 = *plVar3;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 == 0) goto LAB_033e2b2c;
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(System_Collections_Generic_IEnumerator_HOOAAGABMBL__c **)(piVar9 + -2) ==
            System_Collections_Generic_IEnumerator<HOOAAGABMBL>_TypeInfo) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_033e2ad4;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01b81914(plVar3,System_Collections_Generic_IEnumerator<HOOAAGABMBL>_TypeInfo,0);
LAB_033e2ad4:
    __this_00 = (HOOAAGABMBL_o *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    if (__this_00 == (HOOAAGABMBL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    HOOAAGABMBL__NEDDLGPMIEB(__this_00,GMALOFEKAHI,(MethodInfo *)0x0);
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar9 = piVar9 + 4;
    if (uVar7 == 0) break;
    if (*(System_IDisposable_c **)(piVar9 + -2) == System_IDisposable_TypeInfo) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_033e2b48;
    }
  }
LAB_033e2b2c:
  puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_033e2b48:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return;
}

