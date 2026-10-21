// MEFNOMDAJBF$$NDAHBJOBBFF @ RVA 0x3372818

GCAKLDNBADP_o MEFNOMDAJBF__NDAHBJOBBFF(System_Xml_XmlElement_o *AHDGNOJPPIB,MethodInfo *method)

{
  GCAKLDNBADP_Fields GVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int32_t iVar4;
  System_Xml_XmlAttribute_o *pSVar5;
  System_String_o *BPEDBGGKBLO;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  float LFJGFLNMBMC;
  float GPCGAHADKAC;
  float FJMNKKECPPO;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  GCAKLDNBADP_o __this;
  undefined8 local_40;
  undefined8 uStack_38;
  
  auVar6._8_8_ = method;
  auVar6._0_8_ = AHDGNOJPPIB;
  if ((DAT_04567b34 & 1) == 0) {
    FUN_01bab630(&StringLiteral_12136);
    FUN_01bab630(&StringLiteral_21508);
    FUN_01bab630(&StringLiteral_16407);
    FUN_01bab630(&StringLiteral_18353);
    auVar6 = FUN_01bab630(&StringLiteral_20173);
    DAT_04567b34 = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlElement_o *)0x0) {
    auVar7 = (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    auVar8._8_8_ = 0;
    auVar8._0_8_ = auVar7._8_8_;
    auVar6 = auVar8 << 0x40;
    if (auVar7._0_8_ != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (auVar7._0_8_,StringLiteral_21508,(MethodInfo *)0x0);
      LFJGFLNMBMC = EIABCPKDEBD__GICIEKCGOHA(pSVar5,1.0,(MethodInfo *)0x0);
      auVar8 = (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      auVar7._8_8_ = 0;
      auVar7._0_8_ = auVar8._8_8_;
      auVar6 = auVar7 << 0x40;
      if (auVar8._0_8_ != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (auVar8._0_8_,StringLiteral_16407,(MethodInfo *)0x0);
        GPCGAHADKAC = EIABCPKDEBD__GICIEKCGOHA(pSVar5,1.0,(MethodInfo *)0x0);
                    /* try { // try from 03472908 to 03572b97 has its CatchHandler @ 03472908
                       catch() { ... } // from try @ 03472908 with catch @ 03472908
                       catch() { ... } // from try @ 03472dcc with catch @ 03472908
                       catch() { ... } // from try @ 03472ec0 with catch @ 03472908
                       catch() { ... } // from try @ 03472ec8 with catch @ 03472908
                       catch() { ... } // from try @ 03472f98 with catch @ 03472908 */
        auVar8 = (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        auVar2._8_8_ = 0;
        auVar2._0_8_ = auVar8._8_8_;
        auVar6 = auVar2 << 0x40;
        if (auVar8._0_8_ != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (auVar8._0_8_,StringLiteral_18353,(MethodInfo *)0x0);
          FJMNKKECPPO = EIABCPKDEBD__GICIEKCGOHA(pSVar5,500.0,(MethodInfo *)0x0);
          auVar8 = (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          auVar3._8_8_ = 0;
          auVar3._0_8_ = auVar8._8_8_;
          auVar6 = auVar3 << 0x40;
          if (auVar8._0_8_ != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (auVar8._0_8_,StringLiteral_20173,(MethodInfo *)0x0);
            BPEDBGGKBLO = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,StringLiteral_12136,(MethodInfo *)0x0);
            iVar4 = MEFNOMDAJBF__GHIABNENNKG(BPEDBGGKBLO,method_00);
            local_40 = 0;
            uStack_38 = 0;
            __this.fields.FJMNKKECPPO = (float)iVar4;
            __this.fields._0_8_ = &local_40;
            __this.fields.LBKAKBJBNCG = 0;
            GCAKLDNBADP___ctor(__this,LFJGFLNMBMC,FJMNKKECPPO,GPCGAHADKAC,0,in_x3);
            GVar1.FJMNKKECPPO = (float)(undefined4)uStack_38;
            GVar1.LBKAKBJBNCG = uStack_38._4_4_;
            GVar1.LFJGFLNMBMC = (float)(undefined4)local_40;
            GVar1.GPCGAHADKAC = (float)local_40._4_4_;
            return (GCAKLDNBADP_o)GVar1;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar6._0_8_,auVar6._8_8_);
}

