// MGNPHCAAEIO.MACDOBFPDPP$$HNIHOIAMDPC @ RVA 0x3410364

/* WARNING: Removing unreachable block (ram,0x0351067c) */

void MGNPHCAAEIO_MACDOBFPDPP__HNIHOIAMDPC
               (MGNPHCAAEIO_MACDOBFPDPP_o *__this,System_Xml_XmlNode_o *MNPCOGBCAED,
               MethodInfo *method)

{
  int32_t length;
  byte bVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  HGLELMDNMMA_o *__this_00;
  System_Collections_Generic_List_HGLELMDNMMA__o *pSVar5;
  long lVar6;
  HGLELMDNMMA_array *pHVar7;
  ulong uVar8;
  int *piVar9;
  
  if ((DAT_0456807e & 1) == 0) {
    FUN_01bab630(&HGLELMDNMMA_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HGLELMDNMMA>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HGLELMDNMMA>_Clear__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_0456807e = 1;
  }
  pSVar5 = (__this->fields).GFBNJPMOEKD;
  if (pSVar5 != (System_Collections_Generic_List_HGLELMDNMMA__o *)0x0) {
    length = (pSVar5->fields)._size;
    (pSVar5->fields)._size = 0;
    (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar5->fields)._items,0,length,(MethodInfo *)0x0);
    }
    if ((MNPCOGBCAED != (System_Xml_XmlNode_o *)0x0) &&
       (plVar3 = (long *)(*(MNPCOGBCAED->klass->vtable)._13_get_ChildNodes.methodPtr)
                                   (MNPCOGBCAED,
                                    (MNPCOGBCAED->klass->vtable)._13_get_ChildNodes.method),
       plVar3 != (long *)0x0)) {
      plVar3 = (long *)(**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03510678 to 0361067f has its CatchHandler @ 03510760 */
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
              goto LAB_035104b0;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_035104b0:
        uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        if ((uVar8 & 1) == 0) {
          plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
          if (plVar3 == (long *)0x0) {
            return;
          }
          lVar6 = *plVar3;
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar8 == 0) goto LAB_0351061c;
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto LAB_03510604;
        }
        lVar6 = *plVar3;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 1) * 0x10 + 0x138);
              goto LAB_03510510;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
                    /* try { // try from 035104ec to 03610623 has its CatchHandler @ 035104ec
                       catch() { ... } // from try @ 035104ec with catch @ 035104ec
                       catch() { ... } // from try @ 035106e8 with catch @ 035104ec
                       catch() { ... } // from try @ 03510740 with catch @ 035104ec
                       catch() { ... } // from try @ 03510748 with catch @ 035104ec
                       catch() { ... } // from try @ 03510798 with catch @ 035104ec
                       catch() { ... } // from try @ 035107c8 with catch @ 035104ec */
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,1);
LAB_03510510:
        AHDGNOJPPIB = (System_Xml_XmlNode_o *)(*(code *)*puVar4)(plVar3,puVar4[1]);
        __this_00 = (HGLELMDNMMA_o *)thunk_FUN_01bda818(HGLELMDNMMA_TypeInfo);
        if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
          bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
          if (((AHDGNOJPPIB->klass->_2).naturalAligment < bVar1) ||
             ((AHDGNOJPPIB->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(AHDGNOJPPIB);
          }
        }
        HGLELMDNMMA___ctor(__this_00,AHDGNOJPPIB,(MethodInfo *)0x0);
        lVar6 = Method_System_Collections_Generic_List<HGLELMDNMMA>_Add__;
        pSVar5 = (__this->fields).GFBNJPMOEKD;
        if (pSVar5 == (System_Collections_Generic_List_HGLELMDNMMA__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pHVar7 = (pSVar5->fields)._items;
        (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
        if (pHVar7 == (HGLELMDNMMA_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar2 = (pSVar5->fields)._size;
        if (uVar2 < (uint)pHVar7->max_length) {
          (pSVar5->fields)._size = uVar2 + 1;
          pHVar7->m_Items[(int)uVar2] = __this_00;
          thunk_FUN_01c20e04(pHVar7->m_Items + (int)uVar2,__this_00);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)__this_00,
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
LAB_03510604:
    if (*(System_IDisposable_c **)(piVar9 + -2) == System_IDisposable_TypeInfo) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_03510638;
    }
  }
LAB_0351061c:
                    /* try { // try from 03510624 to 0361062b has its CatchHandler @ 0351077c */
  puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_03510638:
                    /* try { // try from 03510640 to 03610643 has its CatchHandler @ 03510758 */
  (*(code *)*puVar4)(plVar3,puVar4[1]);
                    /* try { // try from 03510644 to 0361064b has its CatchHandler @ 03510778 */
                    /* try { // try from 03510658 to 0361065f has its CatchHandler @ 0351076c */
  return;
}

