// IDDIABHBDEE$$PFJLDGCOLOE @ RVA 0x337D3F0

/* WARNING: Removing unreachable block (ram,0x0347da60) */

void IDDIABHBDEE__PFJLDGCOLOE
               (IDDIABHBDEE_o *__this,System_Xml_XmlNode_o *GGDPPDFOEOH,MethodInfo *method)

{
  ushort uVar1;
  int32_t iVar2;
  FJAFBCCNPIK_o *pFVar3;
  System_Collections_Generic_IEnumerable_XmlNode__o *pSVar4;
  VirtualInvokeData *pVVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  LJNDBPEOILF_o *__this_00;
  System_Xml_XmlAttributeCollection_o *pSVar9;
  System_Byte_array *pSVar10;
  System_Byte_array *pSVar11;
  System_String_o *pSVar12;
  System_Xml_XmlAttribute_o *pSVar13;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  System_Collections_Generic_IEnumerable_XmlNode__c *pSVar14;
  long lVar15;
  ulong uVar16;
  int32_t *piVar17;
  int *piVar18;
  
  if ((DAT_04567b94 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_269);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_270);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_271);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_272);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_273);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_274);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_275);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_276);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_277);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_278);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_DADDKDFBPIJ<LJNDBPEOILF>_FIFBDNADAAL__);
    FUN_01bab630(&Method_DADDKDFBPIJ<LJNDBPEOILF>_NDNPGAKJLHM__);
    FUN_01bab630(&IDDIABHBDEE_TypeInfo);
                    /* try { // try from 0347d4c4 to 0357d4cb has its CatchHandler @ 0347d8dc */
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<XmlNode>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<XmlNode>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
                    /* try { // try from 0347d4f8 to 0357d503 has its CatchHandler @ 0347d8cc */
    FUN_01bab630(&LJNDBPEOILF_TypeInfo);
                    /* try { // try from 0347d504 to 0357d50f has its CatchHandler @ 0347d8d8 */
    DAT_04567b94 = 1;
  }
  if (GGDPPDFOEOH == (System_Xml_XmlNode_o *)0x0) {
    return;
  }
  pFVar3 = (__this->fields)._LKIDNNOFFON_k__BackingField;
  if (pFVar3 != (FJAFBCCNPIK_o *)0x0) {
                    /* try { // try from 0347d520 to 0357d52b has its CatchHandler @ 0347d8f0 */
    DADDKDFBPIJ<object>__NDNPGAKJLHM
              ((DADDKDFBPIJ_T__o *)pFVar3,Method_DADDKDFBPIJ<LJNDBPEOILF>_NDNPGAKJLHM__);
                    /* try { // try from 0347d534 to 0357d53b has its CatchHandler @ 0347d8f8 */
    method_00 = extraout_x1;
    if ((IDDIABHBDEE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      method_00 = extraout_x1_00;
    }
    pSVar4 = IDDIABHBDEE__HJNLDOCBHPD(GGDPPDFOEOH,method_00);
    if (pSVar4 != (System_Collections_Generic_IEnumerable_XmlNode__o *)0x0) {
                    /* try { // try from 0347d548 to 0357d553 has its CatchHandler @ 0347d8fc */
      pSVar14 = pSVar4->klass;
      uVar1._0_1_ = (pSVar14->_2).rank;
      uVar1._1_1_ = (pSVar14->_2).minimumAlignment;
      uVar16 = (ulong)uVar1;
      if (uVar16 != 0) {
                    /* try { // try from 0347d568 to 0357d56f has its CatchHandler @ 0347d60c */
        piVar17 = &((pSVar14->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar17 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_Generic_IEnumerable<XmlNode>_TypeInfo) {
            pVVar5 = pSVar14->vtable + *piVar17;
            goto LAB_0347d5a0;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
                    /* try { // try from 0347d58c to 0357d597 has its CatchHandler @ 0347d604 */
      pVVar5 = (VirtualInvokeData *)
               FUN_01b81914(pSVar4,System_Collections_Generic_IEnumerable<XmlNode>_TypeInfo,0);
LAB_0347d5a0:
                    /* try { // try from 0347d5a0 to 0357d5a7 has its CatchHandler @ 0347d600 */
      plVar6 = (long *)(*pVVar5->methodPtr)(pSVar4,pVVar5->method);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar15 = *plVar6;
        uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
                    /* try { // try from 0347d5d8 to 0357d5e3 has its CatchHandler @ 0347d8e0 */
        if (uVar16 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar18 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
                    /* catch() { ... } // from try @ 0347d568 with catch @ 0347d60c */
              puVar7 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_0347d618;
            }
            uVar16 = uVar16 - 1;
            piVar18 = piVar18 + 4;
                    /* try { // try from 0347d5f8 to 0357d5fb has its CatchHandler @ 0347d608 */
          } while (uVar16 != 0);
        }
                    /* try { // try from 0347d5fc to 0357d61f has its CatchHandler @ 0347d2a4 */
                    /* catch() { ... } // from try @ 0347d5a0 with catch @ 0347d600 */
                    /* catch() { ... } // from try @ 0347d58c with catch @ 0347d604 */
        puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,0);
                    /* catch() { ... } // from try @ 0347d5f8 with catch @ 0347d608 */
LAB_0347d618:
                    /* try { // try from 0347d620 to 0357d623 has its CatchHandler @ 0347d8c0 */
        uVar16 = (*(code *)*puVar7)(plVar6,puVar7[1]);
                    /* try { // try from 0347d624 to 0357d87b has its CatchHandler @ 0347d2a4 */
        if ((uVar16 & 1) == 0) {
          if (plVar6 == (long *)0x0) {
            return;
          }
          lVar15 = *plVar6;
          uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar16 == 0) goto LAB_0347d9f0;
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          goto LAB_0347d9d8;
        }
        lVar15 = *plVar6;
        uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar16 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(System_Collections_Generic_IEnumerator_XmlNode__c **)(piVar18 + -2) ==
                System_Collections_Generic_IEnumerator<XmlNode>_TypeInfo) {
              puVar7 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_0347d67c;
            }
            uVar16 = uVar16 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar16 != 0);
        }
        puVar7 = (undefined8 *)
                 FUN_01b81914(plVar6,System_Collections_Generic_IEnumerator<XmlNode>_TypeInfo,0);
