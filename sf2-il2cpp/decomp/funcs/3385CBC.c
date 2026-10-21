// IDDIABHBDEE$$CFDNKEIMGDA @ RVA 0x3385CBC

/* WARNING: Removing unreachable block (ram,0x034864ac) */

void IDDIABHBDEE__CFDNKEIMGDA
               (IDDIABHBDEE_o *__this,System_Xml_XmlNode_o *GGDPPDFOEOH,MethodInfo *method)

{
  int32_t length;
  uint uVar1;
  bool bVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Byte_array *pSVar4;
  System_Byte_array *pSVar5;
  System_String_o *pSVar6;
  System_Xml_XmlAttribute_o *pSVar7;
  System_String_o *pSVar8;
  System_Xml_XmlDocument_o *pSVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  System_Collections_Generic_List_string__o *pSVar13;
  long lVar14;
  System_String_array *pSVar15;
  ulong uVar16;
  int *piVar17;
  
                    /* try { // try from 03485cd0 to 03585cdb has its CatchHandler @ 034858b8 */
                    /* try { // try from 03485cdc to 03585ce3 has its CatchHandler @ 03485ce4 */
                    /* catch() { ... } // from try @ 03485c68 with catch @ 03485ce4
                       catch() { ... } // from try @ 03485cdc with catch @ 03485ce4 */
  if ((DAT_04567bbd & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_511);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_512);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_513);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_514);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_515);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_516);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_517);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_518);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_519);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_520);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_521);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_522);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_523);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_524);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_525);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_526);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Clear__);
    FUN_01bab630(&POHNPIMJDOI_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_04567bbd = 1;
  }
  pSVar13 = (__this->fields).BAFGDPDFPLK;
  if (pSVar13 == (System_Collections_Generic_List_string__o *)0x0) {
LAB_034864a4:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 034864a4 to 035864d3 has its CatchHandler @ 03486398 */
    FUN_01bab8c8();
  }
  length = (pSVar13->fields)._size;
  (pSVar13->fields)._size = 0;
  (pSVar13->fields)._version = (pSVar13->fields)._version + 1;
  if (0 < length) {
    System_Array__Clear((System_Array_o *)(pSVar13->fields)._items,0,length,(MethodInfo *)0x0);
  }
  if (GGDPPDFOEOH == (System_Xml_XmlNode_o *)0x0) {
    return;
  }
  pSVar3 = (System_Xml_XmlAttributeCollection_o *)
           (*(GGDPPDFOEOH->klass->vtable)._16_get_Attributes.methodPtr)
                     (GGDPPDFOEOH,(GGDPPDFOEOH->klass->vtable)._16_get_Attributes.method);
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_511,(MethodInfo *)0x0);
  pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar5,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_512,(MethodInfo *)0x0);
  pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
  if (pSVar3 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_034864a4;
  pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf(pSVar3,pSVar6,(MethodInfo *)0x0);
  pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(pSVar7,(System_String_o *)0x0,(MethodInfo *)0x0);
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_513,(MethodInfo *)0x0);
  pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar5,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_514,(MethodInfo *)0x0);
  pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
  if (pSVar6 == (System_String_o *)0x0) goto LAB_034864a4;
  bVar2 = System_String__StartsWith(pSVar6,pSVar8,(MethodInfo *)0x0);
  if (bVar2) {
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_515,(MethodInfo *)0x0);
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_516,(MethodInfo *)0x0);
    pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
                    /* try { // try from 03485fac to 035860ef has its CatchHandler @ 03485fac
                       catch() { ... } // from try @ 03485fac with catch @ 03485fac
                       catch() { ... } // from try @ 034861a4 with catch @ 03485fac
                       catch() { ... } // from try @ 03486238 with catch @ 03485fac
                       catch() { ... } // from try @ 03486240 with catch @ 03485fac
                       catch() { ... } // from try @ 034862e0 with catch @ 03485fac */
    bVar2 = System_String__EndsWith(pSVar6,pSVar8,(MethodInfo *)0x0);
    if (bVar2) {
      pSVar6 = System_String__Substring
                         (pSVar6,1,(pSVar6->fields)._stringLength + -2,(MethodInfo *)0x0);
      if ((POHNPIMJDOI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(POHNPIMJDOI_TypeInfo);
      }
      pSVar6 = POHNPIMJDOI__CLACEPEKAIM(pSVar6,(MethodInfo *)0x0);
      pSVar9 = GIAMPEGMNHE__KGEKFIHAHLJ(pSVar6,true,false,(MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      if (pSVar9 != (System_Xml_XmlDocument_o *)0x0) {
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_517,
                   (MethodInfo *)0x0);
        pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar5,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_518,
                   (MethodInfo *)0x0);
        pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
        plVar10 = (long *)(*(pSVar9->klass->vtable)._51_get_Item.methodPtr)
                                    (pSVar9,pSVar6,(pSVar9->klass->vtable)._51_get_Item.method);
        if (plVar10 != (long *)0x0) {
          pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                   (**(code **)(*plVar10 + 0x238))(plVar10,*(undefined8 *)(*plVar10 + 0x240));
          pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar4,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_523,
                     (MethodInfo *)0x0);
          pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 034860f0 to 03586117 has its CatchHandler @ 03486258 */
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar5,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_524,
                     (MethodInfo *)0x0);
          pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
          if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf(pSVar3,pSVar6,(MethodInfo *)0x0);
            bVar2 = EIABCPKDEBD__FMBMNDIGLIG(pSVar7,false,(MethodInfo *)0x0);
            (__this->fields).HOKAADLNKJF = bVar2;
            plVar11 = (long *)(**(code **)(*plVar10 + 0x208))
                                        (plVar10,*(undefined8 *)(*plVar10 + 0x210));
            if (plVar11 != (long *)0x0) {
                    /* try { // try from 0348614c to 03586173 has its CatchHandler @ 03486254 */
              plVar11 = (long *)(**(code **)(*plVar11 + 0x1b8))
                                          (plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
              if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              do {
                lVar14 = *plVar11;
                uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
                if (uVar16 != 0) {
                  piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                  do {
                    /* try { // try from 03486194 to 035861a3 has its CatchHandler @ 03486248 */
                    if (*(System_Collections_IEnumerator_c **)(piVar17 + -2) ==
                        System_Collections_IEnumerator_TypeInfo) {
                      puVar12 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
                      goto LAB_034861c4;
                    }
                    uVar16 = uVar16 - 1;
                    piVar17 = piVar17 + 4;
                    /* try { // try from 034861a4 to 03586233 has its CatchHandler @ 03485fac */
                  } while (uVar16 != 0);
                }
                puVar12 = (undefined8 *)
                          FUN_01b81914(plVar11,System_Collections_IEnumerator_TypeInfo,0);
LAB_034861c4:
                uVar16 = (*(code *)*puVar12)(plVar11,puVar12[1]);
                if ((uVar16 & 1) == 0) {
                  plVar10 = (long *)thunk_FUN_01bda71c(plVar11,System_IDisposable_TypeInfo);
                  if (plVar10 == (long *)0x0) {
                    return;
                  }
                  lVar14 = *plVar10;
                  uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
                  if (uVar16 == 0) goto LAB_03486408;
                  piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                  goto LAB_034863f0;
                }
                lVar14 = *plVar11;
                uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
                if (uVar16 != 0) {
                  piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                  do {
                    if (*(System_Collections_IEnumerator_c **)(piVar17 + -2) ==
                        System_Collections_IEnumerator_TypeInfo) {
                      puVar12 = (undefined8 *)(lVar14 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                      goto LAB_03486224;
                    }
                    uVar16 = uVar16 - 1;
                    piVar17 = piVar17 + 4;
                  } while (uVar16 != 0);
                }
                puVar12 = (undefined8 *)
                          FUN_01b81914(plVar11,System_Collections_IEnumerator_TypeInfo,1);
LAB_03486224:
                (*(code *)*puVar12)(plVar11,puVar12[1]);
                    /* try { // try from 03486234 to 03586237 has its CatchHandler @ 03486250 */
                pSVar13 = (__this->fields).BAFGDPDFPLK;
                    /* try { // try from 03486238 to 0358623b has its CatchHandler @ 03485fac */
                    /* try { // try from 0348623c to 0358623f has its CatchHandler @ 0348624c */
                    /* try { // try from 03486240 to 0358626f has its CatchHandler @ 03485fac */
                pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                         (**(code **)(*plVar10 + 0x238))(plVar10,*(undefined8 *)(*plVar10 + 0x240));
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03486194 with catch @ 03486248
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0348623c with catch @ 0348624c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03486234 with catch @ 03486250
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0348614c with catch @ 03486254
                        */
                pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034860f0 with catch @ 03486258
                        */
                System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                          ((System_Array_o *)pSVar4,
                           Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_525,
                           (MethodInfo *)0x0);
                    /* try { // try from 03486270 to 03586273 has its CatchHandler @ 03486280 */
                pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* catch() { ... } // from try @ 03486270 with catch @ 03486280 */
                System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                          ((System_Array_o *)pSVar5,
                           Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_526,
                           (MethodInfo *)0x0);
                pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
                if (pSVar3 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                                   (pSVar3,pSVar6,(MethodInfo *)0x0);
                    /* try { // try from 034862b8 to 035862df has its CatchHandler @ 034862f4 */
                pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(pSVar7,(System_String_o *)0x0,(MethodInfo *)0x0);
                lVar14 = Method_System_Collections_Generic_List<string>_Add__;
                if (pSVar13 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 034864a0 to 035864a3 has its CatchHandler @ 034864cc */
                  FUN_01bab8c8();
                }
                pSVar15 = (pSVar13->fields)._items;
                (pSVar13->fields)._version = (pSVar13->fields)._version + 1;
                if (pSVar15 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                uVar1 = (pSVar13->fields)._size;
                    /* try { // try from 034862e0 to 035862eb has its CatchHandler @ 03485fac */
                if (uVar1 < (uint)pSVar15->max_length) {
                    /* try { // try from 034862ec to 035862f3 has its CatchHandler @ 034862f4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 034862b8 with catch @ 034862f4
                       catch(type#2 @ 00000000) { ... } // from try @ 034862ec with catch @ 034862f4
                        */
                  (pSVar13->fields)._size = uVar1 + 1;
                  pSVar15->m_Items[(int)uVar1] = pSVar6;
                  thunk_FUN_01c20e04();
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)pSVar13,
                             (Il2CppObject *)pSVar6,
                             *(MethodInfo_26E4DAC **)
                              (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                }
              } while( true );
            }
          }
        }
        goto LAB_034864a4;
      }
                    /* try { // try from 03486424 to 0358642b has its CatchHandler @ 03486488 */
                    /* try { // try from 0348642c to 0358647b has its CatchHandler @ 03486398 */
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_519,(MethodInfo *)0x0
                );
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_520,(MethodInfo *)0x0
                );
      goto LAB_0348636c;
    }
  }
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_521,(MethodInfo *)0x0);
  pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar5,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_522,(MethodInfo *)0x0);
