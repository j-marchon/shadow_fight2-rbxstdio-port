// FCNNPBIIEOK$$OHMHMHLIHEO @ RVA 0x32ACD70

/* WARNING: Removing unreachable block (ram,0x033ad3c8) */
/* WARNING: Removing unreachable block (ram,0x033ad684) */
/* WARNING: Removing unreachable block (ram,0x033ad690) */

JMDPBFOCHHP_AEJBILHMFDB_o *
FCNNPBIIEOK__OHMHMHLIHEO(System_Xml_XmlDocument_o *LKILNGEECIJ,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  int32_t iVar4;
  uint32_t uVar5;
  long *plVar6;
  JMDPBFOCHHP_AEJBILHMFDB_o *__this;
  System_Xml_XmlAttributeCollection_o *pSVar7;
  System_Xml_XmlAttribute_o *pSVar8;
  long *plVar9;
  System_String_o *pSVar10;
  undefined8 *puVar11;
  System_Xml_XmlNode_o *pSVar12;
  JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH_o *__this_00;
  System_Collections_Generic_Dictionary_uint__JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH__o *__this_01;
  JMDPBFOCHHP_CMLEEJPGHNC_o *item;
  System_Collections_Generic_List_JMDPBFOCHHP_CMLEEJPGHNC__o *__this_02;
  MethodInfo *method_00;
  long lVar13;
  JMDPBFOCHHP_CMLEEJPGHNC_array *pJVar14;
  ulong uVar15;
  int *piVar16;
  UnityEngine_Color_o UVar17;
  System_Nullable_Color__Fields local_78;
  
  if ((DAT_0456743d & 1) == 0) {
    FUN_01bab630(&JMDPBFOCHHP_AEJBILHMFDB_TypeInfo);
    FUN_01bab630(&JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<uint,_JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH>_set_Item__
                );
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_CMLEEJPGHNC>_Add__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_8910);
    FUN_01bab630(&StringLiteral_11723);
    FUN_01bab630(&StringLiteral_11338);
    FUN_01bab630(&StringLiteral_13881);
    FUN_01bab630(&StringLiteral_10359);
    FUN_01bab630(&StringLiteral_8368);
    FUN_01bab630(&StringLiteral_8358);
    FUN_01bab630(&StringLiteral_5075);
    FUN_01bab630(&StringLiteral_5074);
    FUN_01bab630(&StringLiteral_8912);
    FUN_01bab630(&StringLiteral_8365);
    FUN_01bab630(&StringLiteral_8372);
    FUN_01bab630(&StringLiteral_4899);
    DAT_0456743d = 1;
  }
  if (LKILNGEECIJ != (System_Xml_XmlDocument_o *)0x0) {
    plVar6 = (long *)(*(LKILNGEECIJ->klass->vtable)._51_get_Item.methodPtr)
                               (LKILNGEECIJ,StringLiteral_8372,
                                (LKILNGEECIJ->klass->vtable)._51_get_Item.method);
    if (plVar6 == (long *)0x0) {
      return (JMDPBFOCHHP_AEJBILHMFDB_o *)0x0;
    }
    __this = (JMDPBFOCHHP_AEJBILHMFDB_o *)thunk_FUN_01bda818(JMDPBFOCHHP_AEJBILHMFDB_TypeInfo);
    JMDPBFOCHHP_AEJBILHMFDB___ctor(__this,(MethodInfo *)0x0);
    pSVar7 = (System_Xml_XmlAttributeCollection_o *)
             (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
    if (pSVar7 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar7,StringLiteral_11338,(MethodInfo *)0x0);
      iVar4 = EIABCPKDEBD__EHJNCGCICMP(pSVar8,0,(MethodInfo *)0x0);
      if (__this != (JMDPBFOCHHP_AEJBILHMFDB_o *)0x0) {
        (__this->fields).APBGEFLPIFI = iVar4;
        plVar9 = (long *)(**(code **)(*plVar6 + 0x468))
                                   (plVar6,StringLiteral_11723,*(undefined8 *)(*plVar6 + 0x470));
        if ((plVar9 != (long *)0x0) &&
           (pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                     (**(code **)(*plVar9 + 0x238))(plVar9,*(undefined8 *)(*plVar9 + 0x240)),
           pSVar7 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
          pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar7,StringLiteral_4899,(MethodInfo *)0x0);
          pSVar10 = EIABCPKDEBD__JPKEHIBGOEM(pSVar8,(System_String_o *)0x0,(MethodInfo *)0x0);
          (__this->fields).DFFIEFDCMJI = pSVar10;
          thunk_FUN_01c20e04();
          pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                   (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
          if (pSVar7 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar7,StringLiteral_8365,(MethodInfo *)0x0);
            iVar4 = EIABCPKDEBD__EHJNCGCICMP(pSVar8,10000,(MethodInfo *)0x0);
            (__this->fields).EKAPEBDBNPO = iVar4;
            plVar9 = (long *)(**(code **)(*plVar6 + 0x468))
                                       (plVar6,StringLiteral_8358,*(undefined8 *)(*plVar6 + 0x470));
            if ((plVar9 != (long *)0x0) &&
               (plVar9 = (long *)(**(code **)(*plVar9 + 0x208))
                                           (plVar9,*(undefined8 *)(*plVar9 + 0x210)),
               plVar9 != (long *)0x0)) {
              plVar9 = (long *)(**(code **)(*plVar9 + 0x1b8))
                                         (plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
              if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              do {
                lVar13 = *plVar9;
                uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
                if (uVar15 != 0) {
                  piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                  do {
                    if (*(System_Collections_IEnumerator_c **)(piVar16 + -2) ==
                        System_Collections_IEnumerator_TypeInfo) {
                      puVar11 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
                      goto LAB_033ad094;
                    }
                    uVar15 = uVar15 - 1;
                    piVar16 = piVar16 + 4;
                  } while (uVar15 != 0);
                }
                puVar11 = (undefined8 *)
                          FUN_01b81914(plVar9,System_Collections_IEnumerator_TypeInfo,0);
LAB_033ad094:
                uVar15 = (*(code *)*puVar11)(plVar9,puVar11[1]);
                if ((uVar15 & 1) == 0) {
                  plVar9 = (long *)thunk_FUN_01bda71c(plVar9,System_IDisposable_TypeInfo);
                  if (plVar9 == (long *)0x0) goto LAB_033ad3bc;
                  lVar13 = *plVar9;
                  uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
                  if (uVar15 == 0) goto LAB_033ad38c;
                  piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                  goto LAB_033ad374;
                }
                lVar13 = *plVar9;
                uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
                if (uVar15 != 0) {
                  piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                  do {
                    if (*(System_Collections_IEnumerator_c **)(piVar16 + -2) ==
                        System_Collections_IEnumerator_TypeInfo) {
                      puVar11 = (undefined8 *)(lVar13 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                      goto LAB_033ad0f4;
                    }
                    uVar15 = uVar15 - 1;
                    piVar16 = piVar16 + 4;
                  } while (uVar15 != 0);
                }
                puVar11 = (undefined8 *)
                          FUN_01b81914(plVar9,System_Collections_IEnumerator_TypeInfo,1);
LAB_033ad0f4:
                pSVar12 = (System_Xml_XmlNode_o *)(*(code *)*puVar11)(plVar9,puVar11[1]);
                if (pSVar12 != (System_Xml_XmlNode_o *)0x0) {
                  bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
                  if (((pSVar12->klass->_2).naturalAligment < bVar1) ||
                     ((pSVar12->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                      (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                    FUN_01babc64(pSVar12);
                  }
                }
                bVar3 = EIABCPKDEBD__LGKNNMNPKGD(pSVar12,(MethodInfo *)0x0);
                if (!bVar3) {
                  __this_00 = (JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH_o *)
                              thunk_FUN_01bda818(JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH_TypeInfo);
                  JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH___ctor(__this_00,(MethodInfo *)0x0);
                  if (pSVar12 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                           (*(pSVar12->klass->vtable)._16_get_Attributes.methodPtr)
                                     (pSVar12,(pSVar12->klass->vtable)._16_get_Attributes.method);
                  if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                     (pSVar7,StringLiteral_10359,(MethodInfo *)0x0);
                  uVar5 = EIABCPKDEBD__FECKAJHFDJM(pSVar8,0,(MethodInfo *)0x0);
                  if (__this_00 == (JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  (__this_00->fields).OLGNPLGBNDJ = uVar5;
                  pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                           (*(pSVar12->klass->vtable)._16_get_Attributes.methodPtr)
                                     (pSVar12,(pSVar12->klass->vtable)._16_get_Attributes.method);
                  if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                     (pSVar7,StringLiteral_5074,(MethodInfo *)0x0);
                  pSVar10 = EIABCPKDEBD__JPKEHIBGOEM
                                      (pSVar8,(System_String_o *)0x0,(MethodInfo *)0x0);
                  pSVar10 = OFFIONDOEPM__CNLBHLNMCCI(pSVar10,(MethodInfo *)0x0);
                  (__this_00->fields).KJAIPLMIAGP = pSVar10;
                  thunk_FUN_01c20e04();
                  pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                           (*(pSVar12->klass->vtable)._16_get_Attributes.methodPtr)
                                     (pSVar12,(pSVar12->klass->vtable)._16_get_Attributes.method);
                  if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                     (pSVar7,StringLiteral_5075,(MethodInfo *)0x0);
                  pSVar10 = EIABCPKDEBD__JPKEHIBGOEM
                                      (pSVar8,(System_String_o *)0x0,(MethodInfo *)0x0);
                  pSVar10 = OFFIONDOEPM__CNLBHLNMCCI(pSVar10,(MethodInfo *)0x0);
                  (__this_00->fields).HBGDJPCCLAO = pSVar10;
                  thunk_FUN_01c20e04();
                  pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                           (*(pSVar12->klass->vtable)._16_get_Attributes.methodPtr)
                                     (pSVar12,(pSVar12->klass->vtable)._16_get_Attributes.method);
                  if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                     (pSVar7,StringLiteral_13881,(MethodInfo *)0x0);
                  pSVar10 = EIABCPKDEBD__JPKEHIBGOEM
                                      (pSVar8,(System_String_o *)0x0,(MethodInfo *)0x0);
                  pSVar10 = OFFIONDOEPM__CNLBHLNMCCI(pSVar10,(MethodInfo *)0x0);
                  (__this_00->fields).DCHJFFCOGFB = pSVar10;
                  thunk_FUN_01c20e04();
                  pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                           (*(pSVar12->klass->vtable)._16_get_Attributes.methodPtr)
                                     (pSVar12,(pSVar12->klass->vtable)._16_get_Attributes.method);
                  if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                     (pSVar7,StringLiteral_8910,(MethodInfo *)0x0);
                  pSVar10 = EIABCPKDEBD__JPKEHIBGOEM
                                      (pSVar8,(System_String_o *)0x0,(MethodInfo *)0x0);
                  pSVar10 = OFFIONDOEPM__CNLBHLNMCCI(pSVar10,(MethodInfo *)0x0);
                  (__this_00->fields).HHCNBANOKPB = pSVar10;
                  thunk_FUN_01c20e04();
                  pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                           (*(pSVar12->klass->vtable)._16_get_Attributes.methodPtr)
                                     (pSVar12,(pSVar12->klass->vtable)._16_get_Attributes.method);
                  if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                     (pSVar7,StringLiteral_8912,(MethodInfo *)0x0);
                  pSVar10 = EIABCPKDEBD__JPKEHIBGOEM
                                      (pSVar8,(System_String_o *)0x0,(MethodInfo *)0x0);
                  local_78.hasValue = false;
                  local_78._1_3_ = 0;
                  local_78.value.fields.r = 0.0;
                  local_78.value.fields.g = 0.0;
                  local_78.value.fields.b = 0.0;
                  local_78.value.fields.a = 0.0;
                  UVar17 = CFBGPBCDAGA__HPBCENEFAMD
                                     (pSVar10,1.0,(System_Nullable_Color__o *)&local_78,
                                      (MethodInfo *)0x0);
                  (__this_00->fields).JPBGLAAFMKH.fields.r = UVar17.fields.r;
                  (__this_00->fields).JPBGLAAFMKH.fields.g = UVar17.fields.g;
                  (__this_00->fields).JPBGLAAFMKH.fields.b = UVar17.fields.b;
                  (__this_00->fields).JPBGLAAFMKH.fields.a = UVar17.fields.a;
                  __this_01 = (__this->fields).BFODFJIGBHE;
                  if (__this_01 ==
                      (System_Collections_Generic_Dictionary_uint__JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH__o
                       *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  System_Collections_Generic_Dictionary<uint,_object>__set_Item
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
                             (__this_00->fields).OLGNPLGBNDJ,(Il2CppObject *)__this_00,
                             Method_System_Collections_Generic_Dictionary<uint,_JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH>_set_Item__
                            );
                }
              } while( true );
            }
          }
        }
      }
    }
  }
  goto LAB_033ad674;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_033ad5d4:
    if (*(System_IDisposable_c **)(piVar16 + -2) == System_IDisposable_TypeInfo) {
      puVar11 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_033ad608;
    }
  }
LAB_033ad5ec:
  puVar11 = (undefined8 *)FUN_01b81914(plVar6,System_IDisposable_TypeInfo,0);
LAB_033ad608:
  (*(code *)*puVar11)(plVar6,puVar11[1]);
  return __this;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_033ad374:
    if (*(System_IDisposable_c **)(piVar16 + -2) == System_IDisposable_TypeInfo) {
      puVar11 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_033ad3b0;
    }
  }
LAB_033ad38c:
  puVar11 = (undefined8 *)FUN_01b81914(plVar9,System_IDisposable_TypeInfo,0);
LAB_033ad3b0:
  (*(code *)*puVar11)(plVar9,puVar11[1]);
LAB_033ad3bc:
  plVar6 = (long *)(**(code **)(*plVar6 + 0x208))(plVar6,*(undefined8 *)(*plVar6 + 0x210));
  if (plVar6 != (long *)0x0) {
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
            puVar11 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_033ad464;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar11 = (undefined8 *)FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,0);
LAB_033ad464:
      uVar15 = (*(code *)*puVar11)(plVar6,puVar11[1]);
      if ((uVar15 & 1) == 0) {
        plVar6 = (long *)thunk_FUN_01bda71c(plVar6,System_IDisposable_TypeInfo);
        if (plVar6 == (long *)0x0) {
          return __this;
        }
        lVar13 = *plVar6;
        uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar15 == 0) goto LAB_033ad5ec;
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        goto LAB_033ad5d4;
      }
      lVar13 = *plVar6;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar16 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar11 = (undefined8 *)(lVar13 + (long)(*piVar16 + 1) * 0x10 + 0x138);
            goto LAB_033ad4c4;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar11 = (undefined8 *)FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,1);
LAB_033ad4c4:
      pSVar12 = (System_Xml_XmlNode_o *)(*(code *)*puVar11)(plVar6,puVar11[1]);
      if (pSVar12 != (System_Xml_XmlNode_o *)0x0) {
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if (((pSVar12->klass->_2).naturalAligment < bVar1) ||
           ((pSVar12->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(pSVar12);
        }
      }
      bVar3 = EIABCPKDEBD__LGKNNMNPKGD(pSVar12,(MethodInfo *)0x0);
      if (!bVar3) {
        if (pSVar12 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar10 = (System_String_o *)
                  (*(pSVar12->klass->vtable)._8_unknown.methodPtr)
                            (pSVar12,(pSVar12->klass->vtable)._8_unknown.method);
        bVar3 = System_String__op_Equality(pSVar10,StringLiteral_8368,(MethodInfo *)0x0);
        if (bVar3) {
          item = FCNNPBIIEOK__DMNGKKPFLJO(pSVar12,method_00);
          lVar13 = Method_System_Collections_Generic_List<JMDPBFOCHHP_CMLEEJPGHNC>_Add__;
          __this_02 = (__this->fields).NPPJFJBJLLG;
          if (__this_02 == (System_Collections_Generic_List_JMDPBFOCHHP_CMLEEJPGHNC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pJVar14 = (__this_02->fields)._items;
          (__this_02->fields)._version = (__this_02->fields)._version + 1;
          if (pJVar14 == (JMDPBFOCHHP_CMLEEJPGHNC_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar2 = (__this_02->fields)._size;
          if (uVar2 < (uint)pJVar14->max_length) {
            (__this_02->fields)._size = uVar2 + 1;
            pJVar14->m_Items[(int)uVar2] = item;
            thunk_FUN_01c20e04(pJVar14->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_02,(Il2CppObject *)item,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
    } while( true );
  }
LAB_033ad674:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

