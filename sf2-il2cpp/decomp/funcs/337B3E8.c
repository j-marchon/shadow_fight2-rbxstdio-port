// IDDIABHBDEE$$KICMBBOLOPF @ RVA 0x337B3E8

/* WARNING: Removing unreachable block (ram,0x0347b918) */

void IDDIABHBDEE__KICMBBOLOPF
               (IDDIABHBDEE_o *__this,System_Xml_XmlNode_o *GGDPPDFOEOH,MethodInfo *method)

{
  ushort uVar1;
  uint uVar2;
  bool bVar3;
  int32_t iVar4;
  ulong uVar5;
  System_Collections_Generic_List_IMMCKCJBFIL__o *pSVar6;
  System_Collections_Generic_List_IMMCKCJBFIL__o **ppSVar7;
  System_Collections_Generic_IEnumerable_XmlNode__o *pSVar8;
  VirtualInvokeData *pVVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  IMMCKCJBFIL_o *__this_00;
  System_Xml_XmlAttributeCollection_o *pSVar13;
  System_Byte_array *pSVar14;
  System_Byte_array *pSVar15;
  System_String_o *pSVar16;
  System_Xml_XmlAttribute_o *pSVar17;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  System_Collections_Generic_IEnumerable_XmlNode__c *pSVar18;
  long lVar19;
  IMMCKCJBFIL_array *pIVar20;
  int32_t *piVar21;
  int *piVar22;
  
                    /* try { // try from 0347b404 to 0357b5ab has its CatchHandler @ 0347a0b0 */
  if ((DAT_04567b8d & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_253);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_254);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_255);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_256);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    FUN_01bab630(&IDDIABHBDEE_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<XmlNode>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<XmlNode>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&IMMCKCJBFIL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IMMCKCJBFIL>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IMMCKCJBFIL>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<IMMCKCJBFIL>_TypeInfo);
    DAT_04567b8d = 1;
  }
  if (GGDPPDFOEOH == (System_Xml_XmlNode_o *)0x0) {
    return;
  }
  uVar5 = (*(GGDPPDFOEOH->klass->vtable)._32_get_HasChildNodes.methodPtr)
                    (GGDPPDFOEOH,(GGDPPDFOEOH->klass->vtable)._32_get_HasChildNodes.method);
  if ((uVar5 & 1) == 0) {
    return;
  }
  pSVar6 = (System_Collections_Generic_List_IMMCKCJBFIL__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<IMMCKCJBFIL>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar6,
             Method_System_Collections_Generic_List<IMMCKCJBFIL>__ctor__);
  if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  ppSVar7 = &FCJBEKHDLAF_TypeInfo->static_fields->HNDFFEDLPGG;
  *ppSVar7 = pSVar6;
  thunk_FUN_01c20e04(ppSVar7,pSVar6);
  method_00 = extraout_x1;
  if ((IDDIABHBDEE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method_00 = extraout_x1_00;
  }
  pSVar8 = IDDIABHBDEE__HJNLDOCBHPD(GGDPPDFOEOH,method_00);
  if (pSVar8 == (System_Collections_Generic_IEnumerable_XmlNode__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar18 = pSVar8->klass;
  uVar1._0_1_ = (pSVar18->_2).rank;
  uVar1._1_1_ = (pSVar18->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar21 = &((pSVar18->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar21 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IEnumerable<XmlNode>_TypeInfo) {
                    /* try { // try from 0347b5ac to 0357b60b has its CatchHandler @ 0347b934 */
        pVVar9 = pSVar18->vtable + *piVar21;
        goto LAB_0347b5b4;
      }
      uVar5 = uVar5 - 1;
      piVar21 = piVar21 + 4;
    } while (uVar5 != 0);
  }
  pVVar9 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IEnumerable<XmlNode>_TypeInfo,0);
LAB_0347b5b4:
  plVar10 = (long *)(*pVVar9->methodPtr)(pSVar8,pVVar9->method);
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar19 = *plVar10;
    uVar5 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar5 != 0) {
      piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar22 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
                    /* try { // try from 0347b628 to 0357b63b has its CatchHandler @ 0347b934 */
          puVar11 = (undefined8 *)(lVar19 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_0347b634;
        }
        uVar5 = uVar5 - 1;
                    /* try { // try from 0347b610 to 0357b617 has its CatchHandler @ 0347b85c */
        piVar22 = piVar22 + 4;
      } while (uVar5 != 0);
    }
    puVar11 = (undefined8 *)FUN_01b81914(plVar10,System_Collections_IEnumerator_TypeInfo,0);
