// CNKPEGNHNGO$$HNIHOIAMDPC @ RVA 0x3308548

/* WARNING: Removing unreachable block (ram,0x03408910) */

void CNKPEGNHNGO__HNIHOIAMDPC
               (CNKPEGNHNGO_o *__this,System_Xml_XmlNode_o *MNPCOGBCAED,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  int32_t iVar3;
  uint32_t JGGJNLLANAE;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  System_Xml_XmlAttributeCollection_o *pSVar7;
  System_Xml_XmlAttribute_o *pSVar8;
  MGNDHCBAPEN_int__uint__o *__this_00;
  System_Collections_Generic_List_MGNDHCBAPEN_int__uint___o *pSVar9;
  long lVar10;
  MGNDHCBAPEN_int__uint__array *pMVar11;
  ulong uVar12;
  int *piVar13;
  
  if ((DAT_04567773 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_uint>>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_uint>>_Clear__);
    FUN_01bab630(&Method_MGNDHCBAPEN<int,_uint>__ctor__);
    FUN_01bab630(&MGNDHCBAPEN<int,_uint>_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_6042);
    FUN_01bab630(&StringLiteral_8409);
    DAT_04567773 = 1;
  }
  pSVar9 = (__this->fields).HLIELGNFGLF;
  if (pSVar9 != (System_Collections_Generic_List_MGNDHCBAPEN_int__uint___o *)0x0) {
    iVar3 = (pSVar9->fields)._size;
    (pSVar9->fields)._size = 0;
    (pSVar9->fields)._version = (pSVar9->fields)._version + 1;
    if (0 < iVar3) {
      System_Array__Clear((System_Array_o *)(pSVar9->fields)._items,0,iVar3,(MethodInfo *)0x0);
    }
                    /* try { // try from 0340861c to 035086ab has its CatchHandler @ 0340861c
                       catch() { ... } // from try @ 0340861c with catch @ 0340861c
                       catch() { ... } // from try @ 034086cc with catch @ 0340861c
                       catch() { ... } // from try @ 034086f0 with catch @ 0340861c
                       catch() { ... } // from try @ 03408718 with catch @ 0340861c
                       catch() { ... } // from try @ 03408758 with catch @ 0340861c */
    if ((MNPCOGBCAED != (System_Xml_XmlNode_o *)0x0) &&
       (plVar4 = (long *)(*(MNPCOGBCAED->klass->vtable)._13_get_ChildNodes.methodPtr)
                                   (MNPCOGBCAED,
                                    (MNPCOGBCAED->klass->vtable)._13_get_ChildNodes.method),
       plVar4 != (long *)0x0)) {
      plVar4 = (long *)(**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar10 = *plVar4;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
                    /* try { // try from 034086ac to 035086b3 has its CatchHandler @ 034086fc */
              puVar5 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_034086b8;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_034086b8:
                    /* try { // try from 034086c0 to 035086cb has its CatchHandler @ 034086f8 */
        uVar12 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        if ((uVar12 & 1) == 0) {
          plVar4 = (long *)thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
          if (plVar4 == (long *)0x0) {
            return;
          }
          lVar10 = *plVar4;
          uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar12 == 0) goto LAB_034088a4;
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          goto LAB_0340888c;
        }
        lVar10 = *plVar4;
                    /* try { // try from 034086cc to 035086eb has its CatchHandler @ 0340861c */
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
                    /* try { // try from 03408714 to 03508717 has its CatchHandler @ 03408740 */
              puVar5 = (undefined8 *)(lVar10 + (long)(*piVar13 + 1) * 0x10 + 0x138);
              goto LAB_03408718;
            }
                    /* try { // try from 034086ec to 035086ef has its CatchHandler @ 034086f4 */
            uVar12 = uVar12 - 1;
                    /* try { // try from 034086f0 to 03508713 has its CatchHandler @ 0340861c */
            piVar13 = piVar13 + 4;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034086ec with catch @ 034086f4
                        */
          } while (uVar12 != 0);
        }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034086c0 with catch @ 034086f8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034086ac with catch @ 034086fc
                        */
        puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,1);
LAB_03408718:
                    /* try { // try from 03408718 to 0350874f has its CatchHandler @ 0340861c */
        plVar6 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
                    /* catch() { ... } // from try @ 03408714 with catch @ 03408740 */
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
                    /* try { // try from 03408750 to 03508757 has its CatchHandler @ 0340876c */
                    /* try { // try from 03408758 to 03508763 has its CatchHandler @ 0340861c */
        if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
           (*(System_Xml_XmlNode_c **)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) !=
            System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(plVar6);
        }
                    /* try { // try from 03408764 to 0350876b has its CatchHandler @ 0340876c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03408750 with catch @ 0340876c
                       catch(type#2 @ 00000000) { ... } // from try @ 03408764 with catch @ 0340876c
                        */
        pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                 (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
        if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar7,StringLiteral_8409,(MethodInfo *)0x0);
        iVar3 = EIABCPKDEBD__EHJNCGCICMP(pSVar8,0,(MethodInfo *)0x0);
        pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                 (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
        if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar7,StringLiteral_6042,(MethodInfo *)0x0);
        JGGJNLLANAE = EIABCPKDEBD__FECKAJHFDJM(pSVar8,0,(MethodInfo *)0x0);
        pSVar9 = (__this->fields).HLIELGNFGLF;
        __this_00 = (MGNDHCBAPEN_int__uint__o *)thunk_FUN_01bda818(MGNDHCBAPEN<int,_uint>_TypeInfo);
        MGNDHCBAPEN<int,_uint>___ctor
                  (__this_00,iVar3,JGGJNLLANAE,Method_MGNDHCBAPEN<int,_uint>__ctor__);
        lVar10 = Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_uint>>_Add__;
        if (pSVar9 == (System_Collections_Generic_List_MGNDHCBAPEN_int__uint___o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pMVar11 = (pSVar9->fields)._items;
        (pSVar9->fields)._version = (pSVar9->fields)._version + 1;
        if (pMVar11 == (MGNDHCBAPEN_int__uint__array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar2 = (pSVar9->fields)._size;
        if (uVar2 < (uint)pMVar11->max_length) {
          (pSVar9->fields)._size = uVar2 + 1;
          pMVar11->m_Items[(int)uVar2] = __this_00;
          thunk_FUN_01c20e04(pMVar11->m_Items + (int)uVar2,__this_00);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar9,(Il2CppObject *)__this_00,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_0340888c:
    if (*(System_IDisposable_c **)(piVar13 + -2) == System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_034088c0;
    }
  }
LAB_034088a4:
  puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_034088c0:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return;
}

