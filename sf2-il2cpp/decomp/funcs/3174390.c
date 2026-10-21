// ABCMPMHNMAP$$HNIHOIAMDPC @ RVA 0x3174390

/* WARNING: Removing unreachable block (ram,0x03274a48) */

void ABCMPMHNMAP__HNIHOIAMDPC
               (ABCMPMHNMAP_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  int32_t iVar4;
  System_Collections_Generic_Dictionary_object__object__o *pSVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  IHDFIJGDCBL_o *__this_00;
  System_Xml_XmlAttributeCollection_o *pSVar9;
  System_Xml_XmlAttribute_o *pSVar10;
  System_String_o *pSVar11;
  System_Collections_Generic_List_IHDFIJGDCBL__o *pSVar12;
  long lVar13;
  IHDFIJGDCBL_array *pIVar14;
  ulong uVar15;
  int *piVar16;
  System_String_o **ppSVar17;
  
  if ((DAT_0456694d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_IHDFIJGDCBL>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_IHDFIJGDCBL>_Clear__);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&IHDFIJGDCBL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IHDFIJGDCBL>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IHDFIJGDCBL>_Clear__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_10502);
    FUN_01bab630(&StringLiteral_6551);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_756);
    FUN_01bab630(&StringLiteral_3396);
    FUN_01bab630(&StringLiteral_7289);
    FUN_01bab630(&StringLiteral_10203);
    FUN_01bab630(&StringLiteral_10344);
    FUN_01bab630(&StringLiteral_12024);
    FUN_01bab630(&StringLiteral_2799);
    FUN_01bab630(&StringLiteral_7076);
    DAT_0456694d = 1;
  }
  pSVar12 = (__this->fields).ACHJNNOKEDK;
  if (pSVar12 != (System_Collections_Generic_List_IHDFIJGDCBL__o *)0x0) {
    iVar4 = (pSVar12->fields)._size;
    (pSVar12->fields)._size = 0;
    (pSVar12->fields)._version = (pSVar12->fields)._version + 1;
    if (0 < iVar4) {
      System_Array__Clear((System_Array_o *)(pSVar12->fields)._items,0,iVar4,(MethodInfo *)0x0);
    }
    pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).DLJKMENIJJF
    ;
    if (((pSVar5 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
        (System_Collections_Generic_Dictionary<object,_object>__Clear
                   (pSVar5,Method_System_Collections_Generic_Dictionary<string,_IHDFIJGDCBL>_Clear__
                   ), AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0)) &&
       (plVar6 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                                   (AHDGNOJPPIB,
                                    (AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method),
       plVar6 != (long *)0x0)) {
      plVar6 = (long *)(**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar13 = *plVar6;
        uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar16 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar7 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_03274598;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,0);
LAB_03274598:
        uVar15 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        if ((uVar15 & 1) == 0) {
          plVar6 = (long *)thunk_FUN_01bda71c(plVar6,System_IDisposable_TypeInfo);
          if (plVar6 == (long *)0x0) {
            return;
          }
          lVar13 = *plVar6;
          uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar15 == 0) goto LAB_032749b8;
          piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          goto LAB_032749a0;
        }
        lVar13 = *plVar6;
        uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar16 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar7 = (undefined8 *)(lVar13 + (long)(*piVar16 + 1) * 0x10 + 0x138);
              goto LAB_032745f8;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,1);
LAB_032745f8:
        plVar8 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
        if (plVar8 != (long *)0x0) {
          bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
          if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
             (*(System_Xml_XmlNode_c **)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
              System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(plVar8);
          }
        }
        __this_00 = (IHDFIJGDCBL_o *)thunk_FUN_01bda818(IHDFIJGDCBL_TypeInfo);
        IHDFIJGDCBL___ctor(__this_00,(MethodInfo *)0x0);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                 (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
        if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                            (pSVar9,StringLiteral_9327,(MethodInfo *)0x0);
        pSVar11 = GIAMPEGMNHE__LFCNNAGLPHO(pSVar10,(System_String_o *)0x0,(MethodInfo *)0x0);
        if (__this_00 == (IHDFIJGDCBL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        (__this_00->fields).NPFMOEOIEKM = pSVar11;
        thunk_FUN_01c20e04();
        pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                 (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
        if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                            (pSVar9,StringLiteral_7289,(MethodInfo *)0x0);
        pSVar11 = GIAMPEGMNHE__LFCNNAGLPHO(pSVar10,(System_String_o *)0x0,(MethodInfo *)0x0);
        (__this_00->fields).OPBJKMDPKLG = pSVar11;
        thunk_FUN_01c20e04();
        pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                 (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
        if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                            (pSVar9,StringLiteral_2799,(MethodInfo *)0x0);
        pSVar11 = GIAMPEGMNHE__LFCNNAGLPHO(pSVar10,(System_String_o *)0x0,(MethodInfo *)0x0);
        (__this_00->fields).JMGIACHBIKG = pSVar11;
        thunk_FUN_01c20e04();
        pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                 (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
        if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                            (pSVar9,StringLiteral_10344,(MethodInfo *)0x0);
        iVar4 = GIAMPEGMNHE__NANCFCIGNEE(pSVar10,0,(MethodInfo *)0x0);
        (__this_00->fields).GKLKOCOKMDB = iVar4;
        pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                 (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
        if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                            (pSVar9,StringLiteral_6551,(MethodInfo *)0x0);
        pSVar11 = GIAMPEGMNHE__LFCNNAGLPHO(pSVar10,(System_String_o *)0x0,(MethodInfo *)0x0);
        ppSVar17 = &(__this_00->fields).KEDIHMHFAHO;
        *ppSVar17 = pSVar11;
        thunk_FUN_01c20e04(ppSVar17);
        pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                 (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
        if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                            (pSVar9,StringLiteral_7076,(MethodInfo *)0x0);
        bVar3 = GIAMPEGMNHE__FAEBPLENEGK(pSVar10,false,(MethodInfo *)0x0);
        (__this_00->fields).CHLMHEGKKNH = bVar3;
        pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                 (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
        if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                            (pSVar9,StringLiteral_12024,(MethodInfo *)0x0);
        bVar3 = GIAMPEGMNHE__FAEBPLENEGK(pSVar10,false,(MethodInfo *)0x0);
        (__this_00->fields).OOBNCDKIDFK = bVar3;
        pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                 (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
        if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                            (pSVar9,StringLiteral_10502,(MethodInfo *)0x0);
        bVar3 = GIAMPEGMNHE__FAEBPLENEGK(pSVar10,false,(MethodInfo *)0x0);
        (__this_00->fields).MLHNMNKFDLN = bVar3;
        pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                 (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
        if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                            (pSVar9,StringLiteral_3396,(MethodInfo *)0x0);
        pSVar11 = GIAMPEGMNHE__LFCNNAGLPHO(pSVar10,(System_String_o *)0x0,(MethodInfo *)0x0);
        (__this_00->fields).FFDAPDCFBDO = pSVar11;
        thunk_FUN_01c20e04();
        bVar3 = System_String__op_Equality(*ppSVar17,StringLiteral_10203,(MethodInfo *)0x0);
        if (bVar3) {
          *ppSVar17 = StringLiteral_756;
          thunk_FUN_01c20e04(ppSVar17);
        }
        lVar13 = Method_System_Collections_Generic_List<IHDFIJGDCBL>_Add__;
        pSVar12 = (__this->fields).ACHJNNOKEDK;
        if (pSVar12 == (System_Collections_Generic_List_IHDFIJGDCBL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pIVar14 = (pSVar12->fields)._items;
        (pSVar12->fields)._version = (pSVar12->fields)._version + 1;
        if (pIVar14 == (IHDFIJGDCBL_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar2 = (pSVar12->fields)._size;
        if (uVar2 < (uint)pIVar14->max_length) {
          (pSVar12->fields)._size = uVar2 + 1;
          pIVar14->m_Items[(int)uVar2] = __this_00;
          thunk_FUN_01c20e04(pIVar14->m_Items + (int)uVar2,__this_00);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar12,(Il2CppObject *)__this_00,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        }
        pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
                 (__this->fields).DLJKMENIJJF;
        if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        System_Collections_Generic_Dictionary<object,_object>__Add
                  (pSVar5,(Il2CppObject *)(__this_00->fields).NPFMOEOIEKM,(Il2CppObject *)__this_00,
                   Method_System_Collections_Generic_Dictionary<string,_IHDFIJGDCBL>_Add__);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_032749a0:
    if (*(System_IDisposable_c **)(piVar16 + -2) == System_IDisposable_TypeInfo) {
      puVar7 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_032749d4;
    }
  }
LAB_032749b8:
  puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_IDisposable_TypeInfo,0);
LAB_032749d4:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
  return;
}

