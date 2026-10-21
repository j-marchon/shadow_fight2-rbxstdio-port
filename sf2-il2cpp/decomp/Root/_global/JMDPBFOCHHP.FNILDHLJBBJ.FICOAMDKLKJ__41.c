// TypeDefIndex 41
// Namespace: 
// public class JMDPBFOCHHP.FNILDHLJBBJ.FICOAMDKLKJ
// Fields:
//   public float EOLDGEJPLJK; // 0x10
//   public float FABIFPKFPCK; // 0x14
//   public string CHDOCDMAJPI; // 0x18
//   public JMDPBFOCHHP.FNILDHLJBBJ.ONIINJPBENK MOIGDPBNMNI; // 0x20
//   public string JFDGLPNMELO; // 0x28
//   public bool MBCNFGBPLEP; // 0x30
//   public readonly List<JMDPBFOCHHP.FNILDHLJBBJ.FICOAMDKLKJ> BAPMMGFEIDM; // 0x38
//   public readonly List<DDMHMABAHHD> GFBNJPMOEKD; // 0x40

// ===== public void .ctor(XmlNode CJLCPHBNHFK)  [RVA 0x2FFA480]
// JMDPBFOCHHP.FNILDHLJBBJ.FICOAMDKLKJ$$.ctor @ RVA 0x2FFA480

/* WARNING: Removing unreachable block (ram,0x030faaf0) */

void JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ___ctor
               (JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ_o *__this,System_Xml_XmlNode_o *CJLCPHBNHFK,
               MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  bool bVar5;
  int32_t iVar6;
  System_Collections_Generic_List_JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ__o *pSVar7;
  System_Collections_Generic_List_DDMHMABAHHD__o *pSVar8;
  System_Xml_XmlAttributeCollection_o *pSVar9;
  System_Xml_XmlAttribute_o *pSVar10;
  System_String_o *pSVar11;
  System_String_o *__this_00;
  System_Collections_IEnumerator_o *pSVar12;
  VirtualInvokeData *pVVar13;
  System_Xml_XmlNode_o *PPOGPLAOHGI;
  JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ_o *__this_01;
  DDMHMABAHHD_o *__this_02;
  long *plVar14;
  undefined8 *puVar15;
  MethodInfo *method_00;
  System_Collections_IEnumerator_c *pSVar16;
  JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ_array *pJVar17;
  DDMHMABAHHD_array *pDVar18;
  long lVar19;
  ulong uVar20;
  int32_t *piVar21;
  int *piVar22;
  System_Collections_Generic_List_JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ__o **ppSVar23;
  System_Collections_Generic_List_DDMHMABAHHD__o **ppSVar24;
  float fVar25;
  
  if ((DAT_04565ac9 & 1) == 0) {
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
    FUN_01bab630(&System_Collections_Generic_List<DDMHMABAHHD>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_TypeInfo);
    FUN_01bab630(&Method_PCOEHCPGBBG_AICKIDLLIBK<JMDPBFOCHHP_FNILDHLJBBJ_ONIINJPBENK>__);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_7923/*"IsBatchLotteryFocus"*/);
    FUN_01bab630(&StringLiteral_4622/*"Container"*/);
    FUN_01bab630(&StringLiteral_3695/*"CName"*/);
    FUN_01bab630(&StringLiteral_13991/*"Type"*/);
    FUN_01bab630(&StringLiteral_14891/*"Weight"*/);
    FUN_01bab630(&StringLiteral_10477/*"Probability"*/);
    DAT_04565ac9 = 1;
  }
  pSVar7 = (System_Collections_Generic_List_JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ__o *)
           thunk_FUN_01bda818(
                             System_Collections_Generic_List<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_TypeInfo
                             );
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar7,
             Method_System_Collections_Generic_List<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>__ctor__);
  ppSVar23 = &(__this->fields).BAPMMGFEIDM;
  *ppSVar23 = pSVar7;
  thunk_FUN_01c20e04(ppSVar23,pSVar7);
  pSVar8 = (System_Collections_Generic_List_DDMHMABAHHD__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<DDMHMABAHHD>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar8,
             Method_System_Collections_Generic_List<DDMHMABAHHD>__ctor__);
  ppSVar24 = &(__this->fields).GFBNJPMOEKD;
  *ppSVar24 = pSVar8;
  thunk_FUN_01c20e04(ppSVar24,pSVar8);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if ((CJLCPHBNHFK != (System_Xml_XmlNode_o *)0x0) &&
     (pSVar9 = (System_Xml_XmlAttributeCollection_o *)
               (*(CJLCPHBNHFK->klass->vtable)._16_get_Attributes.methodPtr)
                         (CJLCPHBNHFK,(CJLCPHBNHFK->klass->vtable)._16_get_Attributes.method),
     pSVar9 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                        (pSVar9,StringLiteral_13991/*"Type"*/,(MethodInfo *)0x0);
    pSVar11 = EIABCPKDEBD__JPKEHIBGOEM
                        (pSVar10,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
    (__this->fields).CHDOCDMAJPI = pSVar11;
    thunk_FUN_01c20e04();
    pSVar9 = (System_Xml_XmlAttributeCollection_o *)
             (*(CJLCPHBNHFK->klass->vtable)._16_get_Attributes.methodPtr)
                       (CJLCPHBNHFK,(CJLCPHBNHFK->klass->vtable)._16_get_Attributes.method);
    if (pSVar9 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                          (pSVar9,StringLiteral_3695/*"CName"*/,(MethodInfo *)0x0);
      pSVar11 = EIABCPKDEBD__JPKEHIBGOEM
                          (pSVar10,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
      (__this->fields).JFDGLPNMELO = pSVar11;
      thunk_FUN_01c20e04();
      pSVar9 = (System_Xml_XmlAttributeCollection_o *)
               (*(CJLCPHBNHFK->klass->vtable)._16_get_Attributes.methodPtr)
                         (CJLCPHBNHFK,(CJLCPHBNHFK->klass->vtable)._16_get_Attributes.method);
      if (pSVar9 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                            (pSVar9,StringLiteral_7923/*"IsBatchLotteryFocus"*/,(MethodInfo *)0x0);
        bVar5 = EIABCPKDEBD__FMBMNDIGLIG(pSVar10,false,(MethodInfo *)0x0);
        (__this->fields).MBCNFGBPLEP = bVar5;
        pSVar11 = (System_String_o *)
                  (*(CJLCPHBNHFK->klass->vtable)._8_unknown.methodPtr)
                            (CJLCPHBNHFK,(CJLCPHBNHFK->klass->vtable)._8_unknown.method);
        __this_00 = (System_String_o *)
                    (*(CJLCPHBNHFK->klass->vtable)._8_unknown.methodPtr)
                              (CJLCPHBNHFK,(CJLCPHBNHFK->klass->vtable)._8_unknown.method);
        if ((__this_00 != (System_String_o *)0x0) &&
           (iVar6 = System_String__IndexOf(__this_00,StringLiteral_4622/*"Container"*/,(MethodInfo *)0x0),
           pSVar11 != (System_String_o *)0x0)) {
          pSVar11 = System_String__Remove(pSVar11,iVar6,(MethodInfo *)0x0);
          iVar6 = PCOEHCPGBBG__AICKIDLLIBK<Int32Enum>
                            (pSVar11,0,
                             Method_PCOEHCPGBBG_AICKIDLLIBK<JMDPBFOCHHP_FNILDHLJBBJ_ONIINJPBENK>__);
          (__this->fields).MOIGDPBNMNI = iVar6;
          pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                   (*(CJLCPHBNHFK->klass->vtable)._16_get_Attributes.methodPtr)
                             (CJLCPHBNHFK,(CJLCPHBNHFK->klass->vtable)._16_get_Attributes.method);
          if (pSVar9 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                                (pSVar9,StringLiteral_14891/*"Weight"*/,(MethodInfo *)0x0);
            fVar25 = EIABCPKDEBD__GICIEKCGOHA(pSVar10,1.0,(MethodInfo *)0x0);
            (__this->fields).EOLDGEJPLJK = fVar25;
            pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                     (*(CJLCPHBNHFK->klass->vtable)._16_get_Attributes.methodPtr)
                               (CJLCPHBNHFK,(CJLCPHBNHFK->klass->vtable)._16_get_Attributes.method);
            if (pSVar9 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                                  (pSVar9,StringLiteral_10477/*"Probability"*/,(MethodInfo *)0x0);
              fVar25 = EIABCPKDEBD__GICIEKCGOHA(pSVar10,1.0,(MethodInfo *)0x0);
              (__this->fields).FABIFPKFPCK = fVar25;
              pSVar12 = System_Xml_XmlNode__GetEnumerator(CJLCPHBNHFK,(MethodInfo *)0x0);
              if (pSVar12 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              do {
                pSVar16 = pSVar12->klass;
                uVar2._0_1_ = (pSVar16->_2).rank;
                uVar2._1_1_ = (pSVar16->_2).minimumAlignment;
                uVar20 = (ulong)uVar2;
                if (uVar20 != 0) {
                  piVar21 = &((pSVar16->_1).interfaceOffsets)->offset;
                  do {
                    if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar21 + -2))->interfaceType ==
                        (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
                      pVVar13 = pSVar16->vtable + *piVar21;
                      goto LAB_030fa860;
                    }
                    uVar20 = uVar20 - 1;
                    piVar21 = piVar21 + 4;
                  } while (uVar20 != 0);
                }
                pVVar13 = (VirtualInvokeData *)
                          FUN_01b81914(pSVar12,System_Collections_IEnumerator_TypeInfo,0);
LAB_030fa860:
                uVar20 = (*pVVar13->methodPtr)(pSVar12,pVVar13->method);
                if ((uVar20 & 1) == 0) {
                  plVar14 = (long *)thunk_FUN_01bda71c(pSVar12,System_IDisposable_TypeInfo);
                  if (plVar14 == (long *)0x0) {
                    return;
                  }
                  lVar19 = *plVar14;
                  uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
                  if (uVar20 == 0) goto LAB_030faa80;
                  piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                  goto LAB_030faa68;
                }
                pSVar16 = pSVar12->klass;
                uVar3._0_1_ = (pSVar16->_2).rank;
                uVar3._1_1_ = (pSVar16->_2).minimumAlignment;
                uVar20 = (ulong)uVar3;
                if (uVar20 != 0) {
                  piVar21 = &((pSVar16->_1).interfaceOffsets)->offset;
                  do {
                    if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar21 + -2))->interfaceType ==
                        (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
                      pVVar13 = pSVar16->vtable + (*piVar21 + 1);
                      goto LAB_030fa8c0;
                    }
                    uVar20 = uVar20 - 1;
                    piVar21 = piVar21 + 4;
                  } while (uVar20 != 0);
                }
                pVVar13 = (VirtualInvokeData *)
                          FUN_01b81914(pSVar12,System_Collections_IEnumerator_TypeInfo,1);
LAB_030fa8c0:
                PPOGPLAOHGI = (System_Xml_XmlNode_o *)(*pVVar13->methodPtr)(pSVar12,pVVar13->method)
                ;
                if (PPOGPLAOHGI == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
                if (((PPOGPLAOHGI->klass->_2).naturalAligment < bVar1) ||
                   ((PPOGPLAOHGI->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                    (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                  FUN_01babc64(PPOGPLAOHGI);
                }
                pSVar11 = (System_String_o *)
                          (*(PPOGPLAOHGI->klass->vtable)._8_unknown.methodPtr)
                                    (PPOGPLAOHGI,(PPOGPLAOHGI->klass->vtable)._8_unknown.method);
                if (pSVar11 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                method_00 = (MethodInfo *)0x0;
                bVar5 = System_String__Contains(pSVar11,StringLiteral_4622/*"Container"*/,(MethodInfo *)0x0);
                if (bVar5) {
                  pSVar7 = *ppSVar23;
                  __this_01 = (JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ_o *)
                              thunk_FUN_01bda818(JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ_TypeInfo);
                  JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ___ctor(__this_01,PPOGPLAOHGI,method_00);
                  lVar19 = 
                  Method_System_Collections_Generic_List<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_Add__;
                  if (pSVar7 == (System_Collections_Generic_List_JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ__o
                                 *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  pJVar17 = (pSVar7->fields)._items;
                  (pSVar7->fields)._version = (pSVar7->fields)._version + 1;
                  if (pJVar17 == (JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  uVar4 = (pSVar7->fields)._size;
                  if (uVar4 < (uint)pJVar17->max_length) {
                    (pSVar7->fields)._size = uVar4 + 1;
                    pJVar17->m_Items[(int)uVar4] = __this_01;
                    thunk_FUN_01c20e04(pJVar17->m_Items + (int)uVar4,__this_01);
                  }
                  else {
                    System_Collections_Generic_List<object>__AddWithResize
                              ((System_Collections_Generic_List_object__o *)pSVar7,
                               (Il2CppObject *)__this_01,
                               *(MethodInfo_26E4DAC **)
                                (*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
                  }
                }
                else {
                  pSVar8 = *ppSVar24;
                  __this_02 = (DDMHMABAHHD_o *)thunk_FUN_01bda818(DDMHMABAHHD_TypeInfo);
                  DDMHMABAHHD___ctor(__this_02,PPOGPLAOHGI,(MethodInfo *)0x0);
                  lVar19 = Method_System_Collections_Generic_List<DDMHMABAHHD>_Add__;
                  if (pSVar8 == (System_Collections_Generic_List_DDMHMABAHHD__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  pDVar18 = (pSVar8->fields)._items;
                  (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
                  if (pDVar18 == (DDMHMABAHHD_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  uVar4 = (pSVar8->fields)._size;
                  if (uVar4 < (uint)pDVar18->max_length) {
                    (pSVar8->fields)._size = uVar4 + 1;
                    pDVar18->m_Items[(int)uVar4] = __this_02;
                    thunk_FUN_01c20e04(pDVar18->m_Items + (int)uVar4,__this_02);
                  }
                  else {
                    System_Collections_Generic_List<object>__AddWithResize
                              ((System_Collections_Generic_List_object__o *)pSVar8,
                               (Il2CppObject *)__this_02,
                               *(MethodInfo_26E4DAC **)
                                (*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
                  }
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
    uVar20 = uVar20 - 1;
    piVar22 = piVar22 + 4;
    if (uVar20 == 0) break;
LAB_030faa68:
    if (*(System_IDisposable_c **)(piVar22 + -2) == System_IDisposable_TypeInfo) {
      puVar15 = (undefined8 *)(lVar19 + (long)*piVar22 * 0x10 + 0x138);
      goto LAB_030faa9c;
    }
  }
LAB_030faa80:
  puVar15 = (undefined8 *)FUN_01b81914(plVar14,System_IDisposable_TypeInfo,0);
LAB_030faa9c:
  (*(code *)*puVar15)(plVar14,puVar15[1]);
  return;
}

