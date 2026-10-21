// DGLCNGPCHML$$BKCFPHNEONL @ RVA 0x30AC58C

/* WARNING: Removing unreachable block (ram,0x031acb40) */

Core_Configs_Models_CdnZoneMappingConfig_o *
DGLCNGPCHML__BKCFPHNEONL(DGLCNGPCHML_o *__this,System_Xml_XmlNode_o *MBMJEJKKFOE,MethodInfo *method)

{
  ushort uVar1;
  System_String_o *str0;
  bool bVar2;
  int32_t value;
  System_Collections_Generic_Dictionary_object__int__o *__this_00;
  System_Collections_Generic_Dictionary_int__object__o *__this_01;
  System_Collections_IEnumerable_o *source;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  System_Func_XmlNode__bool__o **ppSVar3;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar4;
  VirtualInvokeData *pVVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  System_Xml_XmlAttributeCollection_o *pSVar9;
  System_Xml_XmlAttribute_o *pSVar10;
  System_String_o *pSVar11;
  Core_Configs_Models_CdnZoneMappingConfig_o *__this_02;
  System_Collections_Generic_IReadOnlyDictionary_int__string__o **ppSVar12;
  System_Collections_Generic_IEnumerable_TSource__c *pSVar13;
  long lVar14;
  System_String_StaticFields *pSVar15;
  ulong uVar16;
  int32_t *piVar17;
  int *piVar18;
  System_Func_XmlNode__bool__o *predicate;
  System_String_o *str1;
  
                    /* try { // try from 031ac594 to 032ac5ab has its CatchHandler @ 031ac654 */
                    /* try { // try from 031ac5ac to 032ac643 has its CatchHandler @ 031ac0a4 */
  if ((DAT_045661ae & 1) == 0) {
    FUN_01bab630(&Core_Configs_Models_CdnZoneMappingConfig_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_int>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_string>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_int>_set_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_string>_set_Item__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<int,_string>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_int>_TypeInfo);
    FUN_01bab630(&Method_System_Linq_Enumerable_Cast<XmlNode>__);
                    /* try { // try from 031ac644 to 032ac653 has its CatchHandler @ 031ac654 */
    FUN_01bab630(&Method_System_Linq_Enumerable_Where<XmlNode>__);
    FUN_01bab630(&System_Func<XmlNode,_bool>_TypeInfo);
                    /* catch() { ... } // from try @ 031ac594 with catch @ 031ac654
                       catch() { ... } // from try @ 031ac644 with catch @ 031ac654 */
                    /* try { // try from 031ac658 to 032ac65b has its CatchHandler @ 031ac664 */
                    /* try { // try from 031ac65c to 032ac667 has its CatchHandler @ 031ac0a4 */
    FUN_01bab630(&System_IDisposable_TypeInfo);
                    /* catch() { ... } // from try @ 031ac658 with catch @ 031ac664 */
    FUN_01bab630(&System_Collections_Generic_IEnumerable<XmlNode>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<XmlNode>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&Method_DGLCNGPCHML_<>c_NDKGAMBJAKG__);
    FUN_01bab630(&DGLCNGPCHML_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_9119);
    FUN_01bab630(&StringLiteral_4215);
    FUN_01bab630(&StringLiteral_15312);
    DAT_045661ae = 1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__int__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_int>_TypeInfo);
  System_Collections_Generic_Dictionary<object,_int>___ctor
            (__this_00,Method_System_Collections_Generic_Dictionary<string,_int>__ctor__);
  __this_01 = (System_Collections_Generic_Dictionary_int__object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<int,_string>_TypeInfo);
  System_Collections_Generic_Dictionary<int,_object>___ctor
            (__this_01,Method_System_Collections_Generic_Dictionary<int,_string>__ctor__);
  if (MBMJEJKKFOE != (System_Xml_XmlNode_o *)0x0) {
    source = (System_Collections_IEnumerable_o *)
             (*(MBMJEJKKFOE->klass->vtable)._13_get_ChildNodes.methodPtr)
                       (MBMJEJKKFOE,(MBMJEJKKFOE->klass->vtable)._13_get_ChildNodes.method);
    source_00 = System_Linq_Enumerable__Cast<object>
                          (source,Method_System_Linq_Enumerable_Cast<XmlNode>__);
    if ((DGLCNGPCHML_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(DGLCNGPCHML_<>c_TypeInfo);
    }
    predicate = DGLCNGPCHML_<>c_TypeInfo->static_fields->__9__0_0;
    if (predicate == (System_Func_XmlNode__bool__o *)0x0) {
      if ((DGLCNGPCHML_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(DGLCNGPCHML_<>c_TypeInfo);
      }
      predicate = (System_Func_XmlNode__bool__o *)
                  thunk_FUN_01bda818(System_Func<XmlNode,_bool>_TypeInfo);
      System_Func<object,_bool>___ctor();
      ppSVar3 = &DGLCNGPCHML_<>c_TypeInfo->static_fields->__9__0_0;
      *ppSVar3 = predicate;
      thunk_FUN_01c20e04(ppSVar3,predicate);
    }
    pSVar4 = System_Linq_Enumerable__Where<object>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                        (System_Func_TSource__bool__o *)predicate,
                        Method_System_Linq_Enumerable_Where<XmlNode>__);
    if (pSVar4 != (System_Collections_Generic_IEnumerable_TSource__o *)0x0) {
      pSVar13 = pSVar4->klass;
      uVar1._0_1_ = (pSVar13->_2).rank;
      uVar1._1_1_ = (pSVar13->_2).minimumAlignment;
      uVar16 = (ulong)uVar1;
      if (uVar16 != 0) {
        piVar17 = &((pSVar13->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar17 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_Generic_IEnumerable<XmlNode>_TypeInfo) {
            pVVar5 = pSVar13->vtable + *piVar17;
            goto LAB_031ac824;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      pVVar5 = (VirtualInvokeData *)
               FUN_01b81914(pSVar4,System_Collections_Generic_IEnumerable<XmlNode>_TypeInfo,0);
LAB_031ac824:
      plVar6 = (long *)(*pVVar5->methodPtr)(pSVar4,pVVar5->method);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar14 = *plVar6;
        uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar16 != 0) {
          piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar18 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar7 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_031ac8b8;
            }
            uVar16 = uVar16 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar16 != 0);
        }
        puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,0);
LAB_031ac8b8:
        uVar16 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        if ((uVar16 & 1) == 0) {
          if (plVar6 == (long *)0x0) goto LAB_031acac0;
          lVar14 = *plVar6;
          uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar16 == 0) goto LAB_031aca94;
          piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          goto LAB_031aca7c;
        }
        lVar14 = *plVar6;
        uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar16 != 0) {
          piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(System_Collections_Generic_IEnumerator_XmlNode__c **)(piVar18 + -2) ==
                System_Collections_Generic_IEnumerator<XmlNode>_TypeInfo) {
              puVar7 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_031ac914;
            }
            uVar16 = uVar16 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar16 != 0);
        }
        puVar7 = (undefined8 *)
                 FUN_01b81914(plVar6,System_Collections_Generic_IEnumerator<XmlNode>_TypeInfo,0);
