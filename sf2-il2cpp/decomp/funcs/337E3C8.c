// IDDIABHBDEE$$ABGKMMFJEPE @ RVA 0x337E3C8

/* WARNING: Removing unreachable block (ram,0x0347ea20) */

System_Xml_XmlNode_o *
IDDIABHBDEE__ABGKMMFJEPE
          (System_Collections_Generic_IEnumerable_XmlNode__o *OBDMHHJBLKL,MethodInfo *method)

{
  ushort uVar1;
  System_Xml_XmlNode_o *pSVar2;
  bool bVar3;
  CFGLKHFFEKA_o *FMPJLBLNHMC;
  CFGLKHFFEKA_o *__this;
  VirtualInvokeData *pVVar4;
  long *plVar5;
  undefined8 *puVar6;
  System_Xml_XmlNode_o *pSVar7;
  System_Xml_XmlAttributeCollection_o *pSVar8;
  System_Byte_array *pSVar9;
  System_Byte_array *pSVar10;
  System_String_o *pSVar11;
  System_Xml_XmlAttribute_o *pSVar12;
  CFGLKHFFEKA_o *__this_00;
  CFGLKHFFEKA_o *__this_01;
  MethodInfo *extraout_x1;
  System_Collections_Generic_IEnumerable_XmlNode__c *pSVar13;
  long lVar14;
  ulong uVar15;
  int32_t *piVar16;
  int *piVar17;
  CFGLKHFFEKA_o *local_70;
  System_Xml_XmlNode_o *local_68;
  
  if ((DAT_04567b99 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_285);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_286);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_287);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_288);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_289);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_290);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_291);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_292);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&CFGLKHFFEKA_TypeInfo);
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<XmlNode>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<XmlNode>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    DAT_04567b99 = 1;
    method = extraout_x1;
  }
  if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(EOAOCPLIKOI_TypeInfo,method);
  }
  FMPJLBLNHMC = EOAOCPLIKOI__PNENLJCMECN((MethodInfo *)0x0);
  __this = (CFGLKHFFEKA_o *)thunk_FUN_01bda818(CFGLKHFFEKA_TypeInfo);
  CFGLKHFFEKA___ctor(__this,(MethodInfo *)0x0);
  if (OBDMHHJBLKL == (System_Collections_Generic_IEnumerable_XmlNode__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar13 = OBDMHHJBLKL->klass;
  uVar1._0_1_ = (pSVar13->_2).rank;
  uVar1._1_1_ = (pSVar13->_2).minimumAlignment;
  uVar15 = (ulong)uVar1;
  if (uVar15 != 0) {
    piVar16 = &((pSVar13->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar16 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IEnumerable<XmlNode>_TypeInfo) {
        pVVar4 = pSVar13->vtable + *piVar16;
        goto LAB_0347e550;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  pVVar4 = (VirtualInvokeData *)
           FUN_01b81914(OBDMHHJBLKL,System_Collections_Generic_IEnumerable<XmlNode>_TypeInfo,0);
LAB_0347e550:
  plVar5 = (long *)(*pVVar4->methodPtr)(OBDMHHJBLKL,pVVar4->method);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  local_68 = (System_Xml_XmlNode_o *)0x0;
  pSVar2 = local_68;
  do {
    local_68 = pSVar2;
    local_70 = __this;
    lVar14 = *plVar5;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar17 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar6 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_0347e5cc;
        }
        uVar15 = uVar15 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar15 != 0);
    }
    puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_0347e5cc:
    uVar15 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if ((uVar15 & 1) == 0) {
      if (plVar5 == (long *)0x0) {
        return local_68;
      }
      lVar14 = *plVar5;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 == 0) goto LAB_0347e9b4;
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      break;
    }
    lVar14 = *plVar5;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(System_Collections_Generic_IEnumerator_XmlNode__c **)(piVar17 + -2) ==
            System_Collections_Generic_IEnumerator<XmlNode>_TypeInfo) {
          puVar6 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_0347e630;
        }
        uVar15 = uVar15 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar15 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01b81914(plVar5,System_Collections_Generic_IEnumerator<XmlNode>_TypeInfo,0);
LAB_0347e630:
    pSVar7 = (System_Xml_XmlNode_o *)(*(code *)*puVar6)(plVar5,puVar6[1]);
    if (pSVar7 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar8 = (System_Xml_XmlAttributeCollection_o *)
             (*(pSVar7->klass->vtable)._16_get_Attributes.methodPtr)
                       (pSVar7,(pSVar7->klass->vtable)._16_get_Attributes.method);
    pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar9,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_285,(MethodInfo *)0x0);
    pSVar10 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar10,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_286,(MethodInfo *)0x0);
    pSVar11 = OMHODMCHILE__NPKGDBHJKCK(pSVar9,pSVar10,(MethodInfo *)0x0);
    if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar12 = System_Xml_XmlAttributeCollection__get_ItemOf(pSVar8,pSVar11,(MethodInfo *)0x0);
    if (pSVar12 == (System_Xml_XmlAttribute_o *)0x0) {
      if ((CFGLKHFFEKA_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(CFGLKHFFEKA_TypeInfo);
      }
      __this_00 = CFGLKHFFEKA_TypeInfo->static_fields->NMPPDPOICBA;
    }
    else {
      pSVar8 = (System_Xml_XmlAttributeCollection_o *)
               (*(pSVar7->klass->vtable)._16_get_Attributes.methodPtr)
                         (pSVar7,(pSVar7->klass->vtable)._16_get_Attributes.method);
      pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar9,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_287,(MethodInfo *)0x0
                );
      pSVar10 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar10,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_288,(MethodInfo *)0x0
                );
      pSVar11 = OMHODMCHILE__NPKGDBHJKCK(pSVar9,pSVar10,(MethodInfo *)0x0);
      if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar12 = System_Xml_XmlAttributeCollection__get_ItemOf(pSVar8,pSVar11,(MethodInfo *)0x0);
      pSVar11 = EIABCPKDEBD__JPKEHIBGOEM(pSVar12,(System_String_o *)0x0,(MethodInfo *)0x0);
                    /* try { // try from 0347e754 to 0357e86f has its CatchHandler @ 0347e754
                       catch() { ... } // from try @ 0347e754 with catch @ 0347e754
                       catch() { ... } // from try @ 0347e9e0 with catch @ 0347e754
                       catch() { ... } // from try @ 0347ea88 with catch @ 0347e754
                       catch() { ... } // from try @ 0347ea90 with catch @ 0347e754
                       catch() { ... } // from try @ 0347eb50 with catch @ 0347e754 */
      __this_00 = (CFGLKHFFEKA_o *)thunk_FUN_01bda818(CFGLKHFFEKA_TypeInfo);
      CFGLKHFFEKA___ctor(__this_00,pSVar11,(MethodInfo *)0x0);
    }
    if ((CFGLKHFFEKA_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(CFGLKHFFEKA_TypeInfo);
    }
    bVar3 = CFGLKHFFEKA__INMJFGMNBEB(FMPJLBLNHMC,__this_00,(MethodInfo *)0x0);
    __this = local_70;
    pSVar2 = local_68;
    if (!bVar3) {
      pSVar8 = (System_Xml_XmlAttributeCollection_o *)
               (*(pSVar7->klass->vtable)._16_get_Attributes.methodPtr)
                         (pSVar7,(pSVar7->klass->vtable)._16_get_Attributes.method);
      pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar9,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_289,(MethodInfo *)0x0
                );
      pSVar10 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar10,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_290,(MethodInfo *)0x0
                );
      pSVar11 = OMHODMCHILE__NPKGDBHJKCK(pSVar9,pSVar10,(MethodInfo *)0x0);
      if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar12 = System_Xml_XmlAttributeCollection__get_ItemOf(pSVar8,pSVar11,(MethodInfo *)0x0);
      if (pSVar12 == (System_Xml_XmlAttribute_o *)0x0) {
        if ((CFGLKHFFEKA_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_01 = CFGLKHFFEKA_TypeInfo->static_fields->NHBICJNGCKB;
      }
      else {
        pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                 (*(pSVar7->klass->vtable)._16_get_Attributes.methodPtr)
                           (pSVar7,(pSVar7->klass->vtable)._16_get_Attributes.method);
        pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0347e870 to 0357e897 has its CatchHandler @ 0347eab8 */
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar9,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_291,
                   (MethodInfo *)0x0);
        pSVar10 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar10,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_292,
                   (MethodInfo *)0x0);
        pSVar11 = OMHODMCHILE__NPKGDBHJKCK(pSVar9,pSVar10,(MethodInfo *)0x0);
        if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar12 = System_Xml_XmlAttributeCollection__get_ItemOf(pSVar8,pSVar11,(MethodInfo *)0x0);
                    /* try { // try from 0347e8cc to 0357e8f7 has its CatchHandler @ 0347eab4 */
        pSVar11 = EIABCPKDEBD__JPKEHIBGOEM(pSVar12,(System_String_o *)0x0,(MethodInfo *)0x0);
        __this_01 = (CFGLKHFFEKA_o *)thunk_FUN_01bda818(CFGLKHFFEKA_TypeInfo);
        CFGLKHFFEKA___ctor(__this_01,pSVar11,(MethodInfo *)0x0);
      }
      if ((CFGLKHFFEKA_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar3 = CFGLKHFFEKA__KJECKLOHMAM(FMPJLBLNHMC,__this_01,(MethodInfo *)0x0);
      if (!bVar3) {
                    /* try { // try from 0347e934 to 0357e93b has its CatchHandler @ 0347eaa0 */
        if ((CFGLKHFFEKA_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0347e940 to 0357e947 has its CatchHandler @ 0347eaa8 */
          thunk_FUN_01ba7564();
        }
                    /* try { // try from 0347e950 to 0357e973 has its CatchHandler @ 0347eab0 */
        bVar3 = CFGLKHFFEKA__ONPEKFBMDKM(__this_00,local_70,(MethodInfo *)0x0);
        __this = __this_00;
        pSVar2 = pSVar7;
        if (!bVar3) {
          __this = local_70;
          pSVar2 = local_68;
        }
      }
    }
  } while( true );
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar17 = piVar17 + 4;
    if (uVar15 == 0) break;
    if (*(System_IDisposable_c **)(piVar17 + -2) == System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_0347e9d0;
    }
  }
LAB_0347e9b4:
                    /* try { // try from 0347e9bc to 0357e9df has its CatchHandler @ 0347ea9c */
  puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
LAB_0347e9d0:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
                    /* try { // try from 0347e9e0 to 0357ea73 has its CatchHandler @ 0347e754 */
  return local_68;
}

