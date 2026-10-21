// IDDIABHBDEE$$CBBCENCCEIB @ RVA 0x337EFAC

/* WARNING: Removing unreachable block (ram,0x0347f4a8) */

void IDDIABHBDEE__CBBCENCCEIB
               (IDDIABHBDEE_o *__this,System_Xml_XmlNode_o *GGDPPDFOEOH,MethodInfo *method)

{
  ushort uVar1;
  int32_t iVar2;
  HALBNMOPGKD_o *pHVar3;
  System_Func_string__ValueTuple_string__string___o **ppSVar4;
  System_Collections_Generic_IEnumerable_TResult__o *pSVar5;
  System_Xml_XmlAttributeCollection_o *pSVar6;
  VirtualInvokeData *pVVar7;
  long *plVar8;
  undefined8 *puVar9;
  CNLIOJMLIFN_o *__this_00;
  System_Xml_XmlAttribute_o *pSVar10;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *name;
  System_Collections_Generic_IEnumerable_TResult__c *pSVar11;
  long lVar12;
  ulong uVar13;
  int32_t *piVar14;
  int *piVar15;
  System_Collections_Generic_List_string__o *source;
  System_Func_string__ValueTuple_string__string___o *selector;
  undefined1 auVar16 [16];
  
  if ((DAT_04567b9b & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_293);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_294);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&CNLIOJMLIFN_TypeInfo);
    FUN_01bab630(&Method_DADDKDFBPIJ<CNLIOJMLIFN>_FIFBDNADAAL__);
    FUN_01bab630(&Method_DADDKDFBPIJ<CNLIOJMLIFN>_NDNPGAKJLHM__);
    FUN_01bab630(&Method_System_Linq_Enumerable_Select<string,_ValueTuple<string,_string>>__);
    FUN_01bab630(&System_Func<string,_ValueTuple<string,_string>>_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<ValueTuple<string,_string>>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<ValueTuple<string,_string>>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&JPCPOGDCPIA_TypeInfo);
                    /* try { // try from 0347f080 to 0357f0a7 has its CatchHandler @ 0347f2f8 */
    FUN_01bab630(&Method_IDDIABHBDEE_<>c_IFNMELGLFOP__);
    FUN_01bab630(&IDDIABHBDEE_<>c_TypeInfo);
    DAT_04567b9b = 1;
  }
  pHVar3 = (__this->fields)._OCKMBJKKCJL_k__BackingField;
  if (pHVar3 != (HALBNMOPGKD_o *)0x0) {
    DADDKDFBPIJ<object>__NDNPGAKJLHM
              ((DADDKDFBPIJ_T__o *)pHVar3,Method_DADDKDFBPIJ<CNLIOJMLIFN>_NDNPGAKJLHM__);
    if (GGDPPDFOEOH == (System_Xml_XmlNode_o *)0x0) {
      return;
    }
    if ((JPCPOGDCPIA_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(JPCPOGDCPIA_TypeInfo);
    }
                    /* try { // try from 0347f0dc to 0357f107 has its CatchHandler @ 0347f2f4 */
    source = JPCPOGDCPIA_TypeInfo->static_fields->EPIFJDACNBK;
    if ((IDDIABHBDEE_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    selector = IDDIABHBDEE_<>c_TypeInfo->static_fields->__9__61_0;
    if (selector == (System_Func_string__ValueTuple_string__string___o *)0x0) {
      if ((IDDIABHBDEE_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      selector = (System_Func_string__ValueTuple_string__string___o *)
                 thunk_FUN_01bda818(System_Func<string,_ValueTuple<string,_string>>_TypeInfo);
                    /* try { // try from 0347f144 to 0357f14b has its CatchHandler @ 0347f2e8 */
      System_Func<object,_ValueTuple<object,_object>>___ctor();
                    /* try { // try from 0347f150 to 0357f157 has its CatchHandler @ 0347f2f0 */
      ppSVar4 = &IDDIABHBDEE_<>c_TypeInfo->static_fields->__9__61_0;
      *ppSVar4 = selector;
      thunk_FUN_01c20e04(ppSVar4,selector);
    }
                    /* try { // try from 0347f168 to 0357f16f has its CatchHandler @ 0347f2dc */
    pSVar5 = System_Linq_Enumerable__Select<object,_ValueTuple<object,_object>>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                        (System_Func_TSource__TResult__o *)selector,
                        Method_System_Linq_Enumerable_Select<string,_ValueTuple<string,_string>>__);
                    /* try { // try from 0347f178 to 0357f17f has its CatchHandler @ 0347f2d8 */
                    /* try { // try from 0347f180 to 0357f19f has its CatchHandler @ 0347f2e4 */
    pSVar6 = (System_Xml_XmlAttributeCollection_o *)
             (*(GGDPPDFOEOH->klass->vtable)._16_get_Attributes.methodPtr)
                       (GGDPPDFOEOH,(GGDPPDFOEOH->klass->vtable)._16_get_Attributes.method);
    if (pSVar5 != (System_Collections_Generic_IEnumerable_TResult__o *)0x0) {
      pSVar11 = pSVar5->klass;
      uVar1._0_1_ = (pSVar11->_2).rank;
      uVar1._1_1_ = (pSVar11->_2).minimumAlignment;
                    /* try { // try from 0347f1a0 to 0357f1af has its CatchHandler @ 0347f2d4 */
      uVar13 = (ulong)uVar1;
      if (uVar13 != 0) {
        piVar14 = &((pSVar11->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
              (Il2CppClass *)
              System_Collections_Generic_IEnumerable<ValueTuple<string,_string>>_TypeInfo) {
            pVVar7 = pSVar11->vtable + *piVar14;
            goto LAB_0347f1e8;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      pVVar7 = (VirtualInvokeData *)
               FUN_01b81914(pSVar5,
                            System_Collections_Generic_IEnumerable<ValueTuple<string,_string>>_TypeInfo
                            ,0);
LAB_0347f1e8:
                    /* try { // try from 0347f1f0 to 0357f20b has its CatchHandler @ 0347f2cc */
      plVar8 = (long *)(*pVVar7->methodPtr)(pSVar5,pVVar7->method);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar12 = *plVar8;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar15 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar9 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_0347f26c;
            }
            uVar13 = uVar13 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar13 != 0);
        }
        puVar9 = (undefined8 *)FUN_01b81914(plVar8,System_Collections_IEnumerator_TypeInfo,0);
LAB_0347f26c:
        uVar13 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        if ((uVar13 & 1) == 0) {
          if (plVar8 == (long *)0x0) goto LAB_0347f3bc;
          lVar12 = *plVar8;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 == 0) goto LAB_0347f394;
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          goto LAB_0347f37c;
        }
        lVar12 = *plVar8;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(System_Collections_Generic_IEnumerator_ValueTuple_string__string___c **)
                 (piVar15 + -2) ==
                System_Collections_Generic_IEnumerator<ValueTuple<string,_string>>_TypeInfo) {
                    /* try { // try from 0347f2bc to 0357f2bf has its CatchHandler @ 0347f2c8 */
                    /* try { // try from 0347f2c0 to 0357f313 has its CatchHandler @ 0347ef60 */
              puVar9 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_0347f2c8;
            }
                    /* try { // try from 0347f2a0 to 0357f2a7 has its CatchHandler @ 0347f2fc */
            uVar13 = uVar13 - 1;
            piVar15 = piVar15 + 4;
                    /* try { // try from 0347f2a8 to 0357f2ab has its CatchHandler @ 0347f2ec */
          } while (uVar13 != 0);
        }
                    /* try { // try from 0347f2ac to 0357f2af has its CatchHandler @ 0347f2d0 */
                    /* try { // try from 0347f2b0 to 0357f2b7 has its CatchHandler @ 0347f2e0 */
        puVar9 = (undefined8 *)
                 FUN_01b81914(plVar8,
                              System_Collections_Generic_IEnumerator<ValueTuple<string,_string>>_TypeInfo
                              ,0);
                    /* try { // try from 0347f2b8 to 0357f2bb has its CatchHandler @ 0347ef60 */
LAB_0347f2c8:
                    /* catch() { ... } // from try @ 0347f2bc with catch @ 0347f2c8 */
                    /* catch() { ... } // from try @ 0347f1f0 with catch @ 0347f2cc */
                    /* catch() { ... } // from try @ 0347f2ac with catch @ 0347f2d0 */
        auVar16 = (*(code *)*puVar9)(plVar8,puVar9[1]);
                    /* catch() { ... } // from try @ 0347f1a0 with catch @ 0347f2d4 */
                    /* catch() { ... } // from try @ 0347f178 with catch @ 0347f2d8 */
        pHVar3 = (__this->fields)._OCKMBJKKCJL_k__BackingField;
                    /* catch() { ... } // from try @ 0347f168 with catch @ 0347f2dc */
                    /* catch() { ... } // from try @ 0347f2b0 with catch @ 0347f2e0 */
                    /* catch() { ... } // from try @ 0347f180 with catch @ 0347f2e4 */
        __this_00 = (CNLIOJMLIFN_o *)thunk_FUN_01bda818(CNLIOJMLIFN_TypeInfo);
                    /* catch() { ... } // from try @ 0347f144 with catch @ 0347f2e8 */
                    /* catch() { ... } // from try @ 0347f2a8 with catch @ 0347f2ec */
                    /* catch() { ... } // from try @ 0347f150 with catch @ 0347f2f0 */
        CNLIOJMLIFN___ctor(__this_00,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0347f0dc with catch @ 0347f2f4 */
        if (__this_00 == (CNLIOJMLIFN_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
                    /* catch() { ... } // from try @ 0347f080 with catch @ 0347f2f8 */
                    /* catch() { ... } // from try @ 0347f2a0 with catch @ 0347f2fc */
        (__this_00->fields)._COIPKAKHDFP_k__BackingField = auVar16._0_8_;
        thunk_FUN_01c20e04(&__this_00->fields,auVar16._0_8_);
        if (pSVar6 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 0347f32c to 0357f393 has its CatchHandler @ 0347f3a8 */
          iVar2 = -1;
        }
        else {
                    /* try { // try from 0347f314 to 0357f317 has its CatchHandler @ 0347f324 */
          pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                              (pSVar6,auVar16._8_8_,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0347f314 with catch @ 0347f324 */
          iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar10,-1,(MethodInfo *)0x0);
        }
        (__this_00->fields)._AJBLFMPFEIO_k__BackingField = iVar2;
        if (pHVar3 == (HALBNMOPGKD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        DADDKDFBPIJ<object>__FIFBDNADAAL
                  ((DADDKDFBPIJ_T__o *)pHVar3,(Il2CppObject *)__this_00,
                   Method_DADDKDFBPIJ<CNLIOJMLIFN>_FIFBDNADAAL__);
      } while( true );
    }
  }
  goto LAB_0347f4a0;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar15 = piVar15 + 4;
    if (uVar13 == 0) break;
LAB_0347f37c:
    if (*(System_IDisposable_c **)(piVar15 + -2) == System_IDisposable_TypeInfo) {
                    /* catch() { ... } // from try @ 0347f32c with catch @ 0347f3a8
                       catch() { ... } // from try @ 0347f3a0 with catch @ 0347f3a8 */
      puVar9 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_0347f3b0;
    }
  }
LAB_0347f394:
                    /* try { // try from 0347f394 to 0357f39f has its CatchHandler @ 0347ef60 */
  puVar9 = (undefined8 *)FUN_01b81914(plVar8,System_IDisposable_TypeInfo,0);
                    /* try { // try from 0347f3a0 to 0357f3a7 has its CatchHandler @ 0347f3a8 */
LAB_0347f3b0:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
LAB_0347f3bc:
  pHVar3 = (__this->fields)._OCKMBJKKCJL_k__BackingField;
  pSVar6 = (System_Xml_XmlAttributeCollection_o *)
           (*(GGDPPDFOEOH->klass->vtable)._16_get_Attributes.methodPtr)
                     (GGDPPDFOEOH,(GGDPPDFOEOH->klass->vtable)._16_get_Attributes.method);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_293,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_294,(MethodInfo *)0x0);
  name = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  if (pSVar6 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 0347f45c to 0357f583 has its CatchHandler @ 0347f45c
                       catch() { ... } // from try @ 0347f45c with catch @ 0347f45c
                       catch() { ... } // from try @ 0347f6c8 with catch @ 0347f45c
                       catch() { ... } // from try @ 0347f6f8 with catch @ 0347f45c
                       catch() { ... } // from try @ 0347f718 with catch @ 0347f45c
                       catch() { ... } // from try @ 0347f7dc with catch @ 0347f45c
                       catch() { ... } // from try @ 0347f830 with catch @ 0347f45c
                       catch() { ... } // from try @ 0347f86c with catch @ 0347f45c */
    pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf(pSVar6,name,(MethodInfo *)0x0);
    iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar10,0x15180,(MethodInfo *)0x0);
    if (pHVar3 != (HALBNMOPGKD_o *)0x0) {
      (pHVar3->fields)._BFDCKNOCJLJ_k__BackingField = iVar2;
      return;
    }
  }
LAB_0347f4a0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

