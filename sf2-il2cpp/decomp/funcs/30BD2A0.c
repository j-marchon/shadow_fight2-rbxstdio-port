// ANMHMMJOHJG$$.ctor @ RVA 0x30BD2A0

/* WARNING: Removing unreachable block (ram,0x031bd614) */

void ANMHMMJOHJG___ctor(ANMHMMJOHJG_o *__this,System_Xml_XmlNode_o *CJPHHMIHOGD,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *pSVar5;
  System_String_o *pSVar6;
  System_Collections_Generic_List_MFELPDAPJGO__o *pSVar7;
  System_Collections_IEnumerator_o *pSVar8;
  VirtualInvokeData *pVVar9;
  System_Xml_XmlNode_o *CJPHHMIHOGD_00;
  MFELPDAPJGO_o *__this_01;
  long *plVar10;
  undefined8 *puVar11;
  System_Collections_IEnumerator_c *pSVar12;
  MFELPDAPJGO_array *pMVar13;
  long lVar14;
  ulong uVar15;
  int32_t *piVar16;
  int *piVar17;
  System_Collections_Generic_List_MFELPDAPJGO__o **ppSVar18;
  
  if ((DAT_0456625a & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MFELPDAPJGO>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MFELPDAPJGO>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<MFELPDAPJGO>_TypeInfo);
    FUN_01bab630(&MFELPDAPJGO_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_9327);
    DAT_0456625a = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (((CJPHHMIHOGD == (System_Xml_XmlNode_o *)0x0) ||
      (__this_00 = (System_Xml_XmlAttributeCollection_o *)
                   (*(CJPHHMIHOGD->klass->vtable)._16_get_Attributes.methodPtr)
                             (CJPHHMIHOGD,(CJPHHMIHOGD->klass->vtable)._16_get_Attributes.method),
      __this_00 == (System_Xml_XmlAttributeCollection_o *)0x0)) ||
     (pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (__this_00,StringLiteral_9327,(MethodInfo *)0x0),
     pSVar5 == (System_Xml_XmlAttribute_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar6 = (System_String_o *)
           (*(pSVar5->klass->vtable)._9_get_Value.methodPtr)
                     (pSVar5,(pSVar5->klass->vtable)._9_get_Value.method);
  (__this->fields)._COIPKAKHDFP_k__BackingField = pSVar6;
  thunk_FUN_01c20e04();
  pSVar7 = (System_Collections_Generic_List_MFELPDAPJGO__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<MFELPDAPJGO>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar7,
             Method_System_Collections_Generic_List<MFELPDAPJGO>__ctor__);
  ppSVar18 = &(__this->fields)._JAONHHOBCKA_k__BackingField;
  *ppSVar18 = pSVar7;
  thunk_FUN_01c20e04(ppSVar18,pSVar7);
  pSVar8 = System_Xml_XmlNode__GetEnumerator(CJPHHMIHOGD,(MethodInfo *)0x0);
  if (pSVar8 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    pSVar12 = pSVar8->klass;
    uVar2._0_1_ = (pSVar12->_2).rank;
    uVar2._1_1_ = (pSVar12->_2).minimumAlignment;
    uVar15 = (ulong)uVar2;
    if (uVar15 != 0) {
      piVar16 = &((pSVar12->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar16 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
          pVVar9 = pSVar12->vtable + *piVar16;
          goto LAB_031bd44c;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    pVVar9 = (VirtualInvokeData *)FUN_01b81914(pSVar8,System_Collections_IEnumerator_TypeInfo,0);
LAB_031bd44c:
    uVar15 = (*pVVar9->methodPtr)(pSVar8,pVVar9->method);
    if ((uVar15 & 1) == 0) {
      plVar10 = (long *)thunk_FUN_01bda71c(pSVar8,System_IDisposable_TypeInfo);
      if (plVar10 == (long *)0x0) {
        return;
      }
      lVar14 = *plVar10;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 == 0) goto LAB_031bd5b4;
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      break;
    }
    pSVar12 = pSVar8->klass;
    uVar3._0_1_ = (pSVar12->_2).rank;
    uVar3._1_1_ = (pSVar12->_2).minimumAlignment;
    uVar15 = (ulong)uVar3;
    if (uVar15 != 0) {
      piVar16 = &((pSVar12->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar16 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
          pVVar9 = pSVar12->vtable + (*piVar16 + 1);
          goto LAB_031bd4ac;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    pVVar9 = (VirtualInvokeData *)FUN_01b81914(pSVar8,System_Collections_IEnumerator_TypeInfo,1);
LAB_031bd4ac:
    CJPHHMIHOGD_00 = (System_Xml_XmlNode_o *)(*pVVar9->methodPtr)(pSVar8,pVVar9->method);
    if (CJPHHMIHOGD_00 != (System_Xml_XmlNode_o *)0x0) {
      bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
      if (((CJPHHMIHOGD_00->klass->_2).naturalAligment < bVar1) ||
         ((CJPHHMIHOGD_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(CJPHHMIHOGD_00);
      }
    }
    pSVar7 = *ppSVar18;
    __this_01 = (MFELPDAPJGO_o *)thunk_FUN_01bda818(MFELPDAPJGO_TypeInfo);
    MFELPDAPJGO___ctor(__this_01,CJPHHMIHOGD_00,(MethodInfo *)0x0);
    lVar14 = Method_System_Collections_Generic_List<MFELPDAPJGO>_Add__;
    if (pSVar7 == (System_Collections_Generic_List_MFELPDAPJGO__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pMVar13 = (pSVar7->fields)._items;
    (pSVar7->fields)._version = (pSVar7->fields)._version + 1;
    if (pMVar13 == (MFELPDAPJGO_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar4 = (pSVar7->fields)._size;
    if (uVar4 < (uint)pMVar13->max_length) {
      (pSVar7->fields)._size = uVar4 + 1;
      pMVar13->m_Items[(int)uVar4] = __this_01;
      thunk_FUN_01c20e04(pMVar13->m_Items + (int)uVar4,__this_01);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar7,(Il2CppObject *)__this_01,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
    }
  } while( true );
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar17 = piVar17 + 4;
    if (uVar15 == 0) break;
    if (*(System_IDisposable_c **)(piVar17 + -2) == System_IDisposable_TypeInfo) {
      puVar11 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_031bd5d0;
    }
  }
LAB_031bd5b4:
  puVar11 = (undefined8 *)FUN_01b81914(plVar10,System_IDisposable_TypeInfo,0);
LAB_031bd5d0:
  (*(code *)*puVar11)(plVar10,puVar11[1]);
  return;
}

