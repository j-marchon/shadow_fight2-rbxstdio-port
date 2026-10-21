// HNHFLBKDDHP$$KKPLGNGDMJC @ RVA 0x348A9B8

/* WARNING: Removing unreachable block (ram,0x0358aca4) */

void HNHFLBKDDHP__KKPLGNGDMJC(HNHFLBKDDHP_o *__this,LADHIKFIKCJ_o *OPAEPDIIOEB,MethodInfo *method)

{
  ushort uVar1;
  IDLLNHJCLIF_c *pIVar2;
  VirtualInvokeData *pVVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  System_Collections_Generic_IEnumerable_IDLLNHJCLIF__c *pSVar7;
  long lVar8;
  ulong uVar9;
  int32_t *piVar10;
  int *piVar11;
  System_Collections_Generic_IEnumerable_IDLLNHJCLIF__o *pSVar12;
  code *pcVar13;
  undefined1 auStack_150 [80];
  undefined1 auStack_100 [80];
  undefined1 auStack_b0 [80];
  
  if ((DAT_045683d7 & 1) == 0) {
    FUN_01bab630(&IDLLNHJCLIF_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<IDLLNHJCLIF>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<IDLLNHJCLIF>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    DAT_045683d7 = 1;
  }
  pSVar12 = (__this->fields).PDNHEGDLGJA;
  if (pSVar12 == (System_Collections_Generic_IEnumerable_IDLLNHJCLIF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar7 = pSVar12->klass;
  uVar1._0_1_ = (pSVar7->_2).rank;
  uVar1._1_1_ = (pSVar7->_2).minimumAlignment;
  uVar9 = (ulong)uVar1;
  if (uVar9 != 0) {
    piVar10 = &((pSVar7->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IEnumerable<IDLLNHJCLIF>_TypeInfo) {
        pVVar3 = pSVar7->vtable + *piVar10;
        goto LAB_0358aa88;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  pVVar3 = (VirtualInvokeData *)
           FUN_01b81914(pSVar12,System_Collections_Generic_IEnumerable<IDLLNHJCLIF>_TypeInfo,0);
LAB_0358aa88:
  plVar4 = (long *)(*pVVar3->methodPtr)(pSVar12,pVVar3->method);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar8 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0358ab08;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_0358ab08:
    uVar9 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if ((uVar9 & 1) == 0) {
      if (plVar4 == (long *)0x0) {
        return;
      }
      lVar8 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 == 0) goto LAB_0358ac4c;
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    lVar8 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(System_Collections_Generic_IEnumerator_IDLLNHJCLIF__c **)(piVar11 + -2) ==
            System_Collections_Generic_IEnumerator<IDLLNHJCLIF>_TypeInfo) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0358ab64;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01b81914(plVar4,System_Collections_Generic_IEnumerator<IDLLNHJCLIF>_TypeInfo,0);
LAB_0358ab64:
    plVar6 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
    memcpy(auStack_100,OPAEPDIIOEB,0x50);
    pIVar2 = IDLLNHJCLIF_TypeInfo;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    memcpy(auStack_150,auStack_100,0x50);
    lVar8 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(IDLLNHJCLIF_c **)(piVar11 + -2) == pIVar2) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0358abec;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_01b81914(plVar6,pIVar2,0);
LAB_0358abec:
    pcVar13 = (code *)*puVar5;
    memcpy(auStack_b0,auStack_150,0x50);
    (*pcVar13)(plVar6,auStack_b0,puVar5[1]);
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar11 = piVar11 + 4;
    if (uVar9 == 0) break;
    if (*(System_IDisposable_c **)(piVar11 + -2) == System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_0358ac68;
    }
  }
LAB_0358ac4c:
  puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_0358ac68:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return;
}

