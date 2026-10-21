// OBOBEOMMECI$$FBNPDNHPPIA @ RVA 0x35272B8

/* WARNING: Removing unreachable block (ram,0x03627894) */
/* WARNING: Removing unreachable block (ram,0x03627b58) */

void OBOBEOMMECI__FBNPDNHPPIA
               (OBOBEOMMECI_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  int32_t length;
  byte bVar1;
  uint uVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  System_Xml_XmlNode_o *AHDGNOJPPIB_00;
  System_String_o *pSVar6;
  System_Collections_Generic_List_ECENNHNBAME__o *KENFFDHLNDA;
  System_Xml_XmlAttributeCollection_o *pSVar7;
  System_Xml_XmlAttribute_o *pSVar8;
  MGNDHCBAPEN_ECENNHNBAME__float__o *__this_00;
  System_Collections_Generic_List_MGNDHCBAPEN_ECENNHNBAME__float___o *pSVar9;
  MGNDHCBAPEN_string__OBOBEOMMECI__o *__this_01;
  Il2CppObject *pIVar10;
  Il2CppClass *pIVar11;
  MethodInfo *method_00;
  System_Collections_Generic_List_MGNDHCBAPEN_string__OBOBEOMMECI___o *pSVar12;
  long lVar13;
  MGNDHCBAPEN_ECENNHNBAME__float__array *pMVar14;
  MGNDHCBAPEN_string__OBOBEOMMECI__array *pMVar15;
  ulong uVar16;
  int *piVar17;
  float JGGJNLLANAE;
  undefined1 auVar18 [16];
  System_Collections_Generic_List_Enumerator_T__o local_a8;
  System_Collections_Generic_List_Enumerator_T__o local_90;
  int32_t local_64;
  
  if ((DAT_04568a06 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_get_Current__);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&LDHBHPILNMA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_OBOBEOMMECI>>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<ECENNHNBAME,_float>>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_OBOBEOMMECI>>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>__ctor__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_OBOBEOMMECI>>_get_Item__
                );
    FUN_01bab630(&System_Collections_Generic_List<ECENNHNBAME>_TypeInfo);
    FUN_01bab630(&Method_MGNDHCBAPEN<ECENNHNBAME,_float>__ctor__);
    FUN_01bab630(&Method_MGNDHCBAPEN<string,_OBOBEOMMECI>__ctor__);
    FUN_01bab630(&MGNDHCBAPEN<ECENNHNBAME,_float>_TypeInfo);
    FUN_01bab630(&MGNDHCBAPEN<string,_OBOBEOMMECI>_TypeInfo);
    FUN_01bab630(&OBOBEOMMECI_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_6197);
    FUN_01bab630(&StringLiteral_8907);
    FUN_01bab630(&StringLiteral_2968);
    FUN_01bab630(&StringLiteral_5759);
    FUN_01bab630(&StringLiteral_2975);
    FUN_01bab630(&StringLiteral_4940);
    FUN_01bab630(&StringLiteral_10305);
    FUN_01bab630(&StringLiteral_1);
    DAT_04568a06 = 1;
  }
  local_90.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_90.fields._index = 0;
  local_90.fields._version = 0;
  local_90.fields._current = (Il2CppObject *)0x0;
  pSVar12 = (__this->fields).KIEHOOAHKIF;
  if (pSVar12 != (System_Collections_Generic_List_MGNDHCBAPEN_string__OBOBEOMMECI___o *)0x0) {
    length = (pSVar12->fields)._size;
    (pSVar12->fields)._size = 0;
    (pSVar12->fields)._version = (pSVar12->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar12->fields)._items,0,length,(MethodInfo *)0x0);
    }
    if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
       (plVar4 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                                   (AHDGNOJPPIB,
                                    (AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method),
       plVar4 != (long *)0x0)) {
      plVar4 = (long *)(**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      local_64 = 0;
      do {
        lVar13 = *plVar4;
        uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar17 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar5 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_03627524;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_03627524:
        uVar16 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        if ((uVar16 & 1) == 0) {
          plVar4 = (long *)thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
          if (plVar4 == (long *)0x0) {
            return;
          }
          lVar13 = *plVar4;
          uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar16 == 0) goto LAB_03627aa8;
          piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          goto LAB_03627a90;
        }
        lVar13 = *plVar4;
        uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar17 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar5 = (undefined8 *)(lVar13 + (long)(*piVar17 + 1) * 0x10 + 0x138);
              goto LAB_03627584;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,1);
LAB_03627584:
        AHDGNOJPPIB_00 = (System_Xml_XmlNode_o *)(*(code *)*puVar5)(plVar4,puVar5[1]);
        if (AHDGNOJPPIB_00 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if (((AHDGNOJPPIB_00->klass->_2).naturalAligment < bVar1) ||
           ((AHDGNOJPPIB_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(AHDGNOJPPIB_00);
        }
        pSVar6 = (System_String_o *)
                 (*(AHDGNOJPPIB_00->klass->vtable)._8_unknown.methodPtr)
                           (AHDGNOJPPIB_00,(AHDGNOJPPIB_00->klass->vtable)._8_unknown.method);
        bVar3 = System_String__op_Equality(pSVar6,StringLiteral_2975,(MethodInfo *)0x0);
        if (bVar3) {
          pSVar12 = (__this->fields).KIEHOOAHKIF;
          auVar18 = thunk_FUN_01bda818(OBOBEOMMECI_TypeInfo);
          OBOBEOMMECI___ctor(auVar18._0_8_,auVar18._8_8_);
          __this_01 = (MGNDHCBAPEN_string__OBOBEOMMECI__o *)
                      thunk_FUN_01bda818(MGNDHCBAPEN<string,_OBOBEOMMECI>_TypeInfo);
          MGNDHCBAPEN<object,_object>___ctor
                    ((MGNDHCBAPEN_T1__T2__o *)__this_01,(Il2CppObject *)StringLiteral_1,
                     (Il2CppObject *)auVar18._0_8_,Method_MGNDHCBAPEN<string,_OBOBEOMMECI>__ctor__);
          lVar13 = Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_OBOBEOMMECI>>_Add__;
          if (pSVar12 == (System_Collections_Generic_List_MGNDHCBAPEN_string__OBOBEOMMECI___o *)0x0)
          {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pMVar15 = (pSVar12->fields)._items;
          (pSVar12->fields)._version = (pSVar12->fields)._version + 1;
          if (pMVar15 == (MGNDHCBAPEN_string__OBOBEOMMECI__array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar2 = (pSVar12->fields)._size;
          if (uVar2 < (uint)pMVar15->max_length) {
            (pSVar12->fields)._size = uVar2 + 1;
            pMVar15->m_Items[(int)uVar2] = __this_01;
            thunk_FUN_01c20e04();
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar12,
                       (Il2CppObject *)__this_01,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
          pSVar12 = (__this->fields).KIEHOOAHKIF;
          if (pSVar12 == (System_Collections_Generic_List_MGNDHCBAPEN_string__OBOBEOMMECI___o *)0x0)
          {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pIVar10 = System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar12,local_64,
                               (MethodInfo_26E4ADC *)
                               Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_OBOBEOMMECI>>_get_Item__
                              );
          pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB_00->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB_00,
                              (AHDGNOJPPIB_00->klass->vtable)._16_get_Attributes.method);
          if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar7,StringLiteral_2968,(MethodInfo *)0x0);
          pIVar11 = (Il2CppClass *)
                    EIABCPKDEBD__JPKEHIBGOEM(pSVar8,StringLiteral_1,(MethodInfo *)0x0);
          if (pIVar10 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pIVar10[1].klass = pIVar11;
          thunk_FUN_01c20e04(pIVar10 + 1);
          pSVar12 = (__this->fields).KIEHOOAHKIF;
          if (pSVar12 == (System_Collections_Generic_List_MGNDHCBAPEN_string__OBOBEOMMECI___o *)0x0)
          {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          method_00 = 
          Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_OBOBEOMMECI>>_get_Item__;
          pIVar10 = System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar12,local_64,
                               (MethodInfo_26E4ADC *)
                               Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_OBOBEOMMECI>>_get_Item__
                              );
          if (pIVar10 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          if (pIVar10[1].monitor == (OBOBEOMMECI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          OBOBEOMMECI__HNIHOIAMDPC(pIVar10[1].monitor,AHDGNOJPPIB_00,method_00);
          local_64 = local_64 + 1;
        }
        else {
          pSVar6 = (System_String_o *)
                   (*(AHDGNOJPPIB_00->klass->vtable)._8_unknown.methodPtr)
                             (AHDGNOJPPIB_00,(AHDGNOJPPIB_00->klass->vtable)._8_unknown.method);
          bVar3 = System_String__op_Equality(pSVar6,StringLiteral_4940,(MethodInfo *)0x0);
          if (bVar3) {
            KENFFDHLNDA = (System_Collections_Generic_List_ECENNHNBAME__o *)
                          thunk_FUN_01bda818(System_Collections_Generic_List<ECENNHNBAME>_TypeInfo);
            System_Collections_Generic_List<object>___ctor
                      ((System_Collections_Generic_List_object__o *)KENFFDHLNDA,
                       Method_System_Collections_Generic_List<ECENNHNBAME>__ctor__);
            pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                     (*(AHDGNOJPPIB_00->klass->vtable)._16_get_Attributes.methodPtr)
                               (AHDGNOJPPIB_00,
                                (AHDGNOJPPIB_00->klass->vtable)._16_get_Attributes.method);
            if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar7,StringLiteral_2968,(MethodInfo *)0x0);
            pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(pSVar8,StringLiteral_1,(MethodInfo *)0x0);
            if ((LDHBHPILNMA_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            LDHBHPILNMA__CADFKPKODCI(pSVar6,KENFFDHLNDA,(MethodInfo *)0x0);
            pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                     (*(AHDGNOJPPIB_00->klass->vtable)._16_get_Attributes.methodPtr)
                               (AHDGNOJPPIB_00,
                                (AHDGNOJPPIB_00->klass->vtable)._16_get_Attributes.method);
            if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar7,StringLiteral_6197,(MethodInfo *)0x0);
            JGGJNLLANAE = EIABCPKDEBD__GICIEKCGOHA(pSVar8,0.0,(MethodInfo *)0x0);
            pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                     (*(AHDGNOJPPIB_00->klass->vtable)._16_get_Attributes.methodPtr)
                               (AHDGNOJPPIB_00,
                                (AHDGNOJPPIB_00->klass->vtable)._16_get_Attributes.method);
            if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar7,StringLiteral_10305,(MethodInfo *)0x0);
            pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(pSVar8,StringLiteral_8907,(MethodInfo *)0x0);
            if (KENFFDHLNDA == (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            System_Collections_Generic_List<object>__GetEnumerator
                      (&local_a8,(System_Collections_Generic_List_object__o *)KENFFDHLNDA,
                       Method_System_Collections_Generic_List<ECENNHNBAME>_GetEnumerator__);
            local_90.fields._index = local_a8.fields._index;
            local_90.fields._version = local_a8.fields._version;
            local_90.fields._list = local_a8.fields._list;
            local_90.fields._current = local_a8.fields._current;
            while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                     (&local_90,
                                      Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_MoveNext__
                                     ), pIVar10 = local_90.fields._current, bVar3) {
              __this_00 = (MGNDHCBAPEN_ECENNHNBAME__float__o *)
                          thunk_FUN_01bda818(MGNDHCBAPEN<ECENNHNBAME,_float>_TypeInfo);
              MGNDHCBAPEN<object,_float>___ctor
                        ((MGNDHCBAPEN_T1__T2__o *)__this_00,pIVar10,JGGJNLLANAE,
                         Method_MGNDHCBAPEN<ECENNHNBAME,_float>__ctor__);
              bVar3 = System_String__op_Equality(pSVar6,StringLiteral_5759,(MethodInfo *)0x0);
              lVar13 = Method_System_Collections_Generic_List<MGNDHCBAPEN<ECENNHNBAME,_float>>_Add__
              ;
              if (bVar3) {
                pSVar9 = (__this->fields).OCDHEALKIOE;
                if (pSVar9 == (System_Collections_Generic_List_MGNDHCBAPEN_ECENNHNBAME__float___o *)
                              0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pMVar14 = (pSVar9->fields)._items;
                (pSVar9->fields)._version = (pSVar9->fields)._version + 1;
                if (pMVar14 == (MGNDHCBAPEN_ECENNHNBAME__float__array *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                uVar2 = (pSVar9->fields)._size;
                if (uVar2 < (uint)pMVar14->max_length) {
                  (pSVar9->fields)._size = uVar2 + 1;
                  pMVar14->m_Items[(int)uVar2] = __this_00;
                  thunk_FUN_01c20e04(pMVar14->m_Items + (int)uVar2,__this_00);
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)pSVar9,
                             (Il2CppObject *)__this_00,
                             *(MethodInfo_26E4DAC **)
                              (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                }
              }
              else {
                bVar3 = System_String__op_Equality(pSVar6,StringLiteral_8907,(MethodInfo *)0x0);
                lVar13 = 
                Method_System_Collections_Generic_List<MGNDHCBAPEN<ECENNHNBAME,_float>>_Add__;
                if (bVar3) {
                  pSVar9 = (__this->fields).FNMOHPKJIFI;
                  if (pSVar9 == (System_Collections_Generic_List_MGNDHCBAPEN_ECENNHNBAME__float___o
                                 *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  pMVar14 = (pSVar9->fields)._items;
                  (pSVar9->fields)._version = (pSVar9->fields)._version + 1;
                  if (pMVar14 == (MGNDHCBAPEN_ECENNHNBAME__float__array *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  uVar2 = (pSVar9->fields)._size;
                  if (uVar2 < (uint)pMVar14->max_length) {
                    (pSVar9->fields)._size = uVar2 + 1;
                    pMVar14->m_Items[(int)uVar2] = __this_00;
                    thunk_FUN_01c20e04(pMVar14->m_Items + (int)uVar2,__this_00);
                  }
                  else {
                    System_Collections_Generic_List<object>__AddWithResize
                              ((System_Collections_Generic_List_object__o *)pSVar9,
                               (Il2CppObject *)__this_00,
                               *(MethodInfo_26E4DAC **)
                                (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                  }
                }
              }
            }
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_90,
                       Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_Dispose__);
          }
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
LAB_03627a90:
    if (*(System_IDisposable_c **)(piVar17 + -2) == System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_03627ac4;
    }
  }
LAB_03627aa8:
  puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_03627ac4:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return;
}

