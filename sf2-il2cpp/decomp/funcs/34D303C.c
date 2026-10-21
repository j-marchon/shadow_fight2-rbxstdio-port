// IIMNGGHGKOD$$HNIHOIAMDPC @ RVA 0x34D303C

/* WARNING: Removing unreachable block (ram,0x035d34d0) */

void IIMNGGHGKOD__HNIHOIAMDPC
               (IIMNGGHGKOD_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  int32_t iVar3;
  System_Xml_XmlAttributeCollection_o *pSVar4;
  System_Xml_XmlAttribute_o *pSVar5;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar6;
  System_Xml_XmlNode_o *pSVar7;
  long *plVar8;
  System_Collections_Generic_List_IENLNOEDCFF__o *pSVar9;
  undefined8 *puVar10;
  IENLNOEDCFF_o *item;
  long lVar11;
  IENLNOEDCFF_array *pIVar12;
  ulong uVar13;
  int *piVar14;
  System_Collections_Generic_List_IENLNOEDCFF__o **ppSVar15;
  
  if ((DAT_045686c5 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IENLNOEDCFF>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IENLNOEDCFF>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<IENLNOEDCFF>_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_4577);
    FUN_01bab630(&StringLiteral_6575);
    FUN_01bab630(&StringLiteral_8907);
    FUN_01bab630(&StringLiteral_5982);
    FUN_01bab630(&StringLiteral_10305);
    FUN_01bab630(&StringLiteral_1);
    DAT_045686c5 = 1;
  }
  if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
     (pSVar4 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method),
     pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar4,StringLiteral_6575,(MethodInfo *)0x0);
    pSVar4 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (pSVar4,StringLiteral_5982,(MethodInfo *)0x0);
      if (LBJNDMNEJJB == (System_Xml_XmlAttribute_o *)0x0) {
        (__this->fields).NPGJDANOMIK = 0;
        iVar3 = EIABCPKDEBD__EHJNCGCICMP(pSVar5,1,(MethodInfo *)0x0);
        (__this->fields).EMPEBPJNGKP = iVar3;
      }
      else {
        (__this->fields).NPGJDANOMIK = 1;
        pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1,(MethodInfo *)0x0);
        iVar3 = KJFPGDFNFCL__JHNNNBIFHDI(pSVar6,(MethodInfo *)0x0);
        (__this->fields).BGOHEOKLMHD = iVar3;
      }
      pSVar4 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar4,StringLiteral_10305,(MethodInfo *)0x0);
        pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,StringLiteral_8907,(MethodInfo *)0x0);
        iVar3 = LCAJGLLBBEC__HGMMJIIEOLF(pSVar6,(MethodInfo *)0x0);
        (__this->fields).LOAFPIOGJAF = iVar3;
        pSVar7 = EIABCPKDEBD__IJPOFDDHAAF(AHDGNOJPPIB,StringLiteral_4577,(MethodInfo *)0x0);
        if (pSVar7 == (System_Xml_XmlNode_o *)0x0) {
          return;
        }
        plVar8 = (long *)(*(pSVar7->klass->vtable)._13_get_ChildNodes.methodPtr)
                                   (pSVar7,(pSVar7->klass->vtable)._13_get_ChildNodes.method);
        if (plVar8 != (long *)0x0) {
          iVar3 = (**(code **)(*plVar8 + 0x1a8))(plVar8,*(undefined8 *)(*plVar8 + 0x1b0));
          pSVar9 = (System_Collections_Generic_List_IENLNOEDCFF__o *)
                   thunk_FUN_01bda818(System_Collections_Generic_List<IENLNOEDCFF>_TypeInfo);
          System_Collections_Generic_List<object>___ctor
                    ((System_Collections_Generic_List_object__o *)pSVar9,iVar3,
                     Method_System_Collections_Generic_List<IENLNOEDCFF>__ctor__);
          ppSVar15 = &(__this->fields).KDIMDBHMBEM;
          *ppSVar15 = pSVar9;
          thunk_FUN_01c20e04(ppSVar15,pSVar9);
          plVar8 = (long *)(*(pSVar7->klass->vtable)._13_get_ChildNodes.methodPtr)
                                     (pSVar7,(pSVar7->klass->vtable)._13_get_ChildNodes.method);
          if (plVar8 != (long *)0x0) {
            plVar8 = (long *)(**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0))
            ;
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            do {
              lVar11 = *plVar8;
              uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar13 != 0) {
                piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(System_Collections_IEnumerator_c **)(piVar14 + -2) ==
                      System_Collections_IEnumerator_TypeInfo) {
                    puVar10 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
                    goto LAB_035d3308;
                  }
                  uVar13 = uVar13 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar13 != 0);
              }
              puVar10 = (undefined8 *)FUN_01b81914(plVar8,System_Collections_IEnumerator_TypeInfo,0)
              ;
