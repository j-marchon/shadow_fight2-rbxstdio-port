// FCFEFEBAILK$$FAEKHJHILGP @ RVA 0x31E3598

/* WARNING: Removing unreachable block (ram,0x032e388c) */

void FCFEFEBAILK__FAEKHJHILGP
               (System_Xml_XmlNode_o *AHDGNOJPPIB,
               System_Collections_Generic_List_AJNNHGGLGIF__o *KENFFDHLNDA,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  System_Xml_XmlNode_o *AHDGNOJPPIB_00;
  System_String_o *a;
  AJNNHGGLGIF_o *item;
  MethodInfo *method_00;
  MethodInfo *method_01;
  long lVar6;
  AJNNHGGLGIF_array *pAVar7;
  ulong uVar8;
  int *piVar9;
  
  if ((DAT_04566d54 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<AJNNHGGLGIF>_Add__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_8409);
    DAT_04566d54 = 1;
  }
  if (AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) {
    return;
  }
  plVar4 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  plVar4 = (long *)(**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar6 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_032e36a8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_032e36a8:
    uVar8 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if ((uVar8 & 1) == 0) {
      plVar4 = (long *)thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
      if (plVar4 == (long *)0x0) {
        return;
      }
      lVar6 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 == 0) goto LAB_032e382c;
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    lVar6 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
                    /* try { // try from 032e36d8 to 033e3817 has its CatchHandler @ 032e36d8
                       catch() { ... } // from try @ 032e36d8 with catch @ 032e36d8
                       catch() { ... } // from try @ 032e38f4 with catch @ 032e36d8
                       catch() { ... } // from try @ 032e39c0 with catch @ 032e36d8
                       catch() { ... } // from try @ 032e39f4 with catch @ 032e36d8
                       catch() { ... } // from try @ 032e3ac4 with catch @ 032e36d8 */
        if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_032e3708;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,1);
LAB_032e3708:
    AHDGNOJPPIB_00 = (System_Xml_XmlNode_o *)(*(code *)*puVar5)(plVar4,puVar5[1]);
    if (AHDGNOJPPIB_00 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
    if (((AHDGNOJPPIB_00->klass->_2).naturalAligment < bVar1) ||
       ((AHDGNOJPPIB_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 032e3874 to 033e389f has its CatchHandler @ 032e39dc */
      FUN_01babc64(AHDGNOJPPIB_00);
    }
    a = (System_String_o *)
        (*(AHDGNOJPPIB_00->klass->vtable)._8_unknown.methodPtr)
                  (AHDGNOJPPIB_00,(AHDGNOJPPIB_00->klass->vtable)._8_unknown.method);
    method_01 = (MethodInfo *)0x0;
    bVar3 = System_String__op_Equality(a,StringLiteral_8409,(MethodInfo *)0x0);
    if (bVar3) {
      FCFEFEBAILK__DJOOIKDELGF(AHDGNOJPPIB_00,KENFFDHLNDA,method_01);
    }
    else {
      item = FCFEFEBAILK__POKFALBPBDI(AHDGNOJPPIB_00,method_00);
      lVar6 = Method_System_Collections_Generic_List<AJNNHGGLGIF>_Add__;
      if (item != (AJNNHGGLGIF_o *)0x0) {
        if (KENFFDHLNDA == (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pAVar7 = (KENFFDHLNDA->fields)._items;
        (KENFFDHLNDA->fields)._version = (KENFFDHLNDA->fields)._version + 1;
        if (pAVar7 == (AJNNHGGLGIF_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar2 = (KENFFDHLNDA->fields)._size;
        if (uVar2 < (uint)pAVar7->max_length) {
          (KENFFDHLNDA->fields)._size = uVar2 + 1;
          pAVar7->m_Items[(int)uVar2] = item;
          thunk_FUN_01c20e04();
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)KENFFDHLNDA,(Il2CppObject *)item,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
                    /* try { // try from 032e3818 to 033e383f has its CatchHandler @ 032e39e0 */
    if (*(System_IDisposable_c **)(piVar9 + -2) == System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_032e3848;
    }
  }
LAB_032e382c:
  puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_032e3848:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return;
}

