// HOOAAGABMBL$$EOAMPKBBJPL @ RVA 0x30ECE94

/* WARNING: Removing unreachable block (ram,0x031ed168) */

void HOOAAGABMBL__EOAMPKBBJPL
               (HOOAAGABMBL_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  int32_t length;
  byte bVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  System_Xml_XmlNode_o *AHDGNOJPPIB_00;
  HEFOANCOHDC_o *item;
  System_Xml_XmlNode_c *method_00;
  System_Collections_Generic_List_HEFOANCOHDC__o *pSVar5;
  long lVar6;
  HEFOANCOHDC_array *pHVar7;
  ulong uVar8;
  int *piVar9;
  undefined1 auVar10 [16];
  
  if ((DAT_04566410 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_Clear__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_04566410 = 1;
  }
  pSVar5 = (__this->fields)._GJPBKHJCFBE_k__BackingField;
  if (pSVar5 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
    length = (pSVar5->fields)._size;
    (pSVar5->fields)._size = 0;
    (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar5->fields)._items,0,length,(MethodInfo *)0x0);
    }
    if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
       (plVar3 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                                   (AHDGNOJPPIB,
                                    (AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method),
       plVar3 != (long *)0x0)) {
      plVar3 = (long *)(**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar6 = *plVar3;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_031ecfc4;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
                    /* try { // try from 031ecfb4 to 032ecfbb has its CatchHandler @ 031ed078 */
LAB_031ecfc4:
        uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
                    /* try { // try from 031ecfd0 to 032ed02f has its CatchHandler @ 031ed07c */
        if ((uVar8 & 1) == 0) {
                    /* try { // try from 031ed0d4 to 032ed0db has its CatchHandler @ 031ed0f0 */
          plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
                    /* try { // try from 031ed0dc to 032ed0e7 has its CatchHandler @ 031ece34 */
          if (plVar3 == (long *)0x0) {
            return;
          }
          lVar6 = *plVar3;
                    /* try { // try from 031ed0e8 to 032ed0ef has its CatchHandler @ 031ed0f0 */
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031ed0d4 with catch @ 031ed0f0
                       catch(type#2 @ 00000000) { ... } // from try @ 031ed0e8 with catch @ 031ed0f0
                        */
          if (uVar8 == 0) goto LAB_031ed114;
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto LAB_031ed0fc;
        }
        lVar6 = *plVar3;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 1) * 0x10 + 0x138);
              goto LAB_031ed024;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,1);
LAB_031ed024:
        auVar10 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        AHDGNOJPPIB_00 = auVar10._0_8_;
                    /* try { // try from 031ed030 to 032ed05f has its CatchHandler @ 031ece34 */
        method_00 = auVar10._8_8_;
        if (AHDGNOJPPIB_00 != (System_Xml_XmlNode_o *)0x0) {
          bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
          if (((AHDGNOJPPIB_00->klass->_2).naturalAligment < bVar1) ||
             (method_00 = System_Xml_XmlNode_TypeInfo,
             (AHDGNOJPPIB_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
             (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64();
          }
        }
                    /* try { // try from 031ed060 to 032ed063 has its CatchHandler @ 031ed080 */
        item = HOOAAGABMBL__PHKPGHEINHB(AHDGNOJPPIB_00,(MethodInfo *)method_00);
        lVar6 = Method_System_Collections_Generic_List<HEFOANCOHDC>_Add__;
                    /* try { // try from 031ed064 to 032ed067 has its CatchHandler @ 031ed074 */
                    /* try { // try from 031ed068 to 032ed06b has its CatchHandler @ 031ed080 */
        if (item != (HEFOANCOHDC_o *)0x0) {
                    /* try { // try from 031ed06c to 032ed097 has its CatchHandler @ 031ece34 */
          pSVar5 = (__this->fields)._GJPBKHJCFBE_k__BackingField;
          if (pSVar5 == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031ed064 with catch @ 031ed074
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031ecfb4 with catch @ 031ed078
                        */
          pHVar7 = (pSVar5->fields)._items;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031ecfd0 with catch @ 031ed07c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031ed060 with catch @ 031ed080
                       catch(type#1 @ 03f99f68) { ... } // from try @ 031ed068 with catch @ 031ed080
                        */
          (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
          if (pHVar7 == (HEFOANCOHDC_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar2 = (pSVar5->fields)._size;
                    /* try { // try from 031ed098 to 032ed09b has its CatchHandler @ 031ed0c4 */
          if (uVar2 < (uint)pHVar7->max_length) {
                    /* try { // try from 031ed09c to 032ed0d3 has its CatchHandler @ 031ece34 */
            (pSVar5->fields)._size = uVar2 + 1;
            pHVar7->m_Items[(int)uVar2] = item;
            thunk_FUN_01c20e04(pHVar7->m_Items + (int)uVar2);
          }
          else {
                    /* catch() { ... } // from try @ 031ed098 with catch @ 031ed0c4 */
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)item,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          }
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_031ed0fc:
    if (*(System_IDisposable_c **)(piVar9 + -2) == System_IDisposable_TypeInfo) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_031ed130;
    }
  }
LAB_031ed114:
  puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_031ed130:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return;
}

