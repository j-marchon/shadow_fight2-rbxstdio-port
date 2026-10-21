// Nekki.SF2.GUI.Fight.StyleBar$$AddStripRange @ RVA 0x34CA274

/* WARNING: Removing unreachable block (ram,0x035ca48c) */

void Nekki_SF2_GUI_Fight_StyleBar__AddStripRange
               (Nekki_SF2_GUI_Fight_StyleBar_o *__this,
               System_Collections_Generic_IEnumerable_StyleBarStrip__o *NMMKGIMBHFF,
               MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  long *plVar3;
  undefined8 *puVar4;
  Nekki_SF2_GUI_Fight_StyleBarStrip_o *AGNGOOMCNMB;
  System_Collections_Generic_IEnumerable_StyleBarStrip__c *pSVar5;
  long lVar6;
  ulong uVar7;
  int32_t *piVar8;
  int *piVar9;
  
  if ((DAT_0456865b & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<StyleBarStrip>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<StyleBarStrip>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    DAT_0456865b = 1;
  }
  if (NMMKGIMBHFF == (System_Collections_Generic_IEnumerable_StyleBarStrip__o *)0x0) {
    return;
  }
  pSVar5 = NMMKGIMBHFF->klass;
  uVar1._0_1_ = (pSVar5->_2).rank;
  uVar1._1_1_ = (pSVar5->_2).minimumAlignment;
  uVar7 = (ulong)uVar1;
  if (uVar7 != 0) {
    piVar8 = &((pSVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IEnumerable<StyleBarStrip>_TypeInfo) {
        pVVar2 = pSVar5->vtable + *piVar8;
        goto LAB_035ca324;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  method = (MethodInfo *)0x0;
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(NMMKGIMBHFF);
LAB_035ca324:
  plVar3 = (long *)(*pVVar2->methodPtr)(NMMKGIMBHFF,pVVar2->method);
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
          goto LAB_035ca394;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    method = (MethodInfo *)0x0;
    puVar4 = (undefined8 *)FUN_01b81914(plVar3);
LAB_035ca394:
    uVar7 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar7 & 1) == 0) break;
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(System_Collections_Generic_IEnumerator_StyleBarStrip__c **)(piVar9 + -2) ==
            System_Collections_Generic_IEnumerator<StyleBarStrip>_TypeInfo) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_035ca3f0;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    method = (MethodInfo *)0x0;
    puVar4 = (undefined8 *)FUN_01b81914(plVar3);
LAB_035ca3f0:
    AGNGOOMCNMB = (Nekki_SF2_GUI_Fight_StyleBarStrip_o *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    Nekki_SF2_GUI_Fight_StyleBar__AddStrip(__this,AGNGOOMCNMB,method);
  } while( true );
  if (plVar3 != (long *)0x0) {
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(System_IDisposable_c **)(piVar9 + -2) == System_IDisposable_TypeInfo) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_035ca468;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_035ca468:
    (*(code *)*puVar4)(plVar3,puVar4[1]);
  }
  return;
}

