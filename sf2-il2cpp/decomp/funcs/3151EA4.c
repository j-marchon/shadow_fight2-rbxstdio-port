// LKHOKLCLKNH$$HNIHOIAMDPC @ RVA 0x3151EA4

/* WARNING: Removing unreachable block (ram,0x032522cc) */

void LKHOKLCLKNH__HNIHOIAMDPC
               (LKHOKLCLKNH_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  int32_t length;
  byte bVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  LFHAMPFFNHB_o *__this_00;
  System_Xml_XmlAttributeCollection_o *pSVar6;
  System_Xml_XmlAttribute_o *pSVar7;
  System_String_o *pSVar8;
  System_Collections_Generic_List_LFHAMPFFNHB__o *pSVar9;
  long lVar10;
  LFHAMPFFNHB_array *pLVar11;
  ulong uVar12;
  int *piVar13;
  
  if ((DAT_04566815 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&LFHAMPFFNHB_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<LFHAMPFFNHB>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LFHAMPFFNHB>_Clear__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_11734);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_13991);
    DAT_04566815 = 1;
  }
  pSVar9 = (__this->fields).MLOBEIMDBGE;
  if (pSVar9 != (System_Collections_Generic_List_LFHAMPFFNHB__o *)0x0) {
    length = (pSVar9->fields)._size;
    (pSVar9->fields)._size = 0;
    (pSVar9->fields)._version = (pSVar9->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar9->fields)._items,0,length,(MethodInfo *)0x0);
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
        lVar10 = *plVar3;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar4 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_03252024;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_03252024:
        uVar12 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        if ((uVar12 & 1) == 0) {
          plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
          if (plVar3 == (long *)0x0) {
            return;
          }
          lVar10 = *plVar3;
          uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar12 == 0) goto LAB_03252258;
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          goto LAB_03252240;
        }
        lVar10 = *plVar3;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar4 = (undefined8 *)(lVar10 + (long)(*piVar13 + 1) * 0x10 + 0x138);
              goto LAB_03252084;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,1);
LAB_03252084:
        plVar5 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
        if (plVar5 != (long *)0x0) {
          bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
          if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
             (*(System_Xml_XmlNode_c **)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) !=
              System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(plVar5);
          }
        }
        __this_00 = (LFHAMPFFNHB_o *)thunk_FUN_01bda818(LFHAMPFFNHB_TypeInfo);
        LFHAMPFFNHB___ctor(__this_00,(MethodInfo *)0x0);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar6 = (System_Xml_XmlAttributeCollection_o *)
                 (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
        if (pSVar6 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar6,StringLiteral_13991,(MethodInfo *)0x0);
        pSVar8 = EIABCPKDEBD__JPKEHIBGOEM(pSVar7,(System_String_o *)0x0,(MethodInfo *)0x0);
        if (__this_00 == (LFHAMPFFNHB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        (__this_00->fields).BGHFADDGPAD = pSVar8;
        thunk_FUN_01c20e04();
        pSVar6 = (System_Xml_XmlAttributeCollection_o *)
                 (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
        if (pSVar6 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 032522ac to 033522af has its CatchHandler @ 03252308 */
          FUN_01bab8c8();
        }
        pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar6,StringLiteral_11734,(MethodInfo *)0x0);
        pSVar8 = EIABCPKDEBD__JPKEHIBGOEM(pSVar7,(System_String_o *)0x0,(MethodInfo *)0x0);
        (__this_00->fields).ICLBJHEAFOP = pSVar8;
        thunk_FUN_01c20e04();
        pSVar6 = (System_Xml_XmlAttributeCollection_o *)
                 (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
        if (pSVar6 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar6,StringLiteral_9327,(MethodInfo *)0x0);
        pSVar8 = EIABCPKDEBD__JPKEHIBGOEM(pSVar7,(System_String_o *)0x0,(MethodInfo *)0x0);
        (__this_00->fields).BMGMGAAPFGO = pSVar8;
        thunk_FUN_01c20e04();
        lVar10 = Method_System_Collections_Generic_List<LFHAMPFFNHB>_Add__;
        pSVar9 = (__this->fields).MLOBEIMDBGE;
        if (pSVar9 == (System_Collections_Generic_List_LFHAMPFFNHB__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pLVar11 = (pSVar9->fields)._items;
        (pSVar9->fields)._version = (pSVar9->fields)._version + 1;
        if (pLVar11 == (LFHAMPFFNHB_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 032522bc to 033522c7 has its CatchHandler @ 03252318 */
          FUN_01bab8c8();
        }
        uVar2 = (pSVar9->fields)._size;
        if (uVar2 < (uint)pLVar11->max_length) {
          (pSVar9->fields)._size = uVar2 + 1;
          pLVar11->m_Items[(int)uVar2] = __this_00;
          thunk_FUN_01c20e04(pLVar11->m_Items + (int)uVar2,__this_00);
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
LAB_03252240:
    if (*(System_IDisposable_c **)(piVar13 + -2) == System_IDisposable_TypeInfo) {
      puVar4 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_03252274;
    }
  }
LAB_03252258:
                    /* try { // try from 0325225c to 033522ab has its CatchHandler @ 0325225c
                       catch() { ... } // from try @ 0325225c with catch @ 0325225c
                       catch() { ... } // from try @ 032522ec with catch @ 0325225c
                       catch() { ... } // from try @ 0325234c with catch @ 0325225c
                       catch() { ... } // from try @ 032526b8 with catch @ 0325225c */
  puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_03252274:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return;
}

