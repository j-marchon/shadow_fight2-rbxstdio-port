// PFOMHOLCODE$$ICFBFBMGPGC @ RVA 0x3350F98

/* WARNING: Removing unreachable block (ram,0x03451af4) */
/* WARNING: Removing unreachable block (ram,0x03451850) */
/* WARNING: Removing unreachable block (ram,0x03451c20) */
/* WARNING: Removing unreachable block (ram,0x03451c14) */

void PFOMHOLCODE__ICFBFBMGPGC
               (PFOMHOLCODE_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  LBMOOFGGPEB_o **ppLVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  System_Action_c *pSVar5;
  bool bVar6;
  int32_t iVar7;
  System_String_o *pSVar8;
  NBLEEDEAPHB_o *__this_00;
  System_Xml_XmlAttributeCollection_o *pSVar9;
  System_Xml_XmlAttribute_o *pSVar10;
  System_String_o *pSVar11;
  long *plVar12;
  undefined8 *puVar13;
  System_Xml_XmlNode_o *pSVar14;
  LBMOOFGGPEB_o *pLVar15;
  PFOMHOLCODE_JLFFOOCNIIO_o *__this_01;
  System_Delegate_o *b;
  BOFEMGGNODC_o *CPECAEHDDDB;
  System_Collections_Generic_List_PFOMHOLCODE_JLFFOOCNIIO__o *__this_02;
  System_Collections_Generic_List_NBLEEDEAPHB__o *__this_03;
  MethodInfo *method_00;
  long lVar16;
  PFOMHOLCODE_JLFFOOCNIIO_array *pPVar17;
  NBLEEDEAPHB_array *pNVar18;
  ulong uVar19;
  int *piVar20;
  System_String_o **ppSVar21;
  System_String_o **ppSVar22;
  LCKCDEKNLOA_o *pLVar23;
  System_Action_o **ppSVar24;
  System_Action_o *pSVar25;
  float fVar26;
  undefined1 auVar27 [16];
  UnityEngine_Color_Fields local_70;
  
  if ((DAT_04567a1a & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&PFOMHOLCODE_JLFFOOCNIIO_TypeInfo);
    FUN_01bab630(&KKCBGIBKOCP_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PFOMHOLCODE_JLFFOOCNIIO>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>_Add__);
    FUN_01bab630(&NBLEEDEAPHB_TypeInfo);
    FUN_01bab630(&Method_PFOMHOLCODE_NDJAJHFFPKP__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_12889);
    FUN_01bab630(&StringLiteral_3613);
    FUN_01bab630(&StringLiteral_9818);
    FUN_01bab630(&StringLiteral_644);
    FUN_01bab630(&StringLiteral_13814);
    FUN_01bab630(&StringLiteral_12880);
    FUN_01bab630(&StringLiteral_8094);
    FUN_01bab630(&StringLiteral_6525);
    FUN_01bab630(&StringLiteral_4316);
    FUN_01bab630(&StringLiteral_10460);
    FUN_01bab630(&StringLiteral_3619);
    FUN_01bab630(&StringLiteral_1603);
    FUN_01bab630(&StringLiteral_5701);
    FUN_01bab630(&StringLiteral_8459);
    FUN_01bab630(&StringLiteral_3618);
    FUN_01bab630(&StringLiteral_9817);
    FUN_01bab630(&StringLiteral_6523);
    FUN_01bab630(&StringLiteral_8095);
    FUN_01bab630(&StringLiteral_7092);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_1567);
    DAT_04567a1a = 1;
  }
  local_70.r = 0.0;
  local_70.g = 0.0;
  local_70.b = 0.0;
  local_70.a = 0.0;
  if (NPLGCIFGFOK == (System_Xml_XmlNode_o *)0x0) goto LAB_03451c04;
  pSVar8 = (System_String_o *)
           (*(NPLGCIFGFOK->klass->vtable)._8_unknown.methodPtr)
                     (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._8_unknown.method);
  __this_00 = (NBLEEDEAPHB_o *)thunk_FUN_01bda818(NBLEEDEAPHB_TypeInfo);
  NBLEEDEAPHB___ctor(__this_00,StringLiteral_1,StringLiteral_1,StringLiteral_1,StringLiteral_1,0,-1,
                     (IGFGDDANEPE_o *)0x0,(LBMOOFGGPEB_o *)0x0,0,(AMJMGFCCAKN_o *)0x0,
                     (MethodInfo *)0x0);
  pSVar9 = (System_Xml_XmlAttributeCollection_o *)
           (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                     (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
  if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03451c04;
  pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                      (pSVar9,StringLiteral_7092,(MethodInfo *)0x0);
  pSVar11 = EIABCPKDEBD__JPKEHIBGOEM(pSVar10,StringLiteral_1567,(MethodInfo *)0x0);
  if (__this_00 == (NBLEEDEAPHB_o *)0x0) goto LAB_03451c04;
  (__this_00->fields).NEJJBIDOKGN = pSVar11;
  thunk_FUN_01c20e04();
  pSVar9 = (System_Xml_XmlAttributeCollection_o *)
           (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                     (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
  if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03451c04;
  pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                      (pSVar9,StringLiteral_12880,(MethodInfo *)0x0);
  pSVar11 = EIABCPKDEBD__JPKEHIBGOEM(pSVar10,StringLiteral_1,(MethodInfo *)0x0);
  ppSVar21 = &(__this_00->fields).ABCHAOKFLGL;
  *ppSVar21 = pSVar11;
  thunk_FUN_01c20e04(ppSVar21,pSVar11);
  pSVar11 = *ppSVar21;
  if ((KKCBGIBKOCP_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar11 = KKCBGIBKOCP__LCEINBEOKFL(pSVar11,(MethodInfo *)0x0);
  *ppSVar21 = pSVar11;
  thunk_FUN_01c20e04(ppSVar21,pSVar11);
  pSVar9 = (System_Xml_XmlAttributeCollection_o *)
           (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                     (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
  if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03451c04;
  pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                      (pSVar9,StringLiteral_3618,(MethodInfo *)0x0);
  pSVar11 = EIABCPKDEBD__JPKEHIBGOEM(pSVar10,StringLiteral_1,(MethodInfo *)0x0);
  (__this_00->fields).HBFKJIOLIAP = pSVar11;
  thunk_FUN_01c20e04();
  pSVar9 = (System_Xml_XmlAttributeCollection_o *)
           (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                     (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
  if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03451c04;
  pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                      (pSVar9,StringLiteral_3613,(MethodInfo *)0x0);
  fVar26 = EIABCPKDEBD__GICIEKCGOHA(pSVar10,-1.0,(MethodInfo *)0x0);
  (__this_00->fields).LIDCBOLHIEO = fVar26;
  pSVar9 = (System_Xml_XmlAttributeCollection_o *)
           (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                     (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
  if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03451c04;
  pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                      (pSVar9,StringLiteral_3619,(MethodInfo *)0x0);
  pSVar11 = EIABCPKDEBD__JPKEHIBGOEM(pSVar10,StringLiteral_1,(MethodInfo *)0x0);
  (__this_00->fields).DKLALAAPKNG = pSVar11;
  thunk_FUN_01c20e04();
  pSVar9 = (System_Xml_XmlAttributeCollection_o *)
           (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                     (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
  if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03451c04;
  pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                      (pSVar9,StringLiteral_6523,(MethodInfo *)0x0);
  pSVar11 = EIABCPKDEBD__JPKEHIBGOEM(pSVar10,StringLiteral_1,(MethodInfo *)0x0);
  (__this_00->fields).ALDOFMFIPCO = pSVar11;
  thunk_FUN_01c20e04();
  pSVar9 = (System_Xml_XmlAttributeCollection_o *)
           (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                     (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
  if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03451c04;
  pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                      (pSVar9,StringLiteral_6525,(MethodInfo *)0x0);
  iVar7 = EIABCPKDEBD__EHJNCGCICMP(pSVar10,-1,(MethodInfo *)0x0);
  (__this_00->fields).ALFDOLMJLKI = iVar7;
  pSVar9 = (System_Xml_XmlAttributeCollection_o *)
           (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                     (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
  if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03451c04;
  pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                      (pSVar9,StringLiteral_8095,(MethodInfo *)0x0);
  pSVar11 = EIABCPKDEBD__JPKEHIBGOEM(pSVar10,StringLiteral_1,(MethodInfo *)0x0);
  ppSVar21 = &(__this_00->fields).CJLNOJMBNPN;
  *ppSVar21 = pSVar11;
  thunk_FUN_01c20e04(ppSVar21,pSVar11);
  pSVar9 = (System_Xml_XmlAttributeCollection_o *)
           (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                     (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
  if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03451c04;
  pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                      (pSVar9,StringLiteral_5701,(MethodInfo *)0x0);
  pSVar11 = EIABCPKDEBD__JPKEHIBGOEM(pSVar10,StringLiteral_1,(MethodInfo *)0x0);
  ppSVar22 = &(__this_00->fields).GECBFNBEFDE;
  *ppSVar22 = pSVar11;
  thunk_FUN_01c20e04(ppSVar22,pSVar11);
  pSVar9 = (System_Xml_XmlAttributeCollection_o *)
           (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                     (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
  if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03451c04;
  pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                      (pSVar9,StringLiteral_4316,(MethodInfo *)0x0);
  bVar6 = EIABCPKDEBD__FMBMNDIGLIG(pSVar10,false,(MethodInfo *)0x0);
  (__this_00->fields).EHKKBKHGDHE = bVar6;
  pSVar9 = (System_Xml_XmlAttributeCollection_o *)
           (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                     (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
  if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03451c04;
  pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                      (pSVar9,StringLiteral_8094,(MethodInfo *)0x0);
  bVar6 = EIABCPKDEBD__FMBMNDIGLIG(pSVar10,false,(MethodInfo *)0x0);
  (__this_00->fields).DCLFKPIKIMC = bVar6;
  pSVar9 = (System_Xml_XmlAttributeCollection_o *)
           (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                     (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
  if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03451c04;
  pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                      (pSVar9,StringLiteral_9817,(MethodInfo *)0x0);
  iVar7 = EIABCPKDEBD__EHJNCGCICMP(pSVar10,0,(MethodInfo *)0x0);
  (__this_00->fields).ILAJANAMHDM = iVar7;
  pSVar9 = (System_Xml_XmlAttributeCollection_o *)
           (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                     (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
  if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03451c04;
  pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                      (pSVar9,StringLiteral_9818,(MethodInfo *)0x0);
  iVar7 = EIABCPKDEBD__EHJNCGCICMP(pSVar10,0,(MethodInfo *)0x0);
  (__this_00->fields).OJDCNGCCOBA = iVar7;
  bVar6 = System_String__op_Equality(pSVar8,StringLiteral_10460,(MethodInfo *)0x0);
  if (bVar6) {
    iVar7 = 1;
LAB_034515a8:
    (__this_00->fields).KFHPFEKBDFM = iVar7;
  }
  else {
    bVar6 = System_String__op_Equality(pSVar8,StringLiteral_8459,(MethodInfo *)0x0);
    if (bVar6) {
      iVar7 = 2;
      goto LAB_034515a8;
    }
    (__this_00->fields).KFHPFEKBDFM = 0;
  }
  pSVar9 = (System_Xml_XmlAttributeCollection_o *)
           (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                     (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
  if (pSVar9 != (System_Xml_XmlAttributeCollection_o *)0x0) {
    pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                        (pSVar9,StringLiteral_12889,(MethodInfo *)0x0);
    pSVar8 = EIABCPKDEBD__JPKEHIBGOEM(pSVar10,StringLiteral_1,(MethodInfo *)0x0);
    if (pSVar8 != (System_String_o *)0x0) {
      method_00 = (MethodInfo *)0x0;
      pSVar8 = System_String__Replace(pSVar8,StringLiteral_1603,StringLiteral_644,(MethodInfo *)0x0)
      ;
      if (pSVar8 != (System_String_o *)0x0) {
        bVar6 = System_String__StartsWith(pSVar8,StringLiteral_644,(MethodInfo *)0x0);
        if (!bVar6) {
          pSVar8 = System_String__Concat(StringLiteral_644,pSVar8,(MethodInfo *)0x0);
        }
        bVar6 = UnityEngine_ColorUtility__TryParseHtmlString
                          (pSVar8,(UnityEngine_Color_o *)&local_70,(MethodInfo *)0x0);
        if (bVar6) {
          (__this_00->fields).ONNNBMCAJMN.fields.b = local_70.b;
          (__this_00->fields).ONNNBMCAJMN.fields.a = local_70.a;
          (__this_00->fields).ONNNBMCAJMN.fields.r = local_70.r;
          (__this_00->fields).ONNNBMCAJMN.fields.g = local_70.g;
        }
        plVar12 = (long *)(*(NPLGCIFGFOK->klass->vtable)._13_get_ChildNodes.methodPtr)
                                    (NPLGCIFGFOK,
                                     (NPLGCIFGFOK->klass->vtable)._13_get_ChildNodes.method);
        if (plVar12 != (long *)0x0) {
          plVar12 = (long *)(**(code **)(*plVar12 + 0x1b8))
                                      (plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          ppLVar1 = &(__this_00->fields).KOLIPNBCKOB;
          do {
            lVar16 = *plVar12;
            uVar19 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar19 != 0) {
              piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(System_Collections_IEnumerator_c **)(piVar20 + -2) ==
                    System_Collections_IEnumerator_TypeInfo) {
                  puVar13 = (undefined8 *)(lVar16 + (long)*piVar20 * 0x10 + 0x138);
                  goto LAB_034516ec;
                }
                uVar19 = uVar19 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar19 != 0);
            }
            puVar13 = (undefined8 *)FUN_01b81914(plVar12,System_Collections_IEnumerator_TypeInfo,0);
LAB_034516ec:
            uVar19 = (*(code *)*puVar13)(plVar12,puVar13[1]);
            if ((uVar19 & 1) == 0) {
              plVar12 = (long *)thunk_FUN_01bda71c(plVar12,System_IDisposable_TypeInfo);
              if (plVar12 == (long *)0x0) goto LAB_03451844;
              lVar16 = *plVar12;
              uVar19 = (ulong)*(ushort *)(lVar16 + 0x12e);
              if (uVar19 == 0) goto LAB_0345181c;
              piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              goto LAB_03451804;
            }
            lVar16 = *plVar12;
            uVar19 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar19 != 0) {
              piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(System_Collections_IEnumerator_c **)(piVar20 + -2) ==
                    System_Collections_IEnumerator_TypeInfo) {
                  puVar13 = (undefined8 *)(lVar16 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                  goto LAB_0345174c;
                }
                uVar19 = uVar19 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar19 != 0);
            }
            puVar13 = (undefined8 *)FUN_01b81914(plVar12,System_Collections_IEnumerator_TypeInfo,1);
LAB_0345174c:
            pSVar14 = (System_Xml_XmlNode_o *)(*(code *)*puVar13)(plVar12,puVar13[1]);
            if (pSVar14 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            bVar3 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
            if (((pSVar14->klass->_2).naturalAligment < bVar3) ||
               ((pSVar14->klass->_2).typeHierarchy[(ulong)bVar3 - 1] !=
                (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
              FUN_01babc64(pSVar14);
            }
            pSVar8 = (System_String_o *)
                     (*(pSVar14->klass->vtable)._8_unknown.methodPtr)
                               (pSVar14,(pSVar14->klass->vtable)._8_unknown.method);
            pSVar11 = (System_String_o *)0x0;
            bVar6 = System_String__op_Equality(pSVar8,StringLiteral_13814,(MethodInfo *)0x0);
            if (bVar6) {
              pLVar15 = PFOMHOLCODE__BNDEBDLEIEH((PFOMHOLCODE_o *)0x1,pSVar14,pSVar11,method_00);
              *ppLVar1 = pLVar15;
              thunk_FUN_01c20e04(ppLVar1);
            }
          } while( true );
        }
      }
    }
  }
  goto LAB_03451c04;
  while( true ) {
    uVar19 = uVar19 - 1;
    piVar20 = piVar20 + 4;
    if (uVar19 == 0) break;
LAB_03451804:
    if (*(System_IDisposable_c **)(piVar20 + -2) == System_IDisposable_TypeInfo) {
      puVar13 = (undefined8 *)(lVar16 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_03451838;
    }
  }
LAB_0345181c:
  puVar13 = (undefined8 *)FUN_01b81914(plVar12,System_IDisposable_TypeInfo,0);
LAB_03451838:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
LAB_03451844:
  if ((*ppSVar21 != (System_String_o *)0x0) || (*ppSVar22 != (System_String_o *)0x0)) {
    auVar27 = thunk_FUN_01bda818(PFOMHOLCODE_JLFFOOCNIIO_TypeInfo);
    __this_01 = auVar27._0_8_;
    PFOMHOLCODE_JLFFOOCNIIO___ctor(__this_01,auVar27._8_8_);
    if ((__this_01 != (PFOMHOLCODE_JLFFOOCNIIO_o *)0x0) &&
       (pLVar23 = (__this_01->fields).NEIJJHEFLHP, pLVar23 != (LCKCDEKNLOA_o *)0x0)) {
      ppSVar24 = &(pLVar23->fields).BHHLJDLBINB;
      pSVar25 = *ppSVar24;
      b = (System_Delegate_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      pSVar25 = (System_Action_o *)
                System_Delegate__Combine((System_Delegate_o *)pSVar25,b,(MethodInfo *)0x0);
      pSVar5 = System_Action_TypeInfo;
      if (pSVar25 == (System_Action_o *)0x0) {
        *ppSVar24 = (System_Action_o *)0x0;
      }
      else if ((pSVar25->klass != System_Action_TypeInfo) ||
              (*ppSVar24 = pSVar25, pSVar25->klass != pSVar5)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar25);
      }
      thunk_FUN_01c20e04(ppSVar24,pSVar25);
      iVar2 = (__this->fields).NALNGBONGPJ;
      (__this->fields).NALNGBONGPJ = iVar2 + 1;
      (__this_01->fields).IGLHCNLNIPK = iVar2;
      (__this_00->fields).IGLHCNLNIPK = iVar2;
      plVar12 = (long *)(*(NPLGCIFGFOK->klass->vtable)._13_get_ChildNodes.methodPtr)
                                  (NPLGCIFGFOK,
                                   (NPLGCIFGFOK->klass->vtable)._13_get_ChildNodes.method);
      if (plVar12 != (long *)0x0) {
        plVar12 = (long *)(**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0))
        ;
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        do {
          lVar16 = *plVar12;
          uVar19 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar19 != 0) {
            piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar20 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar13 = (undefined8 *)(lVar16 + (long)*piVar20 * 0x10 + 0x138);
                goto LAB_03451994;
              }
              uVar19 = uVar19 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar19 != 0);
          }
          puVar13 = (undefined8 *)FUN_01b81914(plVar12,System_Collections_IEnumerator_TypeInfo,0);
LAB_03451994:
          uVar19 = (*(code *)*puVar13)(plVar12,puVar13[1]);
          if ((uVar19 & 1) == 0) {
            plVar12 = (long *)thunk_FUN_01bda71c(plVar12,System_IDisposable_TypeInfo);
            if (plVar12 == (long *)0x0) goto LAB_03451ae8;
            lVar16 = *plVar12;
            uVar19 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar19 == 0) goto LAB_03451ac0;
            piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            goto LAB_03451aa8;
          }
          lVar16 = *plVar12;
          uVar19 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar19 != 0) {
            piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar20 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar13 = (undefined8 *)(lVar16 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                goto LAB_034519f4;
              }
              uVar19 = uVar19 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar19 != 0);
          }
          puVar13 = (undefined8 *)FUN_01b81914(plVar12,System_Collections_IEnumerator_TypeInfo,1);
LAB_034519f4:
          pSVar14 = (System_Xml_XmlNode_o *)(*(code *)*puVar13)(plVar12,puVar13[1]);
          if (pSVar14 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          bVar3 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
          if (((pSVar14->klass->_2).naturalAligment < bVar3) ||
             ((pSVar14->klass->_2).typeHierarchy[(ulong)bVar3 - 1] !=
              (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(pSVar14);
          }
          pLVar23 = (__this_01->fields).NEIJJHEFLHP;
          pSVar8 = (System_String_o *)
                   (*(pSVar14->klass->vtable)._8_unknown.methodPtr)
                             (pSVar14,(pSVar14->klass->vtable)._8_unknown.method);
          CPECAEHDDDB = PFLBGCPNEIM__EOHMFJFFFIN
                                  (pSVar8,(__this->fields).super._LLOFHDDBKFD_k__BackingField,
                                   (__this->fields).super._AFGEOOAHIGH_k__BackingField,pSVar14,
                                   (MethodInfo *)0x0);
          if (pLVar23 == (LCKCDEKNLOA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          LCKCDEKNLOA__IEFEBMICIHN(pLVar23,CPECAEHDDDB,(MethodInfo *)0x0);
        } while( true );
      }
    }
    goto LAB_03451c04;
  }
  goto LAB_03451b64;
  while( true ) {
    uVar19 = uVar19 - 1;
    piVar20 = piVar20 + 4;
    if (uVar19 == 0) break;
LAB_03451aa8:
    if (*(System_IDisposable_c **)(piVar20 + -2) == System_IDisposable_TypeInfo) {
      puVar13 = (undefined8 *)(lVar16 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_03451adc;
    }
  }
LAB_03451ac0:
  puVar13 = (undefined8 *)FUN_01b81914(plVar12,System_IDisposable_TypeInfo,0);
LAB_03451adc:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
LAB_03451ae8:
  lVar16 = Method_System_Collections_Generic_List<PFOMHOLCODE_JLFFOOCNIIO>_Add__;
  __this_02 = (__this->fields).IDMHBKIMEGE;
  if (__this_02 == (System_Collections_Generic_List_PFOMHOLCODE_JLFFOOCNIIO__o *)0x0)
  goto LAB_03451c04;
  pPVar17 = (__this_02->fields)._items;
  (__this_02->fields)._version = (__this_02->fields)._version + 1;
  if (pPVar17 == (PFOMHOLCODE_JLFFOOCNIIO_array *)0x0) goto LAB_03451c04;
  uVar4 = (__this_02->fields)._size;
  if (uVar4 < (uint)pPVar17->max_length) {
    (__this_02->fields)._size = uVar4 + 1;
    pPVar17->m_Items[(int)uVar4] = __this_01;
    thunk_FUN_01c20e04(pPVar17->m_Items + (int)uVar4,__this_01);
  }
  else {
    System_Collections_Generic_List<object>__AddWithResize
              ((System_Collections_Generic_List_object__o *)__this_02,(Il2CppObject *)__this_01,
               *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
  }
LAB_03451b64:
  lVar16 = Method_System_Collections_Generic_List<NBLEEDEAPHB>_Add__;
  __this_03 = (__this->fields).FCOIPKFOGMM;
  if (__this_03 != (System_Collections_Generic_List_NBLEEDEAPHB__o *)0x0) {
    pNVar18 = (__this_03->fields)._items;
    (__this_03->fields)._version = (__this_03->fields)._version + 1;
    if (pNVar18 != (NBLEEDEAPHB_array *)0x0) {
      uVar4 = (__this_03->fields)._size;
      if (uVar4 < (uint)pNVar18->max_length) {
        (__this_03->fields)._size = uVar4 + 1;
        pNVar18->m_Items[(int)uVar4] = __this_00;
        thunk_FUN_01c20e04(pNVar18->m_Items + (int)uVar4,__this_00);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_03,(Il2CppObject *)__this_00,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
      }
      return;
    }
  }
LAB_03451c04:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