LAB_031ac914:
        plVar8 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                 (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
        if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                            (pSVar9,StringLiteral_15312,(MethodInfo *)0x0);
        value = EIABCPKDEBD__EHJNCGCICMP(pSVar10,-1,(MethodInfo *)0x0);
        pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                 (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
        if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                            (pSVar9,StringLiteral_4215,(MethodInfo *)0x0);
        pSVar11 = EIABCPKDEBD__JPKEHIBGOEM
                            (pSVar10,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
        pSVar15 = (System_String_StaticFields *)&StringLiteral_15312;
        if (value == -1) {
LAB_031ac9c0:
          str0 = StringLiteral_9119;
          str1 = pSVar15->Empty;
          bVar2 = System_String__IsNullOrWhiteSpace(pSVar11,(MethodInfo *)0x0);
          pSVar15 = (System_String_StaticFields *)&StringLiteral_4215;
          if (!bVar2) {
            pSVar15 = string_TypeInfo->static_fields;
          }
          pSVar11 = System_String__Concat(str0,str1,pSVar15->Empty,(MethodInfo *)0x0);
          KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)__this,pSVar11,(MethodInfo *)0x0);
        }
        else {
          bVar2 = System_String__IsNullOrWhiteSpace(pSVar11,(MethodInfo *)0x0);
          if (bVar2) {
            pSVar15 = string_TypeInfo->static_fields;
            goto LAB_031ac9c0;
          }
          if (__this_00 == (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          System_Collections_Generic_Dictionary<object,_int>__set_Item
                    (__this_00,(Il2CppObject *)pSVar11,value,
                     Method_System_Collections_Generic_Dictionary<string,_int>_set_Item__);
          if (__this_01 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          System_Collections_Generic_Dictionary<int,_object>__set_Item
                    (__this_01,value,(Il2CppObject *)pSVar11,
                     Method_System_Collections_Generic_Dictionary<int,_string>_set_Item__);
        }
      } while( true );
    }
    goto LAB_031acb38;
  }
  goto LAB_031acac0;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar18 = piVar18 + 4;
    if (uVar16 == 0) break;
LAB_031aca7c:
    if (*(System_IDisposable_c **)(piVar18 + -2) == System_IDisposable_TypeInfo) {
      puVar7 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_031acab0;
    }
  }
LAB_031aca94:
  puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_IDisposable_TypeInfo,0);
LAB_031acab0:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
LAB_031acac0:
  __this_02 = (Core_Configs_Models_CdnZoneMappingConfig_o *)
              thunk_FUN_01bda818(Core_Configs_Models_CdnZoneMappingConfig_TypeInfo);
  Core_Configs_Models_CdnZoneMappingConfig___ctor(__this_02,(MethodInfo *)0x0);
  if (__this_02 != (Core_Configs_Models_CdnZoneMappingConfig_o *)0x0) {
    (__this_02->fields)._CdnMirrorToZone_k__BackingField =
         (System_Collections_Generic_IReadOnlyDictionary_string__int__o *)__this_00;
    thunk_FUN_01c20e04(&__this_02->fields,__this_00);
    ppSVar12 = &(__this_02->fields)._ZoneToCdnMirror_k__BackingField;
    *ppSVar12 = (System_Collections_Generic_IReadOnlyDictionary_int__string__o *)__this_01;
    thunk_FUN_01c20e04(ppSVar12,__this_01);
    return __this_02;
  }
LAB_031acb38:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

