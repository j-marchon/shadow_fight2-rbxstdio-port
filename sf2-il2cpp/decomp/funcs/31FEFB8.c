// NLPJLHOEAOE$$OAHGFOJOKKH @ RVA 0x31FEFB8

/* WARNING: Removing unreachable block (ram,0x032ffa1c) */

void NLPJLHOEAOE__OAHGFOJOKKH(NLPJLHOEAOE_o *__this,MethodInfo *method)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  int32_t iVar6;
  int32_t iVar7;
  System_String_o *pSVar8;
  System_Xml_XmlDocument_o *pSVar9;
  long *plVar10;
  System_Xml_XmlNode_o *JHMENEKPIBO;
  System_Xml_XmlAttribute_o *pSVar11;
  NLPJLHOEAOE_c *__this_00;
  System_Xml_XmlNode_o *pSVar12;
  long *plVar13;
  System_Xml_XmlAttributeCollection_o *pSVar14;
  undefined8 *puVar15;
  System_Xml_XmlNode_o *pSVar16;
  undefined8 uVar17;
  FGKGKDEJCOG_o *__this_01;
  FGKGKDEJCOG_o **ppFVar18;
  PJKHAJKEHEL_o *pPVar19;
  System_Exception_o *__this_02;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *pMVar20;
  long lVar21;
  ACHLOMELAJE_o *pAVar22;
  ulong uVar23;
  int *piVar24;
  System_Xml_XmlNode_o **ppSVar25;
  System_Xml_XmlDocument_o **ppSVar26;
  int32_t local_64;
  
  if ((DAT_04566e0f & 1) == 0) {
    FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_14862);
    FUN_01bab630(&StringLiteral_21892);
    FUN_01bab630(&StringLiteral_6682);
    FUN_01bab630(&StringLiteral_14694);
    FUN_01bab630(&StringLiteral_21894);
    FUN_01bab630(&StringLiteral_7961);
    FUN_01bab630(&StringLiteral_14859);
    FUN_01bab630(&StringLiteral_11416);
    FUN_01bab630(&StringLiteral_14866);
    FUN_01bab630(&StringLiteral_4954);
    FUN_01bab630(&StringLiteral_11703);
    FUN_01bab630(&StringLiteral_8340);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_13929);
    FUN_01bab630(&StringLiteral_7230);
    DAT_04566e0f = 1;
    method = extraout_x1;
  }
  local_64 = 0;
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGENAMAJALB_TypeInfo,method);
  }
  pSVar8 = MGENAMAJALB__CPIACIDINLI((MethodInfo *)0x0);
  pSVar9 = GIAMPEGMNHE__GMNIIJJFIJK(pSVar8,StringLiteral_21892,0,true,(MethodInfo *)0x0);
  ppSVar26 = &(__this->fields).OFIPPHJGMNK;
  *ppSVar26 = pSVar9;
  thunk_FUN_01c20e04(ppSVar26,pSVar9);
  if (*ppSVar26 == (System_Xml_XmlDocument_o *)0x0) {
    thunk_FUN_01bb9178(&System_Exception_TypeInfo);
    __this_02 = (System_Exception_o *)thunk_FUN_01bda818();
    pSVar8 = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_8488);
    System_Exception___ctor(__this_02,pSVar8,(MethodInfo *)0x0);
    uVar17 = thunk_FUN_01bb9178(&Method_NLPJLHOEAOE_OAHGFOJOKKH__);
                    /* WARNING: Subroutine does not return */
    FUN_01bab798(__this_02,uVar17);
  }
  iVar6 = NLPJLHOEAOE__FFHLPMINJII(__this,method_00);
  pSVar9 = (__this->fields).OFIPPHJGMNK;
  if ((pSVar9 != (System_Xml_XmlDocument_o *)0x0) &&
     (plVar10 = (long *)(*(pSVar9->klass->vtable)._51_get_Item.methodPtr)
                                  (pSVar9,StringLiteral_11416,
                                   (pSVar9->klass->vtable)._51_get_Item.method),
     plVar10 != (long *)0x0)) {
    JHMENEKPIBO = (System_Xml_XmlNode_o *)
                  (**(code **)(*plVar10 + 0x468))
                            (plVar10,StringLiteral_4954,*(undefined8 *)(*plVar10 + 0x470));
    pSVar9 = *ppSVar26;
    if ((pSVar9 != (System_Xml_XmlDocument_o *)0x0) &&
       (plVar10 = (long *)(*(pSVar9->klass->vtable)._51_get_Item.methodPtr)
                                    (pSVar9,StringLiteral_11416,
                                     (pSVar9->klass->vtable)._51_get_Item.method),
       plVar10 != (long *)0x0)) {
      plVar10 = (long *)(**(code **)(*plVar10 + 0x468))
                                  (plVar10,StringLiteral_14862,*(undefined8 *)(*plVar10 + 0x470));
      pSVar11 = EIABCPKDEBD__NHPDFFAIJMF(JHMENEKPIBO,StringLiteral_8340,(MethodInfo *)0x0);
      pMVar20 = (MethodInfo *)0x0;
      iVar7 = EIABCPKDEBD__EHJNCGCICMP(pSVar11,0,(MethodInfo *)0x0);
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
      }
      if (DAT_04566e5b == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04566e5b = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = NLPJLHOEAOE_TypeInfo;
      NLPJLHOEAOE_TypeInfo->static_fields->MNPJJPBJCCO = iVar7;
      if (DAT_0456647b == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_0456647b = '\x01';
        __this_00 = NLPJLHOEAOE_TypeInfo;
      }
      if ((__this_00->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        __this_00 = NLPJLHOEAOE_TypeInfo;
      }
      uVar1 = __this_00->static_fields->MNPJJPBJCCO;
      if (DAT_04566e5b == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04566e5b = '\x01';
        __this_00 = NLPJLHOEAOE_TypeInfo;
      }
      if ((__this_00->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        __this_00 = NLPJLHOEAOE_TypeInfo;
      }
      __this_00->static_fields->MNPJJPBJCCO = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
      bVar4 = NLPJLHOEAOE__BGCLIIHJPHJ((NLPJLHOEAOE_o *)__this_00,JHMENEKPIBO,pMVar20);
      pSVar9 = *ppSVar26;
      if (pSVar9 != (System_Xml_XmlDocument_o *)0x0) {
        pSVar12 = (System_Xml_XmlNode_o *)
                  (*(pSVar9->klass->vtable)._51_get_Item.methodPtr)
                            (pSVar9,StringLiteral_11416,(pSVar9->klass->vtable)._51_get_Item.method)
        ;
        pSVar12 = EIABCPKDEBD__DJGFHLMINNB(pSVar12,StringLiteral_6682,(MethodInfo *)0x0);
        pSVar11 = EIABCPKDEBD__DGJFLNGMBKG(pSVar12,StringLiteral_14694,(MethodInfo *)0x0);
        iVar7 = EIABCPKDEBD__EHJNCGCICMP(pSVar11,0,(MethodInfo *)0x0);
        pSVar9 = (__this->fields).OFIPPHJGMNK;
        (__this->fields).COBIPKHFIKK = iVar7 + 1;
        if ((((pSVar9 != (System_Xml_XmlDocument_o *)0x0) &&
             (plVar13 = (long *)(*(pSVar9->klass->vtable)._51_get_Item.methodPtr)
                                          (pSVar9,StringLiteral_11416,
                                           (pSVar9->klass->vtable)._51_get_Item.method),
             plVar13 != (long *)0x0)) &&
            (plVar13 = (long *)(**(code **)(*plVar13 + 0x468))
                                         (plVar13,StringLiteral_6682,
                                          *(undefined8 *)(*plVar13 + 0x470)), plVar13 != (long *)0x0
            )) && (pSVar14 = (System_Xml_XmlAttributeCollection_o *)
                             (**(code **)(*plVar13 + 0x238))
                                       (plVar13,*(undefined8 *)(*plVar13 + 0x240)),
                  pSVar14 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
          pSVar11 = System_Xml_XmlAttributeCollection__get_ItemOf
                              (pSVar14,StringLiteral_14694,(MethodInfo *)0x0);
          local_64 = (__this->fields).COBIPKHFIKK;
          pSVar8 = System_Int32__ToString((int32_t)&local_64,(MethodInfo *)0x0);
          if (pSVar11 != (System_Xml_XmlAttribute_o *)0x0) {
            (*(pSVar11->klass->vtable)._10_set_Value.methodPtr)
                      (pSVar11,pSVar8,(pSVar11->klass->vtable)._10_set_Value.method);
            ppSVar25 = &(__this->fields).FMOKFPGPAJE;
            *ppSVar25 = (System_Xml_XmlNode_o *)0x0;
            thunk_FUN_01c20e04(ppSVar25,0);
            if ((plVar10 != (long *)0x0) &&
               (plVar13 = (long *)(**(code **)(*plVar10 + 0x208))
                                            (plVar10,*(undefined8 *)(*plVar10 + 0x210)),
               plVar13 != (long *)0x0)) {
              plVar13 = (long *)(**(code **)(*plVar13 + 0x1b8))
                                          (plVar13,*(undefined8 *)(*plVar13 + 0x1c0));
              if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              do {
                do {
                  do {
                    lVar21 = *plVar13;
                    uVar23 = (ulong)*(ushort *)(lVar21 + 0x12e);
                    if (uVar23 != 0) {
                      piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                      do {
                        if (*(System_Collections_IEnumerator_c **)(piVar24 + -2) ==
                            System_Collections_IEnumerator_TypeInfo) {
                          puVar15 = (undefined8 *)(lVar21 + (long)*piVar24 * 0x10 + 0x138);
                          goto LAB_032ff498;
                        }
                        uVar23 = uVar23 - 1;
                        piVar24 = piVar24 + 4;
                      } while (uVar23 != 0);
                    }
                    puVar15 = (undefined8 *)
                              FUN_01b81914(plVar13,System_Collections_IEnumerator_TypeInfo,0);
LAB_032ff498:
                    uVar23 = (*(code *)*puVar15)(plVar13,puVar15[1]);
                    if ((uVar23 & 1) == 0) {
                      pSVar12 = (System_Xml_XmlNode_o *)0x0;
                      goto LAB_032ff6b0;
                    }
                    lVar21 = *plVar13;
                    uVar23 = (ulong)*(ushort *)(lVar21 + 0x12e);
                    if (uVar23 != 0) {
                      piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                      do {
                        if (*(System_Collections_IEnumerator_c **)(piVar24 + -2) ==
                            System_Collections_IEnumerator_TypeInfo) {
                          puVar15 = (undefined8 *)(lVar21 + (long)(*piVar24 + 1) * 0x10 + 0x138);
                          goto LAB_032ff4f8;
                        }
                        uVar23 = uVar23 - 1;
                        piVar24 = piVar24 + 4;
                      } while (uVar23 != 0);
                    }
                    puVar15 = (undefined8 *)
                              FUN_01b81914(plVar13,System_Collections_IEnumerator_TypeInfo,1);
LAB_032ff4f8:
                    pSVar12 = (System_Xml_XmlNode_o *)(*(code *)*puVar15)(plVar13,puVar15[1]);
                    if (pSVar12 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01bab8c8();
                    }
                    bVar3 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
                    if (((pSVar12->klass->_2).naturalAligment < bVar3) ||
                       ((pSVar12->klass->_2).typeHierarchy[(ulong)bVar3 - 1] !=
                        (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                      FUN_01babc64(pSVar12);
                    }
                    pSVar14 = (System_Xml_XmlAttributeCollection_o *)
                              (*(pSVar12->klass->vtable)._16_get_Attributes.methodPtr)
                                        (pSVar12,(pSVar12->klass->vtable)._16_get_Attributes.method)
                    ;
                    if (pSVar14 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01bab8c8();
                    }
                    pSVar11 = System_Xml_XmlAttributeCollection__get_ItemOf
                                        (pSVar14,StringLiteral_7961,(MethodInfo *)0x0);
                    pSVar8 = EIABCPKDEBD__JPKEHIBGOEM(pSVar11,StringLiteral_1,(MethodInfo *)0x0);
                    bVar5 = System_String__op_Equality(pSVar8,StringLiteral_13929,(MethodInfo *)0x0)
                    ;
                  } while (bVar5);
                  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                  if (DAT_0456647b == '\0') {
                    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    DAT_0456647b = '\x01';
                  }
                  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                  iVar2 = NLPJLHOEAOE_TypeInfo->static_fields->MNPJJPBJCCO;
                  pSVar14 = (System_Xml_XmlAttributeCollection_o *)
                            (*(pSVar12->klass->vtable)._16_get_Attributes.methodPtr)
                                      (pSVar12,(pSVar12->klass->vtable)._16_get_Attributes.method);
                  if (pSVar14 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  pSVar11 = System_Xml_XmlAttributeCollection__get_ItemOf
                                      (pSVar14,StringLiteral_11703,(MethodInfo *)0x0);
                  iVar7 = EIABCPKDEBD__EHJNCGCICMP(pSVar11,0,(MethodInfo *)0x0);
                } while (iVar2 != iVar7);
                pSVar14 = (System_Xml_XmlAttributeCollection_o *)
                          (*(pSVar12->klass->vtable)._16_get_Attributes.methodPtr)
                                    (pSVar12,(pSVar12->klass->vtable)._16_get_Attributes.method);
                if (pSVar14 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pSVar11 = System_Xml_XmlAttributeCollection__get_ItemOf
                                    (pSVar14,StringLiteral_7230,(MethodInfo *)0x0);
                pMVar20 = (MethodInfo *)0x0;
                iVar7 = EIABCPKDEBD__EHJNCGCICMP(pSVar11,0,(MethodInfo *)0x0);
              } while (iVar6 != iVar7);
              NLPJLHOEAOE__BIFFLMONEDB(__this,pSVar12,pMVar20);
              pSVar12 = (System_Xml_XmlNode_o *)
                        (*(pSVar12->klass->vtable)._51_get_Item.methodPtr)
                                  (pSVar12,StringLiteral_14866,
                                   (pSVar12->klass->vtable)._51_get_Item.method);
              if (pSVar12 == (System_Xml_XmlNode_o *)0x0) {
                pSVar12 = (System_Xml_XmlNode_o *)0x0;
              }
              else {
                pSVar12 = EIABCPKDEBD__NGKIMHJCLBJ(pSVar12,(MethodInfo *)0x0);
              }
LAB_032ff6b0:
              plVar13 = (long *)thunk_FUN_01bda71c(plVar13,System_IDisposable_TypeInfo);
              if (plVar13 != (long *)0x0) {
                lVar21 = *plVar13;
                uVar23 = (ulong)*(ushort *)(lVar21 + 0x12e);
                if (uVar23 != 0) {
                  piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                  do {
                    if (*(System_IDisposable_c **)(piVar24 + -2) == System_IDisposable_TypeInfo) {
                      puVar15 = (undefined8 *)(lVar21 + (long)*piVar24 * 0x10 + 0x138);
                      goto LAB_032ff710;
                    }
                    uVar23 = uVar23 - 1;
                    piVar24 = piVar24 + 4;
                  } while (uVar23 != 0);
                }
                puVar15 = (undefined8 *)FUN_01b81914(plVar13,System_IDisposable_TypeInfo,0);
LAB_032ff710:
                (*(code *)*puVar15)(plVar13,puVar15[1]);
              }
              if (*ppSVar25 == (System_Xml_XmlNode_o *)0x0) {
                if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                pSVar8 = MGENAMAJALB__GNOADHJNPCJ((MethodInfo *)0x0);
                pSVar9 = GIAMPEGMNHE__IBJOMPOLPCC
                                   (pSVar8,StringLiteral_21894,1,true,true,false,(MethodInfo *)0x0);
                if (pSVar9 == (System_Xml_XmlDocument_o *)0x0) goto LAB_032ff9c4;
                pSVar16 = (System_Xml_XmlNode_o *)
                          (*(pSVar9->klass->vtable)._51_get_Item.methodPtr)
                                    (pSVar9,StringLiteral_14859,
                                     (pSVar9->klass->vtable)._51_get_Item.method);
                pSVar11 = EIABCPKDEBD__NHPDFFAIJMF(pSVar16,StringLiteral_11703,(MethodInfo *)0x0);
                if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
                }
                if (DAT_0456647b == '\0') {
                  FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                  DAT_0456647b = '\x01';
                }
                if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                local_64 = NLPJLHOEAOE_TypeInfo->static_fields->MNPJJPBJCCO;
                pSVar8 = System_Int32__ToString((int32_t)&local_64,(MethodInfo *)0x0);
                if (pSVar11 == (System_Xml_XmlAttribute_o *)0x0) goto LAB_032ff9c4;
                (*(pSVar11->klass->vtable)._10_set_Value.methodPtr)
                          (pSVar11,pSVar8,(pSVar11->klass->vtable)._10_set_Value.method);
                plVar13 = (long *)(**(code **)(*plVar10 + 0x248))
                                            (plVar10,*(undefined8 *)(*plVar10 + 0x250));
                uVar17 = (*(pSVar9->klass->vtable)._19_get_LastChild.methodPtr)
                                   (pSVar9,(pSVar9->klass->vtable)._19_get_LastChild.method);
                if (plVar13 == (long *)0x0) goto LAB_032ff9c4;
                pSVar16 = (System_Xml_XmlNode_o *)
                          (**(code **)(*plVar13 + 0x628))
                                    (plVar13,uVar17,1,*(undefined8 *)(*plVar13 + 0x630));
                pMVar20 = *(MethodInfo **)(*plVar10 + 0x2f0);
                (**(code **)(*plVar10 + 0x2e8))(plVar10,pSVar16);
                NLPJLHOEAOE__BIFFLMONEDB(__this,pSVar16,pMVar20);
              }
              __this_01 = (FGKGKDEJCOG_o *)thunk_FUN_01bda818(FGKGKDEJCOG_TypeInfo);
              FGKGKDEJCOG___ctor(__this_01,JHMENEKPIBO,pSVar12,(MethodInfo *)0x0);
              if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              ppFVar18 = &NLPJLHOEAOE_TypeInfo->static_fields->EIHHKABBIMJ;
              *ppFVar18 = __this_01;
              thunk_FUN_01c20e04(ppFVar18,__this_01);
              if (DAT_04565b7d == '\0') {
                FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                DAT_04565b7d = '\x01';
              }
              if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              pAVar22 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
              if ((pAVar22 != (ACHLOMELAJE_o *)0x0) &&
                 (pPVar19 = (pAVar22->fields).MFLNIMCFPDK, pPVar19 != (PJKHAJKEHEL_o *)0x0)) {
                (*(pPVar19->klass->vtable)._7_LBNKPLKIIOP.methodPtr)
                          (pPVar19,(pPVar19->klass->vtable)._7_LBNKPLKIIOP.method);
                if (bVar4) {
                  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                  if (DAT_04565b7d == '\0') {
                    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    DAT_04565b7d = '\x01';
                  }
                  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                  pAVar22 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                  if (pAVar22 == (ACHLOMELAJE_o *)0x0) goto LAB_032ff9c4;
                  CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)pAVar22,false,(MethodInfo *)0x0);
                }
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_032ff9c4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

