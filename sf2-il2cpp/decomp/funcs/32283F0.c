// PLCCJCFAFKA$$.ctor @ RVA 0x32283F0

/* WARNING: Removing unreachable block (ram,0x033288e0) */

void PLCCJCFAFKA___ctor(PLCCJCFAFKA_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  System_String_o *pSVar5;
  System_Collections_Generic_List_LGABIPDBOEP__o *pSVar6;
  long *plVar7;
  undefined8 *puVar8;
  System_Xml_XmlNode_o *AHDGNOJPPIB_00;
  LGABIPDBOEP_o *__this_00;
  long lVar9;
  LGABIPDBOEP_array *pLVar10;
  ulong uVar11;
  int *piVar12;
  System_Collections_Generic_List_LGABIPDBOEP__o **ppSVar13;
  
  if ((DAT_04566f86 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&LGABIPDBOEP_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<LGABIPDBOEP>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LGABIPDBOEP>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<LGABIPDBOEP>_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_5250);
    FUN_01bab630(&StringLiteral_12880);
    FUN_01bab630(&StringLiteral_13826);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_3567);
    FUN_01bab630(&StringLiteral_1);
    DAT_04566f86 = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
     (pSVar3 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method),
     pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar3,StringLiteral_9327,(MethodInfo *)0x0);
    pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,StringLiteral_1,(MethodInfo *)0x0);
    (__this->fields).JIJLBFGKNJK = pSVar5;
    thunk_FUN_01c20e04();
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_13826,(MethodInfo *)0x0);
      pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,StringLiteral_1,(MethodInfo *)0x0);
      (__this->fields).IKIINEOIIAK = pSVar5;
      thunk_FUN_01c20e04();
      pSVar3 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar3,StringLiteral_12880,(MethodInfo *)0x0);
        pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,StringLiteral_1,(MethodInfo *)0x0);
        (__this->fields).ABCHAOKFLGL = pSVar5;
        thunk_FUN_01c20e04();
        pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar3,StringLiteral_3567,(MethodInfo *)0x0);
          pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,StringLiteral_1,(MethodInfo *)0x0);
          (__this->fields).PEKGAFPPFLP = pSVar5;
          thunk_FUN_01c20e04();
          pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar3,StringLiteral_5250,(MethodInfo *)0x0);
            pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,(System_String_o *)0x0,(MethodInfo *)0x0);
            (__this->fields).HMIMGDGJDIC = pSVar5;
            thunk_FUN_01c20e04();
            pSVar6 = (System_Collections_Generic_List_LGABIPDBOEP__o *)
                     thunk_FUN_01bda818(System_Collections_Generic_List<LGABIPDBOEP>_TypeInfo);
            System_Collections_Generic_List<object>___ctor
                      ((System_Collections_Generic_List_object__o *)pSVar6,
                       Method_System_Collections_Generic_List<LGABIPDBOEP>__ctor__);
            ppSVar13 = &(__this->fields).GFBNJPMOEKD;
            *ppSVar13 = pSVar6;
            thunk_FUN_01c20e04(ppSVar13,pSVar6);
            plVar7 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                                       (AHDGNOJPPIB,
                                        (AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method);
            if (plVar7 != (long *)0x0) {
              plVar7 = (long *)(**(code **)(*plVar7 + 0x1b8))
                                         (plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
              if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              do {
                lVar9 = *plVar7;
                uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
                if (uVar11 != 0) {
                  piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(System_Collections_IEnumerator_c **)(piVar12 + -2) ==
                        System_Collections_IEnumerator_TypeInfo) {
                      puVar8 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
                      goto LAB_03328714;
                    }
                    uVar11 = uVar11 - 1;
                    piVar12 = piVar12 + 4;
                  } while (uVar11 != 0);
                }
                puVar8 = (undefined8 *)
                         FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,0);
LAB_03328714:
                uVar11 = (*(code *)*puVar8)(plVar7,puVar8[1]);
                if ((uVar11 & 1) == 0) {
                  plVar7 = (long *)thunk_FUN_01bda71c(plVar7,System_IDisposable_TypeInfo);
                  if (plVar7 == (long *)0x0) {
                    return;
                  }
                  lVar9 = *plVar7;
                  uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
                  if (uVar11 == 0) goto LAB_03328880;
                  piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  goto LAB_03328868;
                }
                lVar9 = *plVar7;
                uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
                if (uVar11 != 0) {
                  piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(System_Collections_IEnumerator_c **)(piVar12 + -2) ==
                        System_Collections_IEnumerator_TypeInfo) {
                      puVar8 = (undefined8 *)(lVar9 + (long)(*piVar12 + 1) * 0x10 + 0x138);
                      goto LAB_03328774;
                    }
                    uVar11 = uVar11 - 1;
                    piVar12 = piVar12 + 4;
                  } while (uVar11 != 0);
                }
                puVar8 = (undefined8 *)
                         FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,1);
LAB_03328774:
                AHDGNOJPPIB_00 = (System_Xml_XmlNode_o *)(*(code *)*puVar8)(plVar7,puVar8[1]);
                __this_00 = (LGABIPDBOEP_o *)thunk_FUN_01bda818(LGABIPDBOEP_TypeInfo);
                if (AHDGNOJPPIB_00 != (System_Xml_XmlNode_o *)0x0) {
                  bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
                  if (((AHDGNOJPPIB_00->klass->_2).naturalAligment < bVar1) ||
                     ((AHDGNOJPPIB_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                      (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                    FUN_01babc64(AHDGNOJPPIB_00);
                  }
                }
                LGABIPDBOEP___ctor(__this_00,AHDGNOJPPIB_00,(MethodInfo *)0x0);
                lVar9 = Method_System_Collections_Generic_List<LGABIPDBOEP>_Add__;
                pSVar6 = *ppSVar13;
                if (pSVar6 == (System_Collections_Generic_List_LGABIPDBOEP__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pLVar10 = (pSVar6->fields)._items;
                (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
                if (pLVar10 == (LGABIPDBOEP_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                uVar2 = (pSVar6->fields)._size;
                if (uVar2 < (uint)pLVar10->max_length) {
                  (pSVar6->fields)._size = uVar2 + 1;
                  pLVar10->m_Items[(int)uVar2] = __this_00;
                  thunk_FUN_01c20e04(pLVar10->m_Items + (int)uVar2,__this_00);
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)pSVar6,
                             (Il2CppObject *)__this_00,
                             *(MethodInfo_26E4DAC **)
                              (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                }
              } while( true );
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_03328868:
    if (*(System_IDisposable_c **)(piVar12 + -2) == System_IDisposable_TypeInfo) {
      puVar8 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_0332889c;
    }
  }
LAB_03328880:
  puVar8 = (undefined8 *)FUN_01b81914(plVar7,System_IDisposable_TypeInfo,0);
LAB_0332889c:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
  return;
}

