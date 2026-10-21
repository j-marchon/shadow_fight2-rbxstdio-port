// TypeDefIndex 1167
// Namespace: 
// public static class EBGMOLCMOHK
// Fields:
//   private static float OFBMPPNJNDB; // 0x0
//   private static float CEICIBAGEFP; // 0x4
//   private static int NBPIFEDENED; // 0x8
//   private static float DBIHPEGBLNF; // 0xC

// ===== public static float MKPEAPNOKCL()  [RVA 0x3105C78]
// EBGMOLCMOHK$$MKPEAPNOKCL @ RVA 0x3105C78

float EBGMOLCMOHK__MKPEAPNOKCL(MethodInfo *method)

{
  if ((DAT_04566501 & 1) == 0) {
    FUN_01bab630(&EBGMOLCMOHK_TypeInfo);
    DAT_04566501 = 1;
  }
  return EBGMOLCMOHK_TypeInfo->static_fields->DBIHPEGBLNF;
}


// ===== public static float FKEGKEABIME()  [RVA 0x3105CC0]
// EBGMOLCMOHK$$FKEGKEABIME @ RVA 0x3105CC0

float EBGMOLCMOHK__FKEGKEABIME(MethodInfo *method)

{
  if ((DAT_04566502 & 1) == 0) {
    FUN_01bab630(&EBGMOLCMOHK_TypeInfo);
    DAT_04566502 = 1;
  }
  return EBGMOLCMOHK_TypeInfo->static_fields->OFBMPPNJNDB;
}


// ===== public static float BAGCGLAHKPN()  [RVA 0x3105D08]
// EBGMOLCMOHK$$BAGCGLAHKPN @ RVA 0x3105D08

float EBGMOLCMOHK__BAGCGLAHKPN(MethodInfo *method)

{
  if ((DAT_04566503 & 1) == 0) {
    FUN_01bab630(&EBGMOLCMOHK_TypeInfo);
    DAT_04566503 = 1;
  }
  return EBGMOLCMOHK_TypeInfo->static_fields->CEICIBAGEFP;
}


// ===== public static void IFIHEMDKGMO(float CJNHFNHJHPE)  [RVA 0x3105D50]
// EBGMOLCMOHK$$IFIHEMDKGMO @ RVA 0x3105D50

void EBGMOLCMOHK__IFIHEMDKGMO(float CJNHFNHJHPE,MethodInfo *method)

{
  if ((DAT_04566504 & 1) == 0) {
    FUN_01bab630(&EBGMOLCMOHK_TypeInfo);
    DAT_04566504 = 1;
  }
  EBGMOLCMOHK_TypeInfo->static_fields->DBIHPEGBLNF = CJNHFNHJHPE;
  return;
}


// ===== public static int AGELGPEBJHK()  [RVA 0x3105DA4]
// EBGMOLCMOHK$$AGELGPEBJHK @ RVA 0x3105DA4

int32_t EBGMOLCMOHK__AGELGPEBJHK(MethodInfo *method)

{
  if ((DAT_04566505 & 1) == 0) {
    FUN_01bab630(&EBGMOLCMOHK_TypeInfo);
    DAT_04566505 = 1;
  }
  return EBGMOLCMOHK_TypeInfo->static_fields->NBPIFEDENED;
}


// ===== public static void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x3105DEC]
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
    FUN_01bab630(&StringLiteral_6902/*"Gravitation"*/);
    FUN_01bab630(&StringLiteral_8121/*"IterativeProcess"*/);
    FUN_01bab630(&StringLiteral_6604/*"FrictionForce"*/);
    auVar10 = FUN_01bab630(&StringLiteral_14694/*"Value"*/);
    DAT_04566506 = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    auVar10 = (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                        (AHDGNOJPPIB,StringLiteral_6604/*"FrictionForce"*/,
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
                           (auVar11._0_8_,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
        fVar9 = EIABCPKDEBD__GICIEKCGOHA(pSVar8,0.2,(MethodInfo *)0x0);
        EBGMOLCMOHK_TypeInfo->static_fields->OFBMPPNJNDB = fVar9;
        auVar10 = (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                            (AHDGNOJPPIB,StringLiteral_6902/*"Gravitation"*/,
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
                               (auVar11._0_8_,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
            fVar9 = EIABCPKDEBD__GICIEKCGOHA(pSVar8,0.4,(MethodInfo *)0x0);
            EBGMOLCMOHK_TypeInfo->static_fields->CEICIBAGEFP = fVar9;
            auVar10 = (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                                (AHDGNOJPPIB,StringLiteral_8121/*"IterativeProcess"*/,
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
                                   (auVar11._0_8_,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
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