LAB_0348636c:
  pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
                    /* try { // try from 03486398 to 03586423 has its CatchHandler @ 03486398
                       catch() { ... } // from try @ 03486398 with catch @ 03486398
                       catch() { ... } // from try @ 0348642c with catch @ 03486398
                       catch() { ... } // from try @ 03486480 with catch @ 03486398
                       catch() { ... } // from try @ 034864a4 with catch @ 03486398
                       catch() { ... } // from try @ 034864dc with catch @ 03486398 */
  UnityEngine_Debug__LogError((Il2CppObject *)pSVar6,(MethodInfo *)0x0);
  return;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
LAB_034863f0:
    if (*(System_IDisposable_c **)(piVar17 + -2) == System_IDisposable_TypeInfo) {
      puVar12 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_0348646c;
    }
  }
LAB_03486408:
  puVar12 = (undefined8 *)FUN_01b81914(plVar10,System_IDisposable_TypeInfo,0);
LAB_0348646c:
  (*(code *)*puVar12)(plVar10,puVar12[1]);
                    /* try { // try from 0348647c to 0358647f has its CatchHandler @ 03486484 */
                    /* try { // try from 03486480 to 0358649f has its CatchHandler @ 03486398 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0348647c with catch @ 03486484
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03486424 with catch @ 03486488
                        */
  return;
}