LAB_0347b634:
                    /* try { // try from 0347b63c to 0357b643 has its CatchHandler @ 0347b78c */
    uVar5 = (*(code *)*puVar11)(plVar10,puVar11[1]);
    if ((uVar5 & 1) == 0) {
      if (plVar10 == (long *)0x0) {
        return;
      }
      lVar19 = *plVar10;
      uVar5 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar5 == 0) goto LAB_0347b8b0;
                    /* try { // try from 0347b894 to 0357b897 has its CatchHandler @ 0347b8a8 */
      piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      break;
    }
                    /* try { // try from 0347b644 to 0357b647 has its CatchHandler @ 0347b77c */
    lVar19 = *plVar10;
                    /* try { // try from 0347b648 to 0357b64b has its CatchHandler @ 0347b764 */
                    /* try { // try from 0347b64c to 0357b64f has its CatchHandler @ 0347b848 */
    uVar5 = (ulong)*(ushort *)(lVar19 + 0x12e);
                    /* try { // try from 0347b650 to 0357b653 has its CatchHandler @ 0347b738 */
                    /* try { // try from 0347b654 to 0357b657 has its CatchHandler @ 0347b734 */
                    /* try { // try from 0347b658 to 0357b65b has its CatchHandler @ 0347b730 */
    if (uVar5 != 0) {
                    /* try { // try from 0347b65c to 0357b65f has its CatchHandler @ 0347b72c */
                    /* try { // try from 0347b660 to 0357b663 has its CatchHandler @ 0347b848 */
      piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
                    /* try { // try from 0347b664 to 0357b66b has its CatchHandler @ 0347b710 */
                    /* try { // try from 0347b66c to 0357b673 has its CatchHandler @ 0347b770 */
        if (*(System_Collections_Generic_IEnumerator_XmlNode__c **)(piVar22 + -2) ==
            System_Collections_Generic_IEnumerator<XmlNode>_TypeInfo) {
                    /* try { // try from 0347b68c to 0357b68f has its CatchHandler @ 0347b758 */
                    /* try { // try from 0347b690 to 0357b697 has its CatchHandler @ 0347b768 */
          puVar11 = (undefined8 *)(lVar19 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_0347b698;
        }
        uVar5 = uVar5 - 1;
                    /* try { // try from 0347b674 to 0357b677 has its CatchHandler @ 0347a0b0 */
        piVar22 = piVar22 + 4;
                    /* try { // try from 0347b678 to 0357b683 has its CatchHandler @ 0347b848 */
      } while (uVar5 != 0);
    }
                    /* try { // try from 0347b684 to 0357b687 has its CatchHandler @ 0347b758 */
    puVar11 = (undefined8 *)
              FUN_01b81914(plVar10,System_Collections_Generic_IEnumerator<XmlNode>_TypeInfo,0);
                    /* try { // try from 0347b688 to 0357b68b has its CatchHandler @ 0347b6fc */
