// Nekki.SF2.GUI.SimpleScroll$$AddItems @ RVA 0x302C23C

/* WARNING: Removing unreachable block (ram,0x0312c46c) */

void Nekki_SF2_GUI_SimpleScroll__AddItems
               (Nekki_SF2_GUI_SimpleScroll_o *__this,
               System_Collections_Generic_IEnumerable_BaseScrollItem__o *GHAAKPDHIJJ,
               bool FKNKAMAGHAI,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  long *plVar3;
  undefined8 *puVar4;
  Nekki_SF2_GUI_BaseScrollItem_o *IKKAMAMLIKA;
  System_Collections_Generic_IEnumerable_BaseScrollItem__c *pSVar5;
  long lVar6;
  ulong uVar7;
  int32_t *piVar8;
  int *piVar9;
  
  if ((DAT_04565cc5 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<BaseScrollItem>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<BaseScrollItem>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    DAT_04565cc5 = 1;
  }
  if (GHAAKPDHIJJ == (System_Collections_Generic_IEnumerable_BaseScrollItem__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar5 = GHAAKPDHIJJ->klass;
  uVar1._0_1_ = (pSVar5->_2).rank;
  uVar1._1_1_ = (pSVar5->_2).minimumAlignment;
  uVar7 = (ulong)uVar1;
  if (uVar7 != 0) {
    piVar8 = &((pSVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IEnumerable<BaseScrollItem>_TypeInfo) {
        pVVar2 = pSVar5->vtable + *piVar8;
        goto LAB_0312c2f4;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(GHAAKPDHIJJ,System_Collections_Generic_IEnumerable<BaseScrollItem>_TypeInfo,
                        0);
LAB_0312c2f4:
  plVar3 = (long *)(*pVVar2->methodPtr)(GHAAKPDHIJJ,pVVar2->method);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0312c3f8 with catch @ 0312c468
                        */
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
          goto LAB_0312c370;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_0312c370:
    uVar7 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar7 & 1) == 0) break;
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(System_Collections_Generic_IEnumerator_BaseScrollItem__c **)(piVar9 + -2) ==
            System_Collections_Generic_IEnumerator<BaseScrollItem>_TypeInfo) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0312c3cc;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
                    /* try { // try from 0312c3b0 to 0322c3f7 has its CatchHandler @ 0312c3b0
                       catch() { ... } // from try @ 0312c3b0 with catch @ 0312c3b0
                       catch() { ... } // from try @ 0312c408 with catch @ 0312c3b0
                       catch() { ... } // from try @ 0312c49c with catch @ 0312c3b0
                       catch() { ... } // from try @ 0312c51c with catch @ 0312c3b0 */
    puVar4 = (undefined8 *)
             FUN_01b81914(plVar3,System_Collections_Generic_IEnumerator<BaseScrollItem>_TypeInfo,0);
LAB_0312c3cc:
    IKKAMAMLIKA = (Nekki_SF2_GUI_BaseScrollItem_o *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    Nekki_SF2_GUI_SimpleScroll__AddItem(__this,IKKAMAMLIKA,FKNKAMAGHAI,method);
  } while( true );
  if (plVar3 != (long *)0x0) {
    lVar6 = *plVar3;
                    /* try { // try from 0312c3f8 to 0322c3fb has its CatchHandler @ 0312c468 */
                    /* try { // try from 0312c3fc to 0322c407 has its CatchHandler @ 0312c46c */
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
                    /* try { // try from 0312c408 to 0322c483 has its CatchHandler @ 0312c3b0 */
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(System_IDisposable_c **)(piVar9 + -2) == System_IDisposable_TypeInfo) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0312c440;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_0312c440:
    (*(code *)*puVar4)(plVar3,puVar4[1]);
  }
  return;
}

