// IPEAKKBOJCA$$HNIHOIAMDPC @ RVA 0x308FBE0

/* WARNING: Removing unreachable block (ram,0x0318fee4) */

void IPEAKKBOJCA__HNIHOIAMDPC
               (IPEAKKBOJCA_o *__this,System_Xml_XmlNode_o *IIBFFEPEHPF,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar3;
  long *plVar4;
  undefined8 *puVar5;
  System_Xml_XmlNode_o *IIBFFEPEHPF_00;
  EAAHMDAMHNI_o *item;
  System_Collections_Generic_List_EAAHMDAMHNI__o *__this_01;
  long lVar6;
  EAAHMDAMHNI_array *pEVar7;
  ulong uVar8;
  int *piVar9;
  
  if ((DAT_04566093 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<EAAHMDAMHNI>_Add__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_2948);
    FUN_01bab630(&StringLiteral_13991);
    DAT_04566093 = 1;
  }
  if ((IIBFFEPEHPF != (System_Xml_XmlNode_o *)0x0) &&
     (__this_00 = (System_Xml_XmlAttributeCollection_o *)
                  (*(IIBFFEPEHPF->klass->vtable)._16_get_Attributes.methodPtr)
                            (IIBFFEPEHPF,(IIBFFEPEHPF->klass->vtable)._16_get_Attributes.method),
     __this_00 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                            (__this_00,StringLiteral_13991,(MethodInfo *)0x0);
    pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_2948,(MethodInfo *)0x0);
    (__this->fields).FDKHPNLBCGM = pSVar3;
    thunk_FUN_01c20e04();
    plVar4 = (long *)(*(IIBFFEPEHPF->klass->vtable)._13_get_ChildNodes.methodPtr)
                               (IIBFFEPEHPF,(IIBFFEPEHPF->klass->vtable)._13_get_ChildNodes.method);
    if (plVar4 != (long *)0x0) {
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
              goto LAB_0318fd40;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
                    /* try { // try from 0318fd20 to 0328fdc7 has its CatchHandler @ 0318fd20
                       catch() { ... } // from try @ 0318fd20 with catch @ 0318fd20
                       catch() { ... } // from try @ 0318fe08 with catch @ 0318fd20
                       catch() { ... } // from try @ 0318fe94 with catch @ 0318fd20
                       catch() { ... } // from try @ 0318ff2c with catch @ 0318fd20 */
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_0318fd40:
        uVar8 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        if ((uVar8 & 1) == 0) {
          plVar4 = (long *)thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
          if (plVar4 == (long *)0x0) {
            return;
          }
          lVar6 = *plVar4;
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar8 == 0) goto LAB_0318fe90;
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto LAB_0318fe78;
        }
        lVar6 = *plVar4;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar5 = (undefined8 *)(lVar6 + (long)(*piVar9 + 1) * 0x10 + 0x138);
              goto LAB_0318fda0;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,1);
LAB_0318fda0:
        IIBFFEPEHPF_00 = (System_Xml_XmlNode_o *)(*(code *)*puVar5)(plVar4,puVar5[1]);
        if (IIBFFEPEHPF_00 != (System_Xml_XmlNode_o *)0x0) {
          bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
                    /* try { // try from 0318fdc8 to 0328fdf3 has its CatchHandler @ 0318fe9c */
          if (((IIBFFEPEHPF_00->klass->_2).naturalAligment < bVar1) ||
             ((IIBFFEPEHPF_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64();
          }
        }
        item = EAAHMDAMHNI__JCCANOCMAKD(IIBFFEPEHPF_00,(MethodInfo *)0x0);
        lVar6 = Method_System_Collections_Generic_List<EAAHMDAMHNI>_Add__;
        __this_01 = (__this->fields).KDIMDBHMBEM;
        if (__this_01 == (System_Collections_Generic_List_EAAHMDAMHNI__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pEVar7 = (__this_01->fields)._items;
                    /* try { // try from 0318fe00 to 0328fe07 has its CatchHandler @ 0318fe94 */
        (__this_01->fields)._version = (__this_01->fields)._version + 1;
        if (pEVar7 == (EAAHMDAMHNI_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
                    /* try { // try from 0318fe08 to 0328fe8f has its CatchHandler @ 0318fd20 */
        uVar2 = (__this_01->fields)._size;
        if (uVar2 < (uint)pEVar7->max_length) {
          (__this_01->fields)._size = uVar2 + 1;
          pEVar7->m_Items[(int)uVar2] = item;
          thunk_FUN_01c20e04(pEVar7->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)item,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
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
LAB_0318fe78:
    if (*(System_IDisposable_c **)(piVar9 + -2) == System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_0318feac;
    }
  }
LAB_0318fe90:
                    /* try { // try from 0318fe90 to 0328fe93 has its CatchHandler @ 0318fe98 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0318fe00 with catch @ 0318fe94
                       try { // try from 0318fe94 to 0328feb3 has its CatchHandler @ 0318fd20 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0318fe90 with catch @ 0318fe98
                        */
  puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0318fdc8 with catch @ 0318fe9c
                        */
LAB_0318feac:
                    /* try { // try from 0318feb4 to 0328feb7 has its CatchHandler @ 0318fecc */
  (*(code *)*puVar5)(plVar4,puVar5[1]);
                    /* catch() { ... } // from try @ 0318feb4 with catch @ 0318fecc */
  return;
}

