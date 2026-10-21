// IDDIABHBDEE$$BLALKJCJJDB @ RVA 0x3380994

/* WARNING: Removing unreachable block (ram,0x034811ec) */

void IDDIABHBDEE__BLALKJCJJDB
               (IDDIABHBDEE_o *__this,System_Xml_XmlNode_o *GGDPPDFOEOH,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  LCNHDNHFMED_o *pLVar3;
  CFGLKHFFEKA_o *FMPJLBLNHMC;
  System_Collections_Generic_IEnumerable_XmlNode__o *pSVar4;
  VirtualInvokeData *pVVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  CFGLKHFFEKA_o *pCVar9;
  System_Xml_XmlAttributeCollection_o *pSVar10;
  System_Byte_array *pSVar11;
  System_Byte_array *pSVar12;
  System_String_o *pSVar13;
  System_Xml_XmlAttribute_o *pSVar14;
  System_String_o *pSVar15;
  OHAKJHMJAKL_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  System_Collections_Generic_IEnumerable_XmlNode__c *pSVar16;
  long lVar17;
  ulong uVar18;
  int32_t *piVar19;
  int *piVar20;
  
  if ((DAT_04567b9f & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_333);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_334);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_335);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_336);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_337);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_338);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_339);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_340);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_341);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_342);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_343);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_344);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&CFGLKHFFEKA_TypeInfo);
    FUN_01bab630(&Method_DADDKDFBPIJ<OHAKJHMJAKL>_FIFBDNADAAL__);
    FUN_01bab630(&Method_DADDKDFBPIJ<OHAKJHMJAKL>_NDNPGAKJLHM__);
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&IDDIABHBDEE_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<XmlNode>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<XmlNode>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&OHAKJHMJAKL_TypeInfo);
    DAT_04567b9f = 1;
  }
  pLVar3 = (__this->fields)._ILDEILPNLKK_k__BackingField;
  if (pLVar3 != (LCNHDNHFMED_o *)0x0) {
    DADDKDFBPIJ<object>__NDNPGAKJLHM
              ((DADDKDFBPIJ_T__o *)pLVar3,Method_DADDKDFBPIJ<OHAKJHMJAKL>_NDNPGAKJLHM__);
    if (GGDPPDFOEOH == (System_Xml_XmlNode_o *)0x0) {
      return;
    }
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    FMPJLBLNHMC = EOAOCPLIKOI__PNENLJCMECN((MethodInfo *)0x0);
    method_00 = extraout_x1;
    if ((IDDIABHBDEE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(IDDIABHBDEE_TypeInfo);
      method_00 = extraout_x1_00;
    }
    pSVar4 = IDDIABHBDEE__HJNLDOCBHPD(GGDPPDFOEOH,method_00);
    if (pSVar4 != (System_Collections_Generic_IEnumerable_XmlNode__o *)0x0) {
      pSVar16 = pSVar4->klass;
      uVar1._0_1_ = (pSVar16->_2).rank;
      uVar1._1_1_ = (pSVar16->_2).minimumAlignment;
      uVar18 = (ulong)uVar1;
      if (uVar18 != 0) {
        piVar19 = &((pSVar16->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar19 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_Generic_IEnumerable<XmlNode>_TypeInfo) {
            pVVar5 = pSVar16->vtable + *piVar19;
            goto LAB_03480ba4;
          }
          uVar18 = uVar18 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar18 != 0);
      }
      pVVar5 = (VirtualInvokeData *)
               FUN_01b81914(pSVar4,System_Collections_Generic_IEnumerable<XmlNode>_TypeInfo,0);
LAB_03480ba4:
      plVar6 = (long *)(*pVVar5->methodPtr)(pSVar4,pVVar5->method);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
LAB_03480bd0:
      do {
        lVar17 = *plVar6;
        uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar18 != 0) {
          piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar20 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar7 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_03480c1c;
            }
            uVar18 = uVar18 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar18 != 0);
        }
        puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,0);