LAB_0347b698:
                    /* try { // try from 0347b698 to 0357b69b has its CatchHandler @ 0347b6e4 */
                    /* try { // try from 0347b69c to 0357b6a7 has its CatchHandler @ 0347b768 */
    plVar12 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
                    /* try { // try from 0347b6a8 to 0357b6af has its CatchHandler @ 0347b6f4 */
                    /* try { // try from 0347b6b0 to 0357b6b7 has its CatchHandler @ 0347a0b0 */
    __this_00 = (IMMCKCJBFIL_o *)thunk_FUN_01bda818(IMMCKCJBFIL_TypeInfo);
                    /* try { // try from 0347b6b8 to 0357b6bb has its CatchHandler @ 0347b6d4 */
                    /* try { // try from 0347b6bc to 0357b6bf has its CatchHandler @ 0347b6cc */
                    /* catch() { ... } // from try @ 0347ad40 with catch @ 0347b6c0
                       try { // try from 0347b6c0 to 0357b7af has its CatchHandler @ 0347a0b0 */
    IMMCKCJBFIL___ctor(__this_00,(MethodInfo *)0x0);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* catch() { ... } // from try @ 0347b6bc with catch @ 0347b6cc */
                    /* catch() { ... } // from try @ 0347b2c4 with catch @ 0347b6d0 */
                    /* catch() { ... } // from try @ 0347b6b8 with catch @ 0347b6d4 */
                    /* catch() { ... } // from try @ 0347b324 with catch @ 0347b6d8 */
    pSVar13 = (System_Xml_XmlAttributeCollection_o *)
              (**(code **)(*plVar12 + 0x238))(plVar12,*(undefined8 *)(*plVar12 + 0x240));
                    /* catch() { ... } // from try @ 0347b2c8 with catch @ 0347b6dc */
                    /* catch() { ... } // from try @ 0347aba4 with catch @ 0347b6e0 */
                    /* catch() { ... } // from try @ 0347b698 with catch @ 0347b6e4 */
                    /* catch() { ... } // from try @ 0347b288 with catch @ 0347b6e8 */
    pSVar14 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* catch() { ... } // from try @ 0347b29c with catch @ 0347b6ec */
                    /* catch() { ... } // from try @ 0347b2ac with catch @ 0347b6f0 */
                    /* catch() { ... } // from try @ 0347b6a8 with catch @ 0347b6f4 */
                    /* catch() { ... } // from try @ 0347a694 with catch @ 0347b6f8 */
                    /* catch() { ... } // from try @ 0347b688 with catch @ 0347b6fc */
                    /* catch() { ... } // from try @ 0347b270 with catch @ 0347b700 */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar14,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_253,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0347b3e0 with catch @ 0347b704 */
                    /* catch() { ... } // from try @ 0347a754 with catch @ 0347b708 */
                    /* catch() { ... } // from try @ 0347b378 with catch @ 0347b70c */
    pSVar15 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* catch() { ... } // from try @ 0347b664 with catch @ 0347b710 */
                    /* catch() { ... } // from try @ 0347a660 with catch @ 0347b714 */
                    /* catch() { ... } // from try @ 0347a708 with catch @ 0347b718 */
                    /* catch() { ... } // from try @ 0347a76c with catch @ 0347b71c */
                    /* catch() { ... } // from try @ 0347a668 with catch @ 0347b720 */
                    /* catch() { ... } // from try @ 0347a720 with catch @ 0347b724 */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar15,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_254,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0347a780 with catch @ 0347b728 */
                    /* catch() { ... } // from try @ 0347b65c with catch @ 0347b72c */
                    /* catch() { ... } // from try @ 0347b658 with catch @ 0347b730 */
                    /* catch() { ... } // from try @ 0347b654 with catch @ 0347b734 */
    pSVar16 = OMHODMCHILE__NPKGDBHJKCK(pSVar14,pSVar15,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0347b650 with catch @ 0347b738 */
                    /* catch() { ... } // from try @ 0347aa7c with catch @ 0347b73c */
    if (pSVar13 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* catch() { ... } // from try @ 0347a684 with catch @ 0347b740 */
                    /* catch() { ... } // from try @ 0347a728 with catch @ 0347b744 */
                    /* catch() { ... } // from try @ 0347a648 with catch @ 0347b748 */
    pSVar17 = System_Xml_XmlAttributeCollection__get_ItemOf(pSVar13,pSVar16,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0347b348 with catch @ 0347b74c */
                    /* catch() { ... } // from try @ 0347b354 with catch @ 0347b750 */
                    /* catch() { ... } // from try @ 0347b258 with catch @ 0347b754 */
    iVar4 = EIABCPKDEBD__EHJNCGCICMP(pSVar17,0,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0347b684 with catch @ 0347b758
                       catch() { ... } // from try @ 0347b68c with catch @ 0347b758 */
    if (__this_00 == (IMMCKCJBFIL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* catch() { ... } // from try @ 0347b364 with catch @ 0347b75c */
    (__this_00->fields).PHEIFGLOCKI = iVar4;
                    /* catch() { ... } // from try @ 0347b24c with catch @ 0347b760 */
                    /* catch() { ... } // from try @ 0347b648 with catch @ 0347b764 */
                    /* catch() { ... } // from try @ 0347b690 with catch @ 0347b768
                       catch() { ... } // from try @ 0347b69c with catch @ 0347b768 */
                    /* catch() { ... } // from try @ 0347a6b0 with catch @ 0347b76c */
                    /* catch() { ... } // from try @ 0347b66c with catch @ 0347b770 */
    pSVar13 = (System_Xml_XmlAttributeCollection_o *)
              (**(code **)(*plVar12 + 0x238))(plVar12,*(undefined8 *)(*plVar12 + 0x240));
                    /* catch() { ... } // from try @ 0347a61c with catch @ 0347b774 */
                    /* catch() { ... } // from try @ 0347a630 with catch @ 0347b778 */
                    /* catch() { ... } // from try @ 0347b644 with catch @ 0347b77c */
                    /* catch() { ... } // from try @ 0347ab10 with catch @ 0347b780 */
    pSVar14 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* catch() { ... } // from try @ 0347b1e4 with catch @ 0347b784 */
                    /* catch() { ... } // from try @ 0347b188 with catch @ 0347b788 */
                    /* catch() { ... } // from try @ 0347b63c with catch @ 0347b78c */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar14,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_255,(MethodInfo *)0x0);
    pSVar15 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0347b7b0 to 0357b7b3 has its CatchHandler @ 0347b7c4 */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar15,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_256,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0347b7b0 with catch @ 0347b7c4 */
    pSVar16 = OMHODMCHILE__NPKGDBHJKCK(pSVar14,pSVar15,(MethodInfo *)0x0);
    if (pSVar13 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 0347b7d4 to 0357b847 has its CatchHandler @ 0347b934 */
    pSVar17 = System_Xml_XmlAttributeCollection__get_ItemOf(pSVar13,pSVar16,(MethodInfo *)0x0);
    bVar3 = EIABCPKDEBD__FMBMNDIGLIG(pSVar17,false,(MethodInfo *)0x0);
    (__this_00->fields).KLNEKCFJPDB = bVar3;
    if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    lVar19 = Method_System_Collections_Generic_List<IMMCKCJBFIL>_Add__;
    pSVar6 = FCJBEKHDLAF_TypeInfo->static_fields->HNDFFEDLPGG;
    if (pSVar6 == (System_Collections_Generic_List_IMMCKCJBFIL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pIVar20 = (pSVar6->fields)._items;
    (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
    if (pIVar20 == (IMMCKCJBFIL_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar2 = (pSVar6->fields)._size;
    if (uVar2 < (uint)pIVar20->max_length) {
      (pSVar6->fields)._size = uVar2 + 1;
      pIVar20->m_Items[(int)uVar2] = __this_00;
                    /* catch() { ... } // from try @ 0347b64c with catch @ 0347b848
                       catch() { ... } // from try @ 0347b660 with catch @ 0347b848
                       catch() { ... } // from try @ 0347b678 with catch @ 0347b848
                       try { // try from 0347b848 to 0357b893 has its CatchHandler @ 0347a0b0 */
                    /* catch() { ... } // from try @ 0347abc8 with catch @ 0347b84c */
                    /* catch() { ... } // from try @ 0347a5b4 with catch @ 0347b850 */
      thunk_FUN_01c20e04(pIVar20->m_Items + (int)uVar2,__this_00);
                    /* catch() { ... } // from try @ 0347a554 with catch @ 0347b854 */
    }
    else {
                    /* catch() { ... } // from try @ 0347aa90 with catch @ 0347b858 */
                    /* catch() { ... } // from try @ 0347b610 with catch @ 0347b85c */
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)__this_00,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
    }
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
                    /* catch() { ... } // from try @ 0347b894 with catch @ 0347b8a8 */
    piVar22 = piVar22 + 4;
    if (uVar5 == 0) break;
    if (*(System_IDisposable_c **)(piVar22 + -2) == System_IDisposable_TypeInfo) {
      puVar11 = (undefined8 *)(lVar19 + (long)*piVar22 * 0x10 + 0x138);
      goto LAB_0347b8cc;
    }
  }
LAB_0347b8b0:
                    /* try { // try from 0347b8b8 to 0357b91f has its CatchHandler @ 0347b934 */
  puVar11 = (undefined8 *)FUN_01b81914(plVar10,System_IDisposable_TypeInfo,0);
LAB_0347b8cc:
  (*(code *)*puVar11)(plVar10,puVar11[1]);
  return;
}

