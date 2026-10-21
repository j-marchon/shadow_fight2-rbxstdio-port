// MDAPDLLMOMF$$BBFCCAOAJII @ RVA 0x30C273C

/* WARNING: Removing unreachable block (ram,0x031c340c) */
/* WARNING: Removing unreachable block (ram,0x031c37d0) */

void MDAPDLLMOMF__BBFCCAOAJII(MDAPDLLMOMF_o *__this,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *pCVar1;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *pCVar2;
  byte bVar3;
  uint uVar4;
  bool bVar5;
  int32_t iVar6;
  int32_t iVar7;
  int32_t iVar8;
  System_Xml_XmlNode_o *pSVar9;
  System_Xml_XmlAttributeCollection_o *pSVar10;
  System_Xml_XmlAttribute_o *pSVar11;
  long *plVar12;
  System_String_o *pSVar13;
  System_Char_array *pSVar14;
  System_String_array *pSVar15;
  System_Collections_Generic_List_string__o *pSVar16;
  undefined8 *puVar17;
  long *plVar18;
  System_Object_array *pSVar19;
  Il2CppObject *pIVar20;
  MDAPDLLMOMF_DOPLCEEGPAO_o *__this_00;
  System_Collections_Generic_List_MDAPDLLMOMF_DOPLCEEGPAO__o *__this_01;
  undefined8 uVar21;
  MethodInfo *method_00;
  MethodInfo *in_x4;
  long lVar22;
  MDAPDLLMOMF_DOPLCEEGPAO_array *pMVar23;
  ulong uVar24;
  int *piVar25;
  float fVar26;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar27;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_d8;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_c0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_a0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_80;
  
  if ((DAT_0456629b & 1) == 0) {
    FUN_01bab630(&char___TypeInfo);
    FUN_01bab630(&MDAPDLLMOMF_DOPLCEEGPAO_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MDAPDLLMOMF_DOPLCEEGPAO>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_4507);
    FUN_01bab630(&StringLiteral_5058);
    FUN_01bab630(&StringLiteral_15220);
    FUN_01bab630(&StringLiteral_7326);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_13776);
                    /* try { // try from 031c2858 to 032c285b has its CatchHandler @ 031c2864 */
                    /* try { // try from 031c285c to 032c2887 has its CatchHandler @ 031c24e4 */
    FUN_01bab630(&StringLiteral_7325);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031c2858 with catch @ 031c2864
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031c26e4 with catch @ 031c2868
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031c26b4 with catch @ 031c286c
                        */
    FUN_01bab630(&StringLiteral_12346);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031c2658 with catch @ 031c2870
                        */
    FUN_01bab630(&StringLiteral_14694);
    FUN_01bab630(&StringLiteral_7119);
                    /* try { // try from 031c2888 to 032c288b has its CatchHandler @ 031c2898 */
    FUN_01bab630(&StringLiteral_7357);
                    /* catch() { ... } // from try @ 031c2888 with catch @ 031c2898 */
    FUN_01bab630(&StringLiteral_3166);
    FUN_01bab630(&StringLiteral_9529);
    FUN_01bab630(&StringLiteral_5737);
    FUN_01bab630(&StringLiteral_5717);
    FUN_01bab630(&StringLiteral_15134);
                    /* try { // try from 031c28d0 to 032c28f7 has its CatchHandler @ 031c290c */
    FUN_01bab630(&StringLiteral_3532);
    FUN_01bab630(&StringLiteral_12363);
    FUN_01bab630(&StringLiteral_15021);
                    /* try { // try from 031c28f8 to 032c2903 has its CatchHandler @ 031c24e4 */
    FUN_01bab630(&StringLiteral_1);
                    /* try { // try from 031c2904 to 032c290b has its CatchHandler @ 031c290c */
    FUN_01bab630(&StringLiteral_9533);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031c28d0 with catch @ 031c290c
                       catch(type#2 @ 00000000) { ... } // from try @ 031c2904 with catch @ 031c290c
                        */
    DAT_0456629b = 1;
  }
  pSVar9 = (__this->fields).super.PFONAMNDHOH;
  if ((pSVar9 == (System_Xml_XmlNode_o *)0x0) ||
     (pSVar10 = (System_Xml_XmlAttributeCollection_o *)
                (*(pSVar9->klass->vtable)._16_get_Attributes.methodPtr)
                          (pSVar9,(pSVar9->klass->vtable)._16_get_Attributes.method),
     pSVar10 == (System_Xml_XmlAttributeCollection_o *)0x0)) goto LAB_031c3720;
  pSVar11 = System_Xml_XmlAttributeCollection__get_ItemOf
                      (pSVar10,StringLiteral_9533,(MethodInfo *)0x0);
  bVar5 = EIABCPKDEBD__FMBMNDIGLIG(pSVar11,false,(MethodInfo *)0x0);
  pSVar9 = (__this->fields).super.PFONAMNDHOH;
  (__this->fields).IMPILOHMHPD = (bool_conflict)(~bVar5 & 1);
  if (pSVar9 == (System_Xml_XmlNode_o *)0x0) goto LAB_031c3720;
  plVar12 = (long *)(*(pSVar9->klass->vtable)._51_get_Item.methodPtr)
                              (pSVar9,StringLiteral_7325,(pSVar9->klass->vtable)._51_get_Item.method
                              );
  if (plVar12 != (long *)0x0) {
    (__this->fields).AGGBCMGNAEF = true;
    pSVar10 = (System_Xml_XmlAttributeCollection_o *)
              (**(code **)(*plVar12 + 0x238))(plVar12,*(undefined8 *)(*plVar12 + 0x240));
    if (pSVar10 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_031c3720;
    pSVar11 = System_Xml_XmlAttributeCollection__get_ItemOf
                        (pSVar10,StringLiteral_9327,(MethodInfo *)0x0);
    pSVar13 = EIABCPKDEBD__JPKEHIBGOEM(pSVar11,StringLiteral_1,(MethodInfo *)0x0);
    pSVar14 = (System_Char_array *)FUN_01bab718(char___TypeInfo,1);
    if (pSVar14 == (System_Char_array *)0x0) goto LAB_031c3720;
    if ((int)pSVar14->max_length == 0) goto LAB_031c37d8;
    pSVar14->m_Items[0] = 0x7c;
    if (pSVar13 == (System_String_o *)0x0) goto LAB_031c3720;
    pSVar15 = System_String__Split(pSVar13,pSVar14,1,(MethodInfo *)0x0);
    pSVar16 = (System_Collections_Generic_List_string__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)pSVar16,
               (System_Collections_Generic_IEnumerable_T__o *)pSVar15,
               Method_System_Collections_Generic_List<string>__ctor__);
    (__this->fields).AGJGMNPFMDL = pSVar16;
    thunk_FUN_01c20e04(&(__this->fields).AGJGMNPFMDL,pSVar16);
  }
  pSVar9 = (__this->fields).super.PFONAMNDHOH;
  if (pSVar9 == (System_Xml_XmlNode_o *)0x0) goto LAB_031c3720;
  plVar12 = (long *)(*(pSVar9->klass->vtable)._51_get_Item.methodPtr)
                              (pSVar9,StringLiteral_7326,(pSVar9->klass->vtable)._51_get_Item.method
                              );
  if (plVar12 != (long *)0x0) {
    (__this->fields).NELGLPNGJNH = true;
    pSVar10 = (System_Xml_XmlAttributeCollection_o *)
              (**(code **)(*plVar12 + 0x238))(plVar12,*(undefined8 *)(*plVar12 + 0x240));
    if (pSVar10 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_031c3720;
    pSVar11 = System_Xml_XmlAttributeCollection__get_ItemOf
                        (pSVar10,StringLiteral_9327,(MethodInfo *)0x0);
    pSVar13 = EIABCPKDEBD__JPKEHIBGOEM(pSVar11,StringLiteral_1,(MethodInfo *)0x0);
    pSVar14 = (System_Char_array *)FUN_01bab718(char___TypeInfo,1);
    if (pSVar14 == (System_Char_array *)0x0) goto LAB_031c3720;
    if ((int)pSVar14->max_length == 0) {
LAB_031c37d8:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    pSVar14->m_Items[0] = 0x7c;
    if (pSVar13 == (System_String_o *)0x0) goto LAB_031c3720;
    pSVar15 = System_String__Split(pSVar13,pSVar14,1,(MethodInfo *)0x0);
    pSVar16 = (System_Collections_Generic_List_string__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)pSVar16,
               (System_Collections_Generic_IEnumerable_T__o *)pSVar15,
               Method_System_Collections_Generic_List<string>__ctor__);
    (__this->fields).FLAMMJFKMDO = pSVar16;
    thunk_FUN_01c20e04(&(__this->fields).FLAMMJFKMDO,pSVar16);
  }
  pSVar9 = (__this->fields).super.PFONAMNDHOH;
  if (pSVar9 == (System_Xml_XmlNode_o *)0x0) goto LAB_031c3720;
  plVar12 = (long *)(*(pSVar9->klass->vtable)._51_get_Item.methodPtr)
                              (pSVar9,StringLiteral_3166,(pSVar9->klass->vtable)._51_get_Item.method
                              );
  if (plVar12 != (long *)0x0) {
    plVar12 = (long *)(**(code **)(*plVar12 + 0x208))(plVar12,*(undefined8 *)(*plVar12 + 0x210));
    if (plVar12 != (long *)0x0) {
      plVar12 = (long *)(**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar22 = *plVar12;
        uVar24 = (ulong)*(ushort *)(lVar22 + 0x12e);
        if (uVar24 != 0) {
          piVar25 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar25 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar17 = (undefined8 *)(lVar22 + (long)*piVar25 * 0x10 + 0x138);
              goto LAB_031c2bd4;
            }
            uVar24 = uVar24 - 1;
            piVar25 = piVar25 + 4;
          } while (uVar24 != 0);
        }
        puVar17 = (undefined8 *)FUN_01b81914(plVar12,System_Collections_IEnumerator_TypeInfo,0);
LAB_031c2bd4:
        uVar24 = (*(code *)*puVar17)(plVar12,puVar17[1]);
        if ((uVar24 & 1) == 0) {
          plVar12 = (long *)thunk_FUN_01bda71c(plVar12,System_IDisposable_TypeInfo);
          if (plVar12 == (long *)0x0) goto LAB_031c2d78;
          lVar22 = *plVar12;
          uVar24 = (ulong)*(ushort *)(lVar22 + 0x12e);
          if (uVar24 == 0) goto LAB_031c2d4c;
          piVar25 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
          goto LAB_031c2d34;
        }
        lVar22 = *plVar12;
        uVar24 = (ulong)*(ushort *)(lVar22 + 0x12e);
        if (uVar24 != 0) {
          piVar25 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar25 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar17 = (undefined8 *)(lVar22 + (long)(*piVar25 + 1) * 0x10 + 0x138);
              goto LAB_031c2c34;
            }
            uVar24 = uVar24 - 1;
            piVar25 = piVar25 + 4;
          } while (uVar24 != 0);
        }
        puVar17 = (undefined8 *)FUN_01b81914(plVar12,System_Collections_IEnumerator_TypeInfo,1);
LAB_031c2c34:
        plVar18 = (long *)(*(code *)*puVar17)(plVar12,puVar17[1]);
        if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        lVar22 = *plVar18;
        bVar3 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if ((*(byte *)(lVar22 + 0x130) < bVar3) ||
           (*(System_Xml_XmlNode_c **)(*(long *)(lVar22 + 200) + (ulong)bVar3 * 8 + -8) !=
            System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64();
        }
        pSVar10 = (System_Xml_XmlAttributeCollection_o *)
                  (**(code **)(lVar22 + 0x238))(plVar18,*(undefined8 *)(lVar22 + 0x240));
        if (pSVar10 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar11 = System_Xml_XmlAttributeCollection__get_ItemOf
                            (pSVar10,StringLiteral_9327,(MethodInfo *)0x0);
        pSVar13 = EIABCPKDEBD__JPKEHIBGOEM(pSVar11,StringLiteral_1,(MethodInfo *)0x0);
        lVar22 = Method_System_Collections_Generic_List<string>_Add__;
        pSVar16 = (__this->fields).OBLNHNJPBOJ;
        if (pSVar16 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar15 = (pSVar16->fields)._items;
        (pSVar16->fields)._version = (pSVar16->fields)._version + 1;
        if (pSVar15 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar4 = (pSVar16->fields)._size;
        if (uVar4 < (uint)pSVar15->max_length) {
          (pSVar16->fields)._size = uVar4 + 1;
          pSVar15->m_Items[(int)uVar4] = pSVar13;
          thunk_FUN_01c20e04(pSVar15->m_Items + (int)uVar4);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar16,(Il2CppObject *)pSVar13,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
        }
      } while( true );
    }
    goto LAB_031c3720;
  }
  goto LAB_031c2d78;
  while( true ) {
    uVar24 = uVar24 - 1;
    piVar25 = piVar25 + 4;
    if (uVar24 == 0) break;
LAB_031c33c0:
    if (*(System_IDisposable_c **)(piVar25 + -2) == System_IDisposable_TypeInfo) {
      puVar17 = (undefined8 *)(lVar22 + (long)*piVar25 * 0x10 + 0x138);
      goto LAB_031c33f4;
    }
  }
LAB_031c33d8:
  puVar17 = (undefined8 *)FUN_01b81914(plVar12,System_IDisposable_TypeInfo,0);
LAB_031c33f4:
  (*(code *)*puVar17)(plVar12,puVar17[1]);
LAB_031c3400:
  pSVar9 = (__this->fields).super.PFONAMNDHOH;
  if (pSVar9 == (System_Xml_XmlNode_o *)0x0) goto LAB_031c3720;
  plVar12 = (long *)(*(pSVar9->klass->vtable)._51_get_Item.methodPtr)
                              (pSVar9,StringLiteral_7357,(pSVar9->klass->vtable)._51_get_Item.method
                              );
  if (plVar12 != (long *)0x0) {
    pSVar10 = (System_Xml_XmlAttributeCollection_o *)
              (**(code **)(*plVar12 + 0x238))(plVar12,*(undefined8 *)(*plVar12 + 0x240));
    if (pSVar10 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_031c3720;
    pSVar11 = System_Xml_XmlAttributeCollection__get_ItemOf
                        (pSVar10,StringLiteral_15021,(MethodInfo *)0x0);
    fVar26 = EIABCPKDEBD__GICIEKCGOHA(pSVar11,0.0,(MethodInfo *)0x0);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
              ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_a0,fVar26,
               (MethodInfo *)0x0);
    local_80.fakeValueActive = local_a0.fakeValueActive;
    local_80.inited = local_a0.inited;
    local_80._18_2_ = local_a0._18_2_;
    local_80.hiddenValueOldByte4.fields = local_a0.hiddenValueOldByte4.fields;
    local_80.fakeValue = local_a0.fakeValue;
    local_80.currentCryptoKey = local_a0.currentCryptoKey;
    local_80.hiddenValue = local_a0.hiddenValue;
    (__this->fields).CDDOJKNPKJN.fields.fakeValueActive = local_a0.fakeValueActive;
    (__this->fields).CDDOJKNPKJN.fields.inited = local_a0.inited;
    *(undefined2 *)&(__this->fields).CDDOJKNPKJN.fields.field_0x12 = local_a0._18_2_;
    (__this->fields).CDDOJKNPKJN.fields.hiddenValueOldByte4 =
         (CodeStage_AntiCheat_Common_ACTkByte4_o)local_a0.hiddenValueOldByte4.fields;
    (__this->fields).CDDOJKNPKJN.fields.fakeValue = local_a0.fakeValue;
    (__this->fields).CDDOJKNPKJN.fields.currentCryptoKey = local_a0.currentCryptoKey;
    (__this->fields).CDDOJKNPKJN.fields.hiddenValue = local_a0.hiddenValue;
    pSVar10 = (System_Xml_XmlAttributeCollection_o *)
              (**(code **)(*plVar12 + 0x238))(plVar12,*(undefined8 *)(*plVar12 + 0x240));
    if (pSVar10 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_031c3720;
    pSVar11 = System_Xml_XmlAttributeCollection__get_ItemOf
                        (pSVar10,StringLiteral_15134,(MethodInfo *)0x0);
    fVar26 = EIABCPKDEBD__GICIEKCGOHA(pSVar11,0.0,(MethodInfo *)0x0);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
              ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_c0,fVar26,
               (MethodInfo *)0x0);
    local_a0.fakeValueActive = local_c0.fakeValueActive;
    local_a0.inited = local_c0.inited;
    local_a0._18_2_ = local_c0._18_2_;
    local_a0.hiddenValueOldByte4.fields = local_c0.hiddenValueOldByte4.fields;
    local_a0.fakeValue = local_c0.fakeValue;
    local_a0.currentCryptoKey = local_c0.currentCryptoKey;
    local_a0.hiddenValue = local_c0.hiddenValue;
    (__this->fields).LHBNHDCJIIO.fields.fakeValueActive = local_c0.fakeValueActive;
    (__this->fields).LHBNHDCJIIO.fields.inited = local_c0.inited;
    *(undefined2 *)&(__this->fields).LHBNHDCJIIO.fields.field_0x12 = local_c0._18_2_;
    (__this->fields).LHBNHDCJIIO.fields.hiddenValueOldByte4 =
         (CodeStage_AntiCheat_Common_ACTkByte4_o)local_c0.hiddenValueOldByte4.fields;
    (__this->fields).LHBNHDCJIIO.fields.fakeValue = local_c0.fakeValue;
    (__this->fields).LHBNHDCJIIO.fields.currentCryptoKey = local_c0.currentCryptoKey;
    (__this->fields).LHBNHDCJIIO.fields.hiddenValue = local_c0.hiddenValue;
    pSVar10 = (System_Xml_XmlAttributeCollection_o *)
              (**(code **)(*plVar12 + 0x238))(plVar12,*(undefined8 *)(*plVar12 + 0x240));
    if (pSVar10 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_031c3720;
    pSVar11 = System_Xml_XmlAttributeCollection__get_ItemOf
                        (pSVar10,StringLiteral_15220,(MethodInfo *)0x0);
    fVar26 = EIABCPKDEBD__GICIEKCGOHA(pSVar11,0.0,(MethodInfo *)0x0);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
              ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_d8,fVar26,
               (MethodInfo *)0x0);
    local_c0.fakeValueActive = local_d8.fakeValueActive;
    local_c0.inited = local_d8.inited;
    local_c0._18_2_ = local_d8._18_2_;
    local_c0.hiddenValueOldByte4.fields = local_d8.hiddenValueOldByte4.fields;
    local_c0.fakeValue = local_d8.fakeValue;
    local_c0.currentCryptoKey = local_d8.currentCryptoKey;
    local_c0.hiddenValue = local_d8.hiddenValue;
    (__this->fields).NCFMAKPIDIG.fields.fakeValueActive = local_d8.fakeValueActive;
    (__this->fields).NCFMAKPIDIG.fields.inited = local_d8.inited;
    *(undefined2 *)&(__this->fields).NCFMAKPIDIG.fields.field_0x12 = local_d8._18_2_;
    (__this->fields).NCFMAKPIDIG.fields.hiddenValueOldByte4 =
         (CodeStage_AntiCheat_Common_ACTkByte4_o)local_d8.hiddenValueOldByte4.fields;
    (__this->fields).NCFMAKPIDIG.fields.fakeValue = local_d8.fakeValue;
    (__this->fields).NCFMAKPIDIG.fields.currentCryptoKey = local_d8.currentCryptoKey;
    (__this->fields).NCFMAKPIDIG.fields.hiddenValue = local_d8.hiddenValue;
  }
  pSVar9 = (__this->fields).super.PFONAMNDHOH;
  if (pSVar9 != (System_Xml_XmlNode_o *)0x0) {
    lVar22 = (*(pSVar9->klass->vtable)._51_get_Item.methodPtr)
                       (pSVar9,StringLiteral_4507,(pSVar9->klass->vtable)._51_get_Item.method);
    iVar6 = 0;
    if (lVar22 != 0) {
      pSVar9 = (__this->fields).super.PFONAMNDHOH;
      if (((pSVar9 == (System_Xml_XmlNode_o *)0x0) ||
          (plVar12 = (long *)(*(pSVar9->klass->vtable)._51_get_Item.methodPtr)
                                       (pSVar9,StringLiteral_4507,
                                        (pSVar9->klass->vtable)._51_get_Item.method),
          plVar12 == (long *)0x0)) ||
         (pSVar10 = (System_Xml_XmlAttributeCollection_o *)
                    (**(code **)(*plVar12 + 0x238))(plVar12,*(undefined8 *)(*plVar12 + 0x240)),
         pSVar10 == (System_Xml_XmlAttributeCollection_o *)0x0)) goto LAB_031c3720;
      pSVar11 = System_Xml_XmlAttributeCollection__get_ItemOf
                          (pSVar10,StringLiteral_13776,(MethodInfo *)0x0);
      iVar6 = EIABCPKDEBD__EHJNCGCICMP(pSVar11,0,(MethodInfo *)0x0);
    }
    CVar27 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
             CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(iVar6,(MethodInfo *)0x0);
    (__this->fields).OLEFLGBBOFK.fields = CVar27;
    pSVar9 = (__this->fields).super.PFONAMNDHOH;
    if (((pSVar9 != (System_Xml_XmlNode_o *)0x0) &&
        (pSVar9 = (System_Xml_XmlNode_o *)
                  (*(pSVar9->klass->vtable)._51_get_Item.methodPtr)
                            (pSVar9,StringLiteral_5058,(pSVar9->klass->vtable)._51_get_Item.method),
        pSVar9 != (System_Xml_XmlNode_o *)0x0)) &&
       (pSVar10 = (System_Xml_XmlAttributeCollection_o *)
                  (*(pSVar9->klass->vtable)._16_get_Attributes.methodPtr)
                            (pSVar9,(pSVar9->klass->vtable)._16_get_Attributes.method),
       pSVar10 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
      pSVar11 = System_Xml_XmlAttributeCollection__get_ItemOf
                          (pSVar10,StringLiteral_14694,(MethodInfo *)0x0);
      fVar26 = EIABCPKDEBD__GICIEKCGOHA(pSVar11,0.0,(MethodInfo *)0x0);
      CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_a0,fVar26,
                 (MethodInfo *)0x0);
      local_80.fakeValueActive = local_a0.fakeValueActive;
      local_80.inited = local_a0.inited;
      local_80._18_2_ = local_a0._18_2_;
      local_80.hiddenValueOldByte4.fields = local_a0.hiddenValueOldByte4.fields;
      local_80.fakeValue = local_a0.fakeValue;
      local_80.currentCryptoKey = local_a0.currentCryptoKey;
      local_80.hiddenValue = local_a0.hiddenValue;
      (__this->fields).LHBGKMGNOEP.fields.fakeValueActive = local_a0.fakeValueActive;
      (__this->fields).LHBGKMGNOEP.fields.inited = local_a0.inited;
      *(undefined2 *)&(__this->fields).LHBGKMGNOEP.fields.field_0x12 = local_a0._18_2_;
      (__this->fields).LHBGKMGNOEP.fields.hiddenValueOldByte4 =
           (CodeStage_AntiCheat_Common_ACTkByte4_o)local_a0.hiddenValueOldByte4.fields;
      (__this->fields).LHBGKMGNOEP.fields.fakeValue = local_a0.fakeValue;
      (__this->fields).LHBGKMGNOEP.fields.currentCryptoKey = local_a0.currentCryptoKey;
      (__this->fields).LHBGKMGNOEP.fields.hiddenValue = local_a0.hiddenValue;
      pSVar10 = (System_Xml_XmlAttributeCollection_o *)
                (*(pSVar9->klass->vtable)._16_get_Attributes.methodPtr)
                          (pSVar9,(pSVar9->klass->vtable)._16_get_Attributes.method);
      if (pSVar10 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar11 = System_Xml_XmlAttributeCollection__get_ItemOf
                            (pSVar10,StringLiteral_9529,(MethodInfo *)0x0);
        bVar5 = EIABCPKDEBD__FMBMNDIGLIG(pSVar11,false,(MethodInfo *)0x0);
        (__this->fields).MBACAJPGOCL = bVar5;
        pSVar10 = (System_Xml_XmlAttributeCollection_o *)
                  (*(pSVar9->klass->vtable)._16_get_Attributes.methodPtr)
                            (pSVar9,(pSVar9->klass->vtable)._16_get_Attributes.method);
        if (pSVar10 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar11 = System_Xml_XmlAttributeCollection__get_ItemOf
                              (pSVar10,StringLiteral_3532,(MethodInfo *)0x0);
          method_00 = (MethodInfo *)0x0;
          pSVar13 = EIABCPKDEBD__JPKEHIBGOEM(pSVar11,StringLiteral_1,(MethodInfo *)0x0);
          (__this->fields).AFBLIDFFBMK = pSVar13;
          thunk_FUN_01c20e04();
          MDAPDLLMOMF__NDOIJGMLKBM(__this,pSVar9,method_00);
          return;
        }
      }
    }
  }
  goto LAB_031c3720;
  while( true ) {
    uVar24 = uVar24 - 1;
    piVar25 = piVar25 + 4;
    if (uVar24 == 0) break;
LAB_031c2d34:
    if (*(System_IDisposable_c **)(piVar25 + -2) == System_IDisposable_TypeInfo) {
      puVar17 = (undefined8 *)(lVar22 + (long)*piVar25 * 0x10 + 0x138);
      goto LAB_031c2d68;
    }
  }
LAB_031c2d4c:
  puVar17 = (undefined8 *)FUN_01b81914(plVar12,System_IDisposable_TypeInfo,0);
LAB_031c2d68:
  (*(code *)*puVar17)(plVar12,puVar17[1]);
LAB_031c2d78:
  pSVar16 = (__this->fields).OBLNHNJPBOJ;
  if (pSVar16 != (System_Collections_Generic_List_string__o *)0x0) {
    pSVar9 = (__this->fields).super.PFONAMNDHOH;
    (__this->fields).FHHPDAPFIOJ = 0 < (pSVar16->fields)._size;
    if ((pSVar9 != (System_Xml_XmlNode_o *)0x0) &&
       (plVar12 = (long *)(*(pSVar9->klass->vtable)._13_get_ChildNodes.methodPtr)
                                    (pSVar9,(pSVar9->klass->vtable)._13_get_ChildNodes.method),
       plVar12 != (long *)0x0)) {
      plVar12 = (long *)(**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pCVar1 = &(__this->fields).super.IELLEFEFFJD;
      pCVar2 = &(__this->fields).super.DMNCBADHGJP;
      do {
        lVar22 = *plVar12;
        uVar24 = (ulong)*(ushort *)(lVar22 + 0x12e);
        if (uVar24 != 0) {
          piVar25 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar25 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar17 = (undefined8 *)(lVar22 + (long)*piVar25 * 0x10 + 0x138);
              goto LAB_031c2e1c;
            }
            uVar24 = uVar24 - 1;
            piVar25 = piVar25 + 4;
          } while (uVar24 != 0);
        }
        puVar17 = (undefined8 *)FUN_01b81914(plVar12,System_Collections_IEnumerator_TypeInfo,0);
LAB_031c2e1c:
        uVar24 = (*(code *)*puVar17)(plVar12,puVar17[1]);
        if ((uVar24 & 1) == 0) {
          plVar12 = (long *)thunk_FUN_01bda71c(plVar12,System_IDisposable_TypeInfo);
          if (plVar12 == (long *)0x0) goto LAB_031c3400;
          lVar22 = *plVar12;
          uVar24 = (ulong)*(ushort *)(lVar22 + 0x12e);
          if (uVar24 == 0) goto LAB_031c33d8;
          piVar25 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
          goto LAB_031c33c0;
        }
        lVar22 = *plVar12;
        uVar24 = (ulong)*(ushort *)(lVar22 + 0x12e);
        if (uVar24 != 0) {
          piVar25 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar25 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar17 = (undefined8 *)(lVar22 + (long)(*piVar25 + 1) * 0x10 + 0x138);
              goto LAB_031c2e7c;
            }
            uVar24 = uVar24 - 1;
            piVar25 = piVar25 + 4;
          } while (uVar24 != 0);
        }
        puVar17 = (undefined8 *)FUN_01b81914(plVar12,System_Collections_IEnumerator_TypeInfo,1);
LAB_031c2e7c:
        plVar18 = (long *)(*(code *)*puVar17)(plVar12,puVar17[1]);
        if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar3 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if ((*(byte *)(*plVar18 + 0x130) < bVar3) ||
           (*(System_Xml_XmlNode_c **)(*(long *)(*plVar18 + 200) + (ulong)bVar3 * 8 + -8) !=
            System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(plVar18);
        }
        pSVar13 = (System_String_o *)
                  (**(code **)(*plVar18 + 0x1b8))(plVar18,*(undefined8 *)(*plVar18 + 0x1c0));
        bVar5 = System_String__op_Equality(pSVar13,StringLiteral_7119,(MethodInfo *)0x0);
        if (bVar5) {
          pSVar10 = (System_Xml_XmlAttributeCollection_o *)
                    (**(code **)(*plVar18 + 0x238))(plVar18,*(undefined8 *)(*plVar18 + 0x240));
          if (pSVar10 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar11 = System_Xml_XmlAttributeCollection__get_ItemOf
                              (pSVar10,StringLiteral_9327,(MethodInfo *)0x0);
          pSVar13 = EIABCPKDEBD__JPKEHIBGOEM(pSVar11,StringLiteral_1,(MethodInfo *)0x0);
          pSVar10 = (System_Xml_XmlAttributeCollection_o *)
                    (**(code **)(*plVar18 + 0x238))(plVar18,*(undefined8 *)(*plVar18 + 0x240));
          if (pSVar10 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar11 = System_Xml_XmlAttributeCollection__get_ItemOf
                              (pSVar10,StringLiteral_12346,(MethodInfo *)0x0);
          iVar6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                             (__this->fields).super.IELLEFEFFJD.fields,(MethodInfo *)0x0);
          iVar6 = EIABCPKDEBD__EHJNCGCICMP(pSVar11,iVar6,(MethodInfo *)0x0);
          pSVar10 = (System_Xml_XmlAttributeCollection_o *)
                    (**(code **)(*plVar18 + 0x238))(plVar18,*(undefined8 *)(*plVar18 + 0x240));
          if (pSVar10 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar11 = System_Xml_XmlAttributeCollection__get_ItemOf
                              (pSVar10,StringLiteral_5717,(MethodInfo *)0x0);
          iVar7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                             (__this->fields).super.DMNCBADHGJP.fields,(MethodInfo *)0x0);
          iVar7 = EIABCPKDEBD__EHJNCGCICMP(pSVar11,iVar7,(MethodInfo *)0x0);
          iVar8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                             (__this->fields).super.IELLEFEFFJD.fields,(MethodInfo *)0x0);
          if ((iVar6 < iVar8) ||
             (iVar8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                                ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                                 (__this->fields).super.DMNCBADHGJP.fields,(MethodInfo *)0x0),
             iVar8 < iVar6)) {
            pSVar19 = (System_Object_array *)FUN_01bab718(object___TypeInfo,4);
            local_c0.currentCryptoKey = iVar6;
            pIVar20 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_c0);
            if (pSVar19 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            if ((pIVar20 != (Il2CppObject *)0x0) &&
               (lVar22 = thunk_FUN_01bda71c(pIVar20,(((pSVar19->obj).klass)->_1).element_class),
               lVar22 == 0)) {
              uVar21 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
              FUN_01bab798(uVar21,0);
            }
            if ((int)pSVar19->max_length == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            pSVar19->m_Items[0] = pIVar20;
            thunk_FUN_01c20e04(pSVar19->m_Items,pIVar20);
            local_80._8_8_ = *(undefined8 *)&(__this->fields).super.IELLEFEFFJD.fields.fakeValue;
            local_80.currentCryptoKey = (pCVar1->fields).currentCryptoKey;
            local_80.hiddenValue = (pCVar1->fields).hiddenValue;
            pIVar20 = (Il2CppObject *)
                      thunk_FUN_01bda448(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                         &local_80);
            if ((pIVar20 != (Il2CppObject *)0x0) &&
               (lVar22 = thunk_FUN_01bda71c(pIVar20,(((pSVar19->obj).klass)->_1).element_class),
               lVar22 == 0)) {
              uVar21 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
              FUN_01bab798(uVar21,0);
            }
            if ((uint)pSVar19->max_length < 2) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            pSVar19->m_Items[1] = pIVar20;
            thunk_FUN_01c20e04(pSVar19->m_Items + 1,pIVar20);
            local_a0._8_8_ = *(undefined8 *)&(__this->fields).super.DMNCBADHGJP.fields.fakeValue;
            local_a0.currentCryptoKey = (pCVar2->fields).currentCryptoKey;
            local_a0.hiddenValue = (pCVar2->fields).hiddenValue;
            pIVar20 = (Il2CppObject *)
                      thunk_FUN_01bda448(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                         &local_a0);
            if ((pIVar20 != (Il2CppObject *)0x0) &&
               (lVar22 = thunk_FUN_01bda71c(pIVar20,(((pSVar19->obj).klass)->_1).element_class),
               lVar22 == 0)) {
              uVar21 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
              FUN_01bab798(uVar21,0);
            }
            if ((uint)pSVar19->max_length < 3) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            pSVar19->m_Items[2] = pIVar20;
            thunk_FUN_01c20e04(pSVar19->m_Items + 2,pIVar20);
            if ((pSVar13 != (System_String_o *)0x0) &&
               (lVar22 = thunk_FUN_01bda71c(pSVar13,(((pSVar19->obj).klass)->_1).element_class),
               lVar22 == 0)) {
              uVar21 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
              FUN_01bab798(uVar21,0);
            }
            if ((uint)pSVar19->max_length < 4) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            pSVar19->m_Items[3] = (Il2CppObject *)pSVar13;
            thunk_FUN_01c20e04(pSVar19->m_Items + 3,pSVar13);
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            UnityEngine_Debug__LogErrorFormat(StringLiteral_12363,pSVar19,(MethodInfo *)0x0);
          }
          iVar8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                             (__this->fields).super.IELLEFEFFJD.fields,(MethodInfo *)0x0);
          if ((iVar7 < iVar8) ||
             (iVar8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                                ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                                 (__this->fields).super.DMNCBADHGJP.fields,(MethodInfo *)0x0),
             iVar8 < iVar7)) {
            pSVar19 = (System_Object_array *)FUN_01bab718(object___TypeInfo,4);
            local_c0.currentCryptoKey = iVar7;
            pIVar20 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_c0);
            if (pSVar19 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            if ((pIVar20 != (Il2CppObject *)0x0) &&
               (lVar22 = thunk_FUN_01bda71c(pIVar20,(((pSVar19->obj).klass)->_1).element_class),
               lVar22 == 0)) {
              uVar21 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
              FUN_01bab798(uVar21,0);
            }
            if ((int)pSVar19->max_length == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            pSVar19->m_Items[0] = pIVar20;
            thunk_FUN_01c20e04(pSVar19->m_Items,pIVar20);
            local_80._8_8_ = *(undefined8 *)&(__this->fields).super.IELLEFEFFJD.fields.fakeValue;
            local_80.currentCryptoKey = (pCVar1->fields).currentCryptoKey;
            local_80.hiddenValue = (pCVar1->fields).hiddenValue;
            pIVar20 = (Il2CppObject *)
                      thunk_FUN_01bda448(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                         &local_80);
            if ((pIVar20 != (Il2CppObject *)0x0) &&
               (lVar22 = thunk_FUN_01bda71c(pIVar20,(((pSVar19->obj).klass)->_1).element_class),
               lVar22 == 0)) {
              uVar21 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
              FUN_01bab798(uVar21,0);
            }
            if ((uint)pSVar19->max_length < 2) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            pSVar19->m_Items[1] = pIVar20;
            thunk_FUN_01c20e04(pSVar19->m_Items + 1,pIVar20);
            local_a0._8_8_ = *(undefined8 *)&(__this->fields).super.DMNCBADHGJP.fields.fakeValue;
            local_a0.currentCryptoKey = (pCVar2->fields).currentCryptoKey;
            local_a0.hiddenValue = (pCVar2->fields).hiddenValue;
            pIVar20 = (Il2CppObject *)
                      thunk_FUN_01bda448(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                         &local_a0);
            if ((pIVar20 != (Il2CppObject *)0x0) &&
               (lVar22 = thunk_FUN_01bda71c(pIVar20,(((pSVar19->obj).klass)->_1).element_class),
               lVar22 == 0)) {
              uVar21 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
              FUN_01bab798(uVar21,0);
            }
            if ((uint)pSVar19->max_length < 3) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            pSVar19->m_Items[2] = pIVar20;
            thunk_FUN_01c20e04(pSVar19->m_Items + 2,pIVar20);
            if ((pSVar13 != (System_String_o *)0x0) &&
               (lVar22 = thunk_FUN_01bda71c(pSVar13,(((pSVar19->obj).klass)->_1).element_class),
               lVar22 == 0)) {
              uVar21 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
              FUN_01bab798(uVar21,0);
            }
            if ((uint)pSVar19->max_length < 4) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            pSVar19->m_Items[3] = (Il2CppObject *)pSVar13;
            thunk_FUN_01c20e04(pSVar19->m_Items + 3,pSVar13);
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            UnityEngine_Debug__LogErrorFormat(StringLiteral_5737,pSVar19,(MethodInfo *)0x0);
          }
          __this_00 = (MDAPDLLMOMF_DOPLCEEGPAO_o *)
                      thunk_FUN_01bda818(MDAPDLLMOMF_DOPLCEEGPAO_TypeInfo);
          MDAPDLLMOMF_DOPLCEEGPAO___ctor(__this_00,pSVar13,iVar6,iVar7,in_x4);
          lVar22 = Method_System_Collections_Generic_List<MDAPDLLMOMF_DOPLCEEGPAO>_Add__;
          __this_01 = (__this->fields).FMECFCOEJCJ;
          if (__this_01 == (System_Collections_Generic_List_MDAPDLLMOMF_DOPLCEEGPAO__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pMVar23 = (__this_01->fields)._items;
          (__this_01->fields)._version = (__this_01->fields)._version + 1;
          if (pMVar23 == (MDAPDLLMOMF_DOPLCEEGPAO_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar4 = (__this_01->fields)._size;
          if (uVar4 < (uint)pMVar23->max_length) {
            (__this_01->fields)._size = uVar4 + 1;
            pMVar23->m_Items[(int)uVar4] = __this_00;
            thunk_FUN_01c20e04(pMVar23->m_Items + (int)uVar4,__this_00);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_01,
                       (Il2CppObject *)__this_00,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
          }
        }
      } while( true );
    }
  }
LAB_031c3720:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

