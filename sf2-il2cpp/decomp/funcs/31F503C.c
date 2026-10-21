// NLPJLHOEAOE$$KFIFOEEFHDI @ RVA 0x31F503C

/* WARNING: Removing unreachable block (ram,0x032f5408) */

void NLPJLHOEAOE__KFIFOEEFHDI
               (NLPJLHOEAOE_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  System_Xml_XmlNode_o *AHDGNOJPPIB_00;
  NLPJLHOEAOE_EANNNIEHPHH_o *__this_00;
  System_Xml_XmlNode_o **ppSVar5;
  System_Xml_XmlAttributeCollection_o *pSVar6;
  System_Xml_XmlAttribute_o *pSVar7;
  System_String_o *pSVar8;
  System_Collections_Generic_List_NLPJLHOEAOE_EANNNIEHPHH__o *__this_01;
  MethodInfo *in_x3;
  long lVar9;
  NLPJLHOEAOE_EANNNIEHPHH_array *pNVar10;
  ulong uVar11;
  int *piVar12;
  
  if ((DAT_04566de3 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_EANNNIEHPHH_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NLPJLHOEAOE_EANNNIEHPHH>_Add__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_12864);
    FUN_01bab630(&StringLiteral_1);
    DAT_04566de3 = 1;
  }
  if ((AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) ||
     (plVar3 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method
                                 ), plVar3 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  plVar3 = (long *)(**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar9 = *plVar3;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar12 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar4 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_032f5184;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_032f5184:
    uVar11 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar11 & 1) == 0) {
      plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
      if (plVar3 == (long *)0x0) {
        return;
      }
      lVar9 = *plVar3;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 == 0) goto LAB_032f5398;
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    lVar9 = *plVar3;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar12 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar4 = (undefined8 *)(lVar9 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_032f51e4;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,1);
LAB_032f51e4:
    AHDGNOJPPIB_00 = (System_Xml_XmlNode_o *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    if (AHDGNOJPPIB_00 != (System_Xml_XmlNode_o *)0x0) {
      bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
      if (((AHDGNOJPPIB_00->klass->_2).naturalAligment < bVar1) ||
         ((AHDGNOJPPIB_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(AHDGNOJPPIB_00);
      }
    }
    __this_00 = (NLPJLHOEAOE_EANNNIEHPHH_o *)thunk_FUN_01bda818(NLPJLHOEAOE_EANNNIEHPHH_TypeInfo);
    NLPJLHOEAOE_EANNNIEHPHH___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 == (NLPJLHOEAOE_EANNNIEHPHH_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    ppSVar5 = &(__this_00->fields).AHDGNOJPPIB;
    *ppSVar5 = AHDGNOJPPIB_00;
    thunk_FUN_01c20e04(ppSVar5,AHDGNOJPPIB_00);
    if (AHDGNOJPPIB_00 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar6 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB_00->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB_00,(AHDGNOJPPIB_00->klass->vtable)._16_get_Attributes.method);
    if (pSVar6 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar6,StringLiteral_9327,(MethodInfo *)0x0);
    pSVar8 = EIABCPKDEBD__JPKEHIBGOEM(pSVar7,StringLiteral_1,(MethodInfo *)0x0);
    (__this_00->fields).KGLJICLJHEL = pSVar8;
    thunk_FUN_01c20e04();
    pSVar6 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB_00->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB_00,(AHDGNOJPPIB_00->klass->vtable)._16_get_Attributes.method);
    if (pSVar6 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar6,StringLiteral_12864,(MethodInfo *)0x0);
    pSVar8 = EIABCPKDEBD__JPKEHIBGOEM(pSVar7,StringLiteral_1,(MethodInfo *)0x0);
    (__this_00->fields).NFHDILMBKLK = pSVar8;
    thunk_FUN_01c20e04();
    NLPJLHOEAOE__LHMABDCNDIF(__this,AHDGNOJPPIB_00,(__this_00->fields).HHGNEMKLKHG,in_x3);
    lVar9 = Method_System_Collections_Generic_List<NLPJLHOEAOE_EANNNIEHPHH>_Add__;
    __this_01 = (__this->fields).OFNOKDOEEAF;
    if (__this_01 == (System_Collections_Generic_List_NLPJLHOEAOE_EANNNIEHPHH__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pNVar10 = (__this_01->fields)._items;
    (__this_01->fields)._version = (__this_01->fields)._version + 1;
    if (pNVar10 == (NLPJLHOEAOE_EANNNIEHPHH_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar2 = (__this_01->fields)._size;
    if (uVar2 < (uint)pNVar10->max_length) {
      (__this_01->fields)._size = uVar2 + 1;
      pNVar10->m_Items[(int)uVar2] = __this_00;
      thunk_FUN_01c20e04(pNVar10->m_Items + (int)uVar2,__this_00);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)__this_00,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
    if (*(System_IDisposable_c **)(piVar12 + -2) == System_IDisposable_TypeInfo) {
      puVar4 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_032f53b4;
    }
  }
LAB_032f5398:
  puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_032f53b4:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return;
}

