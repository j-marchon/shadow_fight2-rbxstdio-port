// Nekki.SF2.GUI.Dialogs.ShowLoot.ShowLootDialog$$OHIFMDPOBHO @ RVA 0x3513020

/* WARNING: Removing unreachable block (ram,0x03613264) */

void Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog__OHIFMDPOBHO
               (Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_o *__this,
               System_Collections_Generic_IEnumerable_HOOAAGABMBL__o *KJADEEFANAL,MethodInfo *method
               )

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  long *plVar3;
  undefined8 *puVar4;
  HOOAAGABMBL_o *IKKAMAMLIKA;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  System_Collections_Generic_IEnumerable_HOOAAGABMBL__c *pSVar5;
  long lVar6;
  ulong uVar7;
  int32_t *piVar8;
  int *piVar9;
  System_Collections_Generic_IEnumerable_HOOAAGABMBL__o *pSVar10;
  
  if ((DAT_04568902 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<HOOAAGABMBL>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<HOOAAGABMBL>_TypeInfo);
                    /* try { // try from 03613068 to 03713073 has its CatchHandler @ 03612a50 */
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
                    /* try { // try from 03613074 to 0371307b has its CatchHandler @ 0361307c */
    DAT_04568902 = 1;
  }
                    /* catch() { ... } // from try @ 03613000 with catch @ 0361307c
                       catch() { ... } // from try @ 03613074 with catch @ 0361307c */
                    /* try { // try from 03613080 to 0371318b has its CatchHandler @ 03613080
                       catch() { ... } // from try @ 03613080 with catch @ 03613080
                       catch() { ... } // from try @ 036132f4 with catch @ 03613080
                       catch() { ... } // from try @ 036133a0 with catch @ 03613080
                       catch() { ... } // from try @ 036133a8 with catch @ 03613080
                       catch() { ... } // from try @ 03613470 with catch @ 03613080 */
  (__this->fields).FCKCGNHILFE = KJADEEFANAL;
  thunk_FUN_01c20e04(&(__this->fields).FCKCGNHILFE,KJADEEFANAL);
  Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog__KMGNKMDLKDL(__this,method_00);
  pSVar10 = (__this->fields).FCKCGNHILFE;
  if (pSVar10 == (System_Collections_Generic_IEnumerable_HOOAAGABMBL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0361325c to 03713263 has its CatchHandler @ 036133cc */
    FUN_01bab8c8();
  }
  pSVar5 = pSVar10->klass;
  uVar1._0_1_ = (pSVar5->_2).rank;
  uVar1._1_1_ = (pSVar5->_2).minimumAlignment;
  uVar7 = (ulong)uVar1;
  if (uVar7 != 0) {
    piVar8 = &((pSVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IEnumerable<HOOAAGABMBL>_TypeInfo) {
        pVVar2 = pSVar5->vtable + *piVar8;
        goto LAB_036130f0;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar10,System_Collections_Generic_IEnumerable<HOOAAGABMBL>_TypeInfo,0);
LAB_036130f0:
  plVar3 = (long *)(*pVVar2->methodPtr)(pSVar10,pVVar2->method);
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
          goto LAB_03613168;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_03613168:
    uVar7 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar7 & 1) == 0) break;
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
                    /* try { // try from 0361318c to 037131b3 has its CatchHandler @ 036133d8 */
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(System_Collections_Generic_IEnumerator_HOOAAGABMBL__c **)(piVar9 + -2) ==
            System_Collections_Generic_IEnumerator<HOOAAGABMBL>_TypeInfo) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_036131c4;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01b81914(plVar3,System_Collections_Generic_IEnumerator<HOOAAGABMBL>_TypeInfo,0);
LAB_036131c4:
    IKKAMAMLIKA = (HOOAAGABMBL_o *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog__MFHDALKEKDL
              (__this,IKKAMAMLIKA,(System_Collections_Generic_IEnumerable_HEFOANCOHDC__o *)0x0,in_x3
              );
  } while( true );
                    /* try { // try from 036131e8 to 03713213 has its CatchHandler @ 036133d4 */
  if (plVar3 != (long *)0x0) {
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(System_IDisposable_c **)(piVar9 + -2) == System_IDisposable_TypeInfo) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03613238;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_03613238:
    (*(code *)*puVar4)(plVar3,puVar4[1]);
  }
                    /* try { // try from 03613250 to 03713257 has its CatchHandler @ 036133c4 */
  return;
}

