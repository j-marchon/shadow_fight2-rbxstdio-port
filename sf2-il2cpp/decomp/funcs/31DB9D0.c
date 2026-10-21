// NLCLFNMIEJC$$FDCPNKPLOID @ RVA 0x31DB9D0

OPHDIHJPHDE_o * NLCLFNMIEJC__FDCPNKPLOID(System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  undefined1 auVar1 [16];
  bool DCHJNCLIMGP;
  int32_t OGPGLGPMEPD;
  int32_t DFIBGGDJPLM;
  System_Xml_XmlAttribute_o *pSVar2;
  OPHDIHJPHDE_o *__this;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  auVar3._8_8_ = method;
  auVar3._0_8_ = AHDGNOJPPIB;
  if ((DAT_04566d16 & 1) == 0) {
    FUN_01bab630(&OPHDIHJPHDE_TypeInfo);
    FUN_01bab630(&StringLiteral_4824);
    FUN_01bab630(&StringLiteral_7293);
    auVar3 = FUN_01bab630(&StringLiteral_4371);
    DAT_04566d16 = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    auVar4 = (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = auVar4._8_8_;
    auVar3 = auVar5 << 0x40;
    if (auVar4._0_8_ != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (auVar4._0_8_,StringLiteral_7293,(MethodInfo *)0x0);
      OGPGLGPMEPD = EIABCPKDEBD__EHJNCGCICMP(pSVar2,-1,(MethodInfo *)0x0);
      auVar5 = (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = auVar5._8_8_;
      auVar3 = auVar4 << 0x40;
      if (auVar5._0_8_ != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (auVar5._0_8_,StringLiteral_4824,(MethodInfo *)0x0);
        DFIBGGDJPLM = EIABCPKDEBD__EHJNCGCICMP(pSVar2,0,(MethodInfo *)0x0);
        auVar5 = (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        auVar1._8_8_ = 0;
        auVar1._0_8_ = auVar5._8_8_;
        auVar3 = auVar1 << 0x40;
        if (auVar5._0_8_ != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (auVar5._0_8_,StringLiteral_4371,(MethodInfo *)0x0);
          DCHJNCLIMGP = EIABCPKDEBD__FMBMNDIGLIG(pSVar2,false,(MethodInfo *)0x0);
          __this = (OPHDIHJPHDE_o *)thunk_FUN_01bda818(OPHDIHJPHDE_TypeInfo);
          OPHDIHJPHDE___ctor(__this,OGPGLGPMEPD,DFIBGGDJPLM,DCHJNCLIMGP,(MethodInfo *)0x0);
          return __this;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar3._0_8_,auVar3._8_8_);
}

