// NLAJHFAOEDB$$HNIHOIAMDPC @ RVA 0x326CC94

/* WARNING: Removing unreachable block (ram,0x0336d15c) */

void NLAJHFAOEDB__HNIHOIAMDPC
               (NLAJHFAOEDB_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  int32_t capacity;
  System_Xml_XmlAttributeCollection_o *pSVar5;
  System_Xml_XmlAttribute_o *pSVar6;
  System_String_o *pSVar7;
  long *plVar8;
  System_Collections_Generic_List_string__o *pSVar9;
  System_Collections_IEnumerator_o *pSVar10;
  VirtualInvokeData *pVVar11;
  undefined8 *puVar12;
  System_Collections_IEnumerator_c *pSVar13;
  System_String_array *pSVar14;
  long lVar15;
  ulong uVar16;
  int32_t *piVar17;
  int *piVar18;
  System_Collections_Generic_List_string__o **ppSVar19;
  
  if ((DAT_045671f2 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
                    /* try { // try from 0336cd04 to 0346cd97 has its CatchHandler @ 0336cd04
                       catch() { ... } // from try @ 0336cd04 with catch @ 0336cd04
                       catch() { ... } // from try @ 0336cda0 with catch @ 0336cd04
                       catch() { ... } // from try @ 0336cdf4 with catch @ 0336cd04
                       catch() { ... } // from try @ 0336ce18 with catch @ 0336cd04
                       catch() { ... } // from try @ 0336ce48 with catch @ 0336cd04 */
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_10431);
    FUN_01bab630(&StringLiteral_10069);
    FUN_01bab630(&StringLiteral_11340);
    FUN_01bab630(&StringLiteral_8110);
    DAT_045671f2 = 1;
  }
  BOFEMGGNODC__HNIHOIAMDPC((BOFEMGGNODC_o *)__this,JHMENEKPIBO,(MethodInfo *)0x0);
  if ((JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) &&
     (pSVar5 = (System_Xml_XmlAttributeCollection_o *)
               (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                         (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method),
     pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar5,StringLiteral_10431,(MethodInfo *)0x0);
                    /* try { // try from 0336cd98 to 0346cd9f has its CatchHandler @ 0336cdfc */
                    /* try { // try from 0336cda0 to 0346cdef has its CatchHandler @ 0336cd04 */
    pSVar7 = EIABCPKDEBD__JPKEHIBGOEM
                       (pSVar6,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
    (__this->fields).GMILEGDKKPL = pSVar7;
    thunk_FUN_01c20e04();
    pSVar5 = (System_Xml_XmlAttributeCollection_o *)
             (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                       (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
    if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar5,StringLiteral_10069,(MethodInfo *)0x0);
                    /* try { // try from 0336cdf0 to 0346cdf3 has its CatchHandler @ 0336cdf8 */
                    /* try { // try from 0336cdf4 to 0346ce13 has its CatchHandler @ 0336cd04 */
      pSVar7 = EIABCPKDEBD__JPKEHIBGOEM
                         (pSVar6,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0336cdf0 with catch @ 0336cdf8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0336cd98 with catch @ 0336cdfc
                        */
      (__this->fields).FGMNPHMOMFI = pSVar7;
      thunk_FUN_01c20e04();
                    /* try { // try from 0336ce14 to 0346ce17 has its CatchHandler @ 0336ce38 */
                    /* try { // try from 0336ce18 to 0346ce3f has its CatchHandler @ 0336cd04 */
      pSVar5 = (System_Xml_XmlAttributeCollection_o *)
               (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                         (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
      if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar5,StringLiteral_11340,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0336ce14 with catch @ 0336ce38 */
                    /* try { // try from 0336ce40 to 0346ce47 has its CatchHandler @ 0336ce5c */
        pSVar7 = EIABCPKDEBD__JPKEHIBGOEM
                           (pSVar6,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
                    /* try { // try from 0336ce48 to 0346ce53 has its CatchHandler @ 0336cd04 */
        (__this->fields).BNDDPDNJAGJ = pSVar7;
                    /* try { // try from 0336ce54 to 0346ce5b has its CatchHandler @ 0336ce5c */
        thunk_FUN_01c20e04();
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0336ce40 with catch @ 0336ce5c
                       catch(type#2 @ 00000000) { ... } // from try @ 0336ce54 with catch @ 0336ce5c
                        */
                    /* try { // try from 0336ce60 to 0346cfa3 has its CatchHandler @ 0336ce60
                       catch() { ... } // from try @ 0336ce60 with catch @ 0336ce60
                       catch() { ... } // from try @ 0336d0fc with catch @ 0336ce60
                       catch() { ... } // from try @ 0336d1a4 with catch @ 0336ce60
                       catch() { ... } // from try @ 0336d1ac with catch @ 0336ce60
                       catch() { ... } // from try @ 0336d26c with catch @ 0336ce60 */
        plVar8 = (long *)(*(JHMENEKPIBO->klass->vtable)._13_get_ChildNodes.methodPtr)
                                   (JHMENEKPIBO,
                                    (JHMENEKPIBO->klass->vtable)._13_get_ChildNodes.method);
        if (plVar8 != (long *)0x0) {
          capacity = (**(code **)(*plVar8 + 0x1a8))(plVar8,*(undefined8 *)(*plVar8 + 0x1b0));
          pSVar9 = (System_Collections_Generic_List_string__o *)
                   thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
          System_Collections_Generic_List<object>___ctor
                    ((System_Collections_Generic_List_object__o *)pSVar9,capacity,
                     Method_System_Collections_Generic_List<string>__ctor__);
          ppSVar19 = &(__this->fields).DAKLKLLKLEA;
          *ppSVar19 = pSVar9;
          thunk_FUN_01c20e04(ppSVar19,pSVar9);
          pSVar10 = System_Xml_XmlNode__GetEnumerator(JHMENEKPIBO,(MethodInfo *)0x0);
          if (pSVar10 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          do {
            pSVar13 = pSVar10->klass;
            uVar2._0_1_ = (pSVar13->_2).rank;
            uVar2._1_1_ = (pSVar13->_2).minimumAlignment;
            uVar16 = (ulong)uVar2;
            if (uVar16 != 0) {
              piVar17 = &((pSVar13->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar17 + -2))->interfaceType ==
                    (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
                  pVVar11 = pSVar13->vtable + *piVar17;
                  goto LAB_0336cf44;
                }
                uVar16 = uVar16 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar16 != 0);
            }
            pVVar11 = (VirtualInvokeData *)
                      FUN_01b81914(pSVar10,System_Collections_IEnumerator_TypeInfo,0);
LAB_0336cf44:
            uVar16 = (*pVVar11->methodPtr)(pSVar10,pVVar11->method);
            if ((uVar16 & 1) == 0) {
              plVar8 = (long *)thunk_FUN_01bda71c(pSVar10,System_IDisposable_TypeInfo);
              if (plVar8 == (long *)0x0) {
                return;
              }
              lVar15 = *plVar8;
              uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
              if (uVar16 == 0) goto LAB_0336d0f0;
              piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              goto LAB_0336d0d8;
            }
            pSVar13 = pSVar10->klass;
            uVar3._0_1_ = (pSVar13->_2).rank;
            uVar3._1_1_ = (pSVar13->_2).minimumAlignment;
            uVar16 = (ulong)uVar3;
            if (uVar16 != 0) {
              piVar17 = &((pSVar13->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar17 + -2))->interfaceType ==
                    (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
                  pVVar11 = pSVar13->vtable + (*piVar17 + 1);
                  goto LAB_0336cfa4;
                }
                uVar16 = uVar16 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar16 != 0);
            }
            pVVar11 = (VirtualInvokeData *)
                      FUN_01b81914(pSVar10,System_Collections_IEnumerator_TypeInfo,1);
LAB_0336cfa4:
                    /* try { // try from 0336cfa4 to 0346cfcb has its CatchHandler @ 0336d1d4 */
            plVar8 = (long *)(*pVVar11->methodPtr)(pSVar10,pVVar11->method);
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
            pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                     (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
            if (pSVar5 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
                    /* try { // try from 0336d000 to 0346d02b has its CatchHandler @ 0336d1d0 */
            pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar5,StringLiteral_8110,(MethodInfo *)0x0);
            if (pSVar6 != (System_Xml_XmlAttribute_o *)0x0) {
              pSVar9 = *ppSVar19;
              pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                       (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
              if (pSVar5 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar5,StringLiteral_8110,(MethodInfo *)0x0);
              pSVar7 = EIABCPKDEBD__JPKEHIBGOEM
                                 (pSVar6,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
              lVar15 = Method_System_Collections_Generic_List<string>_Add__;
              if (pSVar9 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pSVar14 = (pSVar9->fields)._items;
              (pSVar9->fields)._version = (pSVar9->fields)._version + 1;
              if (pSVar14 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
                    /* try { // try from 0336d068 to 0346d06f has its CatchHandler @ 0336d1c4 */
              uVar4 = (pSVar9->fields)._size;
                    /* try { // try from 0336d074 to 0346d07b has its CatchHandler @ 0336d1cc */
              if (uVar4 < (uint)pSVar14->max_length) {
                (pSVar9->fields)._size = uVar4 + 1;
                    /* try { // try from 0336d084 to 0346d097 has its CatchHandler @ 0336d1bc */
                pSVar14->m_Items[(int)uVar4] = pSVar7;
                thunk_FUN_01c20e04();
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar9,
                           (Il2CppObject *)pSVar7,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
              }
            }
          } while( true );
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar18 = piVar18 + 4;
    if (uVar16 == 0) break;
LAB_0336d0d8:
                    /* try { // try from 0336d0d8 to 0346d0fb has its CatchHandler @ 0336d1b8 */
    if (*(System_IDisposable_c **)(piVar18 + -2) == System_IDisposable_TypeInfo) {
      puVar12 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_0336d10c;
    }
  }
LAB_0336d0f0:
  puVar12 = (undefined8 *)FUN_01b81914(plVar8,System_IDisposable_TypeInfo,0);
                    /* try { // try from 0336d0fc to 0346d18f has its CatchHandler @ 0336ce60 */
LAB_0336d10c:
  (*(code *)*puVar12)(plVar8,puVar12[1]);
  return;
}

