// NHBBOEHHEKG$$DAHBGDAKELO @ RVA 0x3057784

/* WARNING: Removing unreachable block (ram,0x03157eb0) */
/* WARNING: Removing unreachable block (ram,0x03157fdc) */

void NHBBOEHHEKG__DAHBGDAKELO
               (NHBBOEHHEKG_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,int32_t NGPAOPCDOLF,
               MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  int32_t iVar4;
  System_Xml_XmlAttributeCollection_o *pSVar5;
  System_Xml_XmlAttribute_o *pSVar6;
  MEHKKHFBNLM_o *__this_00;
  NHBBOEHHEKG_o *__this_01;
  System_String_o *OOKEKJMFKPE;
  System_String_o *pSVar7;
  long *plVar8;
  undefined8 *puVar9;
  System_Xml_XmlNode_o *AHDGNOJPPIB_00;
  System_Collections_Generic_List_MEHKKHFBNLM__o *__this_02;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *in_x4;
  long lVar10;
  MEHKKHFBNLM_array *pMVar11;
  ulong uVar12;
  int *piVar13;
  MEHKKHFBNLM_o **ppMVar14;
  CNDPAJOLKFN_o *pCVar15;
  float fVar16;
  float fVar17;
  
  if ((DAT_04565e71 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MEHKKHFBNLM>_Add__);
    FUN_01bab630(&MEHKKHFBNLM_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_12140);
    FUN_01bab630(&StringLiteral_12314);
    FUN_01bab630(&StringLiteral_10324);
    FUN_01bab630(&StringLiteral_10323);
    FUN_01bab630(&StringLiteral_6197);
    FUN_01bab630(&StringLiteral_3149);
    FUN_01bab630(&StringLiteral_9178);
    FUN_01bab630(&StringLiteral_9414);
    FUN_01bab630(&StringLiteral_10157);
    FUN_01bab630(&StringLiteral_11718);
    FUN_01bab630(&StringLiteral_13991);
    FUN_01bab630(&StringLiteral_5763);
    FUN_01bab630(&StringLiteral_8592);
    FUN_01bab630(&StringLiteral_5764);
    FUN_01bab630(&StringLiteral_7340);
    FUN_01bab630(&StringLiteral_10168);
    FUN_01bab630(&StringLiteral_4962);
    DAT_04565e71 = 1;
  }
  if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
     (pSVar5 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method),
     pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar5,StringLiteral_11718,(MethodInfo *)0x0);
    iVar4 = EIABCPKDEBD__EHJNCGCICMP(pSVar6,0,(MethodInfo *)0x0);
    __this_00 = (MEHKKHFBNLM_o *)thunk_FUN_01bda818(MEHKKHFBNLM_TypeInfo);
    MEHKKHFBNLM___ctor(__this_00,NGPAOPCDOLF,(MethodInfo *)0x0);
    pSVar5 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar5,StringLiteral_10168,(MethodInfo *)0x0);
      if (pSVar6 == (System_Xml_XmlAttribute_o *)0x0) {
        OOKEKJMFKPE = NHBBOEHHEKG__HLAPKOIPADD(__this,method_00);
      }
      else {
        pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar5 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03157fd4;
        pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar5,StringLiteral_10168,(MethodInfo *)0x0);
        method_01 = (MethodInfo *)0x0;
        __this_01 = (NHBBOEHHEKG_o *)
                    EIABCPKDEBD__JPKEHIBGOEM(pSVar6,(System_String_o *)0x0,(MethodInfo *)0x0);
        OOKEKJMFKPE = NHBBOEHHEKG__NKJDKKCJIEM(__this_01,(System_String_o *)__this_01,method_01);
      }
      if (__this_00 != (MEHKKHFBNLM_o *)0x0) {
        (__this_00->fields).FODLFBLPPBF = 0 < iVar4;
        pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar5,StringLiteral_13991,(MethodInfo *)0x0);
          iVar4 = EIABCPKDEBD__EHJNCGCICMP(pSVar6,0,(MethodInfo *)0x0);
          (__this_00->fields).BGHFADDGPAD = iVar4;
          pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar5,StringLiteral_6197,(MethodInfo *)0x0);
            fVar16 = EIABCPKDEBD__GICIEKCGOHA(pSVar6,0.0,(MethodInfo *)0x0);
            (__this_00->fields).JHLJELAKADM = fVar16;
            pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                     (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                               (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
            if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar5,StringLiteral_3149,(MethodInfo *)0x0);
              pSVar7 = EIABCPKDEBD__JPKEHIBGOEM(pSVar6,(System_String_o *)0x0,(MethodInfo *)0x0);
              (__this_00->fields).KBOFABJIPPD = pSVar7;
              thunk_FUN_01c20e04();
              plVar8 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                                         (AHDGNOJPPIB,
                                          (AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method);
              if (plVar8 != (long *)0x0) {
                plVar8 = (long *)(**(code **)(*plVar8 + 0x1b8))
                                           (plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
                if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                do {
                  lVar10 = *plVar8;
                  uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
                  if (uVar12 != 0) {
                    piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                    do {
                      if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                          System_Collections_IEnumerator_TypeInfo) {
                        puVar9 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
                        goto LAB_03157b28;
                      }
                      uVar12 = uVar12 - 1;
                      piVar13 = piVar13 + 4;
                    } while (uVar12 != 0);
                  }
                  puVar9 = (undefined8 *)
                           FUN_01b81914(plVar8,System_Collections_IEnumerator_TypeInfo,0);
LAB_03157b28:
                  uVar12 = (*(code *)*puVar9)(plVar8,puVar9[1]);
                  if ((uVar12 & 1) == 0) {
                    plVar8 = (long *)thunk_FUN_01bda71c(plVar8,System_IDisposable_TypeInfo);
                    if (plVar8 == (long *)0x0) goto LAB_03157ea4;
                    lVar10 = *plVar8;
                    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
                    if (uVar12 == 0) goto LAB_03157e7c;
                    piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                    goto LAB_03157e64;
                  }
                  lVar10 = *plVar8;
                  uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
                  if (uVar12 != 0) {
                    piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                    do {
                      if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                          System_Collections_IEnumerator_TypeInfo) {
                        puVar9 = (undefined8 *)(lVar10 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                        goto LAB_03157b88;
                      }
                      uVar12 = uVar12 - 1;
                      piVar13 = piVar13 + 4;
                    } while (uVar12 != 0);
                  }
                  puVar9 = (undefined8 *)
                           FUN_01b81914(plVar8,System_Collections_IEnumerator_TypeInfo,1);
LAB_03157b88:
                  AHDGNOJPPIB_00 = (System_Xml_XmlNode_o *)(*(code *)*puVar9)(plVar8,puVar9[1]);
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
                  pSVar7 = (System_String_o *)
                           (*(AHDGNOJPPIB_00->klass->vtable)._8_unknown.methodPtr)
                                     (AHDGNOJPPIB_00,
                                      (AHDGNOJPPIB_00->klass->vtable)._8_unknown.method);
                  bVar3 = System_String__op_Equality(pSVar7,StringLiteral_9178,(MethodInfo *)0x0);
                  if (bVar3) {
                    pCVar15 = (__this->fields).IFNNNFMACDH;
                    pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                             (*(AHDGNOJPPIB_00->klass->vtable)._16_get_Attributes.methodPtr)
                                       (AHDGNOJPPIB_00,
                                        (AHDGNOJPPIB_00->klass->vtable)._16_get_Attributes.method);
                    if (pSVar5 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01bab8c8();
                    }
                    pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                       (pSVar5,StringLiteral_10323,(MethodInfo *)0x0);
                    fVar16 = EIABCPKDEBD__GICIEKCGOHA(pSVar6,0.0,(MethodInfo *)0x0);
                    pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                             (*(AHDGNOJPPIB_00->klass->vtable)._16_get_Attributes.methodPtr)
                                       (AHDGNOJPPIB_00,
                                        (AHDGNOJPPIB_00->klass->vtable)._16_get_Attributes.method);
                    if (pSVar5 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01bab8c8();
                    }
                    pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                       (pSVar5,StringLiteral_10324,(MethodInfo *)0x0);
                    fVar17 = EIABCPKDEBD__GICIEKCGOHA(pSVar6,0.0,(MethodInfo *)0x0);
                    if (pCVar15 == (CNDPAJOLKFN_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01bab8c8();
                    }
                    CNDPAJOLKFN__FOOHBJNHOKK(pCVar15,fVar16,fVar17,0.0,(MethodInfo *)0x0);
                    pCVar15 = (__this->fields).OGNCBOHIMFJ;
                    pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                             (*(AHDGNOJPPIB_00->klass->vtable)._16_get_Attributes.methodPtr)
                                       (AHDGNOJPPIB_00,
                                        (AHDGNOJPPIB_00->klass->vtable)._16_get_Attributes.method);
                    if (pSVar5 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01bab8c8();
                    }
                    pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                       (pSVar5,StringLiteral_5763,(MethodInfo *)0x0);
                    fVar16 = EIABCPKDEBD__GICIEKCGOHA(pSVar6,0.0,(MethodInfo *)0x0);
                    pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                             (*(AHDGNOJPPIB_00->klass->vtable)._16_get_Attributes.methodPtr)
                                       (AHDGNOJPPIB_00,
                                        (AHDGNOJPPIB_00->klass->vtable)._16_get_Attributes.method);
                    if (pSVar5 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01bab8c8();
                    }
                    pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                       (pSVar5,StringLiteral_5764,(MethodInfo *)0x0);
                    fVar17 = EIABCPKDEBD__GICIEKCGOHA(pSVar6,0.0,(MethodInfo *)0x0);
                    if (pCVar15 == (CNDPAJOLKFN_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01bab8c8();
                    }
                    CNDPAJOLKFN__FOOHBJNHOKK(pCVar15,fVar16,fVar17,0.0,(MethodInfo *)0x0);
                  }
                  else {
                    bVar3 = System_String__op_Equality(pSVar7,StringLiteral_10157,(MethodInfo *)0x0)
                    ;
                    if (bVar3) {
                      NHBBOEHHEKG__EPNFJNCPIFC
                                ((NHBBOEHHEKG_o *)(ulong)bVar3,AHDGNOJPPIB_00,__this_00,0,in_x4);
                    }
                    else {
                      bVar3 = System_String__op_Equality
                                        (pSVar7,StringLiteral_9414,(MethodInfo *)0x0);
                      if (bVar3) {
                        NHBBOEHHEKG__EPNFJNCPIFC
                                  ((NHBBOEHHEKG_o *)(ulong)bVar3,AHDGNOJPPIB_00,__this_00,1,in_x4);
                      }
                      else {
                        bVar3 = System_String__op_Equality
                                          (pSVar7,StringLiteral_7340,(MethodInfo *)0x0);
                        if (bVar3) {
                          NHBBOEHHEKG__BHAOABOGFHK
                                    ((NHBBOEHHEKG_o *)(ulong)bVar3,AHDGNOJPPIB_00,OOKEKJMFKPE,
                                     __this_00,in_x4);
                        }
                        else {
                          bVar3 = System_String__op_Equality
                                            (pSVar7,StringLiteral_12314,(MethodInfo *)0x0);
                          if (bVar3) {
                            NHBBOEHHEKG__NFIOHOMJIJC
                                      ((NHBBOEHHEKG_o *)(ulong)bVar3,AHDGNOJPPIB_00,OOKEKJMFKPE,
                                       __this_00,in_x4);
                          }
                          else {
                            bVar3 = System_String__op_Equality
                                              (pSVar7,StringLiteral_12140,(MethodInfo *)0x0);
                            if (bVar3) {
                              NHBBOEHHEKG__IPDANBHLKLG
                                        (__this,AHDGNOJPPIB_00,OOKEKJMFKPE,__this_00,in_x4);
                            }
                            else {
                              bVar3 = System_String__op_Equality
                                                (pSVar7,StringLiteral_4962,(MethodInfo *)0x0);
                              if (bVar3) {
                                NHBBOEHHEKG__NCMFIAFIKNA
                                          (__this,AHDGNOJPPIB_00,OOKEKJMFKPE,__this_00,in_x4);
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                } while( true );
              }
            }
          }
        }
      }
    }
  }
  goto LAB_03157fd4;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_03157e64:
    if (*(System_IDisposable_c **)(piVar13 + -2) == System_IDisposable_TypeInfo) {
      puVar9 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_03157e98;
    }
  }
LAB_03157e7c:
  puVar9 = (undefined8 *)FUN_01b81914(plVar8,System_IDisposable_TypeInfo,0);
LAB_03157e98:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
LAB_03157ea4:
  lVar10 = Method_System_Collections_Generic_List<MEHKKHFBNLM>_Add__;
  __this_02 = (__this->fields).JDLKPFCELNF;
  if (__this_02 != (System_Collections_Generic_List_MEHKKHFBNLM__o *)0x0) {
    pMVar11 = (__this_02->fields)._items;
    (__this_02->fields)._version = (__this_02->fields)._version + 1;
    if (pMVar11 != (MEHKKHFBNLM_array *)0x0) {
      uVar2 = (__this_02->fields)._size;
      if (uVar2 < (uint)pMVar11->max_length) {
        (__this_02->fields)._size = uVar2 + 1;
        pMVar11->m_Items[(int)uVar2] = __this_00;
        thunk_FUN_01c20e04(pMVar11->m_Items + (int)uVar2,__this_00);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_02,(Il2CppObject *)__this_00,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
      }
      bVar3 = MEHKKHFBNLM__BFBBBJOMGJA(__this_00,(MethodInfo *)0x0);
      if (bVar3) {
        ppMVar14 = &(__this->fields).CLFNHGGJHCA;
        if (*ppMVar14 != (MEHKKHFBNLM_o *)0x0) {
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogError(StringLiteral_8592,(MethodInfo *)0x0);
        }
        *ppMVar14 = __this_00;
        thunk_FUN_01c20e04(ppMVar14,__this_00);
        return;
      }
      return;
    }
  }
LAB_03157fd4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

