// LEGDPJHPEOB$$HNIHOIAMDPC @ RVA 0x3544B20

void LEGDPJHPEOB__HNIHOIAMDPC
               (LEGDPJHPEOB_o *__this,System_Xml_XmlNode_o *NHMPCKIPOJE,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  int iVar3;
  System_Xml_XmlAttributeCollection_o *pSVar4;
  System_Xml_XmlAttribute_o *pSVar5;
  System_String_o *pSVar6;
  long *plVar7;
  MethodInfo *method_00;
  System_Xml_XmlNode_c *pSVar8;
  System_String_o **ppSVar9;
  undefined1 auVar10 [16];
  
                    /* try { // try from 03644b28 to 03744b53 has its CatchHandler @ 03645d3c */
  if ((DAT_04568b10 & 1) == 0) {
    FUN_01bab630(&StringLiteral_14733);
    FUN_01bab630(&StringLiteral_4202);
    FUN_01bab630(&StringLiteral_14734);
    FUN_01bab630(&StringLiteral_4535);
    FUN_01bab630(&StringLiteral_14694);
    FUN_01bab630(&StringLiteral_13991);
    FUN_01bab630(&StringLiteral_9577);
                    /* try { // try from 03644b9c to 03744ba3 has its CatchHandler @ 03645d1c */
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_1606);
                    /* try { // try from 03644bb4 to 03744bbb has its CatchHandler @ 03645d30 */
    FUN_01bab630(&StringLiteral_14775);
    DAT_04568b10 = 1;
  }
                    /* try { // try from 03644bd0 to 03744bd7 has its CatchHandler @ 03645d34 */
  if ((NHMPCKIPOJE != (System_Xml_XmlNode_o *)0x0) &&
     (pSVar4 = (System_Xml_XmlAttributeCollection_o *)
               (*(NHMPCKIPOJE->klass->vtable)._16_get_Attributes.methodPtr)
                         (NHMPCKIPOJE,(NHMPCKIPOJE->klass->vtable)._16_get_Attributes.method),
     pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
                    /* try { // try from 03644be8 to 03744bef has its CatchHandler @ 03645d14 */
    pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar4,StringLiteral_9577,(MethodInfo *)0x0);
                    /* try { // try from 03644bf8 to 03744bff has its CatchHandler @ 03645d2c */
    bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar5,false,(MethodInfo *)0x0);
                    /* try { // try from 03644c00 to 03744c1f has its CatchHandler @ 03645d38 */
    (__this->fields).CKPHGNCGNHK = bVar1;
    auVar10 = (*(NHMPCKIPOJE->klass->vtable)._8_unknown.methodPtr)
                        (NHMPCKIPOJE,(NHMPCKIPOJE->klass->vtable)._8_unknown.method);
    iVar2 = LEGDPJHPEOB__EOGEJOBHJMC(auVar10._0_8_,auVar10._8_8_);
    (__this->fields).ACCIHBHMFPN = iVar2;
                    /* try { // try from 03644c20 to 03744c27 has its CatchHandler @ 03645d28 */
    pSVar4 = (System_Xml_XmlAttributeCollection_o *)
             (*(NHMPCKIPOJE->klass->vtable)._16_get_Attributes.methodPtr)
                       (NHMPCKIPOJE,(NHMPCKIPOJE->klass->vtable)._16_get_Attributes.method);
    if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 03644c38 to 03744c3f has its CatchHandler @ 03645d04 */
      pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar4,StringLiteral_13991,(MethodInfo *)0x0);
                    /* try { // try from 03644c50 to 03744c57 has its CatchHandler @ 03645d00 */
                    /* try { // try from 03644c58 to 03744c77 has its CatchHandler @ 03645d10 */
      pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,StringLiteral_1,(MethodInfo *)0x0);
      iVar2 = LEGDPJHPEOB__PNKIKHNEDGH(pSVar6,method_00);
      (__this->fields).HJBFKFHHAEO = iVar2;
      (__this->fields).LDNECFGEICA = 0;
                    /* try { // try from 03644c78 to 03744c7f has its CatchHandler @ 03645d0c */
      pSVar4 = (System_Xml_XmlAttributeCollection_o *)
               (*(NHMPCKIPOJE->klass->vtable)._16_get_Attributes.methodPtr)
                         (NHMPCKIPOJE,(NHMPCKIPOJE->klass->vtable)._16_get_Attributes.method);
      if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar4,StringLiteral_4535,(MethodInfo *)0x0);
                    /* try { // try from 03644ca0 to 03744cab has its CatchHandler @ 03645a98 */
        pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,StringLiteral_1,(MethodInfo *)0x0);
        bVar1 = System_String__op_Equality(pSVar6,StringLiteral_14775,(MethodInfo *)0x0);
        if (bVar1) {
                    /* try { // try from 03644cb8 to 03744ccb has its CatchHandler @ 03645c58 */
          (__this->fields).LDNECFGEICA = 1;
        }
        if ((__this->fields).ACCIHBHMFPN - 8U < 3) {
                    /* try { // try from 03644cd8 to 03744ce7 has its CatchHandler @ 03645cfc */
          pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                   (*(NHMPCKIPOJE->klass->vtable)._16_get_Attributes.methodPtr)
                             (NHMPCKIPOJE,(NHMPCKIPOJE->klass->vtable)._16_get_Attributes.method);
          if (pSVar4 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03644eec;
                    /* try { // try from 03644cf4 to 03744cfb has its CatchHandler @ 03645bd4 */
          pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar4,StringLiteral_4202,(MethodInfo *)0x0);
                    /* try { // try from 03644d08 to 03744d0f has its CatchHandler @ 03645bec */
          pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,StringLiteral_1606,(MethodInfo *)0x0);
          bVar1 = System_String__op_Equality(pSVar6,StringLiteral_1606,(MethodInfo *)0x0);
                    /* try { // try from 03644d20 to 03744d27 has its CatchHandler @ 03645bf8 */
          (__this->fields).ODLEBGINGIL = bVar1;
        }
                    /* try { // try from 03644d28 to 03744d33 has its CatchHandler @ 03645ba8 */
        if ((__this->fields).HJBFKFHHAEO == 0) {
          auVar10 = (*(NHMPCKIPOJE->klass->vtable)._8_unknown.methodPtr)
                              (NHMPCKIPOJE,(NHMPCKIPOJE->klass->vtable)._8_unknown.method);
          iVar2 = LEGDPJHPEOB__PNKIKHNEDGH(auVar10._0_8_,auVar10._8_8_);
          (__this->fields).HJBFKFHHAEO = iVar2;
        }
                    /* try { // try from 03644d44 to 03744d4b has its CatchHandler @ 03645bb0 */
        iVar3 = (__this->fields).ACCIHBHMFPN;
        pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                 (*(NHMPCKIPOJE->klass->vtable)._16_get_Attributes.methodPtr)
                           (NHMPCKIPOJE,(NHMPCKIPOJE->klass->vtable)._16_get_Attributes.method);
                    /* try { // try from 03644d5c to 03744d63 has its CatchHandler @ 03645ba4 */
        if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          if (iVar3 == 7) {
                    /* try { // try from 03644d68 to 03744d7f has its CatchHandler @ 03645cf4 */
            pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar4,StringLiteral_14694,(MethodInfo *)0x0);
            pSVar8 = NHMPCKIPOJE->klass;
            if (pSVar5 == (System_Xml_XmlAttribute_o *)0x0) {
                    /* try { // try from 03644e74 to 03744e7b has its CatchHandler @ 03645bb8 */
                    /* try { // try from 03644e7c to 03744e87 has its CatchHandler @ 03645bd8 */
              plVar7 = (long *)(*(pSVar8->vtable)._13_get_ChildNodes.methodPtr)
                                         (NHMPCKIPOJE,(pSVar8->vtable)._13_get_ChildNodes.method);
              if (plVar7 == (long *)0x0) goto LAB_03644eec;
                    /* try { // try from 03644e88 to 03744e8f has its CatchHandler @ 03645c0c */
              iVar3 = (**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(*plVar7 + 0x1b0));
              if (iVar3 != 1) {
                    /* try { // try from 03644ee8 to 03744eef has its CatchHandler @ 03645bf0 */
                return;
              }
                    /* try { // try from 03644ea4 to 03744eab has its CatchHandler @ 03645bcc */
              plVar7 = (long *)(*(NHMPCKIPOJE->klass->vtable)._18_get_FirstChild.methodPtr)
                                         (NHMPCKIPOJE,
                                          (NHMPCKIPOJE->klass->vtable)._18_get_FirstChild.method);
              if (plVar7 == (long *)0x0) goto LAB_03644eec;
              iVar3 = (**(code **)(*plVar7 + 0x1e8))(plVar7,*(undefined8 *)(*plVar7 + 0x1f0));
                    /* try { // try from 03644ebc to 03744ec3 has its CatchHandler @ 03645c04 */
              if (iVar3 != 3) {
                return;
              }
                    /* try { // try from 03644ec4 to 03744ecf has its CatchHandler @ 03645be0 */
              pSVar6 = (System_String_o *)
                       (*(NHMPCKIPOJE->klass->vtable)._41_get_InnerText.methodPtr)
                                 (NHMPCKIPOJE,(NHMPCKIPOJE->klass->vtable)._41_get_InnerText.method)
              ;
            }
            else {
                    /* try { // try from 03644d8c to 03744d93 has its CatchHandler @ 03645bc8 */
              pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                       (*(pSVar8->vtable)._16_get_Attributes.methodPtr)
                                 (NHMPCKIPOJE,(pSVar8->vtable)._16_get_Attributes.method);
              if (pSVar4 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03644eec;
              pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar4,StringLiteral_14694,(MethodInfo *)0x0);
                    /* try { // try from 03644da4 to 03744dab has its CatchHandler @ 03645c28 */
                    /* try { // try from 03644dac to 03744db7 has its CatchHandler @ 03645c14 */
              pSVar6 = GIAMPEGMNHE__LFCNNAGLPHO(pSVar5,(System_String_o *)0x0,(MethodInfo *)0x0);
            }
                    /* try { // try from 03644db8 to 03744dbf has its CatchHandler @ 03645c08 */
            pSVar6 = EILGGBOIMGE__MGBBKEMFMJG((EILGGBOIMGE_o *)__this,pSVar6,(MethodInfo *)0x0);
            ppSVar9 = &(__this->fields).HGLHAHMIGDB;
            *ppSVar9 = pSVar6;
          }
          else {
                    /* try { // try from 03644dd4 to 03744ddb has its CatchHandler @ 03645bd0 */
            pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar4,StringLiteral_14733,(MethodInfo *)0x0);
            pSVar6 = GIAMPEGMNHE__LFCNNAGLPHO(pSVar5,(System_String_o *)0x0,(MethodInfo *)0x0);
                    /* try { // try from 03644dec to 03744df3 has its CatchHandler @ 03645bdc */
                    /* try { // try from 03644df4 to 03744dff has its CatchHandler @ 03645bf4 */
            pSVar6 = EILGGBOIMGE__MGBBKEMFMJG((EILGGBOIMGE_o *)__this,pSVar6,(MethodInfo *)0x0);
                    /* try { // try from 03644e00 to 03744e07 has its CatchHandler @ 03645c1c */
            (__this->fields).HGLHAHMIGDB = pSVar6;
            thunk_FUN_01c20e04();
                    /* try { // try from 03644e18 to 03744e1f has its CatchHandler @ 03645c3c */
            pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                     (*(NHMPCKIPOJE->klass->vtable)._16_get_Attributes.methodPtr)
                               (NHMPCKIPOJE,(NHMPCKIPOJE->klass->vtable)._16_get_Attributes.method);
            if (pSVar4 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03644eec;
                    /* try { // try from 03644e30 to 03744e37 has its CatchHandler @ 03645c20 */
            pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar4,StringLiteral_14734,(MethodInfo *)0x0);
                    /* try { // try from 03644e38 to 03744e43 has its CatchHandler @ 03645c34 */
            pSVar6 = GIAMPEGMNHE__LFCNNAGLPHO(pSVar5,(System_String_o *)0x0,(MethodInfo *)0x0);
                    /* try { // try from 03644e44 to 03744e4b has its CatchHandler @ 03645c18 */
            pSVar6 = EILGGBOIMGE__MGBBKEMFMJG((EILGGBOIMGE_o *)__this,pSVar6,(MethodInfo *)0x0);
            ppSVar9 = &(__this->fields).NKNANOCKLNG;
            *ppSVar9 = pSVar6;
          }
                    /* try { // try from 03644e5c to 03744e63 has its CatchHandler @ 03645bc0 */
          thunk_FUN_01c20e04(ppSVar9,pSVar6);
          return;
        }
      }
    }
  }
LAB_03644eec:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

