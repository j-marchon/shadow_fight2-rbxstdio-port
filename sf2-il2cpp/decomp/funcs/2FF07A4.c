// BFBONKPKBNL$$.ctor @ RVA 0x2FF07A4

/* WARNING: Removing unreachable block (ram,0x030f0d94) */

void BFBONKPKBNL___ctor(BFBONKPKBNL_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *pCVar3;
  bool bVar4;
  int32_t iVar5;
  System_Collections_Generic_List_BNKBGIIJNLF__o *pSVar6;
  System_Xml_XmlAttributeCollection_o *pSVar7;
  System_Xml_XmlAttribute_o *pSVar8;
  int64_t CJNHFNHJHPE;
  long *plVar9;
  undefined8 *puVar10;
  System_String_o *pSVar11;
  HBNENINHPGF_o *IJONCLJPNDO;
  BNKBGIIJNLF_o *__this_00;
  undefined8 uVar12;
  long lVar13;
  BNKBGIIJNLF_array *pBVar14;
  ulong uVar15;
  int *piVar16;
  System_Collections_Generic_List_BNKBGIIJNLF__o **ppSVar17;
  MGNPHCAAEIO_HLAKGGFFNAO_o *__this_01;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar18;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o CVar19;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_80;
  
                    /* try { // try from 030f07c4 to 031f07d7 has its CatchHandler @ 030f03a4 */
                    /* try { // try from 030f07d8 to 031f07e7 has its CatchHandler @ 030f07ec */
  if ((DAT_04565a67 & 1) == 0) {
                    /* catch() { ... } // from try @ 030f0790 with catch @ 030f07ec
                       catch() { ... } // from try @ 030f07d8 with catch @ 030f07ec */
    FUN_01bab630(&BNKBGIIJNLF_TypeInfo);
                    /* try { // try from 030f07f0 to 031f07f3 has its CatchHandler @ 030f08a8 */
                    /* try { // try from 030f07f4 to 031f080f has its CatchHandler @ 030f03a4 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 030f0514 with catch @ 030f07f8
                        */
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
                    /* try { // try from 030f0810 to 031f0827 has its CatchHandler @ 030f0898 */
    FUN_01bab630(&Method_System_Collections_Generic_List<BNKBGIIJNLF>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BNKBGIIJNLF>__ctor__);
                    /* try { // try from 030f0828 to 031f083b has its CatchHandler @ 030f03a4 */
    FUN_01bab630(&System_Collections_Generic_List<BNKBGIIJNLF>_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
                    /* try { // try from 030f083c to 031f0853 has its CatchHandler @ 030f0898 */
    FUN_01bab630(&System_Xml_XmlAttribute_TypeInfo);
    FUN_01bab630(&StringLiteral_3536);
                    /* try { // try from 030f0854 to 031f0887 has its CatchHandler @ 030f03a4 */
    FUN_01bab630(&StringLiteral_5292);
    FUN_01bab630(&StringLiteral_8891);
    FUN_01bab630(&StringLiteral_8409);
    FUN_01bab630(&StringLiteral_9067);
    DAT_04565a67 = 1;
  }
                    /* try { // try from 030f0888 to 031f0897 has its CatchHandler @ 030f0898 */
  pSVar6 = (System_Collections_Generic_List_BNKBGIIJNLF__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<BNKBGIIJNLF>_TypeInfo);
                    /* catch() { ... } // from try @ 030f0810 with catch @ 030f0898
                       catch() { ... } // from try @ 030f083c with catch @ 030f0898
                       catch() { ... } // from try @ 030f0888 with catch @ 030f0898 */
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar6,
             Method_System_Collections_Generic_List<BNKBGIIJNLF>__ctor__);
  ppSVar17 = &(__this->fields).MIOLFPIJMDH;
                    /* try { // try from 030f089c to 031f089f has its CatchHandler @ 030f08a8 */
                    /* try { // try from 030f08a0 to 031f08ab has its CatchHandler @ 030f03a4 */
  *ppSVar17 = pSVar6;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 030f07f0 with catch @ 030f08a8
                       catch(type#2 @ 00000000) { ... } // from try @ 030f089c with catch @ 030f08a8
                        */
  thunk_FUN_01c20e04(ppSVar17,pSVar6);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if ((JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) &&
     (pSVar7 = (System_Xml_XmlAttributeCollection_o *)
               (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                         (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method),
     pSVar7 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar7,StringLiteral_8409,(MethodInfo *)0x0);
    pSVar7 = (System_Xml_XmlAttributeCollection_o *)
             (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                       (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
    if (pSVar7 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      if (pSVar8 == (System_Xml_XmlAttribute_o *)0x0) {
        pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar7,StringLiteral_9067,(MethodInfo *)0x0);
        iVar5 = EIABCPKDEBD__EHJNCGCICMP(pSVar8,0,(MethodInfo *)0x0);
        CVar18 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
                 CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(iVar5,(MethodInfo *)0x0)
        ;
        (__this->fields).HMHEEKFFCPL.fields = CVar18;
        pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                 (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                           (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
        if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_030f0d80;
        pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar7,StringLiteral_8891,(MethodInfo *)0x0);
        iVar5 = EIABCPKDEBD__EHJNCGCICMP(pSVar8,0x7fffffff,(MethodInfo *)0x0);
        CVar19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(iVar5,(MethodInfo *)0x0)
        ;
        uVar12 = CVar19.fields._8_8_;
        pCVar3 = &(__this->fields).EHOFCENCPNF;
        (__this->fields).EHOFCENCPNF.fields.currentCryptoKey = (int)CVar19.fields._0_8_;
        (__this->fields).EHOFCENCPNF.fields.hiddenValue = (int)((ulong)CVar19.fields._0_8_ >> 0x20);
      }
      else {
        pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar7,StringLiteral_8409,(MethodInfo *)0x0);
        iVar5 = EIABCPKDEBD__EHJNCGCICMP(pSVar8,0,(MethodInfo *)0x0);
        CVar18 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
                 CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(iVar5,(MethodInfo *)0x0)
        ;
        uVar12 = CVar18._8_8_;
        (__this->fields).EHOFCENCPNF.fields = CVar18;
        (__this->fields).HMHEEKFFCPL.fields.currentCryptoKey = (int)CVar18._0_8_;
        (__this->fields).HMHEEKFFCPL.fields.hiddenValue = (int)((ulong)CVar18._0_8_ >> 0x20);
        pCVar3 = &(__this->fields).HMHEEKFFCPL;
      }
      (pCVar3->fields).fakeValue = (int)uVar12;
      (pCVar3->fields).fakeValueActive = (bool_conflict)(char)((ulong)uVar12 >> 0x20);
      (pCVar3->fields).inited = (bool_conflict)(char)((ulong)uVar12 >> 0x28);
      *(short *)&(pCVar3->fields).field_0xe = (short)((ulong)uVar12 >> 0x30);
      pSVar7 = (System_Xml_XmlAttributeCollection_o *)
               (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                         (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
      if (pSVar7 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar7,StringLiteral_5292,(MethodInfo *)0x0);
        iVar5 = EIABCPKDEBD__EHJNCGCICMP(pSVar8,0,(MethodInfo *)0x0);
        CVar18 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
                 CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(iVar5,(MethodInfo *)0x0)
        ;
        (__this->fields)._LAOFJOMPFDL_k__BackingField.fields = CVar18;
        pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                 (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                           (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
        if (pSVar7 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar7,StringLiteral_3536,(MethodInfo *)0x0);
          CJNHFNHJHPE = EIABCPKDEBD__HNIGPBMJJOL(pSVar8,0,(MethodInfo *)0x0);
          CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                    (&local_80,CJNHFNHJHPE,(MethodInfo *)0x0);
          (__this->fields)._BGAELGPOEHE_k__BackingField.fields.hiddenValue =
               local_80.fields.hiddenValue;
          (__this->fields)._BGAELGPOEHE_k__BackingField.fields.currentCryptoKey =
               local_80.fields.currentCryptoKey;
          (__this->fields)._BGAELGPOEHE_k__BackingField.fields.fakeValueActive =
               local_80.fields.fakeValueActive;
          (__this->fields)._BGAELGPOEHE_k__BackingField.fields.inited = local_80.fields.inited;
          *(undefined6 *)&(__this->fields)._BGAELGPOEHE_k__BackingField.fields.field_0x1a =
               local_80.fields._26_6_;
          (__this->fields)._BGAELGPOEHE_k__BackingField.fields.fakeValue = local_80.fields.fakeValue
          ;
          plVar9 = (long *)(*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                                     (JHMENEKPIBO,
                                      (JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
          if (plVar9 != (long *)0x0) {
            plVar9 = (long *)(**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0))
            ;
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
                    puVar10 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
                    goto LAB_030f0ad0;
                  }
                  uVar15 = uVar15 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar15 != 0);
              }
              puVar10 = (undefined8 *)FUN_01b81914(plVar9,System_Collections_IEnumerator_TypeInfo,0)
              ;
LAB_030f0ad0:
              uVar15 = (*(code *)*puVar10)(plVar9,puVar10[1]);
              if ((uVar15 & 1) == 0) {
                plVar9 = (long *)thunk_FUN_01bda71c(plVar9,System_IDisposable_TypeInfo);
                if (plVar9 == (long *)0x0) {
                  return;
                }
                lVar13 = *plVar9;
                uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
                if (uVar15 == 0) goto LAB_030f0d24;
                piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                goto LAB_030f0d0c;
              }
              lVar13 = *plVar9;
              uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
              if (uVar15 != 0) {
                piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(System_Collections_IEnumerator_c **)(piVar16 + -2) ==
                      System_Collections_IEnumerator_TypeInfo) {
                    puVar10 = (undefined8 *)(lVar13 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                    goto LAB_030f0b30;
                  }
                  uVar15 = uVar15 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar15 != 0);
              }
              puVar10 = (undefined8 *)FUN_01b81914(plVar9,System_Collections_IEnumerator_TypeInfo,1)
              ;
LAB_030f0b30:
              pSVar8 = (System_Xml_XmlAttribute_o *)(*(code *)*puVar10)(plVar9,puVar10[1]);
              if (pSVar8 == (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              bVar1 = (System_Xml_XmlAttribute_TypeInfo->_2).naturalAligment;
              if (((pSVar8->klass->_2).naturalAligment < bVar1) ||
                 ((pSVar8->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                  (Il2CppClass *)System_Xml_XmlAttribute_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                FUN_01babc64(pSVar8);
              }
              pSVar11 = (System_String_o *)
                        (*(pSVar8->klass->vtable)._8_get_Name.methodPtr)
                                  (pSVar8,(pSVar8->klass->vtable)._8_get_Name.method);
              if (pSVar11 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              bVar4 = System_String__Contains(pSVar11,StringLiteral_8409,(MethodInfo *)0x0);
              if (!bVar4) {
                pSVar11 = (System_String_o *)
                          (*(pSVar8->klass->vtable)._8_get_Name.methodPtr)
                                    (pSVar8,(pSVar8->klass->vtable)._8_get_Name.method);
                bVar4 = System_String__op_Equality(pSVar11,StringLiteral_5292,(MethodInfo *)0x0);
                if (!bVar4) {
                  pSVar11 = (System_String_o *)
                            (*(pSVar8->klass->vtable)._8_get_Name.methodPtr)
                                      (pSVar8,(pSVar8->klass->vtable)._8_get_Name.method);
                  bVar4 = System_String__op_Equality(pSVar11,StringLiteral_3536,(MethodInfo *)0x0);
                  if (!bVar4) {
                    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    __this_01 = MGNPHCAAEIO_TypeInfo->static_fields->BHAAICEFMBC;
                    pSVar11 = (System_String_o *)
                              (*(pSVar8->klass->vtable)._8_get_Name.methodPtr)
                                        (pSVar8,(pSVar8->klass->vtable)._8_get_Name.method);
                    if (__this_01 == (MGNPHCAAEIO_HLAKGGFFNAO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01bab8c8();
                    }
                    IJONCLJPNDO = MGNPHCAAEIO_HLAKGGFFNAO__BHJOLIJDBLO
                                            (__this_01,pSVar11,(MethodInfo *)0x0);
                    if (IJONCLJPNDO != (HBNENINHPGF_o *)0x0) {
                      pSVar6 = *ppSVar17;
                      iVar5 = EIABCPKDEBD__EHJNCGCICMP(pSVar8,0,(MethodInfo *)0x0);
                      __this_00 = (BNKBGIIJNLF_o *)thunk_FUN_01bda818(BNKBGIIJNLF_TypeInfo);
                      BNKBGIIJNLF___ctor(__this_00,IJONCLJPNDO,iVar5,(MethodInfo *)0x0);
                      lVar13 = Method_System_Collections_Generic_List<BNKBGIIJNLF>_Add__;
                      if (pSVar6 == (System_Collections_Generic_List_BNKBGIIJNLF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
                      pBVar14 = (pSVar6->fields)._items;
                      (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
                      if (pBVar14 == (BNKBGIIJNLF_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
                      uVar2 = (pSVar6->fields)._size;
                      if (uVar2 < (uint)pBVar14->max_length) {
                        (pSVar6->fields)._size = uVar2 + 1;
                        pBVar14->m_Items[(int)uVar2] = __this_00;
                        thunk_FUN_01c20e04(pBVar14->m_Items + (int)uVar2,__this_00);
                      }
                      else {
                        System_Collections_Generic_List<object>__AddWithResize
                                  ((System_Collections_Generic_List_object__o *)pSVar6,
                                   (Il2CppObject *)__this_00,
                                   *(MethodInfo_26E4DAC **)
                                    (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
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
LAB_030f0d80:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_030f0d0c:
    if (*(System_IDisposable_c **)(piVar16 + -2) == System_IDisposable_TypeInfo) {
      puVar10 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_030f0d40;
    }
  }
LAB_030f0d24:
  puVar10 = (undefined8 *)FUN_01b81914(plVar9,System_IDisposable_TypeInfo,0);
LAB_030f0d40:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
  return;
}

