// EBGMOLCMOHK$$HNIHOIAMDPC @ RVA 0x3105DEC

void EBGMOLCMOHK__HNIHOIAMDPC(System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int32_t iVar6;
  long *plVar7;
  System_Xml_XmlAttribute_o *pSVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  auVar10._8_8_ = method;
  auVar10._0_8_ = AHDGNOJPPIB;
  if ((DAT_04566506 & 1) == 0) {
    FUN_01bab630(&EBGMOLCMOHK_TypeInfo);
    FUN_01bab630(&StringLiteral_6902);
    FUN_01bab630(&StringLiteral_8121);
    FUN_01bab630(&StringLiteral_6604);
    auVar10 = FUN_01bab630(&StringLiteral_14694);
    DAT_04566506 = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    auVar10 = (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                        (AHDGNOJPPIB,StringLiteral_6604,
                         (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
    plVar7 = auVar10._0_8_;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = auVar10._8_8_;
    auVar10 = auVar11 << 0x40;
    if (plVar7 != (long *)0x0) {
      auVar11 = (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240));
      auVar1._8_8_ = 0;
      auVar1._0_8_ = auVar11._8_8_;
      auVar10 = auVar1 << 0x40;
      if (auVar11._0_8_ != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (auVar11._0_8_,StringLiteral_14694,(MethodInfo *)0x0);
        fVar9 = EIABCPKDEBD__GICIEKCGOHA(pSVar8,0.2,(MethodInfo *)0x0);
        EBGMOLCMOHK_TypeInfo->static_fields->OFBMPPNJNDB = fVar9;
        auVar10 = (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                            (AHDGNOJPPIB,StringLiteral_6902,
                             (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
        plVar7 = auVar10._0_8_;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = auVar10._8_8_;
        auVar10 = auVar2 << 0x40;
        if (plVar7 != (long *)0x0) {
          auVar11 = (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240));
          auVar3._8_8_ = 0;
          auVar3._0_8_ = auVar11._8_8_;
          auVar10 = auVar3 << 0x40;
          if (auVar11._0_8_ != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (auVar11._0_8_,StringLiteral_14694,(MethodInfo *)0x0);
            fVar9 = EIABCPKDEBD__GICIEKCGOHA(pSVar8,0.4,(MethodInfo *)0x0);
            EBGMOLCMOHK_TypeInfo->static_fields->CEICIBAGEFP = fVar9;
            auVar10 = (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                                (AHDGNOJPPIB,StringLiteral_8121,
                                 (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
            plVar7 = auVar10._0_8_;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = auVar10._8_8_;
            auVar10 = auVar4 << 0x40;
            if (plVar7 != (long *)0x0) {
              auVar11 = (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240));
              auVar5._8_8_ = 0;
              auVar5._0_8_ = auVar11._8_8_;
              auVar10 = auVar5 << 0x40;
              if (auVar11._0_8_ != (System_Xml_XmlAttributeCollection_o *)0x0) {
                pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                   (auVar11._0_8_,StringLiteral_14694,(MethodInfo *)0x0);
                iVar6 = EIABCPKDEBD__EHJNCGCICMP(pSVar8,2,(MethodInfo *)0x0);
                EBGMOLCMOHK_TypeInfo->static_fields->NBPIFEDENED = iVar6;
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar10._0_8_,auVar10._8_8_);
}

