// ACHLOMELAJE$$FEKFFGCOKAB @ RVA 0x3062570

/* WARNING: Removing unreachable block (ram,0x031629c8) */
/* WARNING: Removing unreachable block (ram,0x03162c04) */
/* WARNING: Removing unreachable block (ram,0x03162c1c) */

void ACHLOMELAJE__FEKFFGCOKAB(ACHLOMELAJE_o *__this,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  System_Xml_XmlNode_o *pSVar7;
  System_Collections_IEnumerator_o *pSVar8;
  VirtualInvokeData *pVVar9;
  System_Xml_XmlAttributeCollection_o *pSVar10;
  System_Xml_XmlAttribute_o *pSVar11;
  System_String_o *KGLJICLJHEL;
  System_Collections_Generic_List_string__o *KFKKBEEFOCB;
  System_Collections_IEnumerator_o *pSVar12;
  long *plVar13;
  System_String_o *item;
  undefined8 *puVar14;
  BDGPPPPKHEC_o *__this_00;
  MethodInfo *extraout_x1;
  System_Collections_IEnumerator_c *pSVar15;
  long lVar16;
  System_String_array *pSVar17;
  BDGPPPPKHEC_array *pBVar18;
  ulong uVar19;
  int32_t *piVar20;
  int *piVar21;
  System_Collections_Generic_List_BDGPPPPKHEC__o *__this_01;
  
  if ((DAT_04565edc & 1) == 0) {
    FUN_01bab630(&BDGPPPPKHEC_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<BDGPPPPKHEC>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_3437);
    DAT_04565edc = 1;
    method = extraout_x1;
  }
  pSVar7 = (__this->fields).super.HJKLIDCAEOE;
  if (pSVar7 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,method);
  }
  pSVar7 = (System_Xml_XmlNode_o *)
           (*(pSVar7->klass->vtable)._51_get_Item.methodPtr)
                     (pSVar7,StringLiteral_3437,(pSVar7->klass->vtable)._51_get_Item.method);
  if (pSVar7 == (System_Xml_XmlNode_o *)0x0) {
    return;
  }
  pSVar8 = System_Xml_XmlNode__GetEnumerator(pSVar7,(MethodInfo *)0x0);
  if (pSVar8 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    pSVar15 = pSVar8->klass;
    uVar2._0_1_ = (pSVar15->_2).rank;
    uVar2._1_1_ = (pSVar15->_2).minimumAlignment;
    uVar19 = (ulong)uVar2;
    if (uVar19 != 0) {
      piVar20 = &((pSVar15->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar20 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
          pVVar9 = pSVar15->vtable + *piVar20;
          goto LAB_031626bc;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    pVVar9 = (VirtualInvokeData *)FUN_01b81914(pSVar8,System_Collections_IEnumerator_TypeInfo,0);
LAB_031626bc:
    uVar19 = (*pVVar9->methodPtr)(pSVar8,pVVar9->method);
    if ((uVar19 & 1) == 0) {
      plVar13 = (long *)thunk_FUN_01bda71c(pSVar8,System_IDisposable_TypeInfo);
      if (plVar13 == (long *)0x0) {
        return;
      }
      lVar16 = *plVar13;
      uVar19 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar19 == 0) goto LAB_03162b24;
      piVar21 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      break;
    }
    pSVar15 = pSVar8->klass;
    uVar3._0_1_ = (pSVar15->_2).rank;
    uVar3._1_1_ = (pSVar15->_2).minimumAlignment;
    uVar19 = (ulong)uVar3;
    if (uVar19 != 0) {
      piVar20 = &((pSVar15->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar20 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
          pVVar9 = pSVar15->vtable + (*piVar20 + 1);
          goto LAB_0316271c;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    pVVar9 = (VirtualInvokeData *)FUN_01b81914(pSVar8,System_Collections_IEnumerator_TypeInfo,1);
LAB_0316271c:
    pSVar7 = (System_Xml_XmlNode_o *)(*pVVar9->methodPtr)(pSVar8,pVVar9->method);
    if (pSVar7 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
    if (((pSVar7->klass->_2).naturalAligment < bVar1) ||
       ((pSVar7->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(pSVar7);
    }
    pSVar10 = (System_Xml_XmlAttributeCollection_o *)
              (*(pSVar7->klass->vtable)._16_get_Attributes.methodPtr)
                        (pSVar7,(pSVar7->klass->vtable)._16_get_Attributes.method);
    if (pSVar10 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar11 = System_Xml_XmlAttributeCollection__get_ItemOf
                        (pSVar10,StringLiteral_9327,(MethodInfo *)0x0);
    KGLJICLJHEL = EIABCPKDEBD__JPKEHIBGOEM(pSVar11,(System_String_o *)0x0,(MethodInfo *)0x0);
    KFKKBEEFOCB = (System_Collections_Generic_List_string__o *)
                  thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)KFKKBEEFOCB,
               Method_System_Collections_Generic_List<string>__ctor__);
    pSVar12 = System_Xml_XmlNode__GetEnumerator(pSVar7,(MethodInfo *)0x0);
    if (pSVar12 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
LAB_031627c8:
    pSVar15 = pSVar12->klass;
    uVar4._0_1_ = (pSVar15->_2).rank;
    uVar4._1_1_ = (pSVar15->_2).minimumAlignment;
    uVar19 = (ulong)uVar4;
    if (uVar19 != 0) {
      piVar20 = &((pSVar15->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar20 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
          pVVar9 = pSVar15->vtable + *piVar20;
          goto LAB_03162814;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    pVVar9 = (VirtualInvokeData *)FUN_01b81914(pSVar12,System_Collections_IEnumerator_TypeInfo,0);
LAB_03162814:
    uVar19 = (*pVVar9->methodPtr)(pSVar12,pVVar9->method);
    if ((uVar19 & 1) != 0) {
      pSVar15 = pSVar12->klass;
      uVar5._0_1_ = (pSVar15->_2).rank;
      uVar5._1_1_ = (pSVar15->_2).minimumAlignment;
      uVar19 = (ulong)uVar5;
      if (uVar19 != 0) {
        piVar20 = &((pSVar15->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar20 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
            pVVar9 = pSVar15->vtable + (*piVar20 + 1);
            goto LAB_03162874;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      pVVar9 = (VirtualInvokeData *)FUN_01b81914(pSVar12,System_Collections_IEnumerator_TypeInfo,1);
LAB_03162874:
      plVar13 = (long *)(*pVVar9->methodPtr)(pSVar12,pVVar9->method);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      lVar16 = *plVar13;
      bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
      if ((*(byte *)(lVar16 + 0x130) < bVar1) ||
         (*(System_Xml_XmlNode_c **)(*(long *)(lVar16 + 200) + (ulong)bVar1 * 8 + -8) !=
          System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64();
      }
      pSVar10 = (System_Xml_XmlAttributeCollection_o *)
                (**(code **)(lVar16 + 0x238))(plVar13,*(undefined8 *)(lVar16 + 0x240));
      if (pSVar10 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar11 = System_Xml_XmlAttributeCollection__get_ItemOf
                          (pSVar10,StringLiteral_9327,(MethodInfo *)0x0);
      item = EIABCPKDEBD__JPKEHIBGOEM(pSVar11,(System_String_o *)0x0,(MethodInfo *)0x0);
      lVar16 = Method_System_Collections_Generic_List<string>_Add__;
      if (KFKKBEEFOCB == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar17 = (KFKKBEEFOCB->fields)._items;
      (KFKKBEEFOCB->fields)._version = (KFKKBEEFOCB->fields)._version + 1;
      if (pSVar17 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar6 = (KFKKBEEFOCB->fields)._size;
      if (uVar6 < (uint)pSVar17->max_length) {
        (KFKKBEEFOCB->fields)._size = uVar6 + 1;
        pSVar17->m_Items[(int)uVar6] = item;
        thunk_FUN_01c20e04();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)KFKKBEEFOCB,(Il2CppObject *)item,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
      }
      goto LAB_031627c8;
    }
    plVar13 = (long *)thunk_FUN_01bda71c(pSVar12,System_IDisposable_TypeInfo);
    if (plVar13 != (long *)0x0) {
      lVar16 = *plVar13;
      uVar19 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar19 != 0) {
        piVar21 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(System_IDisposable_c **)(piVar21 + -2) == System_IDisposable_TypeInfo) {
            puVar14 = (undefined8 *)(lVar16 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_031629b0;
          }
          uVar19 = uVar19 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar19 != 0);
      }
      puVar14 = (undefined8 *)FUN_01b81914(plVar13,System_IDisposable_TypeInfo,0);
LAB_031629b0:
      (*(code *)*puVar14)(plVar13,puVar14[1]);
    }
    __this_01 = (__this->fields).BCLNBJNEAAF;
    __this_00 = (BDGPPPPKHEC_o *)thunk_FUN_01bda818(BDGPPPPKHEC_TypeInfo);
    BDGPPPPKHEC___ctor(__this_00,KGLJICLJHEL,KFKKBEEFOCB,(MethodInfo *)0x0);
    lVar16 = Method_System_Collections_Generic_List<BDGPPPPKHEC>_Add__;
    if (__this_01 == (System_Collections_Generic_List_BDGPPPPKHEC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pBVar18 = (__this_01->fields)._items;
    (__this_01->fields)._version = (__this_01->fields)._version + 1;
    if (pBVar18 == (BDGPPPPKHEC_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar6 = (__this_01->fields)._size;
    if (uVar6 < (uint)pBVar18->max_length) {
      (__this_01->fields)._size = uVar6 + 1;
      pBVar18->m_Items[(int)uVar6] = __this_00;
      thunk_FUN_01c20e04(pBVar18->m_Items + (int)uVar6,__this_00);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)__this_00,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
    }
  } while( true );
  while( true ) {
    uVar19 = uVar19 - 1;
    piVar21 = piVar21 + 4;
    if (uVar19 == 0) break;
    if (*(System_IDisposable_c **)(piVar21 + -2) == System_IDisposable_TypeInfo) {
      puVar14 = (undefined8 *)(lVar16 + (long)*piVar21 * 0x10 + 0x138);
      goto LAB_03162b40;
    }
  }
LAB_03162b24:
  puVar14 = (undefined8 *)FUN_01b81914(plVar13,System_IDisposable_TypeInfo,0);
LAB_03162b40:
  (*(code *)*puVar14)(plVar13,puVar14[1]);
  return;
}

