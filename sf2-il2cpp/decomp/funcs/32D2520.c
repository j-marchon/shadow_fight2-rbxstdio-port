// OOMEDFCGKJB$$BBFCCAOAJII @ RVA 0x32D2520

/* WARNING: Removing unreachable block (ram,0x033d2a24) */
/* WARNING: Removing unreachable block (ram,0x033d2ab8) */

void OOMEDFCGKJB__BBFCCAOAJII
               (OOMEDFCGKJB_o *__this,System_Xml_XmlNode_o *GGDPPDFOEOH,System_String_o *JNIKAMMPCPE
               ,System_Collections_Generic_Dictionary_string__List_BCGLDKLKKDA___o **HPACPFLKHPK,
               MethodInfo *method)

{
  ushort uVar1;
  uint uVar2;
  bool bVar3;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_IEnumerable_XmlNode__o *source;
  System_Func_XmlNode__bool__o **ppSVar4;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar5;
  VirtualInvokeData *pVVar6;
  long *plVar7;
  undefined8 *puVar8;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  System_Xml_XmlAttributeCollection_o *__this_01;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar9;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  BCGLDKLKKDA_o *__this_02;
  System_Collections_Generic_IEnumerable_TSource__c *pSVar10;
  long lVar11;
  System_Object_array *pSVar12;
  ulong uVar13;
  int32_t *piVar14;
  int *piVar15;
  System_Func_XmlNode__bool__o *predicate;
  
  if ((DAT_04567561 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3);
    FUN_01bab630(&BCGLDKLKKDA_TypeInfo);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_List<BCGLDKLKKDA>>_Add__);
    FUN_01bab630(&Method_System_Linq_Enumerable_Where<XmlNode>__);
    FUN_01bab630(&System_Func<XmlNode,_bool>_TypeInfo);
    FUN_01bab630(&Method_IBLAPCINJBO_BDLEIEHBFAD<BCGLDKLKKDA>__);
    FUN_01bab630(&IDDIABHBDEE_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<XmlNode>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<XmlNode>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<BCGLDKLKKDA>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BCGLDKLKKDA>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<BCGLDKLKKDA>_TypeInfo);
    FUN_01bab630(&Method_OOMEDFCGKJB_<>c_BALJEEEDCEG__);
    FUN_01bab630(&OOMEDFCGKJB_<>c_TypeInfo);
    DAT_04567561 = 1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<BCGLDKLKKDA>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<BCGLDKLKKDA>__ctor__);
  if ((IDDIABHBDEE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  source = IDDIABHBDEE__LAKLJODNBFO(GGDPPDFOEOH,(MethodInfo *)0x0);
  if ((OOMEDFCGKJB_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(OOMEDFCGKJB_<>c_TypeInfo);
  }
  predicate = OOMEDFCGKJB_<>c_TypeInfo->static_fields->__9__14_0;
  if (predicate == (System_Func_XmlNode__bool__o *)0x0) {
    if ((OOMEDFCGKJB_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(OOMEDFCGKJB_<>c_TypeInfo);
    }
    predicate = (System_Func_XmlNode__bool__o *)
                thunk_FUN_01bda818(System_Func<XmlNode,_bool>_TypeInfo);
    System_Func<object,_bool>___ctor();
    ppSVar4 = &OOMEDFCGKJB_<>c_TypeInfo->static_fields->__9__14_0;
    *ppSVar4 = predicate;
    thunk_FUN_01c20e04(ppSVar4,predicate);
  }
  pSVar5 = System_Linq_Enumerable__Where<object>
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                      (System_Func_TSource__bool__o *)predicate,
                      Method_System_Linq_Enumerable_Where<XmlNode>__);
  if (pSVar5 != (System_Collections_Generic_IEnumerable_TSource__o *)0x0) {
    pSVar10 = pSVar5->klass;
    uVar1._0_1_ = (pSVar10->_2).rank;
    uVar1._1_1_ = (pSVar10->_2).minimumAlignment;
    uVar13 = (ulong)uVar1;
    if (uVar13 != 0) {
      piVar14 = &((pSVar10->_1).interfaceOffsets)->offset;
      do {
                    /* try { // try from 033d2748 to 034d279b has its CatchHandler @ 033d2748
                       catch() { ... } // from try @ 033d2748 with catch @ 033d2748
                       catch() { ... } // from try @ 033d27a4 with catch @ 033d2748
                       catch() { ... } // from try @ 033d2808 with catch @ 033d2748
                       catch() { ... } // from try @ 033d2838 with catch @ 033d2748
                       catch() { ... } // from try @ 033d28c0 with catch @ 033d2748 */
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_Generic_IEnumerable<XmlNode>_TypeInfo) {
          pVVar6 = pSVar10->vtable + *piVar14;
          goto LAB_033d2778;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    pVVar6 = (VirtualInvokeData *)
             FUN_01b81914(pSVar5,System_Collections_Generic_IEnumerable<XmlNode>_TypeInfo,0);
LAB_033d2778:
    plVar7 = (long *)(*pVVar6->methodPtr)(pSVar5,pVVar6->method);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      lVar11 = *plVar7;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar15 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_033d2800;
          }
          uVar13 = uVar13 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,0);
LAB_033d2800:
                    /* try { // try from 033d2804 to 034d2807 has its CatchHandler @ 033d2808 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033d279c with catch @ 033d2808
                       catch(type#1 @ 03f99f68) { ... } // from try @ 033d2804 with catch @ 033d2808
                       try { // try from 033d2808 to 034d281f has its CatchHandler @ 033d2748 */
      uVar13 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      if ((uVar13 & 1) == 0) {
        if (plVar7 == (long *)0x0) goto LAB_033d2a18;
        lVar11 = *plVar7;
        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar13 == 0) goto LAB_033d29f0;
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_033d29d8;
      }
      lVar11 = *plVar7;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
                    /* try { // try from 033d2820 to 034d2837 has its CatchHandler @ 033d28b8 */
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(System_Collections_Generic_IEnumerator_XmlNode__c **)(piVar15 + -2) ==
              System_Collections_Generic_IEnumerator<XmlNode>_TypeInfo) {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_033d285c;
          }
          uVar13 = uVar13 - 1;
                    /* try { // try from 033d2838 to 034d28a7 has its CatchHandler @ 033d2748 */
          piVar15 = piVar15 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)
               FUN_01b81914(plVar7,System_Collections_Generic_IEnumerator<XmlNode>_TypeInfo,0);
LAB_033d285c:
      AHDGNOJPPIB = (System_Xml_XmlNode_o *)(*(code *)*puVar8)(plVar7,puVar8[1]);
      if (AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      __this_01 = (System_Xml_XmlAttributeCollection_o *)
                  (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                            (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)MOPNMEHIMFJ,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2,(MethodInfo *)0x0);
                    /* try { // try from 033d28a8 to 034d28b7 has its CatchHandler @ 033d28b8 */
      LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* catch() { ... } // from try @ 033d2820 with catch @ 033d28b8
                       catch() { ... } // from try @ 033d28a8 with catch @ 033d28b8 */
                    /* try { // try from 033d28bc to 034d28bf has its CatchHandler @ 033d28c8 */
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)LFINFBNOLFG,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3,(MethodInfo *)0x0);
                    /* try { // try from 033d28c0 to 034d28cb has its CatchHandler @ 033d2748 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033d28bc with catch @ 033d28c8
                        */
      pSVar9 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
      if (__this_01 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_01,pSVar9,(MethodInfo *)0x0);
      pSVar9 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,(System_String_o *)0x0,(MethodInfo *)0x0);
      if ((IDDIABHBDEE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar3 = IDDIABHBDEE__COPJJLMNNOK(pSVar9,JNIKAMMPCPE,(MethodInfo *)0x0);
      if (bVar3) {
        __this_02 = (BCGLDKLKKDA_o *)thunk_FUN_01bda818(BCGLDKLKKDA_TypeInfo);
        BCGLDKLKKDA___ctor(__this_02,AHDGNOJPPIB,(MethodInfo *)0x0);
        lVar11 = Method_System_Collections_Generic_List<BCGLDKLKKDA>_Add__;
        if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar12 = (__this_00->fields)._items;
        (__this_00->fields)._version = (__this_00->fields)._version + 1;
        if (pSVar12 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar2 = (__this_00->fields)._size;
        if (uVar2 < (uint)pSVar12->max_length) {
          (__this_00->fields)._size = uVar2 + 1;
          pSVar12->m_Items[(int)uVar2] = (Il2CppObject *)__this_02;
          thunk_FUN_01c20e04(pSVar12->m_Items + (int)uVar2,__this_02);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    (__this_00,(Il2CppObject *)__this_02,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
      }
    } while( true );
  }
  goto LAB_033d2ab0;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar15 = piVar15 + 4;
    if (uVar13 == 0) break;
LAB_033d29d8:
    if (*(System_IDisposable_c **)(piVar15 + -2) == System_IDisposable_TypeInfo) {
      puVar8 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_033d2a0c;
    }
  }
LAB_033d29f0:
  puVar8 = (undefined8 *)FUN_01b81914(plVar7,System_IDisposable_TypeInfo,0);
LAB_033d2a0c:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_033d2a18:
  bVar3 = IBLAPCINJBO__BDLEIEHBFAD<object>
                    ((System_Collections_Generic_List_T__o *)__this_00,
                     Method_IBLAPCINJBO_BDLEIEHBFAD<BCGLDKLKKDA>__);
  if (bVar3) {
    return;
  }
  if ((System_Collections_Generic_Dictionary_object__object__o *)*HPACPFLKHPK !=
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__Add
              ((System_Collections_Generic_Dictionary_object__object__o *)*HPACPFLKHPK,
               (Il2CppObject *)JNIKAMMPCPE,(Il2CppObject *)__this_00,
               Method_System_Collections_Generic_Dictionary<string,_List<BCGLDKLKKDA>>_Add__);
    return;
  }
LAB_033d2ab0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