LAB_035d3308:
              uVar13 = (*(code *)*puVar10)(plVar8,puVar10[1]);
              if ((uVar13 & 1) == 0) {
                plVar8 = (long *)thunk_FUN_01bda71c(plVar8,System_IDisposable_TypeInfo);
                if (plVar8 == (long *)0x0) {
                  return;
                }
                lVar11 = *plVar8;
                uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
                if (uVar13 == 0) goto LAB_035d3478;
                piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                goto LAB_035d3460;
              }
              lVar11 = *plVar8;
              uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar13 != 0) {
                piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(System_Collections_IEnumerator_c **)(piVar14 + -2) ==
                      System_Collections_IEnumerator_TypeInfo) {
                    puVar10 = (undefined8 *)(lVar11 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                    goto LAB_035d3368;
                  }
                  uVar13 = uVar13 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar13 != 0);
              }
              puVar10 = (undefined8 *)FUN_01b81914(plVar8,System_Collections_IEnumerator_TypeInfo,1)
              ;
LAB_035d3368:
              pSVar7 = (System_Xml_XmlNode_o *)(*(code *)*puVar10)(plVar8,puVar10[1]);
              if (pSVar7 != (System_Xml_XmlNode_o *)0x0) {
                bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
                if (((pSVar7->klass->_2).naturalAligment < bVar1) ||
                   ((pSVar7->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                    (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                  FUN_01babc64();
                }
              }
              item = LFMDPJJICHF__EOHMFJFFFIN(pSVar7,(MethodInfo *)0x0);
              if (item != (IENLNOEDCFF_o *)0x0) {
                (*(item->klass->vtable)._7_HNIHOIAMDPC.methodPtr)
                          (item,AHDGNOJPPIB,(item->klass->vtable)._7_HNIHOIAMDPC.method);
                lVar11 = Method_System_Collections_Generic_List<IENLNOEDCFF>_Add__;
                pSVar9 = *ppSVar15;
                if (pSVar9 == (System_Collections_Generic_List_IENLNOEDCFF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pIVar12 = (pSVar9->fields)._items;
                (pSVar9->fields)._version = (pSVar9->fields)._version + 1;
                if (pIVar12 == (IENLNOEDCFF_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                uVar2 = (pSVar9->fields)._size;
                if (uVar2 < (uint)pIVar12->max_length) {
                  (pSVar9->fields)._size = uVar2 + 1;
                  pIVar12->m_Items[(int)uVar2] = item;
                  thunk_FUN_01c20e04(pIVar12->m_Items + (int)uVar2,item);
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)pSVar9,
                             (Il2CppObject *)item,
                             *(MethodInfo_26E4DAC **)
                              (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                }
              }
            } while( true );
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_035d3460:
    if (*(System_IDisposable_c **)(piVar14 + -2) == System_IDisposable_TypeInfo) {
      puVar10 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_035d3494;
    }
  }
LAB_035d3478:
  puVar10 = (undefined8 *)FUN_01b81914(plVar8,System_IDisposable_TypeInfo,0);
LAB_035d3494:
  (*(code *)*puVar10)(plVar8,puVar10[1]);
  return;
}

