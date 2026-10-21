// ACHLOMELAJE$$LAHEBBOBBNG @ RVA 0x305F000

/* WARNING: Removing unreachable block (ram,0x0315f3cc) */

void ACHLOMELAJE__LAHEBBOBBNG(ACHLOMELAJE_o *__this,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  bool AAHDALLELJN;
  System_Xml_XmlNode_o *__this_00;
  System_Collections_IEnumerator_o *pSVar5;
  VirtualInvokeData *pVVar6;
  long *plVar7;
  System_Xml_XmlAttributeCollection_o *pSVar8;
  System_Xml_XmlAttribute_o *pSVar9;
  System_String_o *KGLJICLJHEL;
  System_String_o *DGMHNKGDAIL;
  DPIEIFJBFHE_o *__this_01;
  undefined8 *puVar10;
  MethodInfo *extraout_x1;
  System_Collections_IEnumerator_c *pSVar11;
  DPIEIFJBFHE_array *pDVar12;
  long lVar13;
  ulong uVar14;
  int32_t *piVar15;
  int *piVar16;
  System_Collections_Generic_List_DPIEIFJBFHE__o *__this_02;
  
  if ((DAT_04565ede & 1) == 0) {
    FUN_01bab630(&DPIEIFJBFHE_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<DPIEIFJBFHE>_Add__);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_13821);
    FUN_01bab630(&StringLiteral_7096);
    DAT_04565ede = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).GOPHEBKALBN;
  if (__this_00 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,method);
  }
  pSVar5 = System_Xml_XmlNode__GetEnumerator(__this_00,(MethodInfo *)0x0);
  if (pSVar5 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    pSVar11 = pSVar5->klass;
    uVar2._0_1_ = (pSVar11->_2).rank;
    uVar2._1_1_ = (pSVar11->_2).minimumAlignment;
    uVar14 = (ulong)uVar2;
    if (uVar14 != 0) {
      piVar15 = &((pSVar11->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar15 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
          pVVar6 = pSVar11->vtable + *piVar15;
          goto LAB_0315f120;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    pVVar6 = (VirtualInvokeData *)FUN_01b81914(pSVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_0315f120:
    uVar14 = (*pVVar6->methodPtr)(pSVar5,pVVar6->method);
    if ((uVar14 & 1) == 0) {
      plVar7 = (long *)thunk_FUN_01bda71c(pSVar5,System_IDisposable_TypeInfo);
      if (plVar7 == (long *)0x0) {
        return;
      }
      lVar13 = *plVar7;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar14 == 0) goto LAB_0315f35c;
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      break;
    }
    pSVar11 = pSVar5->klass;
    uVar3._0_1_ = (pSVar11->_2).rank;
    uVar3._1_1_ = (pSVar11->_2).minimumAlignment;
    uVar14 = (ulong)uVar3;
    if (uVar14 != 0) {
      piVar15 = &((pSVar11->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar15 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
          pVVar6 = pSVar11->vtable + (*piVar15 + 1);
          goto LAB_0315f180;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    pVVar6 = (VirtualInvokeData *)FUN_01b81914(pSVar5,System_Collections_IEnumerator_TypeInfo,1);
LAB_0315f180:
    plVar7 = (long *)(*pVVar6->methodPtr)(pSVar5,pVVar6->method);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
    if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
       (*(System_Xml_XmlNode_c **)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
        System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(plVar7);
    }
    pSVar8 = (System_Xml_XmlAttributeCollection_o *)
             (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240));
    if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar8,StringLiteral_9327,(MethodInfo *)0x0);
    KGLJICLJHEL = EIABCPKDEBD__JPKEHIBGOEM(pSVar9,(System_String_o *)0x0,(MethodInfo *)0x0);
    pSVar8 = (System_Xml_XmlAttributeCollection_o *)
             (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240));
    if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar8,StringLiteral_13821,(MethodInfo *)0x0);
    DGMHNKGDAIL = EIABCPKDEBD__JPKEHIBGOEM
                            (pSVar9,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
    pSVar8 = (System_Xml_XmlAttributeCollection_o *)
             (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240));
    if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar8,StringLiteral_7096,(MethodInfo *)0x0);
    AAHDALLELJN = EIABCPKDEBD__FMBMNDIGLIG(pSVar9,true,(MethodInfo *)0x0);
    __this_02 = (__this->fields).CHDBCFCFNAJ;
    __this_01 = (DPIEIFJBFHE_o *)thunk_FUN_01bda818(DPIEIFJBFHE_TypeInfo);
    DPIEIFJBFHE___ctor(__this_01,KGLJICLJHEL,DGMHNKGDAIL,AAHDALLELJN,(MethodInfo *)0x0);
    lVar13 = Method_System_Collections_Generic_List<DPIEIFJBFHE>_Add__;
    if (__this_02 == (System_Collections_Generic_List_DPIEIFJBFHE__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pDVar12 = (__this_02->fields)._items;
    (__this_02->fields)._version = (__this_02->fields)._version + 1;
    if (pDVar12 == (DPIEIFJBFHE_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar4 = (__this_02->fields)._size;
    if (uVar4 < (uint)pDVar12->max_length) {
      (__this_02->fields)._size = uVar4 + 1;
      pDVar12->m_Items[(int)uVar4] = __this_01;
      thunk_FUN_01c20e04(pDVar12->m_Items + (int)uVar4,__this_01);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_02,(Il2CppObject *)__this_01,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
    }
  } while( true );
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar16 = piVar16 + 4;
    if (uVar14 == 0) break;
    if (*(System_IDisposable_c **)(piVar16 + -2) == System_IDisposable_TypeInfo) {
      puVar10 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_0315f378;
    }
  }
LAB_0315f35c:
  puVar10 = (undefined8 *)FUN_01b81914(plVar7,System_IDisposable_TypeInfo,0);
LAB_0315f378:
  (*(code *)*puVar10)(plVar7,puVar10[1]);
  return;
}

