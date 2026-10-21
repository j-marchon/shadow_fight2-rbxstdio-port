// HNHFLBKDDHP$$DLMMOLDNHKG @ RVA 0x348AD58

/* WARNING: Removing unreachable block (ram,0x0358b054) */

void HNHFLBKDDHP__DLMMOLDNHKG(HNHFLBKDDHP_o *__this,HNOIHFFENNC_o *OPAEPDIIOEB,MethodInfo *method)

{
  ushort uVar1;
  long lVar2;
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
  uint64_t uVar13;
  System_String_o *pSVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  System_String_o *pSVar18;
  System_String_o *pSVar19;
  System_String_o *pSVar20;
  System_String_o *local_a0;
  System_String_o *pSStack_98;
  undefined8 uStack_90;
  System_String_o *pSStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  uint64_t uStack_70;
  System_String_o *pSStack_68;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if ((DAT_045683d8 & 1) == 0) {
    FUN_01bab630(&IDLLNHJCLIF_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<IDLLNHJCLIF>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<IDLLNHJCLIF>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    DAT_045683d8 = 1;
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
        goto LAB_0358ae30;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  pVVar3 = (VirtualInvokeData *)
           FUN_01b81914(pSVar12,System_Collections_Generic_IEnumerable<IDLLNHJCLIF>_TypeInfo,0);
LAB_0358ae30:
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
          goto LAB_0358aeb0;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_0358aeb0:
    uVar9 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if ((uVar9 & 1) == 0) {
      if (plVar4 == (long *)0x0) goto LAB_0358b018;
      lVar8 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 == 0) goto LAB_0358aff0;
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
          goto LAB_0358af0c;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01b81914(plVar4,System_Collections_Generic_IEnumerator<IDLLNHJCLIF>_TypeInfo,0);
LAB_0358af0c:
    plVar6 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
    uVar16._0_4_ = (OPAEPDIIOEB->fields).IHEKPOBGEJC.fields.lo;
    uVar16._4_4_ = (OPAEPDIIOEB->fields).IHEKPOBGEJC.fields.mid;
    uVar15._0_4_ = (OPAEPDIIOEB->fields).IHEKPOBGEJC.fields.flags;
    uVar15._4_4_ = (OPAEPDIIOEB->fields).IHEKPOBGEJC.fields.hi;
    pSVar14 = (OPAEPDIIOEB->fields).IEINLOAOCLD;
    uVar13 = (OPAEPDIIOEB->fields).IHEKPOBGEJC.fields.ulomidLE;
    pSVar20 = (OPAEPDIIOEB->fields).ODNJEBGJAAD;
    pSVar19 = (OPAEPDIIOEB->fields).IIHFLLPKBJI;
    pSVar18 = (OPAEPDIIOEB->fields).AIKDONIPAMF;
    uVar17 = *(undefined8 *)&(OPAEPDIIOEB->fields).PIGNHMJGDHM;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    lVar8 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(IDLLNHJCLIF_c **)(piVar11 + -2) == IDLLNHJCLIF_TypeInfo) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_0358af90;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_01b81914(plVar6,IDLLNHJCLIF_TypeInfo,1);
LAB_0358af90:
    local_a0 = pSVar19;
    pSStack_98 = pSVar20;
    uStack_90 = uVar17;
    pSStack_88 = pSVar18;
    local_80 = uVar15;
    uStack_78 = uVar16;
    uStack_70 = uVar13;
    pSStack_68 = pSVar14;
    (*(code *)*puVar5)(plVar6,&local_a0,puVar5[1]);
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar11 = piVar11 + 4;
    if (uVar9 == 0) break;
    if (*(System_IDisposable_c **)(piVar11 + -2) == System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_0358b00c;
    }
  }
LAB_0358aff0:
  puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_0358b00c:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
LAB_0358b018:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

