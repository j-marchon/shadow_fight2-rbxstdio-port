// PKKLIJLIKGF$$.ctor @ RVA 0x3026018

/* WARNING: Removing unreachable block (ram,0x03126510) */

void PKKLIJLIKGF___ctor(PKKLIJLIKGF_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  System_Collections_Generic_KeyValuePair_object__object__o item;
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_List_KeyValuePair_string__string___o *pSVar3;
  System_Xml_XmlAttributeCollection_o *pSVar4;
  System_Xml_XmlAttribute_o *pSVar5;
  System_String_o *pSVar6;
  System_String_array *collection;
  long *plVar7;
  undefined8 *puVar8;
  Il2CppObject *pIVar9;
  MethodInfo_2639E28 *in_x4;
  long lVar10;
  System_Collections_Generic_KeyValuePair_string__string__array *pSVar11;
  ulong uVar12;
  int *piVar13;
  System_Collections_Generic_List_KeyValuePair_string__string___o **ppSVar14;
  System_Xml_XmlNode_o **ppSVar15;
  System_Collections_Generic_List_string__o **ppSVar16;
  PKKLIJLIKGF_Fields *pPVar17;
  System_Collections_Generic_KeyValuePair_object__object__o __this_01;
  Il2CppObject local_70;
  
  if ((DAT_04565c91 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_string>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<string,_string>>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<string,_string>>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<KeyValuePair<string,_string>>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&System_Xml_XmlAttribute_TypeInfo);
    FUN_01bab630(&StringLiteral_8115);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_11876);
    FUN_01bab630(&StringLiteral_1);
    DAT_04565c91 = 1;
  }
  local_70.klass = (Il2CppClass *)0x0;
  local_70.monitor = (System_String_o *)0x0;
  pPVar17 = &__this->fields;
  pPVar17->DEKCPPOJFEH = StringLiteral_1;
  thunk_FUN_01c20e04(pPVar17);
  __this_00 = (System_Collections_Generic_List_string__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<string>__ctor__);
  ppSVar16 = &(__this->fields).IIBDCLHFNCD;
  *ppSVar16 = __this_00;
  thunk_FUN_01c20e04(ppSVar16,__this_00);
  pSVar3 = (System_Collections_Generic_List_KeyValuePair_string__string___o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<KeyValuePair<string,_string>>_TypeInfo
                             );
  System_Collections_Generic_List<KeyValuePair<object,_object>>___ctor
            ((System_Collections_Generic_List_T__o *)pSVar3,
             Method_System_Collections_Generic_List<KeyValuePair<string,_string>>__ctor__);
  ppSVar14 = &(__this->fields).NAPHDEGHDNP;
  *ppSVar14 = pSVar3;
  thunk_FUN_01c20e04(ppSVar14,pSVar3);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  ppSVar15 = &(__this->fields)._OOKODJOMEKE_k__BackingField;
  *ppSVar15 = AHDGNOJPPIB;
  thunk_FUN_01c20e04(ppSVar15,AHDGNOJPPIB);
  if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
     (pSVar4 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method),
     pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar4,StringLiteral_9327,(MethodInfo *)0x0);
    pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,StringLiteral_1,(MethodInfo *)0x0);
    pPVar17->DEKCPPOJFEH = pSVar6;
    thunk_FUN_01c20e04(pPVar17,pSVar6);
    pSVar4 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar4,StringLiteral_8115,(MethodInfo *)0x0);
      pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,StringLiteral_1,(MethodInfo *)0x0);
      if (pSVar6 != (System_String_o *)0x0) {
        collection = System_String__Split(pSVar6,0x7c,0,(MethodInfo *)0x0);
        if (*ppSVar16 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_03126508;
        System_Collections_Generic_List<object>__AddRange
                  ((System_Collections_Generic_List_object__o *)*ppSVar16,
                   (System_Collections_Generic_IEnumerable_T__o *)collection,
                   Method_System_Collections_Generic_List<string>_AddRange__);
      }
      plVar7 = (long *)(*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                                 (AHDGNOJPPIB,StringLiteral_11876,
                                  (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
      if (plVar7 == (long *)0x0) {
        return;
      }
      plVar7 = (long *)(**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240));
      if (plVar7 != (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar7 + 0x1c8))(plVar7,*(undefined8 *)(*plVar7 + 0x1d0));
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        do {
          lVar10 = *plVar7;
          uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar8 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_0312631c;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar8 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,0);
LAB_0312631c:
          uVar12 = (*(code *)*puVar8)(plVar7,puVar8[1]);
          if ((uVar12 & 1) == 0) {
            plVar7 = (long *)thunk_FUN_01bda71c(plVar7,System_IDisposable_TypeInfo);
            if (plVar7 == (long *)0x0) {
              return;
            }
            lVar10 = *plVar7;
            uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar12 == 0) goto LAB_031264a8;
            piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            goto LAB_03126490;
          }
          lVar10 = *plVar7;
          uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar8 = (undefined8 *)(lVar10 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                goto LAB_0312637c;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar8 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,1);
LAB_0312637c:
          pSVar5 = (System_Xml_XmlAttribute_o *)(*(code *)*puVar8)(plVar7,puVar8[1]);
          if (pSVar5 == (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          bVar1 = (System_Xml_XmlAttribute_TypeInfo->_2).naturalAligment;
          if (((pSVar5->klass->_2).naturalAligment < bVar1) ||
             ((pSVar5->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)System_Xml_XmlAttribute_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(pSVar5);
          }
          pIVar9 = (Il2CppObject *)
                   (*(pSVar5->klass->vtable)._8_get_Name.methodPtr)
                             (pSVar5,(pSVar5->klass->vtable)._8_get_Name.method);
          pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,StringLiteral_1,(MethodInfo *)0x0);
          __this_01.fields.value = pIVar9;
          __this_01.fields.key = &local_70;
          System_Collections_Generic_KeyValuePair<object,_object>___ctor
                    (__this_01,(Il2CppObject *)pSVar6,
                     Method_System_Collections_Generic_KeyValuePair<string,_string>__ctor__,in_x4);
          lVar10 = Method_System_Collections_Generic_List<KeyValuePair<string,_string>>_Add__;
          pSVar3 = *ppSVar14;
          if (pSVar3 == (System_Collections_Generic_List_KeyValuePair_string__string___o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          item.fields.value = local_70.monitor;
          item.fields.key = (Il2CppObject *)local_70.klass;
          pSVar11 = (pSVar3->fields)._items;
          (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
          if (pSVar11 == (System_Collections_Generic_KeyValuePair_string__string__array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar2 = (pSVar3->fields)._size;
          if (uVar2 < (uint)pSVar11->max_length) {
            (pSVar3->fields)._size = uVar2 + 1;
            pSVar11->m_Items[(int)uVar2].fields.key = (System_String_o *)local_70.klass;
            pSVar11->m_Items[(int)uVar2].fields.value = local_70.monitor;
            thunk_FUN_01c20e04(pSVar11->m_Items + (int)uVar2,0);
          }
          else {
            System_Collections_Generic_List<KeyValuePair<object,_object>>__AddWithResize
                      ((System_Collections_Generic_List_T__o *)pSVar3,item,
                       *(MethodInfo_266FF2C **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
          }
        } while( true );
      }
    }
  }
LAB_03126508:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_03126490:
    if (*(System_IDisposable_c **)(piVar13 + -2) == System_IDisposable_TypeInfo) {
      puVar8 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_031264c4;
    }
  }
LAB_031264a8:
  puVar8 = (undefined8 *)FUN_01b81914(plVar7,System_IDisposable_TypeInfo,0);
LAB_031264c4:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
  return;
}

