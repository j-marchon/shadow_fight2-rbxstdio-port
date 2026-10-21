// FCFEFEBAILK$$DJOOIKDELGF @ RVA 0x31E3968

/* WARNING: Removing unreachable block (ram,0x032e3c28) */

void FCFEFEBAILK__DJOOIKDELGF
               (System_Xml_XmlNode_o *AHDGNOJPPIB,
               System_Collections_Generic_List_AJNNHGGLGIF__o *KENFFDHLNDA,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  int32_t iVar3;
  MGNDHCBAPEN_int__int__o *pMVar4;
  long *plVar5;
  undefined8 *puVar6;
  System_Xml_XmlNode_o *AHDGNOJPPIB_00;
  AJNNHGGLGIF_o *item;
  System_Xml_XmlNode_c *method_00;
  long lVar7;
  AJNNHGGLGIF_array *pAVar8;
  ulong uVar9;
  int *piVar10;
  undefined1 auVar11 [16];
  
  if ((DAT_04566d55 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
                    /* try { // try from 032e39a8 to 033e39af has its CatchHandler @ 032e39d8 */
    FUN_01bab630(&Method_System_Collections_Generic_List<AJNNHGGLGIF>_Add__);
                    /* try { // try from 032e39b4 to 033e39b7 has its CatchHandler @ 032e39c8 */
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
                    /* try { // try from 032e39bc to 033e39bf has its CatchHandler @ 032e39c4 */
                    /* try { // try from 032e39c0 to 033e39ef has its CatchHandler @ 032e36d8 */
    DAT_04566d55 = 1;
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032e39bc with catch @ 032e39c4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032e39b4 with catch @ 032e39c8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032e38e8 with catch @ 032e39d0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032e38dc with catch @ 032e39d4
                        */
  pMVar4 = GIAMPEGMNHE__GGPIBJJKMPK(AHDGNOJPPIB,0,0x7fffffff,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032e39a8 with catch @ 032e39d8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032e3874 with catch @ 032e39dc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032e3818 with catch @ 032e39e0
                        */
                    /* try { // try from 032e39f0 to 033e39f3 has its CatchHandler @ 032e3a44 */
                    /* try { // try from 032e39f4 to 033e3a53 has its CatchHandler @ 032e36d8 */
  if ((AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) ||
     (plVar5 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method
                                 ), plVar5 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  plVar5 = (long *)(**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar7 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
                    /* catch() { ... } // from try @ 032e39f0 with catch @ 032e3a44 */
        if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_032e3a78;
        }
        uVar9 = uVar9 - 1;
                    /* try { // try from 032e3a54 to 033e3ac3 has its CatchHandler @ 032e3ad8 */
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_032e3a78:
    uVar9 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if ((uVar9 & 1) == 0) {
      plVar5 = (long *)thunk_FUN_01bda71c(plVar5,System_IDisposable_TypeInfo);
      if (plVar5 == (long *)0x0) {
        return;
      }
      lVar7 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 == 0) goto LAB_032e3bd0;
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    lVar7 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
                    /* try { // try from 032e3ad0 to 033e3ad7 has its CatchHandler @ 032e3ad8 */
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_032e3ad8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,1);
                    /* try { // try from 032e3ac4 to 033e3acf has its CatchHandler @ 032e36d8 */
LAB_032e3ad8:
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032e3a54 with catch @ 032e3ad8
                       catch(type#2 @ 00000000) { ... } // from try @ 032e3ad0 with catch @ 032e3ad8
                        */
    auVar11 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    AHDGNOJPPIB_00 = auVar11._0_8_;
    method_00 = auVar11._8_8_;
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
    item = FCFEFEBAILK__POKFALBPBDI(AHDGNOJPPIB_00,(MethodInfo *)method_00);
    if (item != (AJNNHGGLGIF_o *)0x0) {
      if (pMVar4 == (MGNDHCBAPEN_int__int__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      iVar3 = (pMVar4->fields).DOKHHBGJICA;
      (item->fields).ONDDFBGIOPJ = (pMVar4->fields).PHPELPFMOII;
      lVar7 = Method_System_Collections_Generic_List<AJNNHGGLGIF>_Add__;
      (item->fields).AGBDJNHBLNM = iVar3;
      if (KENFFDHLNDA == (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pAVar8 = (KENFFDHLNDA->fields)._items;
      (KENFFDHLNDA->fields)._version = (KENFFDHLNDA->fields)._version + 1;
      if (pAVar8 == (AJNNHGGLGIF_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar2 = (KENFFDHLNDA->fields)._size;
      if (uVar2 < (uint)pAVar8->max_length) {
        (KENFFDHLNDA->fields)._size = uVar2 + 1;
        pAVar8->m_Items[(int)uVar2] = item;
        thunk_FUN_01c20e04();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)KENFFDHLNDA,(Il2CppObject *)item,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
      }
    }
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(System_IDisposable_c **)(piVar10 + -2) == System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_032e3bec;
    }
  }
LAB_032e3bd0:
  puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
LAB_032e3bec:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return;
}

