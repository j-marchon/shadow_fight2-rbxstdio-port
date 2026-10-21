// OCMLPCKBHPN$$DPGIHMLJJPO @ RVA 0x327B938

/* WARNING: Removing unreachable block (ram,0x0337bd30) */

MGNDHCBAPEN_string__List_OANGEOLKMJG___o *
OCMLPCKBHPN__DPGIHMLJJPO(System_Xml_XmlNode_o *GCMHMONNHII,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  int32_t capacity;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *NANHIJPKIAP;
  System_Collections_Generic_List_object__o *__this;
  System_Collections_IEnumerator_o *pSVar7;
  VirtualInvokeData *pVVar8;
  System_Xml_XmlNode_o *pSVar9;
  OANGEOLKMJG_o *__this_00;
  long *plVar10;
  undefined8 *puVar11;
  MGNDHCBAPEN_string__List_OANGEOLKMJG___o *__this_01;
  System_Collections_IEnumerator_c *pSVar12;
  System_Object_array *pSVar13;
  long lVar14;
  ulong uVar15;
  int32_t *piVar16;
  int *piVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  auVar18._8_8_ = method;
  auVar18._0_8_ = GCMHMONNHII;
  if ((DAT_04567258 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<OANGEOLKMJG>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OANGEOLKMJG>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<OANGEOLKMJG>_TypeInfo);
    FUN_01bab630(&Method_MGNDHCBAPEN<string,_List<OANGEOLKMJG>>__ctor__);
    FUN_01bab630(&MGNDHCBAPEN<string,_List<OANGEOLKMJG>>_TypeInfo);
    FUN_01bab630(&OANGEOLKMJG_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_9327);
    auVar18 = FUN_01bab630(&StringLiteral_1);
    DAT_04567258 = 1;
  }
  if (GCMHMONNHII != (System_Xml_XmlNode_o *)0x0) {
    auVar19 = (*(GCMHMONNHII->klass->vtable)._16_get_Attributes.methodPtr)
                        (GCMHMONNHII,(GCMHMONNHII->klass->vtable)._16_get_Attributes.method);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = auVar19._8_8_;
    auVar18 = auVar5 << 0x40;
    if (auVar19._0_8_ != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (auVar19._0_8_,StringLiteral_9327,(MethodInfo *)0x0);
      NANHIJPKIAP = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1,(MethodInfo *)0x0);
      auVar18 = (*(GCMHMONNHII->klass->vtable)._18_get_FirstChild.methodPtr)
                          (GCMHMONNHII,(GCMHMONNHII->klass->vtable)._18_get_FirstChild.method);
      pSVar9 = auVar18._0_8_;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = auVar18._8_8_;
      auVar18 = auVar19 << 0x40;
      if (pSVar9 != (System_Xml_XmlNode_o *)0x0) {
        auVar18 = (*(pSVar9->klass->vtable)._13_get_ChildNodes.methodPtr)
                            (pSVar9,(pSVar9->klass->vtable)._13_get_ChildNodes.method);
        plVar10 = auVar18._0_8_;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = auVar18._8_8_;
        auVar18 = auVar6 << 0x40;
        if (plVar10 != (long *)0x0) {
          capacity = (**(code **)(*plVar10 + 0x1a8))(plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
          __this = (System_Collections_Generic_List_object__o *)
                   thunk_FUN_01bda818(System_Collections_Generic_List<OANGEOLKMJG>_TypeInfo);
          System_Collections_Generic_List<object>___ctor
                    (__this,capacity,Method_System_Collections_Generic_List<OANGEOLKMJG>__ctor__);
          pSVar7 = System_Xml_XmlNode__GetEnumerator(pSVar9,(MethodInfo *)0x0);
          if (pSVar7 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          do {
            pSVar12 = pSVar7->klass;
            uVar2._0_1_ = (pSVar12->_2).rank;
            uVar2._1_1_ = (pSVar12->_2).minimumAlignment;
            uVar15 = (ulong)uVar2;
            if (uVar15 != 0) {
              piVar16 = &((pSVar12->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar16 + -2))->interfaceType ==
                    (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
                  pVVar8 = pSVar12->vtable + *piVar16;
                  goto LAB_0337bb28;
                }
                uVar15 = uVar15 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar15 != 0);
            }
            pVVar8 = (VirtualInvokeData *)
                     FUN_01b81914(pSVar7,System_Collections_IEnumerator_TypeInfo,0);
LAB_0337bb28:
            uVar15 = (*pVVar8->methodPtr)(pSVar7,pVVar8->method);
            if ((uVar15 & 1) == 0) {
              plVar10 = (long *)thunk_FUN_01bda71c(pSVar7,System_IDisposable_TypeInfo);
              if (plVar10 == (long *)0x0) goto LAB_0337bcc4;
              lVar14 = *plVar10;
              uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
              if (uVar15 == 0) goto LAB_0337bc9c;
              piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              goto LAB_0337bc84;
            }
            pSVar12 = pSVar7->klass;
            uVar3._0_1_ = (pSVar12->_2).rank;
            uVar3._1_1_ = (pSVar12->_2).minimumAlignment;
            uVar15 = (ulong)uVar3;
            if (uVar15 != 0) {
              piVar16 = &((pSVar12->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar16 + -2))->interfaceType ==
                    (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
                  pVVar8 = pSVar12->vtable + (*piVar16 + 1);
                  goto LAB_0337bb88;
                }
                uVar15 = uVar15 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar15 != 0);
            }
            pVVar8 = (VirtualInvokeData *)
                     FUN_01b81914(pSVar7,System_Collections_IEnumerator_TypeInfo,1);
LAB_0337bb88:
            pSVar9 = (System_Xml_XmlNode_o *)(*pVVar8->methodPtr)(pSVar7,pVVar8->method);
            if (pSVar9 != (System_Xml_XmlNode_o *)0x0) {
              bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
              if (((pSVar9->klass->_2).naturalAligment < bVar1) ||
                 ((pSVar9->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                  (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                FUN_01babc64(pSVar9);
              }
            }
            __this_00 = (OANGEOLKMJG_o *)thunk_FUN_01bda818(OANGEOLKMJG_TypeInfo);
            OANGEOLKMJG___ctor(__this_00,(MethodInfo *)0x0);
            if (__this_00 == (OANGEOLKMJG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            OANGEOLKMJG__HNIHOIAMDPC(__this_00,pSVar9,(MethodInfo *)0x0);
            lVar14 = Method_System_Collections_Generic_List<OANGEOLKMJG>_Add__;
            if (__this == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar13 = (__this->fields)._items;
            (__this->fields)._version = (__this->fields)._version + 1;
            if (pSVar13 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            uVar4 = (__this->fields)._size;
            if (uVar4 < (uint)pSVar13->max_length) {
              (__this->fields)._size = uVar4 + 1;
              pSVar13->m_Items[(int)uVar4] = (Il2CppObject *)__this_00;
              thunk_FUN_01c20e04(pSVar13->m_Items + (int)uVar4,__this_00);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (__this,(Il2CppObject *)__this_00,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70)
                        );
            }
          } while( true );
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar18._0_8_,auVar18._8_8_);
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar17 = piVar17 + 4;
    if (uVar15 == 0) break;
LAB_0337bc84:
    if (*(System_IDisposable_c **)(piVar17 + -2) == System_IDisposable_TypeInfo) {
      puVar11 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_0337bcb8;
    }
  }
LAB_0337bc9c:
  puVar11 = (undefined8 *)FUN_01b81914(plVar10,System_IDisposable_TypeInfo,0);
LAB_0337bcb8:
  (*(code *)*puVar11)(plVar10,puVar11[1]);
LAB_0337bcc4:
  __this_01 = (MGNDHCBAPEN_string__List_OANGEOLKMJG___o *)
              thunk_FUN_01bda818(MGNDHCBAPEN<string,_List<OANGEOLKMJG>>_TypeInfo);
  MGNDHCBAPEN<object,_object>___ctor
            ((MGNDHCBAPEN_T1__T2__o *)__this_01,(Il2CppObject *)NANHIJPKIAP,(Il2CppObject *)__this,
             Method_MGNDHCBAPEN<string,_List<OANGEOLKMJG>>__ctor__);
  return __this_01;
}

