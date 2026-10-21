// KJBGNIGNECD$$HNIHOIAMDPC @ RVA 0x311EDB8

/* WARNING: Removing unreachable block (ram,0x0321f138) */
/* WARNING: Removing unreachable block (ram,0x0321f1ac) */

void KJBGNIGNECD__HNIHOIAMDPC
               (KJBGNIGNECD_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  int32_t iVar5;
  System_Collections_IEnumerator_o *pSVar6;
  VirtualInvokeData *pVVar7;
  long *plVar8;
  System_Xml_XmlAttributeCollection_o *pSVar9;
  System_Xml_XmlAttribute_o *pSVar10;
  System_String_o *pSVar11;
  KJBGNIGNECD_AHICALNEICM_o *__this_00;
  undefined8 *puVar12;
  System_Collections_Generic_List_KJBGNIGNECD_AHICALNEICM__o *pSVar13;
  System_Collections_IEnumerator_c *pSVar14;
  KJBGNIGNECD_AHICALNEICM_array *pKVar15;
  long lVar16;
  ulong uVar17;
  int32_t *piVar18;
  int *piVar19;
  
  if ((DAT_04566613 & 1) == 0) {
    FUN_01bab630(&KJBGNIGNECD_AHICALNEICM_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<KJBGNIGNECD_AHICALNEICM>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KJBGNIGNECD_AHICALNEICM>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KJBGNIGNECD_AHICALNEICM>_Sort__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_14694);
    FUN_01bab630(&StringLiteral_10213);
    DAT_04566613 = 1;
  }
  pSVar13 = (__this->fields).GJBLBEALOBO;
  if (pSVar13 != (System_Collections_Generic_List_KJBGNIGNECD_AHICALNEICM__o *)0x0) {
    iVar5 = (pSVar13->fields)._size;
    (pSVar13->fields)._size = 0;
    (pSVar13->fields)._version = (pSVar13->fields)._version + 1;
    if (0 < iVar5) {
      System_Array__Clear((System_Array_o *)(pSVar13->fields)._items,0,iVar5,(MethodInfo *)0x0);
    }
    if (AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) {
      return;
    }
    pSVar6 = System_Xml_XmlNode__GetEnumerator(AHDGNOJPPIB,(MethodInfo *)0x0);
    if (pSVar6 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      pSVar14 = pSVar6->klass;
      uVar2._0_1_ = (pSVar14->_2).rank;
      uVar2._1_1_ = (pSVar14->_2).minimumAlignment;
      uVar17 = (ulong)uVar2;
      if (uVar17 != 0) {
        piVar18 = &((pSVar14->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar18 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
            pVVar7 = pSVar14->vtable + *piVar18;
            goto LAB_0321ef10;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      pVVar7 = (VirtualInvokeData *)FUN_01b81914(pSVar6,System_Collections_IEnumerator_TypeInfo,0);
LAB_0321ef10:
      uVar17 = (*pVVar7->methodPtr)(pSVar6,pVVar7->method);
      if ((uVar17 & 1) == 0) {
        plVar8 = (long *)thunk_FUN_01bda71c(pSVar6,System_IDisposable_TypeInfo);
        if (plVar8 == (long *)0x0) goto LAB_0321f12c;
        lVar16 = *plVar8;
        uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar17 == 0) goto LAB_0321f104;
        piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        goto LAB_0321f0ec;
      }
      pSVar14 = pSVar6->klass;
      uVar3._0_1_ = (pSVar14->_2).rank;
      uVar3._1_1_ = (pSVar14->_2).minimumAlignment;
      uVar17 = (ulong)uVar3;
      if (uVar17 != 0) {
        piVar18 = &((pSVar14->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar18 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
            pVVar7 = pSVar14->vtable + (*piVar18 + 1);
            goto LAB_0321ef70;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      pVVar7 = (VirtualInvokeData *)FUN_01b81914(pSVar6,System_Collections_IEnumerator_TypeInfo,1);
LAB_0321ef70:
      plVar8 = (long *)(*pVVar7->methodPtr)(pSVar6,pVVar7->method);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
      if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
         (*(System_Xml_XmlNode_c **)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
          System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(plVar8);
      }
      pSVar9 = (System_Xml_XmlAttributeCollection_o *)
               (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
      if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                          (pSVar9,StringLiteral_10213,(MethodInfo *)0x0);
      pSVar11 = EIABCPKDEBD__JPKEHIBGOEM(pSVar10,(System_String_o *)0x0,(MethodInfo *)0x0);
      pSVar9 = (System_Xml_XmlAttributeCollection_o *)
               (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
      if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                          (pSVar9,StringLiteral_14694,(MethodInfo *)0x0);
      iVar5 = EIABCPKDEBD__EHJNCGCICMP(pSVar10,0,(MethodInfo *)0x0);
      pSVar13 = (__this->fields).GJBLBEALOBO;
      __this_00 = (KJBGNIGNECD_AHICALNEICM_o *)thunk_FUN_01bda818(KJBGNIGNECD_AHICALNEICM_TypeInfo);
      System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
      (__this_00->fields).JIJLBFGKNJK = pSVar11;
      thunk_FUN_01c20e04(&__this_00->fields,pSVar11);
      (__this_00->fields).NOPGBJNLFHM = iVar5;
      lVar16 = Method_System_Collections_Generic_List<KJBGNIGNECD_AHICALNEICM>_Add__;
      if (pSVar13 == (System_Collections_Generic_List_KJBGNIGNECD_AHICALNEICM__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pKVar15 = (pSVar13->fields)._items;
      (pSVar13->fields)._version = (pSVar13->fields)._version + 1;
      if (pKVar15 == (KJBGNIGNECD_AHICALNEICM_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar4 = (pSVar13->fields)._size;
      if (uVar4 < (uint)pKVar15->max_length) {
        (pSVar13->fields)._size = uVar4 + 1;
        pKVar15->m_Items[(int)uVar4] = __this_00;
        thunk_FUN_01c20e04(pKVar15->m_Items + (int)uVar4,__this_00);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar13,(Il2CppObject *)__this_00,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
      }
    } while( true );
  }
  goto LAB_0321f1a4;
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar19 = piVar19 + 4;
    if (uVar17 == 0) break;
LAB_0321f0ec:
    if (*(System_IDisposable_c **)(piVar19 + -2) == System_IDisposable_TypeInfo) {
      puVar12 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_0321f120;
    }
  }
LAB_0321f104:
  puVar12 = (undefined8 *)FUN_01b81914(plVar8,System_IDisposable_TypeInfo,0);
LAB_0321f120:
  (*(code *)*puVar12)(plVar8,puVar12[1]);
LAB_0321f12c:
  pSVar13 = (__this->fields).GJBLBEALOBO;
  if (pSVar13 != (System_Collections_Generic_List_KJBGNIGNECD_AHICALNEICM__o *)0x0) {
    System_Collections_Generic_List<object>__Sort
              ((System_Collections_Generic_List_object__o *)pSVar13,
               Method_System_Collections_Generic_List<KJBGNIGNECD_AHICALNEICM>_Sort__);
    return;
  }
LAB_0321f1a4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

