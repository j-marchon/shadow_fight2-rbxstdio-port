// PNEKMHMACLG$$HNIHOIAMDPC @ RVA 0x3503AF4

/* WARNING: Removing unreachable block (ram,0x03603d94) */

void PNEKMHMACLG__HNIHOIAMDPC
               (PNEKMHMACLG_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  System_Xml_XmlNode_o *AHDGNOJPPIB_00;
  AJNNHGGLGIF_o *item;
  System_Collections_Generic_List_AJNNHGGLGIF__o *__this_00;
  long lVar5;
  AJNNHGGLGIF_array *pAVar6;
  ulong uVar7;
  int *piVar8;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03603a90 with catch @ 03603af4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03603ae4 with catch @ 03603af8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03603ae0 with catch @ 03603afc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03603a2c with catch @ 03603b00
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03603adc with catch @ 03603b04
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03603a14 with catch @ 03603b08
                        */
  if ((DAT_0456887b & 1) == 0) {
                    /* try { // try from 03603b20 to 03703b23 has its CatchHandler @ 03603b50 */
    FUN_01bab630(&System_IDisposable_TypeInfo);
                    /* try { // try from 03603b24 to 03703b57 has its CatchHandler @ 036038f8 */
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<AJNNHGGLGIF>_Add__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_0456887b = 1;
  }
                    /* catch() { ... } // from try @ 03603b20 with catch @ 03603b50 */
                    /* try { // try from 03603b58 to 03703b5f has its CatchHandler @ 03603b74 */
                    /* try { // try from 03603b60 to 03703b6b has its CatchHandler @ 036038f8 */
  if ((AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) ||
     (plVar3 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method
                                 ), plVar3 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 03603b6c to 03703b73 has its CatchHandler @ 03603b74 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03603b58 with catch @ 03603b74
                       catch(type#2 @ 00000000) { ... } // from try @ 03603b6c with catch @ 03603b74
                        */
                    /* try { // try from 03603b78 to 03703cbf has its CatchHandler @ 03603b78
                       catch() { ... } // from try @ 03603b78 with catch @ 03603b78
                       catch() { ... } // from try @ 03603cc8 with catch @ 03603b78
                       catch() { ... } // from try @ 03603db8 with catch @ 03603b78
                       catch() { ... } // from try @ 03603dfc with catch @ 03603b78
                       catch() { ... } // from try @ 03603e2c with catch @ 03603b78
                       catch() { ... } // from try @ 03603e78 with catch @ 03603b78
                       catch() { ... } // from try @ 03603e94 with catch @ 03603b78
                       catch() { ... } // from try @ 03603ec4 with catch @ 03603b78 */
  plVar3 = (long *)(**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar5 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar8 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_03603bec;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_03603bec:
    uVar7 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar7 & 1) == 0) {
      plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
      if (plVar3 == (long *)0x0) {
        return;
      }
      lVar5 = *plVar3;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 == 0) goto LAB_03603d40;
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar8 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_03603c4c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,1);
LAB_03603c4c:
    AHDGNOJPPIB_00 = (System_Xml_XmlNode_o *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    if (AHDGNOJPPIB_00 != (System_Xml_XmlNode_o *)0x0) {
      bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
      if (((AHDGNOJPPIB_00->klass->_2).naturalAligment < bVar1) ||
         ((AHDGNOJPPIB_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64();
      }
    }
    item = FCFEFEBAILK__POKFALBPBDI(AHDGNOJPPIB_00,(MethodInfo *)0x0);
    lVar5 = Method_System_Collections_Generic_List<AJNNHGGLGIF>_Add__;
    if (item != (AJNNHGGLGIF_o *)0x0) {
      __this_00 = (__this->fields).LJNCACBBIBD;
      if (__this_00 == (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pAVar6 = (__this_00->fields)._items;
      (__this_00->fields)._version = (__this_00->fields)._version + 1;
      if (pAVar6 == (AJNNHGGLGIF_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar2 = (__this_00->fields)._size;
                    /* try { // try from 03603cc0 to 03703cc7 has its CatchHandler @ 03603e78 */
      if (uVar2 < (uint)pAVar6->max_length) {
                    /* try { // try from 03603cc8 to 03703d67 has its CatchHandler @ 03603b78 */
        (__this_00->fields)._size = uVar2 + 1;
        pAVar6->m_Items[(int)uVar2] = item;
        thunk_FUN_01c20e04(pAVar6->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      }
    }
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(System_IDisposable_c **)(piVar8 + -2) == System_IDisposable_TypeInfo) {
      puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_03603d5c;
    }
  }
LAB_03603d40:
  puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_03603d5c:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
                    /* try { // try from 03603d68 to 03703d6f has its CatchHandler @ 03603e10 */
  return;
}

