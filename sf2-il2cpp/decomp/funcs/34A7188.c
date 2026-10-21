// LNELHGPOMJM$$BKCFPHNEONL @ RVA 0x34A7188

/* WARNING: Removing unreachable block (ram,0x035a761c) */

Core_Configs_Models_RevenueMultiplierConfig_o *
LNELHGPOMJM__BKCFPHNEONL(LNELHGPOMJM_o *__this,System_Xml_XmlNode_o *MBMJEJKKFOE,MethodInfo *method)

{
  ushort uVar1;
  int32_t key;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this_00;
  System_Collections_IEnumerable_o *source;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  System_Func_XmlNode__bool__o **ppSVar2;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar3;
  VirtualInvokeData *pVVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  System_Xml_XmlAttributeCollection_o *pSVar8;
  System_Xml_XmlAttribute_o *pSVar9;
  Core_Configs_Models_RevenueMultiplierConfig_o *__this_01;
  System_Collections_Generic_IEnumerable_TSource__c *pSVar10;
  long lVar11;
  ulong uVar12;
  int32_t *piVar13;
  int *piVar14;
  System_Func_XmlNode__bool__o *predicate;
  float value;
  
                    /* try { // try from 035a71b0 to 036a71b7 has its CatchHandler @ 035a7258 */
  if ((DAT_045684fa & 1) == 0) {
                    /* try { // try from 035a71c4 to 036a71d3 has its CatchHandler @ 035a7248 */
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<IKDJCPOJFNM,_float>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<IKDJCPOJFNM,_float>_set_Item__);
                    /* try { // try from 035a71e0 to 036a71ef has its CatchHandler @ 035a724c */
    FUN_01bab630(&System_Collections_Generic_Dictionary<IKDJCPOJFNM,_float>_TypeInfo);
    FUN_01bab630(&Method_EIABCPKDEBD_CKHGJBKDIID<IKDJCPOJFNM>__);
                    /* try { // try from 035a71f0 to 036a723b has its CatchHandler @ 035a7108 */
    FUN_01bab630(&Method_System_Linq_Enumerable_Cast<XmlNode>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_Where<XmlNode>__);
    FUN_01bab630(&System_Func<XmlNode,_bool>_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<XmlNode>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<XmlNode>_TypeInfo);
                    /* try { // try from 035a723c to 036a723f has its CatchHandler @ 035a7254 */
                    /* try { // try from 035a7240 to 036a7243 has its CatchHandler @ 035a7250 */
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
                    /* try { // try from 035a7244 to 036a726f has its CatchHandler @ 035a7108 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035a71c4 with catch @ 035a7248
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035a71e0 with catch @ 035a724c
                        */
    FUN_01bab630(&Core_Configs_Models_RevenueMultiplierConfig_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035a7240 with catch @ 035a7250
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035a723c with catch @ 035a7254
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035a71b0 with catch @ 035a7258
                        */
    FUN_01bab630(&Method_LNELHGPOMJM_<>c_NDKGAMBJAKG__);
    FUN_01bab630(&LNELHGPOMJM_<>c_TypeInfo);
                    /* try { // try from 035a7270 to 036a7273 has its CatchHandler @ 035a72a4 */
    FUN_01bab630(&StringLiteral_14694);
                    /* try { // try from 035a7274 to 036a72b3 has its CatchHandler @ 035a7108 */
    FUN_01bab630(&StringLiteral_13991);
    DAT_045684fa = 1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<IKDJCPOJFNM,_float>_TypeInfo)
  ;
  System_Collections_Generic_Dictionary<Int32Enum,_float>___ctor
            (__this_00,Method_System_Collections_Generic_Dictionary<IKDJCPOJFNM,_float>__ctor__);
  if (MBMJEJKKFOE != (System_Xml_XmlNode_o *)0x0) {
                    /* catch() { ... } // from try @ 035a7270 with catch @ 035a72a4 */
                    /* try { // try from 035a72b4 to 036a72bb has its CatchHandler @ 035a72d0 */
                    /* try { // try from 035a72bc to 036a72c7 has its CatchHandler @ 035a7108 */
    source = (System_Collections_IEnumerable_o *)
             (*(MBMJEJKKFOE->klass->vtable)._13_get_ChildNodes.methodPtr)
                       (MBMJEJKKFOE,(MBMJEJKKFOE->klass->vtable)._13_get_ChildNodes.method);
                    /* try { // try from 035a72c8 to 036a72cf has its CatchHandler @ 035a72d0 */
    source_00 = System_Linq_Enumerable__Cast<object>
                          (source,Method_System_Linq_Enumerable_Cast<XmlNode>__);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035a72b4 with catch @ 035a72d0
                       catch(type#2 @ 00000000) { ... } // from try @ 035a72c8 with catch @ 035a72d0
                        */
                    /* try { // try from 035a72d4 to 036a7367 has its CatchHandler @ 035a72d4
                       catch() { ... } // from try @ 035a72d4 with catch @ 035a72d4
                       catch() { ... } // from try @ 035a7390 with catch @ 035a72d4
                       catch() { ... } // from try @ 035a73d0 with catch @ 035a72d4
                       catch() { ... } // from try @ 035a73f8 with catch @ 035a72d4
                       catch() { ... } // from try @ 035a7430 with catch @ 035a72d4 */
    if ((LNELHGPOMJM_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(LNELHGPOMJM_<>c_TypeInfo);
    }
    predicate = LNELHGPOMJM_<>c_TypeInfo->static_fields->__9__0_0;
    if (predicate == (System_Func_XmlNode__bool__o *)0x0) {
      if ((LNELHGPOMJM_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(LNELHGPOMJM_<>c_TypeInfo);
      }
      predicate = (System_Func_XmlNode__bool__o *)
                  thunk_FUN_01bda818(System_Func<XmlNode,_bool>_TypeInfo);
      System_Func<object,_bool>___ctor();
      ppSVar2 = &LNELHGPOMJM_<>c_TypeInfo->static_fields->__9__0_0;
      *ppSVar2 = predicate;
      thunk_FUN_01c20e04(ppSVar2,predicate);
    }
    pSVar3 = System_Linq_Enumerable__Where<object>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                        (System_Func_TSource__bool__o *)predicate,
                        Method_System_Linq_Enumerable_Where<XmlNode>__);
                    /* try { // try from 035a7368 to 036a736f has its CatchHandler @ 035a73dc */
    if (pSVar3 != (System_Collections_Generic_IEnumerable_TSource__o *)0x0) {
      pSVar10 = pSVar3->klass;
      uVar1._0_1_ = (pSVar10->_2).rank;
      uVar1._1_1_ = (pSVar10->_2).minimumAlignment;
      uVar12 = (ulong)uVar1;
                    /* try { // try from 035a7384 to 036a738f has its CatchHandler @ 035a73d4 */
      if (uVar12 != 0) {
        piVar13 = &((pSVar10->_1).interfaceOffsets)->offset;
        do {
                    /* try { // try from 035a7390 to 036a73cb has its CatchHandler @ 035a72d4 */
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_Generic_IEnumerable<XmlNode>_TypeInfo) {
            pVVar4 = pSVar10->vtable + *piVar13;
            goto LAB_035a73c4;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      pVVar4 = (VirtualInvokeData *)
               FUN_01b81914(pSVar3,System_Collections_Generic_IEnumerable<XmlNode>_TypeInfo,0);
LAB_035a73c4:
                    /* try { // try from 035a73cc to 036a73cf has its CatchHandler @ 035a73d8 */
      plVar5 = (long *)(*pVVar4->methodPtr)(pSVar3,pVVar4->method);
                    /* try { // try from 035a73d0 to 036a73f3 has its CatchHandler @ 035a72d4 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035a7384 with catch @ 035a73d4
                        */
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar11 = *plVar5;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
                    /* catch() { ... } // from try @ 035a73f4 with catch @ 035a7420 */
                    /* try { // try from 035a7428 to 036a742f has its CatchHandler @ 035a7444 */
            if (*(System_Collections_IEnumerator_c **)(piVar14 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar6 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_035a7454;
            }
            uVar12 = uVar12 - 1;
                    /* try { // try from 035a7430 to 036a743b has its CatchHandler @ 035a72d4 */
            piVar14 = piVar14 + 4;
          } while (uVar12 != 0);
        }
                    /* try { // try from 035a743c to 036a7443 has its CatchHandler @ 035a7444 */
        puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035a7428 with catch @ 035a7444
                       catch(type#2 @ 00000000) { ... } // from try @ 035a743c with catch @ 035a7444
                        */
LAB_035a7454:
        uVar12 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if ((uVar12 & 1) == 0) {
          if (plVar5 == (long *)0x0) goto LAB_035a75b4;
          lVar11 = *plVar5;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar12 == 0) goto LAB_035a7588;
          piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          goto LAB_035a7570;
        }
                    /* try { // try from 035a7464 to 036a77af has its CatchHandler @ 035a7464
                       catch() { ... } // from try @ 035a7464 with catch @ 035a7464
                       catch() { ... } // from try @ 035a78e8 with catch @ 035a7464
                       catch() { ... } // from try @ 035a7b3c with catch @ 035a7464
                       catch() { ... } // from try @ 035a7d98 with catch @ 035a7464
                       catch() { ... } // from try @ 035a7e60 with catch @ 035a7464
                       catch() { ... } // from try @ 035a7e70 with catch @ 035a7464
                       catch() { ... } // from try @ 035a7e80 with catch @ 035a7464
                       catch() { ... } // from try @ 035a7f6c with catch @ 035a7464
                       catch() { ... } // from try @ 035a8030 with catch @ 035a7464
                       catch() { ... } // from try @ 035a80dc with catch @ 035a7464 */
        lVar11 = *plVar5;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(System_Collections_Generic_IEnumerator_XmlNode__c **)(piVar14 + -2) ==
                System_Collections_Generic_IEnumerator<XmlNode>_TypeInfo) {
              puVar6 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_035a74b0;
            }
            uVar12 = uVar12 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar12 != 0);
        }
        puVar6 = (undefined8 *)
                 FUN_01b81914(plVar5,System_Collections_Generic_IEnumerator<XmlNode>_TypeInfo,0);
LAB_035a74b0:
        plVar7 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                 (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240));
        if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar8,StringLiteral_13991,(MethodInfo *)0x0);
        key = EIABCPKDEBD__CKHGJBKDIID<Int32Enum>
                        (pSVar9,8,Method_EIABCPKDEBD_CKHGJBKDIID<IKDJCPOJFNM>__);
        if (key != 8) {
          pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                   (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240));
          if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar8,StringLiteral_14694,(MethodInfo *)0x0);
          value = EIABCPKDEBD__GICIEKCGOHA(pSVar9,1.0,(MethodInfo *)0x0);
          if (__this_00 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          System_Collections_Generic_Dictionary<Int32Enum,_float>__set_Item
                    (__this_00,key,value,
                     Method_System_Collections_Generic_Dictionary<IKDJCPOJFNM,_float>_set_Item__);
        }
      } while( true );
    }
    goto LAB_035a7614;
  }
  goto LAB_035a75b4;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar14 = piVar14 + 4;
    if (uVar12 == 0) break;
LAB_035a7570:
    if (*(System_IDisposable_c **)(piVar14 + -2) == System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_035a75a4;
    }
  }
LAB_035a7588:
  puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
LAB_035a75a4:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
LAB_035a75b4:
  __this_01 = (Core_Configs_Models_RevenueMultiplierConfig_o *)
              thunk_FUN_01bda818(Core_Configs_Models_RevenueMultiplierConfig_TypeInfo);
  Core_Configs_Models_RevenueMultiplierConfig___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (Core_Configs_Models_RevenueMultiplierConfig_o *)0x0) {
    (__this_01->fields)._Multipliers_k__BackingField =
         (System_Collections_Generic_IReadOnlyDictionary_IKDJCPOJFNM__float__o *)__this_00;
    thunk_FUN_01c20e04(&__this_01->fields,__this_00);
    return __this_01;
  }
LAB_035a7614:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

