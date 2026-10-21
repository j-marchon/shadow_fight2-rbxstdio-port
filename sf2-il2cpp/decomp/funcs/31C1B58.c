// ADJEBFOPFFF$$OLCPANFJOAA @ RVA 0x31C1B58

/* WARNING: Removing unreachable block (ram,0x032c2108) */
/* WARNING: Removing unreachable block (ram,0x032c2074) */

void ADJEBFOPFFF__OLCPANFJOAA
               (ADJEBFOPFFF_o *__this,IGFGDDANEPE_o *ENHJPOHLMCL,
               JMDPBFOCHHP_HJLEKMDIDPO_o *PCACCFOOGMK,HOOAAGABMBL_o *HFJDDNBBENI,int32_t EDEIFHGMBFA
               ,int32_t EBDDELGICGB,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  int32_t EBDDELGICGB_00;
  System_Xml_XmlDocument_o *__this_00;
  System_Xml_XmlNode_o *__this_01;
  System_Collections_IEnumerator_o *pSVar5;
  VirtualInvokeData *pVVar6;
  long *plVar7;
  System_Byte_array *pSVar8;
  System_Byte_array *pSVar9;
  System_String_o *pSVar10;
  System_Xml_XmlAttributeCollection_o *__this_02;
  System_Xml_XmlAttribute_o *pSVar11;
  System_String_o *b;
  ACHLOMELAJE_o *__this_03;
  DEKKGJNMFEB_o *__this_04;
  undefined8 *puVar12;
  System_Collections_IEnumerator_c *pSVar13;
  long lVar14;
  ulong uVar15;
  int32_t *piVar16;
  int *piVar17;
  int32_t local_64;
  
  if ((DAT_04566c17 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3948);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3949);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3950);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3951);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3952);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3953);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&DEKKGJNMFEB_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&System_Xml_XmlDocument_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_04566c17 = 1;
  }
  local_64 = 0;
  if (PCACCFOOGMK == (JMDPBFOCHHP_HJLEKMDIDPO_o *)0x0) goto LAB_032c2100;
  if ((PCACCFOOGMK->fields).JJFNABIIBBA != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlDocument_o *)thunk_FUN_01bda818(System_Xml_XmlDocument_TypeInfo);
    System_Xml_XmlDocument___ctor(__this_00,(MethodInfo *)0x0);
    __this_01 = EIABCPKDEBD__DGPOFACHGMP
                          ((System_Xml_XmlNode_o *)__this_00,(PCACCFOOGMK->fields).JJFNABIIBBA,
                           (MethodInfo *)0x0);
    if (__this_01 != (System_Xml_XmlNode_o *)0x0) {
      pSVar5 = System_Xml_XmlNode__GetEnumerator(__this_01,(MethodInfo *)0x0);
      if (pSVar5 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        pSVar13 = pSVar5->klass;
        uVar2._0_1_ = (pSVar13->_2).rank;
        uVar2._1_1_ = (pSVar13->_2).minimumAlignment;
        uVar15 = (ulong)uVar2;
        if (uVar15 != 0) {
          piVar16 = &((pSVar13->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar16 + -2))->interfaceType ==
                (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
              pVVar6 = pSVar13->vtable + *piVar16;
              goto LAB_032c1d10;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        pVVar6 = (VirtualInvokeData *)FUN_01b81914(pSVar5,System_Collections_IEnumerator_TypeInfo,0)
        ;
LAB_032c1d10:
        uVar15 = (*pVVar6->methodPtr)(pSVar5,pVVar6->method);
        if ((uVar15 & 1) == 0) {
          plVar7 = (long *)thunk_FUN_01bda71c(pSVar5,System_IDisposable_TypeInfo);
          if (plVar7 == (long *)0x0) goto LAB_032c2068;
          lVar14 = *plVar7;
          uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar15 == 0) goto LAB_032c2038;
          piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          goto LAB_032c2020;
        }
        pSVar13 = pSVar5->klass;
        uVar3._0_1_ = (pSVar13->_2).rank;
        uVar3._1_1_ = (pSVar13->_2).minimumAlignment;
        uVar15 = (ulong)uVar3;
        if (uVar15 != 0) {
          piVar16 = &((pSVar13->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar16 + -2))->interfaceType ==
                (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
              pVVar6 = pSVar13->vtable + (*piVar16 + 1);
              goto LAB_032c1d70;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        pVVar6 = (VirtualInvokeData *)FUN_01b81914(pSVar5,System_Collections_IEnumerator_TypeInfo,1)
        ;
LAB_032c1d70:
        plVar7 = (long *)(*pVVar6->methodPtr)(pSVar5,pVVar6->method);
        pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar8,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3948,
                   (MethodInfo *)0x0);
        pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar9,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3949,
                   (MethodInfo *)0x0);
        pSVar10 = OMHODMCHILE__NPKGDBHJKCK(pSVar8,pSVar9,(MethodInfo *)0x0);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        lVar14 = *plVar7;
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if ((*(byte *)(lVar14 + 0x130) < bVar1) ||
           (*(System_Xml_XmlNode_c **)(*(long *)(lVar14 + 200) + (ulong)bVar1 * 8 + -8) !=
            System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(plVar7);
        }
        plVar7 = (long *)(**(code **)(lVar14 + 0x468))
                                   (plVar7,pSVar10,*(undefined8 *)(lVar14 + 0x470));
        if (plVar7 != (long *)0x0) {
          __this_02 = (System_Xml_XmlAttributeCollection_o *)
                      (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240));
          pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar8,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3950,
                     (MethodInfo *)0x0);
          pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar9,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3951,
                     (MethodInfo *)0x0);
          pSVar10 = OMHODMCHILE__NPKGDBHJKCK(pSVar8,pSVar9,(MethodInfo *)0x0);
          if (__this_02 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar11 = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_02,pSVar10,(MethodInfo *)0x0);
          if (pSVar11 != (System_Xml_XmlAttribute_o *)0x0) {
            pSVar10 = (System_String_o *)
                      (*(pSVar11->klass->vtable)._9_get_Value.methodPtr)
                                (pSVar11,(pSVar11->klass->vtable)._9_get_Value.method);
            pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar8,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3952,
                       (MethodInfo *)0x0);
            pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar9,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3953,
                       (MethodInfo *)0x0);
            b = OMHODMCHILE__NPKGDBHJKCK(pSVar8,pSVar9,(MethodInfo *)0x0);
            bVar4 = System_String__op_Equality(pSVar10,b,(MethodInfo *)0x0);
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
              __this_03 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
              if (__this_03 == (ACHLOMELAJE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              EBDDELGICGB_00 = ACHLOMELAJE__EOEAKGGDBFH(__this_03,(MethodInfo *)0x0);
              if ((DEKKGJNMFEB_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              __this_04 = DEKKGJNMFEB__AIHNLLGNBLC((MethodInfo *)0x0);
              if (__this_04 == (DEKKGJNMFEB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              local_64 = DEKKGJNMFEB__HNBCOIJFCCA(__this_04,EBDDELGICGB_00,(MethodInfo *)0x0);
              pSVar10 = System_Int32__ToString((int32_t)&local_64,(MethodInfo *)0x0);
              (*(pSVar11->klass->vtable)._10_set_Value.methodPtr)
                        (pSVar11,pSVar10,(pSVar11->klass->vtable)._10_set_Value.method);
            }
          }
        }
      } while( true );
    }
    goto LAB_032c2100;
  }
  if (HFJDDNBBENI == (HOOAAGABMBL_o *)0x0) goto LAB_032c2100;
  goto LAB_032c20ac;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar17 = piVar17 + 4;
    if (uVar15 == 0) break;
LAB_032c2020:
    if (*(System_IDisposable_c **)(piVar17 + -2) == System_IDisposable_TypeInfo) {
      puVar12 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_032c205c;
    }
  }
LAB_032c2038:
  puVar12 = (undefined8 *)FUN_01b81914(plVar7,System_IDisposable_TypeInfo,0);
LAB_032c205c:
  (*(code *)*puVar12)(plVar7,puVar12[1]);
LAB_032c2068:
  if (HFJDDNBBENI == (HOOAAGABMBL_o *)0x0) goto LAB_032c2100;
  HOOAAGABMBL__EOAMPKBBJPL(HFJDDNBBENI,__this_01,(MethodInfo *)0x0);
  HOOAAGABMBL__LOPGLHCEBDF(HFJDDNBBENI,__this_01,(MethodInfo *)0x0);
LAB_032c20ac:
  if (ENHJPOHLMCL != (IGFGDDANEPE_o *)0x0) {
    IGFGDDANEPE__JJPJJDHOFLE
              (ENHJPOHLMCL,(HFJDDNBBENI->fields)._LCJBEIKDDNA_k__BackingField,EDEIFHGMBFA,
               EBDDELGICGB,(MethodInfo *)0x0);
    return;
  }
LAB_032c2100:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