LAB_03480c1c:
        uVar18 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        if ((uVar18 & 1) == 0) {
          if (plVar6 == (long *)0x0) {
            return;
          }
          lVar17 = *plVar6;
          uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar18 == 0) goto LAB_0348116c;
          piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          goto LAB_03481154;
        }
        lVar17 = *plVar6;
        uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar18 != 0) {
          piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(System_Collections_Generic_IEnumerator_XmlNode__c **)(piVar20 + -2) ==
                System_Collections_Generic_IEnumerator<XmlNode>_TypeInfo) {
              puVar7 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_03480c80;
            }
            uVar18 = uVar18 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar18 != 0);
        }
        puVar7 = (undefined8 *)
                 FUN_01b81914(plVar6,System_Collections_Generic_IEnumerator<XmlNode>_TypeInfo,0);
LAB_03480c80:
        plVar8 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
        pCVar9 = (CFGLKHFFEKA_o *)thunk_FUN_01bda818(CFGLKHFFEKA_TypeInfo);
        CFGLKHFFEKA___ctor(pCVar9,(MethodInfo *)0x0);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar10 = (System_Xml_XmlAttributeCollection_o *)
                  (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
        pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar11,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_333,
                   (MethodInfo *)0x0);
        pSVar12 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar12,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_334,
                   (MethodInfo *)0x0);
        pSVar13 = OMHODMCHILE__NPKGDBHJKCK(pSVar11,pSVar12,(MethodInfo *)0x0);
        if (pSVar10 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar14 = System_Xml_XmlAttributeCollection__get_ItemOf(pSVar10,pSVar13,(MethodInfo *)0x0);
        pSVar13 = EIABCPKDEBD__JPKEHIBGOEM(pSVar14,(System_String_o *)0x0,(MethodInfo *)0x0);
        if (pCVar9 == (CFGLKHFFEKA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        CFGLKHFFEKA__JAGMOPPIMKB(pCVar9,pSVar13,(MethodInfo *)0x0);
        if ((CFGLKHFFEKA_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar2 = CFGLKHFFEKA__INMJFGMNBEB(FMPJLBLNHMC,pCVar9,(MethodInfo *)0x0);
      } while (bVar2);
      pSVar10 = (System_Xml_XmlAttributeCollection_o *)
                (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
      pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar11,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_335,(MethodInfo *)0x0
                );
      pSVar12 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar12,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_336,(MethodInfo *)0x0
                );
      pSVar13 = OMHODMCHILE__NPKGDBHJKCK(pSVar11,pSVar12,(MethodInfo *)0x0);
      if (pSVar10 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar14 = System_Xml_XmlAttributeCollection__get_ItemOf(pSVar10,pSVar13,(MethodInfo *)0x0);
      pSVar13 = EIABCPKDEBD__JPKEHIBGOEM(pSVar14,(System_String_o *)0x0,(MethodInfo *)0x0);
      bVar2 = PCOEHCPGBBG__BDLEIEHBFAD(pSVar13,(MethodInfo *)0x0);
      if (!bVar2) {
        pCVar9 = (CFGLKHFFEKA_o *)thunk_FUN_01bda818(CFGLKHFFEKA_TypeInfo);
        CFGLKHFFEKA___ctor(pCVar9,(MethodInfo *)0x0);
        if (pCVar9 == (CFGLKHFFEKA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        CFGLKHFFEKA__JAGMOPPIMKB(pCVar9,pSVar13,(MethodInfo *)0x0);
        if ((CFGLKHFFEKA_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar2 = CFGLKHFFEKA__INMJFGMNBEB(pCVar9,FMPJLBLNHMC,(MethodInfo *)0x0);
        if (bVar2) goto LAB_03480bd0;
      }
      pSVar10 = (System_Xml_XmlAttributeCollection_o *)
                (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
      pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar11,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_337,(MethodInfo *)0x0
                );
      pSVar12 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar12,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_338,(MethodInfo *)0x0
                );
      pSVar13 = OMHODMCHILE__NPKGDBHJKCK(pSVar11,pSVar12,(MethodInfo *)0x0);
      if (pSVar10 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar14 = System_Xml_XmlAttributeCollection__get_ItemOf(pSVar10,pSVar13,(MethodInfo *)0x0);
      pSVar13 = EIABCPKDEBD__JPKEHIBGOEM(pSVar14,(System_String_o *)0x0,(MethodInfo *)0x0);
      pSVar10 = (System_Xml_XmlAttributeCollection_o *)
                (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
      pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar11,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_339,(MethodInfo *)0x0
                );
      pSVar12 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar12,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_340,(MethodInfo *)0x0
                );
      pSVar15 = OMHODMCHILE__NPKGDBHJKCK(pSVar11,pSVar12,(MethodInfo *)0x0);
      if (pSVar10 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar14 = System_Xml_XmlAttributeCollection__get_ItemOf(pSVar10,pSVar15,(MethodInfo *)0x0);
      pSVar15 = EIABCPKDEBD__JPKEHIBGOEM(pSVar14,(System_String_o *)0x0,(MethodInfo *)0x0);
      bVar2 = PCOEHCPGBBG__BDLEIEHBFAD(pSVar13,(MethodInfo *)0x0);
      if ((!bVar2) && (bVar2 = PCOEHCPGBBG__BDLEIEHBFAD(pSVar15,(MethodInfo *)0x0), !bVar2)) {
        pLVar3 = (__this->fields)._ILDEILPNLKK_k__BackingField;
        __this_00 = (OHAKJHMJAKL_o *)thunk_FUN_01bda818(OHAKJHMJAKL_TypeInfo);
        OHAKJHMJAKL___ctor(__this_00,(MethodInfo *)0x0);
        pSVar10 = (System_Xml_XmlAttributeCollection_o *)
                  (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
        pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar11,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_341,
                   (MethodInfo *)0x0);
        pSVar12 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar12,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_342,
                   (MethodInfo *)0x0);
        pSVar13 = OMHODMCHILE__NPKGDBHJKCK(pSVar11,pSVar12,(MethodInfo *)0x0);
        if (pSVar10 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar14 = System_Xml_XmlAttributeCollection__get_ItemOf(pSVar10,pSVar13,(MethodInfo *)0x0);
        pSVar13 = EIABCPKDEBD__JPKEHIBGOEM(pSVar14,(System_String_o *)0x0,(MethodInfo *)0x0);
        if (__this_00 == (OHAKJHMJAKL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        (__this_00->fields)._COIPKAKHDFP_k__BackingField = pSVar13;
        thunk_FUN_01c20e04();
        pSVar10 = (System_Xml_XmlAttributeCollection_o *)
                  (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
        pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar11,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_343,
                   (MethodInfo *)0x0);
        pSVar12 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar12,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_344,
                   (MethodInfo *)0x0);
        pSVar13 = OMHODMCHILE__NPKGDBHJKCK(pSVar11,pSVar12,(MethodInfo *)0x0);
        if (pSVar10 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar14 = System_Xml_XmlAttributeCollection__get_ItemOf(pSVar10,pSVar13,(MethodInfo *)0x0);
        pSVar13 = EIABCPKDEBD__JPKEHIBGOEM(pSVar14,(System_String_o *)0x0,(MethodInfo *)0x0);
        (__this_00->fields)._AJBLFMPFEIO_k__BackingField = pSVar13;
        thunk_FUN_01c20e04();
        if (pLVar3 == (LCNHDNHFMED_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        DADDKDFBPIJ<object>__FIFBDNADAAL
                  ((DADDKDFBPIJ_T__o *)pLVar3,(Il2CppObject *)__this_00,
                   Method_DADDKDFBPIJ<OHAKJHMJAKL>_FIFBDNADAAL__);
      }
      goto LAB_03480bd0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar20 = piVar20 + 4;
    if (uVar18 == 0) break;
LAB_03481154:
    if (*(System_IDisposable_c **)(piVar20 + -2) == System_IDisposable_TypeInfo) {
      puVar7 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_03481188;
    }
  }
LAB_0348116c:
  puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_IDisposable_TypeInfo,0);
LAB_03481188:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
  return;
}