LAB_0347d67c:
        plVar8 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
        pFVar3 = (__this->fields)._LKIDNNOFFON_k__BackingField;
        __this_00 = (LJNDBPEOILF_o *)thunk_FUN_01bda818(LJNDBPEOILF_TypeInfo);
        LJNDBPEOILF___ctor(__this_00,(MethodInfo *)0x0);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                 (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
        pSVar10 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar10,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_269,
                   (MethodInfo *)0x0);
        pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar11,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_270,
                   (MethodInfo *)0x0);
        pSVar12 = OMHODMCHILE__NPKGDBHJKCK(pSVar10,pSVar11,(MethodInfo *)0x0);
        if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar13 = System_Xml_XmlAttributeCollection__get_ItemOf(pSVar9,pSVar12,(MethodInfo *)0x0);
        iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar13,0,(MethodInfo *)0x0);
        if (__this_00 == (LJNDBPEOILF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        (__this_00->fields)._MDAJFAPLLOH_k__BackingField = iVar2;
        pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                 (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
        pSVar10 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar10,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_271,
                   (MethodInfo *)0x0);
        pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar11,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_272,
                   (MethodInfo *)0x0);
        pSVar12 = OMHODMCHILE__NPKGDBHJKCK(pSVar10,pSVar11,(MethodInfo *)0x0);
        if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar13 = System_Xml_XmlAttributeCollection__get_ItemOf(pSVar9,pSVar12,(MethodInfo *)0x0);
        iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar13,0,(MethodInfo *)0x0);
        (__this_00->fields)._PFHJDMOFFOG_k__BackingField = iVar2;
        pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                 (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
        pSVar10 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar10,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_273,
                   (MethodInfo *)0x0);
        pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar11,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_274,
                   (MethodInfo *)0x0);
        pSVar12 = OMHODMCHILE__NPKGDBHJKCK(pSVar10,pSVar11,(MethodInfo *)0x0);
        if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar13 = System_Xml_XmlAttributeCollection__get_ItemOf(pSVar9,pSVar12,(MethodInfo *)0x0);
        iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar13,0,(MethodInfo *)0x0);
        (__this_00->fields)._HJCAAIENJFP_k__BackingField = iVar2;
                    /* try { // try from 0347d87c to 0357d893 has its CatchHandler @ 0347d96c */
        pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                 (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
        pSVar10 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0347d894 to 0357d897 has its CatchHandler @ 0347d2a4 */
                    /* try { // try from 0347d898 to 0357d89f has its CatchHandler @ 0347d8f4 */
                    /* try { // try from 0347d8a0 to 0357d8a3 has its CatchHandler @ 0347d8ec */
                    /* try { // try from 0347d8a4 to 0357d8a7 has its CatchHandler @ 0347d8e4 */
                    /* try { // try from 0347d8a8 to 0357d8b7 has its CatchHandler @ 0347d2a4 */
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar10,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_275,
                   (MethodInfo *)0x0);
        pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0347d8b8 to 0357d8bb has its CatchHandler @ 0347d8d4 */
                    /* try { // try from 0347d8bc to 0357d8bf has its CatchHandler @ 0347d8d0 */
                    /* catch() { ... } // from try @ 0347d620 with catch @ 0347d8c0
                       try { // try from 0347d8c0 to 0357d90f has its CatchHandler @ 0347d2a4 */
                    /* catch() { ... } // from try @ 0347d4f8 with catch @ 0347d8cc */
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar11,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_276,
                   (MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0347d8bc with catch @ 0347d8d0 */
                    /* catch() { ... } // from try @ 0347d8b8 with catch @ 0347d8d4 */
                    /* catch() { ... } // from try @ 0347d504 with catch @ 0347d8d8 */
                    /* catch() { ... } // from try @ 0347d4c4 with catch @ 0347d8dc */
        pSVar12 = OMHODMCHILE__NPKGDBHJKCK(pSVar10,pSVar11,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0347d5d8 with catch @ 0347d8e0 */
                    /* catch() { ... } // from try @ 0347d8a4 with catch @ 0347d8e4 */
        if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
                    /* catch() { ... } // from try @ 0347d5b4 with catch @ 0347d8e8 */
                    /* catch() { ... } // from try @ 0347d8a0 with catch @ 0347d8ec */
                    /* catch() { ... } // from try @ 0347d520 with catch @ 0347d8f0 */
        pSVar13 = System_Xml_XmlAttributeCollection__get_ItemOf(pSVar9,pSVar12,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0347d898 with catch @ 0347d8f4 */
                    /* catch() { ... } // from try @ 0347d534 with catch @ 0347d8f8 */
                    /* catch() { ... } // from try @ 0347d548 with catch @ 0347d8fc */
        iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar13,0,(MethodInfo *)0x0);
        (__this_00->fields)._LMJLNBNGPPM_k__BackingField = iVar2;
                    /* try { // try from 0347d910 to 0357d913 has its CatchHandler @ 0347d940 */
                    /* try { // try from 0347d914 to 0357d94f has its CatchHandler @ 0347d2a4 */
        pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                 (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
        pSVar10 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar10,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_277,
                   (MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0347d910 with catch @ 0347d940 */
        pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0347d950 to 0357d957 has its CatchHandler @ 0347d96c */
                    /* try { // try from 0347d958 to 0357d963 has its CatchHandler @ 0347d2a4 */
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar11,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_278,
                   (MethodInfo *)0x0);
                    /* try { // try from 0347d964 to 0357d96b has its CatchHandler @ 0347d96c */
                    /* catch() { ... } // from try @ 0347d87c with catch @ 0347d96c
                       catch() { ... } // from try @ 0347d950 with catch @ 0347d96c
                       catch() { ... } // from try @ 0347d964 with catch @ 0347d96c */
                    /* try { // try from 0347d970 to 0357dadb has its CatchHandler @ 0347d970
                       catch() { ... } // from try @ 0347d970 with catch @ 0347d970
                       catch() { ... } // from try @ 0347db78 with catch @ 0347d970
                       catch() { ... } // from try @ 0347dbb4 with catch @ 0347d970
                       catch() { ... } // from try @ 0347dc04 with catch @ 0347d970
                       catch() { ... } // from try @ 0347dc34 with catch @ 0347d970 */
        pSVar12 = OMHODMCHILE__NPKGDBHJKCK(pSVar10,pSVar11,(MethodInfo *)0x0);
        if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar13 = System_Xml_XmlAttributeCollection__get_ItemOf(pSVar9,pSVar12,(MethodInfo *)0x0);
        iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar13,0,(MethodInfo *)0x0);
        (__this_00->fields)._KGMPHCIIKCJ_k__BackingField = iVar2;
        if (pFVar3 == (FJAFBCCNPIK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        DADDKDFBPIJ<object>__FIFBDNADAAL
                  ((DADDKDFBPIJ_T__o *)pFVar3,(Il2CppObject *)__this_00,
                   Method_DADDKDFBPIJ<LJNDBPEOILF>_FIFBDNADAAL__);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar18 = piVar18 + 4;
    if (uVar16 == 0) break;
LAB_0347d9d8:
    if (*(System_IDisposable_c **)(piVar18 + -2) == System_IDisposable_TypeInfo) {
      puVar7 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_0347da0c;
    }
  }
LAB_0347d9f0:
  puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_IDisposable_TypeInfo,0);
LAB_0347da0c:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
  return;
}

