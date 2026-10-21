// JMDPBFOCHHP.FNILDHLJBBJ$$.ctor @ RVA 0x2FF9CC0

/* WARNING: Removing unreachable block (ram,0x030fa320) */
/* WARNING: Removing unreachable block (ram,0x030fa38c) */

void JMDPBFOCHHP_FNILDHLJBBJ___ctor
               (JMDPBFOCHHP_FNILDHLJBBJ_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,
               MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  System_Collections_Generic_List_JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ__o *pSVar4;
  System_Collections_Generic_List_DDMHMABAHHD__o *pSVar5;
  System_Collections_Generic_List_DDMHMABAHHD__o **ppSVar6;
  System_Xml_XmlAttributeCollection_o *pSVar7;
  System_Xml_XmlAttribute_o *pSVar8;
  System_String_o *pSVar9;
  long *plVar10;
  undefined8 *puVar11;
  System_Xml_XmlNode_o *GCMHMONNHII;
  JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ_o *__this_00;
  DDMHMABAHHD_o *__this_01;
  System_Xml_XmlNode_c *method_00;
  MethodInfo *method_01;
  long lVar12;
  JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ_array *pJVar13;
  DDMHMABAHHD_array *pDVar14;
  ulong uVar15;
  int *piVar16;
  System_Collections_Generic_List_JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ__o **ppSVar17;
  System_String_o **ppSVar18;
  int iVar19;
  undefined1 auVar20 [16];
  
  if ((DAT_04565ac7 & 1) == 0) {
    FUN_01bab630(&DDMHMABAHHD_TypeInfo);
    FUN_01bab630(&JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_Add__)
    ;
    FUN_01bab630(&Method_System_Collections_Generic_List<DDMHMABAHHD>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DDMHMABAHHD>__ctor__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>__ctor__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Count__);
    FUN_01bab630(&System_Collections_Generic_List<DDMHMABAHHD>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_4326);
    FUN_01bab630(&StringLiteral_10918);
    FUN_01bab630(&StringLiteral_10854);
    FUN_01bab630(&StringLiteral_10885);
    FUN_01bab630(&StringLiteral_8254);
    FUN_01bab630(&StringLiteral_3507);
    FUN_01bab630(&StringLiteral_3695);
    DAT_04565ac7 = 1;
  }
  pSVar4 = (System_Collections_Generic_List_JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ__o *)
           thunk_FUN_01bda818(
                             System_Collections_Generic_List<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_TypeInfo
                             );
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar4,
             Method_System_Collections_Generic_List<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>__ctor__);
  ppSVar17 = &(__this->fields).BAPMMGFEIDM;
  *ppSVar17 = pSVar4;
  thunk_FUN_01c20e04(ppSVar17,pSVar4);
  pSVar5 = (System_Collections_Generic_List_DDMHMABAHHD__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<DDMHMABAHHD>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar5,
             Method_System_Collections_Generic_List<DDMHMABAHHD>__ctor__);
  ppSVar6 = &(__this->fields).GFBNJPMOEKD;
  *ppSVar6 = pSVar5;
  thunk_FUN_01c20e04(ppSVar6,pSVar5);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
     (pSVar7 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method),
     pSVar7 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar7,StringLiteral_3695,(MethodInfo *)0x0);
    pSVar9 = EIABCPKDEBD__JPKEHIBGOEM(pSVar8,(System_String_o *)0x0,(MethodInfo *)0x0);
    (__this->fields).JFDGLPNMELO = pSVar9;
    thunk_FUN_01c20e04();
    pSVar7 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar7 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar7,StringLiteral_4326,(MethodInfo *)0x0);
      pSVar9 = EIABCPKDEBD__JPKEHIBGOEM(pSVar8,(System_String_o *)0x0,(MethodInfo *)0x0);
      ppSVar18 = &(__this->fields).HILNENCJHMI;
      *ppSVar18 = pSVar9;
      thunk_FUN_01c20e04(ppSVar18,pSVar9);
      bVar3 = PCOEHCPGBBG__BDLEIEHBFAD(*ppSVar18,(MethodInfo *)0x0);
      if (!bVar3) {
        pSVar9 = System_String__Concat
                           (StringLiteral_10918,(__this->fields).HILNENCJHMI,(MethodInfo *)0x0);
        (__this->fields).MOPLJNDDFGC = pSVar9;
        thunk_FUN_01c20e04();
        pSVar9 = System_String__Concat
                           (StringLiteral_10854,(__this->fields).HILNENCJHMI,(MethodInfo *)0x0);
        (__this->fields).KDHKFELBFJN = pSVar9;
        thunk_FUN_01c20e04();
      }
      pSVar7 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar7 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar7,StringLiteral_8254,(MethodInfo *)0x0);
        pSVar9 = EIABCPKDEBD__JPKEHIBGOEM(pSVar8,(System_String_o *)0x0,(MethodInfo *)0x0);
        ppSVar18 = &(__this->fields).AGFEFODOHMA;
        *ppSVar18 = pSVar9;
        thunk_FUN_01c20e04(ppSVar18,pSVar9);
        bVar3 = PCOEHCPGBBG__BDLEIEHBFAD(*ppSVar18,(MethodInfo *)0x0);
        if (!bVar3) {
          pSVar9 = System_String__Concat
                             (StringLiteral_10885,(__this->fields).AGFEFODOHMA,(MethodInfo *)0x0);
          (__this->fields).LAOIKCJBELO = pSVar9;
          thunk_FUN_01c20e04();
          pSVar9 = OFFIONDOEPM__AMJCJJALAJH((__this->fields).AGFEFODOHMA,(MethodInfo *)0x0);
          (__this->fields).BDDKNEAEOEI = pSVar9;
          thunk_FUN_01c20e04();
        }
        pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar7 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar7,StringLiteral_3507,(MethodInfo *)0x0);
          method_01 = (MethodInfo *)0x0;
          pSVar9 = EIABCPKDEBD__JPKEHIBGOEM(pSVar8,(System_String_o *)0x0,(MethodInfo *)0x0);
          (__this->fields).ICGHMKGHKEH = pSVar9;
          thunk_FUN_01c20e04();
          plVar10 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                                      (AHDGNOJPPIB,
                                       (AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method);
          if (plVar10 != (long *)0x0) {
            plVar10 = (long *)(**(code **)(*plVar10 + 0x1b8))
                                        (plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            iVar19 = 0;
            do {
              lVar12 = *plVar10;
              uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
              if (uVar15 != 0) {
                piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(System_Collections_IEnumerator_c **)(piVar16 + -2) ==
                      System_Collections_IEnumerator_TypeInfo) {
                    puVar11 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
                    goto LAB_030fa0e0;
                  }
                  uVar15 = uVar15 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar15 != 0);
              }
              method_01 = (MethodInfo *)0x0;
              puVar11 = (undefined8 *)FUN_01b81914(plVar10);
LAB_030fa0e0:
              uVar15 = (*(code *)*puVar11)(plVar10,puVar11[1]);
              if ((uVar15 & 1) == 0) {
                plVar10 = (long *)thunk_FUN_01bda71c(plVar10,System_IDisposable_TypeInfo);
                if (plVar10 == (long *)0x0) goto LAB_030fa314;
                lVar12 = *plVar10;
                uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
                if (uVar15 == 0) goto LAB_030fa2ec;
                piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                goto LAB_030fa2d4;
              }
              lVar12 = *plVar10;
              uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
              if (uVar15 != 0) {
                piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(System_Collections_IEnumerator_c **)(piVar16 + -2) ==
                      System_Collections_IEnumerator_TypeInfo) {
                    puVar11 = (undefined8 *)(lVar12 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                    goto LAB_030fa140;
                  }
                  uVar15 = uVar15 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar15 != 0);
              }
              method_01 = (MethodInfo *)0x1;
              puVar11 = (undefined8 *)FUN_01b81914(plVar10);
LAB_030fa140:
              auVar20 = (*(code *)*puVar11)(plVar10,puVar11[1]);
              GCMHMONNHII = auVar20._0_8_;
              method_00 = auVar20._8_8_;
              if (GCMHMONNHII != (System_Xml_XmlNode_o *)0x0) {
                bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
                if (((GCMHMONNHII->klass->_2).naturalAligment < bVar1) ||
                   (method_00 = System_Xml_XmlNode_TypeInfo,
                   (GCMHMONNHII->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                   (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                  FUN_01babc64(GCMHMONNHII);
                }
              }
              iVar19 = iVar19 + 1;
              bVar3 = JMDPBFOCHHP_FNILDHLJBBJ__PACHAPMCMEC(GCMHMONNHII,(MethodInfo *)method_00);
              if (bVar3) {
                pSVar4 = *ppSVar17;
                __this_00 = (JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ_o *)
                            thunk_FUN_01bda818(JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ_TypeInfo);
                JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ___ctor(__this_00,GCMHMONNHII,method_01);
                lVar12 = 
                Method_System_Collections_Generic_List<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_Add__;
                if (pSVar4 == (System_Collections_Generic_List_JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ__o
                               *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pJVar13 = (pSVar4->fields)._items;
                (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
                if (pJVar13 == (JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                uVar2 = (pSVar4->fields)._size;
                if (uVar2 < (uint)pJVar13->max_length) {
                  (pSVar4->fields)._size = uVar2 + 1;
                  pJVar13->m_Items[(int)uVar2] = __this_00;
                  thunk_FUN_01c20e04(pJVar13->m_Items + (int)uVar2,__this_00);
                }
                else {
                  method_01 = *(MethodInfo **)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70);
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)pSVar4,
                             (Il2CppObject *)__this_00,(MethodInfo_26E4DAC *)method_01);
                }
              }
              else {
                pSVar5 = *ppSVar6;
                __this_01 = (DDMHMABAHHD_o *)thunk_FUN_01bda818(DDMHMABAHHD_TypeInfo);
                method_01 = (MethodInfo *)0x0;
                DDMHMABAHHD___ctor(__this_01,GCMHMONNHII,(MethodInfo *)0x0);
                lVar12 = Method_System_Collections_Generic_List<DDMHMABAHHD>_Add__;
                if (pSVar5 == (System_Collections_Generic_List_DDMHMABAHHD__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pDVar14 = (pSVar5->fields)._items;
                (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
                if (pDVar14 == (DDMHMABAHHD_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                uVar2 = (pSVar5->fields)._size;
                if (uVar2 < (uint)pDVar14->max_length) {
                  (pSVar5->fields)._size = uVar2 + 1;
                  pDVar14->m_Items[(int)uVar2] = __this_01;
                  thunk_FUN_01c20e04(pDVar14->m_Items + (int)uVar2,__this_01);
                }
                else {
                  method_01 = *(MethodInfo **)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70);
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)pSVar5,
                             (Il2CppObject *)__this_01,(MethodInfo_26E4DAC *)method_01);
                }
              }
            } while( true );
          }
        }
      }
    }
  }
LAB_030fa384:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_030fa2d4:
    if (*(System_IDisposable_c **)(piVar16 + -2) == System_IDisposable_TypeInfo) {
      puVar11 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_030fa308;
    }
  }
LAB_030fa2ec:
  puVar11 = (undefined8 *)FUN_01b81914(plVar10,System_IDisposable_TypeInfo,0);
LAB_030fa308:
  (*(code *)*puVar11)(plVar10,puVar11[1]);
LAB_030fa314:
  if (iVar19 == 1) {
    if (*ppSVar6 == (System_Collections_Generic_List_DDMHMABAHHD__o *)0x0) goto LAB_030fa384;
    if (((*ppSVar6)->fields)._size == 1) {
      (__this->fields).HNGIBIJJKAP = true;
    }
  }
  return;
}

