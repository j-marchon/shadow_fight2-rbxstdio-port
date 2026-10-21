// KEIAEKNFNNA$$GBHJAGECFAB @ RVA 0x3508078

/* WARNING: Removing unreachable block (ram,0x036082d4) */

bool KEIAEKNFNNA__GBHJAGECFAB(KEIAEKNFNNA_o *__this,MethodInfo *method)

{
  ushort uVar1;
  byte bVar2;
  VirtualInvokeData *pVVar3;
  long *plVar4;
  undefined8 *puVar5;
  FMOAMIIOKNP_o *pFVar6;
  System_Collections_Generic_IReadOnlyList_OPHDIHJPHDE__c *pSVar7;
  long lVar8;
  ulong uVar9;
  int32_t *piVar10;
  int *piVar11;
  System_Collections_Generic_IReadOnlyList_OPHDIHJPHDE__o *pSVar12;
  undefined1 auVar13 [16];
  
  auVar13._8_8_ = method;
  auVar13._0_8_ = __this;
  if ((DAT_045688ae & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<OPHDIHJPHDE>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<OPHDIHJPHDE>_TypeInfo);
    auVar13 = FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    DAT_045688ae = 1;
  }
  pFVar6 = (__this->fields).JEPHJLEICLO;
  if ((pFVar6 == (FMOAMIIOKNP_o *)0x0) ||
     (pSVar12 = (pFVar6->fields)._APDMACJCLEG_k__BackingField,
     pSVar12 == (System_Collections_Generic_IReadOnlyList_OPHDIHJPHDE__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(auVar13._0_8_,auVar13._8_8_);
  }
  pSVar7 = pSVar12->klass;
  uVar1._0_1_ = (pSVar7->_2).rank;
  uVar1._1_1_ = (pSVar7->_2).minimumAlignment;
  uVar9 = (ulong)uVar1;
  if (uVar9 != 0) {
    piVar10 = &((pSVar7->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IEnumerable<OPHDIHJPHDE>_TypeInfo) {
        pVVar3 = pSVar7->vtable + *piVar10;
        goto LAB_03608130;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  pVVar3 = (VirtualInvokeData *)
           FUN_01b81914(pSVar12,System_Collections_Generic_IEnumerable<OPHDIHJPHDE>_TypeInfo,0);
LAB_03608130:
  plVar4 = (long *)(*pVVar3->methodPtr)(pSVar12,pVVar3->method);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    do {
      lVar8 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_036081a8;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_036081a8:
      bVar2 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      if ((bVar2 & 1) == 0) {
        bVar2 = 0;
        goto joined_r0x03608250;
      }
      lVar8 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(System_Collections_Generic_IEnumerator_OPHDIHJPHDE__c **)(piVar11 + -2) ==
              System_Collections_Generic_IEnumerator<OPHDIHJPHDE>_TypeInfo) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_03608208;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_01b81914(plVar4,System_Collections_Generic_IEnumerator<OPHDIHJPHDE>_TypeInfo,0);
LAB_03608208:
      lVar8 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    } while (*(char *)(lVar8 + 0x18) != '\0');
    if (*(long *)(lVar8 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  } while (*(int *)(lVar8 + 0x14) < *(int *)(*(long *)(lVar8 + 0x20) + 0x28));
joined_r0x03608250:
  if (plVar4 != (long *)0x0) {
    lVar8 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(System_IDisposable_c **)(piVar11 + -2) == System_IDisposable_TypeInfo) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_036082a0;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_036082a0:
    (*(code *)*puVar5)(plVar4,puVar5[1]);
  }
  return (bool)(bVar2 & 1);
}

