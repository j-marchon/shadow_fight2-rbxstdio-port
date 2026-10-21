// ACHLOMELAJE$$JNAIBLDHJFC @ RVA 0x3061B7C

/* WARNING: Removing unreachable block (ram,0x03161e60) */

void ACHLOMELAJE__JNAIBLDHJFC(ACHLOMELAJE_o *__this,DPIEIFJBFHE_o *GPDMCLBBPAD,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  System_Xml_XmlNode_o *pSVar5;
  System_Collections_IEnumerator_o *pSVar6;
  VirtualInvokeData *pVVar7;
  long *plVar8;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *a;
  System_Collections_Generic_List_DPIEIFJBFHE__o *__this_01;
  undefined8 *puVar9;
  System_Collections_IEnumerator_c *pSVar10;
  long lVar11;
  ulong uVar12;
  int32_t *piVar13;
  int *piVar14;
  
  if ((DAT_04565ed1 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<DPIEIFJBFHE>_Remove__);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_9327);
    DAT_04565ed1 = 1;
  }
  pSVar5 = (__this->fields).GOPHEBKALBN;
  if (pSVar5 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar6 = System_Xml_XmlNode__GetEnumerator(pSVar5,(MethodInfo *)0x0);
  if (pSVar6 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    pSVar10 = pSVar6->klass;
    uVar2._0_1_ = (pSVar10->_2).rank;
    uVar2._1_1_ = (pSVar10->_2).minimumAlignment;
    uVar12 = (ulong)uVar2;
    if (uVar12 != 0) {
      piVar13 = &((pSVar10->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
          pVVar7 = pSVar10->vtable + *piVar13;
          goto LAB_03161c80;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    pVVar7 = (VirtualInvokeData *)FUN_01b81914(pSVar6,System_Collections_IEnumerator_TypeInfo,0);
LAB_03161c80:
    uVar12 = (*pVVar7->methodPtr)(pSVar6,pVVar7->method);
    if ((uVar12 & 1) == 0) goto LAB_03161dbc;
    pSVar10 = pSVar6->klass;
    uVar3._0_1_ = (pSVar10->_2).rank;
    uVar3._1_1_ = (pSVar10->_2).minimumAlignment;
    uVar12 = (ulong)uVar3;
    if (uVar12 != 0) {
      piVar13 = &((pSVar10->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
          pVVar7 = pSVar10->vtable + (*piVar13 + 1);
          goto LAB_03161ce0;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    pVVar7 = (VirtualInvokeData *)FUN_01b81914(pSVar6,System_Collections_IEnumerator_TypeInfo,1);
LAB_03161ce0:
    plVar8 = (long *)(*pVVar7->methodPtr)(pSVar6,pVVar7->method);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    lVar11 = *plVar8;
    bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
    if ((*(byte *)(lVar11 + 0x130) < bVar1) ||
       (*(System_Xml_XmlNode_c **)(*(long *)(lVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
        System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(plVar8);
    }
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (**(code **)(lVar11 + 0x238))(plVar8,*(undefined8 *)(lVar11 + 0x240));
    if (__this_00 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                            (__this_00,StringLiteral_9327,(MethodInfo *)0x0);
    a = EIABCPKDEBD__JPKEHIBGOEM
                  (LBJNDMNEJJB,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
    if (GPDMCLBBPAD == (DPIEIFJBFHE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar4 = System_String__op_Equality(a,(GPDMCLBBPAD->fields).JIJLBFGKNJK,(MethodInfo *)0x0);
  } while (!bVar4);
  pSVar5 = (__this->fields).GOPHEBKALBN;
  if (pSVar5 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  (*(pSVar5->klass->vtable)._25_RemoveChild.methodPtr)
            (pSVar5,plVar8,(pSVar5->klass->vtable)._25_RemoveChild.method);
  __this_01 = (__this->fields).CHDBCFCFNAJ;
  if (__this_01 == (System_Collections_Generic_List_DPIEIFJBFHE__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__Remove
            ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)GPDMCLBBPAD,
             Method_System_Collections_Generic_List<DPIEIFJBFHE>_Remove__);
  CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this,false,(MethodInfo *)0x0);
LAB_03161dbc:
  plVar8 = (long *)thunk_FUN_01bda71c(pSVar6,System_IDisposable_TypeInfo);
  if (plVar8 != (long *)0x0) {
    lVar11 = *plVar8;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(System_IDisposable_c **)(piVar14 + -2) == System_IDisposable_TypeInfo) {
          puVar9 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_03161e1c;
        }
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
    puVar9 = (undefined8 *)FUN_01b81914(plVar8,System_IDisposable_TypeInfo,0);
LAB_03161e1c:
    (*(code *)*puVar9)(plVar8,puVar9[1]);
  }
  return;
}

