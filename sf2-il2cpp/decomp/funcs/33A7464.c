// GGLKHCAIGDI$$.ctor @ RVA 0x33A7464

/* WARNING: Removing unreachable block (ram,0x034a7bc0) */
/* WARNING: Removing unreachable block (ram,0x034a7e70) */
/* WARNING: Removing unreachable block (ram,0x034a7e64) */

void GGLKHCAIGDI___ctor(GGLKHCAIGDI_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  System_Collections_Generic_List_MDLDFLDGLND__o *pSVar3;
  System_Collections_Generic_List_LGFLCMBIFCN__o *pSVar4;
  System_Collections_Generic_List_PFECHOJADFA__o *pSVar5;
  System_Xml_XmlAttributeCollection_o *pSVar6;
  System_Xml_XmlAttribute_o *pSVar7;
  System_String_o *pSVar8;
  long *plVar9;
  undefined8 *puVar10;
  System_Xml_XmlNode_o *pSVar11;
  MDLDFLDGLND_o *__this_00;
  LGFLCMBIFCN_o *__this_01;
  PFECHOJADFA_o *__this_02;
  long lVar12;
  MDLDFLDGLND_array *pMVar13;
  LGFLCMBIFCN_array *pLVar14;
  PFECHOJADFA_array *pPVar15;
  ulong uVar16;
  int *piVar17;
  System_Collections_Generic_List_PFECHOJADFA__o **ppSVar18;
  System_Collections_Generic_List_LGFLCMBIFCN__o **ppSVar19;
  System_Collections_Generic_List_MDLDFLDGLND__o **ppSVar20;
  System_String_o **ppSVar21;
  GGLKHCAIGDI_Fields *pGVar22;
  
  if ((DAT_04567cfa & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&LGFLCMBIFCN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MDLDFLDGLND>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LGFLCMBIFCN>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PFECHOJADFA>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PFECHOJADFA>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LGFLCMBIFCN>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MDLDFLDGLND>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<MDLDFLDGLND>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<PFECHOJADFA>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<LGFLCMBIFCN>_TypeInfo);
    FUN_01bab630(&MDLDFLDGLND_TypeInfo);
    FUN_01bab630(&PFECHOJADFA_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_8116);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_14757);
    FUN_01bab630(&StringLiteral_10463);
    FUN_01bab630(&StringLiteral_2799);
    FUN_01bab630(&StringLiteral_1);
    DAT_04567cfa = 1;
  }
  pGVar22 = &__this->fields;
  pGVar22->_COIPKAKHDFP_k__BackingField = StringLiteral_1;
  thunk_FUN_01c20e04(pGVar22);
  ppSVar21 = &(__this->fields)._HONAAKEIHJI_k__BackingField;
  *ppSVar21 = StringLiteral_1;
  thunk_FUN_01c20e04(ppSVar21);
  pSVar3 = (System_Collections_Generic_List_MDLDFLDGLND__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<MDLDFLDGLND>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar3,
             Method_System_Collections_Generic_List<MDLDFLDGLND>__ctor__);
  ppSVar20 = &(__this->fields).HEHMAPDMHIG;
  *ppSVar20 = pSVar3;
  thunk_FUN_01c20e04(ppSVar20,pSVar3);
  pSVar4 = (System_Collections_Generic_List_LGFLCMBIFCN__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<LGFLCMBIFCN>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar4,
             Method_System_Collections_Generic_List<LGFLCMBIFCN>__ctor__);
  ppSVar19 = &(__this->fields).PJGPKMDGOIE;
  *ppSVar19 = pSVar4;
  thunk_FUN_01c20e04(ppSVar19,pSVar4);
  pSVar5 = (System_Collections_Generic_List_PFECHOJADFA__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<PFECHOJADFA>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar5,
             Method_System_Collections_Generic_List<PFECHOJADFA>__ctor__);
  ppSVar18 = &(__this->fields).NICGLFEBNFM;
  *ppSVar18 = pSVar5;
  thunk_FUN_01c20e04(ppSVar18,pSVar5);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if ((JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) &&
     (pSVar6 = (System_Xml_XmlAttributeCollection_o *)
               (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                         (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method),
     pSVar6 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar6,StringLiteral_9327,(MethodInfo *)0x0);
    pSVar8 = EIABCPKDEBD__JPKEHIBGOEM(pSVar7,(System_String_o *)0x0,(MethodInfo *)0x0);
    pGVar22->_COIPKAKHDFP_k__BackingField = pSVar8;
    thunk_FUN_01c20e04(pGVar22,pSVar8);
    pSVar6 = (System_Xml_XmlAttributeCollection_o *)
             (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                       (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
    if (pSVar6 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar6,StringLiteral_2799,(MethodInfo *)0x0);
      pSVar8 = EIABCPKDEBD__JPKEHIBGOEM(pSVar7,(System_String_o *)0x0,(MethodInfo *)0x0);
      *ppSVar21 = pSVar8;
      thunk_FUN_01c20e04(ppSVar21,pSVar8);
      plVar9 = (long *)(*(JHMENEKPIBO->klass->vtable)._51_get_Item.methodPtr)
                                 (JHMENEKPIBO,StringLiteral_8116,
                                  (JHMENEKPIBO->klass->vtable)._51_get_Item.method);
      if ((plVar9 != (long *)0x0) &&
         (plVar9 = (long *)(**(code **)(*plVar9 + 0x208))(plVar9,*(undefined8 *)(*plVar9 + 0x210)),
         plVar9 != (long *)0x0)) {
        plVar9 = (long *)(**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        do {
          lVar12 = *plVar9;
          uVar16 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar17 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar10 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_034a77cc;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar10 = (undefined8 *)FUN_01b81914(plVar9,System_Collections_IEnumerator_TypeInfo,0);
LAB_034a77cc:
          uVar16 = (*(code *)*puVar10)(plVar9,puVar10[1]);
          if ((uVar16 & 1) == 0) {
            plVar9 = (long *)thunk_FUN_01bda71c(plVar9,System_IDisposable_TypeInfo);
            if (plVar9 == (long *)0x0) goto LAB_034a7964;
            lVar12 = *plVar9;
            uVar16 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar16 == 0) goto LAB_034a793c;
            piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            goto LAB_034a7924;
          }
          lVar12 = *plVar9;
          uVar16 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar17 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar10 = (undefined8 *)(lVar12 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                goto LAB_034a782c;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar10 = (undefined8 *)FUN_01b81914(plVar9,System_Collections_IEnumerator_TypeInfo,1);
LAB_034a782c:
          pSVar11 = (System_Xml_XmlNode_o *)(*(code *)*puVar10)(plVar9,puVar10[1]);
          if (pSVar11 != (System_Xml_XmlNode_o *)0x0) {
            bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
            if (((pSVar11->klass->_2).naturalAligment < bVar1) ||
               ((pSVar11->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
              FUN_01babc64(pSVar11);
            }
          }
          pSVar3 = *ppSVar20;
          __this_00 = (MDLDFLDGLND_o *)thunk_FUN_01bda818(MDLDFLDGLND_TypeInfo);
          MDLDFLDGLND___ctor(__this_00,pSVar11,(MethodInfo *)0x0);
          lVar12 = Method_System_Collections_Generic_List<MDLDFLDGLND>_Add__;
          if (pSVar3 == (System_Collections_Generic_List_MDLDFLDGLND__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pMVar13 = (pSVar3->fields)._items;
          (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
          if (pMVar13 == (MDLDFLDGLND_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar2 = (pSVar3->fields)._size;
          if (uVar2 < (uint)pMVar13->max_length) {
            (pSVar3->fields)._size = uVar2 + 1;
            pMVar13->m_Items[(int)uVar2] = __this_00;
            thunk_FUN_01c20e04(pMVar13->m_Items + (int)uVar2,__this_00);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)__this_00
                       ,*(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70))
            ;
          }
        } while( true );
      }
    }
  }
  goto LAB_034a7e60;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
LAB_034a7924:
    if (*(System_IDisposable_c **)(piVar17 + -2) == System_IDisposable_TypeInfo) {
      puVar10 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_034a7958;
    }
  }
LAB_034a793c:
  puVar10 = (undefined8 *)FUN_01b81914(plVar9,System_IDisposable_TypeInfo,0);
LAB_034a7958:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
LAB_034a7964:
  plVar9 = (long *)(*(JHMENEKPIBO->klass->vtable)._51_get_Item.methodPtr)
                             (JHMENEKPIBO,StringLiteral_10463,
                              (JHMENEKPIBO->klass->vtable)._51_get_Item.method);
  if ((plVar9 != (long *)0x0) &&
     (plVar9 = (long *)(**(code **)(*plVar9 + 0x208))(plVar9,*(undefined8 *)(*plVar9 + 0x210)),
     plVar9 != (long *)0x0)) {
    plVar9 = (long *)(**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      lVar12 = *plVar9;
      uVar16 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar17 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar10 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_034a7a20;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar10 = (undefined8 *)FUN_01b81914(plVar9,System_Collections_IEnumerator_TypeInfo,0);
LAB_034a7a20:
      uVar16 = (*(code *)*puVar10)(plVar9,puVar10[1]);
      if ((uVar16 & 1) == 0) {
        plVar9 = (long *)thunk_FUN_01bda71c(plVar9,System_IDisposable_TypeInfo);
        if (plVar9 == (long *)0x0) goto LAB_034a7bb4;
        lVar12 = *plVar9;
        uVar16 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar16 == 0) goto LAB_034a7b8c;
        piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        goto LAB_034a7b74;
      }
      lVar12 = *plVar9;
      uVar16 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar17 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar10 = (undefined8 *)(lVar12 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_034a7a80;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar10 = (undefined8 *)FUN_01b81914(plVar9,System_Collections_IEnumerator_TypeInfo,1);
LAB_034a7a80:
      pSVar11 = (System_Xml_XmlNode_o *)(*(code *)*puVar10)(plVar9,puVar10[1]);
      if (pSVar11 != (System_Xml_XmlNode_o *)0x0) {
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if (((pSVar11->klass->_2).naturalAligment < bVar1) ||
           ((pSVar11->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(pSVar11);
        }
      }
      pSVar4 = *ppSVar19;
      __this_01 = (LGFLCMBIFCN_o *)thunk_FUN_01bda818(LGFLCMBIFCN_TypeInfo);
      LGFLCMBIFCN___ctor(__this_01,pSVar11,(MethodInfo *)0x0);
      lVar12 = Method_System_Collections_Generic_List<LGFLCMBIFCN>_Add__;
      if (pSVar4 == (System_Collections_Generic_List_LGFLCMBIFCN__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pLVar14 = (pSVar4->fields)._items;
      (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
      if (pLVar14 == (LGFLCMBIFCN_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar2 = (pSVar4->fields)._size;
      if (uVar2 < (uint)pLVar14->max_length) {
        (pSVar4->fields)._size = uVar2 + 1;
        pLVar14->m_Items[(int)uVar2] = __this_01;
        thunk_FUN_01c20e04(pLVar14->m_Items + (int)uVar2,__this_01);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)__this_01,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
      }
    } while( true );
  }
  goto LAB_034a7e60;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
LAB_034a7dcc:
    if (*(System_IDisposable_c **)(piVar17 + -2) == System_IDisposable_TypeInfo) {
      puVar10 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_034a7e00;
    }
  }
LAB_034a7de4:
  puVar10 = (undefined8 *)FUN_01b81914(plVar9,System_IDisposable_TypeInfo,0);
LAB_034a7e00:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
  return;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
LAB_034a7b74:
    if (*(System_IDisposable_c **)(piVar17 + -2) == System_IDisposable_TypeInfo) {
      puVar10 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_034a7ba8;
    }
  }
LAB_034a7b8c:
  puVar10 = (undefined8 *)FUN_01b81914(plVar9,System_IDisposable_TypeInfo,0);
LAB_034a7ba8:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
LAB_034a7bb4:
  plVar9 = (long *)(*(JHMENEKPIBO->klass->vtable)._51_get_Item.methodPtr)
                             (JHMENEKPIBO,StringLiteral_14757,
                              (JHMENEKPIBO->klass->vtable)._51_get_Item.method);
  if ((plVar9 != (long *)0x0) &&
     (plVar9 = (long *)(**(code **)(*plVar9 + 0x208))(plVar9,*(undefined8 *)(*plVar9 + 0x210)),
     plVar9 != (long *)0x0)) {
    plVar9 = (long *)(**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      lVar12 = *plVar9;
      uVar16 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar17 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar10 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_034a7c7c;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar10 = (undefined8 *)FUN_01b81914(plVar9,System_Collections_IEnumerator_TypeInfo,0);
LAB_034a7c7c:
      uVar16 = (*(code *)*puVar10)(plVar9,puVar10[1]);
      if ((uVar16 & 1) == 0) {
        plVar9 = (long *)thunk_FUN_01bda71c(plVar9,System_IDisposable_TypeInfo);
        if (plVar9 == (long *)0x0) {
          return;
        }
        lVar12 = *plVar9;
        uVar16 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar16 == 0) goto LAB_034a7de4;
        piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        goto LAB_034a7dcc;
      }
      lVar12 = *plVar9;
      uVar16 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar17 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar10 = (undefined8 *)(lVar12 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_034a7cdc;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar10 = (undefined8 *)FUN_01b81914(plVar9,System_Collections_IEnumerator_TypeInfo,1);
LAB_034a7cdc:
      pSVar11 = (System_Xml_XmlNode_o *)(*(code *)*puVar10)(plVar9,puVar10[1]);
      if (pSVar11 != (System_Xml_XmlNode_o *)0x0) {
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if (((pSVar11->klass->_2).naturalAligment < bVar1) ||
           ((pSVar11->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(pSVar11);
        }
      }
      pSVar5 = *ppSVar18;
      __this_02 = (PFECHOJADFA_o *)thunk_FUN_01bda818(PFECHOJADFA_TypeInfo);
      PFECHOJADFA___ctor(__this_02,pSVar11,(MethodInfo *)0x0);
      lVar12 = Method_System_Collections_Generic_List<PFECHOJADFA>_Add__;
      if (pSVar5 == (System_Collections_Generic_List_PFECHOJADFA__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pPVar15 = (pSVar5->fields)._items;
      (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
      if (pPVar15 == (PFECHOJADFA_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar2 = (pSVar5->fields)._size;
      if (uVar2 < (uint)pPVar15->max_length) {
        (pSVar5->fields)._size = uVar2 + 1;
        pPVar15->m_Items[(int)uVar2] = __this_02;
        thunk_FUN_01c20e04(pPVar15->m_Items + (int)uVar2,__this_02);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)__this_02,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
      }
    } while( true );
  }
LAB_034a7e60:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

