// KDDFEFJOIJP$$HNIHOIAMDPC @ RVA 0x32E5114

/* WARNING: Removing unreachable block (ram,0x033e543c) */

void KDDFEFJOIJP__HNIHOIAMDPC
               (KDDFEFJOIJP_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  int32_t length;
  byte bVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  System_Xml_XmlNode_o *AHDGNOJPPIB_00;
  MBALPICJBHF_o *__this_00;
  System_Collections_Generic_List_MBALPICJBHF__o *pSVar5;
  long lVar6;
  MBALPICJBHF_array *pMVar7;
  ulong uVar8;
  int *piVar9;
  
  if ((DAT_04567605 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MBALPICJBHF>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MBALPICJBHF>_Clear__);
    FUN_01bab630(&MBALPICJBHF_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_04567605 = 1;
  }
  pSVar5 = (__this->fields).HBDMPPHKBMP;
  if (pSVar5 != (System_Collections_Generic_List_MBALPICJBHF__o *)0x0) {
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
              goto LAB_033e5260;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_033e5260:
        uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        if ((uVar8 & 1) == 0) {
          plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
          if (plVar3 == (long *)0x0) {
            return;
          }
          lVar6 = *plVar3;
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar8 == 0) goto LAB_033e53d8;
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto LAB_033e53c0;
        }
        lVar6 = *plVar3;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 1) * 0x10 + 0x138);
              goto LAB_033e52c0;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,1);
LAB_033e52c0:
        AHDGNOJPPIB_00 = (System_Xml_XmlNode_o *)(*(code *)*puVar4)(plVar3,puVar4[1]);
        if (AHDGNOJPPIB_00 != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 033e52dc to 034e542b has its CatchHandler @ 033e52dc
                       catch() { ... } // from try @ 033e52dc with catch @ 033e52dc
                       catch() { ... } // from try @ 033e54a0 with catch @ 033e52dc
                       catch() { ... } // from try @ 033e5504 with catch @ 033e52dc
                       catch() { ... } // from try @ 033e5540 with catch @ 033e52dc
                       catch() { ... } // from try @ 033e5580 with catch @ 033e52dc */
          bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
          if (((AHDGNOJPPIB_00->klass->_2).naturalAligment < bVar1) ||
             ((AHDGNOJPPIB_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(AHDGNOJPPIB_00);
          }
        }
        __this_00 = (MBALPICJBHF_o *)thunk_FUN_01bda818(MBALPICJBHF_TypeInfo);
        MBALPICJBHF___ctor(__this_00,(MethodInfo *)0x0);
        if (__this_00 == (MBALPICJBHF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 033e542c to 034e5433 has its CatchHandler @ 033e5524 */
          FUN_01bab8c8();
        }
        MBALPICJBHF__HNIHOIAMDPC(__this_00,AHDGNOJPPIB_00,(MethodInfo *)0x0);
        lVar6 = Method_System_Collections_Generic_List<MBALPICJBHF>_Add__;
        pSVar5 = (__this->fields).HBDMPPHKBMP;
        if (pSVar5 == (System_Collections_Generic_List_MBALPICJBHF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pMVar7 = (pSVar5->fields)._items;
        (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
        if (pMVar7 == (MBALPICJBHF_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar2 = (pSVar5->fields)._size;
        if (uVar2 < (uint)pMVar7->max_length) {
          (pSVar5->fields)._size = uVar2 + 1;
          pMVar7->m_Items[(int)uVar2] = __this_00;
          thunk_FUN_01c20e04(pMVar7->m_Items + (int)uVar2,__this_00);
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
LAB_033e53c0:
    if (*(System_IDisposable_c **)(piVar9 + -2) == System_IDisposable_TypeInfo) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_033e53f4;
    }
  }
LAB_033e53d8:
  puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_033e53f4:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return;
}

