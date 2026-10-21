// HEFOANCOHDC$$FAOBHLCDKJI @ RVA 0x3422590

/* WARNING: Removing unreachable block (ram,0x035229dc) */
/* WARNING: Removing unreachable block (ram,0x03522b64) */

HEFOANCOHDC_o *
HEFOANCOHDC__FAOBHLCDKJI
          (HEFOANCOHDC_o *__this,System_Xml_XmlNode_o *GHKNNCLBPEO,System_Xml_XmlNode_o *KDMPIDEEPMP
          ,MethodInfo *method)

{
  byte bVar1;
  FOKJBDHLIMG_o *__this_00;
  HEFOANCOHDC_o *pHVar2;
  System_Xml_XmlDocument_o *__this_01;
  long lVar3;
  long *plVar4;
  System_Xml_XmlElement_o *pSVar5;
  undefined8 *puVar6;
  long *plVar7;
  System_String_o *name;
  undefined8 uVar8;
  System_Xml_XmlAttributeCollection_o *pSVar9;
  System_Xml_XmlAttribute_o *node;
  System_Xml_XmlDocument_o *__this_02;
  System_Xml_XmlNode_o **ppSVar10;
  System_Xml_XmlDocument_o **ppSVar11;
  System_Xml_XmlNode_o *pSVar12;
  MethodInfo *method_00;
  ulong uVar13;
  int *piVar14;
  undefined1 auVar15 [16];
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields CVar16;
  
  if ((DAT_045680e8 & 1) == 0) {
    FUN_01bab630(&HEFOANCOHDC_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&System_Xml_XmlAttribute_TypeInfo);
    FUN_01bab630(&System_Xml_XmlDocument_TypeInfo);
    FUN_01bab630(&StringLiteral_11876);
    FUN_01bab630(&StringLiteral_11030);
    FUN_01bab630(&StringLiteral_10213);
    DAT_045680e8 = 1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = MGNPHCAAEIO_TypeInfo->static_fields->DDMMFEDBMCC;
  if (__this_00 == (FOKJBDHLIMG_o *)0x0) goto LAB_03522b5c;
  pHVar2 = FOKJBDHLIMG__JMMDGEOBMOC(__this_00,(__this->fields).JIJLBFGKNJK,(MethodInfo *)0x0);
  __this_01 = (System_Xml_XmlDocument_o *)thunk_FUN_01bda818(System_Xml_XmlDocument_TypeInfo);
  System_Xml_XmlDocument___ctor(__this_01,(MethodInfo *)0x0);
  if ((pHVar2 != (HEFOANCOHDC_o *)0x0) &&
     (pSVar12 = (pHVar2->fields).DCDJOJGHJEB, pSVar12 != (System_Xml_XmlNode_o *)0x0)) {
    EIABCPKDEBD__DGPOFACHGMP((System_Xml_XmlNode_o *)__this_01,pSVar12,(MethodInfo *)0x0);
  }
  if (GHKNNCLBPEO != (System_Xml_XmlNode_o *)0x0) {
    if (__this_01 == (System_Xml_XmlDocument_o *)0x0) goto LAB_03522b5c;
    lVar3 = (*(__this_01->klass->vtable)._51_get_Item.methodPtr)
                      (__this_01,StringLiteral_10213,(__this_01->klass->vtable)._51_get_Item.method)
    ;
    if (lVar3 == 0) {
LAB_03522710:
      lVar3 = (*(__this_01->klass->vtable)._51_get_Item.methodPtr)
                        (__this_01,StringLiteral_10213,
                         (__this_01->klass->vtable)._51_get_Item.method);
      if (lVar3 == 0) {
        EIABCPKDEBD__BHPIHHJHELJ(__this_01,StringLiteral_10213,(MethodInfo *)0x0);
      }
      pSVar12 = (System_Xml_XmlNode_o *)
                (*(__this_01->klass->vtable)._51_get_Item.methodPtr)
                          (__this_01,StringLiteral_10213,
                           (__this_01->klass->vtable)._51_get_Item.method);
      pSVar5 = EIABCPKDEBD__BHPIHHJHELJ(pSVar12,StringLiteral_11876,(MethodInfo *)0x0);
    }
    else {
      plVar4 = (long *)(*(__this_01->klass->vtable)._51_get_Item.methodPtr)
                                 (__this_01,StringLiteral_10213,
                                  (__this_01->klass->vtable)._51_get_Item.method);
      if (plVar4 == (long *)0x0) goto LAB_03522b5c;
      pSVar5 = (System_Xml_XmlElement_o *)
               (**(code **)(*plVar4 + 0x468))
                         (plVar4,StringLiteral_11876,*(undefined8 *)(*plVar4 + 0x470));
      if (pSVar5 == (System_Xml_XmlElement_o *)0x0) goto LAB_03522710;
    }
    plVar4 = (long *)(*(GHKNNCLBPEO->klass->vtable)._16_get_Attributes.methodPtr)
                               (GHKNNCLBPEO,(GHKNNCLBPEO->klass->vtable)._16_get_Attributes.method);
    if (plVar4 != (long *)0x0) {
      plVar4 = (long *)(**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar3 = *plVar4;
        uVar13 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar14 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar6 = (undefined8 *)(lVar3 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_035227f4;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar6 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_035227f4:
        uVar13 = (*(code *)*puVar6)(plVar4,puVar6[1]);
        if ((uVar13 & 1) == 0) {
          plVar4 = (long *)thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
          if (plVar4 == (long *)0x0) goto LAB_035229e0;
          lVar3 = *plVar4;
          uVar13 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar13 == 0) goto LAB_035229a8;
          piVar14 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          goto LAB_03522990;
        }
        lVar3 = *plVar4;
        uVar13 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar14 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar6 = (undefined8 *)(lVar3 + (long)(*piVar14 + 1) * 0x10 + 0x138);
              goto LAB_03522854;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar6 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,1);
LAB_03522854:
        plVar7 = (long *)(*(code *)*puVar6)(plVar4,puVar6[1]);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar1 = (System_Xml_XmlAttribute_TypeInfo->_2).naturalAligment;
        if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
           (*(System_Xml_XmlAttribute_c **)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
            System_Xml_XmlAttribute_TypeInfo)) {
                    /* try { // try from 03522b3c to 03622b47 has its CatchHandler @ 035229f4 */
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(plVar7);
        }
        name = (System_String_o *)
               (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
        uVar8 = (**(code **)(*plVar7 + 0x1c8))(plVar7,*(undefined8 *)(*plVar7 + 0x1d0));
        if (pSVar5 == (System_Xml_XmlElement_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                 (*(pSVar5->klass->vtable)._16_get_Attributes.methodPtr)
                           (pSVar5,(pSVar5->klass->vtable)._16_get_Attributes.method);
        if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03522b38 with catch @ 03522b44
                        */
          FUN_01bab8c8();
        }
        node = System_Xml_XmlAttributeCollection__get_ItemOf(pSVar9,name,(MethodInfo *)0x0);
        if (node == (System_Xml_XmlAttribute_o *)0x0) {
          __this_02 = (System_Xml_XmlDocument_o *)
                      (*(pSVar5->klass->vtable)._17_get_OwnerDocument.methodPtr)
                                (pSVar5,(pSVar5->klass->vtable)._17_get_OwnerDocument.method);
          if (__this_02 == (System_Xml_XmlDocument_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          node = System_Xml_XmlDocument__CreateAttribute(__this_02,name,(MethodInfo *)0x0);
          pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                   (*(pSVar5->klass->vtable)._16_get_Attributes.methodPtr)
                             (pSVar5,(pSVar5->klass->vtable)._16_get_Attributes.method);
          if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          System_Xml_XmlAttributeCollection__Append(pSVar9,node,(MethodInfo *)0x0);
          if (node == (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
        }
        (*(node->klass->vtable)._10_set_Value.methodPtr)
                  (node,uVar8,(node->klass->vtable)._10_set_Value.method);
      } while( true );
    }
    goto LAB_03522b5c;
  }
  goto LAB_035229e0;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_03522990:
    if (*(System_IDisposable_c **)(piVar14 + -2) == System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar3 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_035229c4;
    }
  }
LAB_035229a8:
  puVar6 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_035229c4:
  (*(code *)*puVar6)(plVar4,puVar6[1]);
LAB_035229e0:
  if (KDMPIDEEPMP != (System_Xml_XmlNode_o *)0x0) {
    if (__this_01 == (System_Xml_XmlDocument_o *)0x0) goto LAB_03522b5c;
                    /* try { // try from 035229f4 to 03622a57 has its CatchHandler @ 035229f4
                       catch() { ... } // from try @ 035229f4 with catch @ 035229f4
                       catch() { ... } // from try @ 03522a8c with catch @ 035229f4
                       catch() { ... } // from try @ 03522ad8 with catch @ 035229f4
                       catch() { ... } // from try @ 03522b3c with catch @ 035229f4 */
    lVar3 = (*(__this_01->klass->vtable)._51_get_Item.methodPtr)
                      (__this_01,StringLiteral_10213,(__this_01->klass->vtable)._51_get_Item.method)
    ;
    if (lVar3 != 0) {
      plVar4 = (long *)(*(__this_01->klass->vtable)._51_get_Item.methodPtr)
                                 (__this_01,StringLiteral_10213,
                                  (__this_01->klass->vtable)._51_get_Item.method);
      if (plVar4 == (long *)0x0) goto LAB_03522b5c;
      lVar3 = (**(code **)(*plVar4 + 0x468))
                        (plVar4,StringLiteral_11030,*(undefined8 *)(*plVar4 + 0x470));
      if (lVar3 != 0) goto LAB_03522a90;
    }
    lVar3 = (*(__this_01->klass->vtable)._51_get_Item.methodPtr)
                      (__this_01,StringLiteral_10213,(__this_01->klass->vtable)._51_get_Item.method)
    ;
                    /* try { // try from 03522a58 to 03622a5f has its CatchHandler @ 03522aa8 */
    if (lVar3 == 0) {
                    /* try { // try from 03522a60 to 03622a67 has its CatchHandler @ 03522aa4 */
      EIABCPKDEBD__BHPIHHJHELJ(__this_01,StringLiteral_10213,(MethodInfo *)0x0);
    }
                    /* try { // try from 03522a6c to 03622a73 has its CatchHandler @ 03522a9c */
                    /* try { // try from 03522a74 to 03622a8b has its CatchHandler @ 03522aa0 */
    pSVar12 = (System_Xml_XmlNode_o *)
              (*(__this_01->klass->vtable)._51_get_Item.methodPtr)
                        (__this_01,StringLiteral_10213,
                         (__this_01->klass->vtable)._51_get_Item.method);
                    /* try { // try from 03522a8c to 03622abf has its CatchHandler @ 035229f4 */
    EIABCPKDEBD__DGPOFACHGMP(pSVar12,KDMPIDEEPMP,(MethodInfo *)0x0);
  }
LAB_03522a90:
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03522a6c with catch @ 03522a9c
                        */
  auVar15 = thunk_FUN_01bda818(HEFOANCOHDC_TypeInfo);
  pHVar2 = auVar15._0_8_;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03522a74 with catch @ 03522aa0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03522a60 with catch @ 03522aa4
                        */
  HEFOANCOHDC___ctor(pHVar2,auVar15._8_8_);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03522a58 with catch @ 03522aa8
                        */
  if (__this_01 != (System_Xml_XmlDocument_o *)0x0) {
    method_00 = (__this_01->klass->vtable)._51_get_Item.method;
                    /* try { // try from 03522ac0 to 03622ad7 has its CatchHandler @ 03522b34 */
    pSVar12 = (System_Xml_XmlNode_o *)
              (*(__this_01->klass->vtable)._51_get_Item.methodPtr)(__this_01,StringLiteral_10213);
    if (pSVar12 == (System_Xml_XmlNode_o *)0x0) {
      if (pHVar2 != (HEFOANCOHDC_o *)0x0) goto LAB_03522ae0;
    }
    else if (pHVar2 != (HEFOANCOHDC_o *)0x0) {
      HEFOANCOHDC__HNIHOIAMDPC(pHVar2,pSVar12,method_00);
                    /* try { // try from 03522ad8 to 03622b23 has its CatchHandler @ 035229f4 */
LAB_03522ae0:
      (pHVar2->fields).AEIJFFBOBCP = (__this->fields).AEIJFFBOBCP;
      CVar16 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields)
               CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO(true,(MethodInfo *)0x0);
      (pHVar2->fields).JFMAEFOHLDF.fields = CVar16;
      ppSVar10 = &(pHVar2->fields).DCDJOJGHJEB;
      *ppSVar10 = (System_Xml_XmlNode_o *)0x0;
      thunk_FUN_01c20e04(ppSVar10,0);
      ppSVar11 = &(pHVar2->fields).DHNEDFGMFGM;
      *ppSVar11 = (System_Xml_XmlDocument_o *)0x0;
      thunk_FUN_01c20e04(ppSVar11,0);
                    /* try { // try from 03522b24 to 03622b33 has its CatchHandler @ 03522b34 */
                    /* catch() { ... } // from try @ 03522ac0 with catch @ 03522b34
                       catch() { ... } // from try @ 03522b24 with catch @ 03522b34 */
                    /* try { // try from 03522b38 to 03622b3b has its CatchHandler @ 03522b44 */
      return pHVar2;
    }
  }
LAB_03522b5c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

