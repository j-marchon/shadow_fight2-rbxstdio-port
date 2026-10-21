// TypeDefIndex 1073
// Namespace: 
// public static class OCAJCDIOMKB
// Fields:
//   private static Vector2 <CLAAJDABDPF>k__BackingField; // 0x0
//   private static Vector2 <GCNJFEKMABG>k__BackingField; // 0x8
//   private static Vector2 <MKEOMKHIEHM>k__BackingField; // 0x10
//   private static Vector2 <BDJJHPAGEEM>k__BackingField; // 0x18
//   private static float <IDJGFJJAADF>k__BackingField; // 0x20
//   private static float <ENCFDOKPLHH>k__BackingField; // 0x24
//   private static float <DPAPNHPIMMC>k__BackingField; // 0x28
//   private static float <BJHEHECNLOC>k__BackingField; // 0x2C
//   private static float <PJBFHCHGIDP>k__BackingField; // 0x30
//   private static float <IDGHHGFGFMO>k__BackingField; // 0x34

// ===== public static void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x30DD4BC]
// OCAJCDIOMKB$$HNIHOIAMDPC @ RVA 0x30DD4BC

void OCAJCDIOMKB__HNIHOIAMDPC(System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  System_Xml_XmlNode_o *pSVar14;
  long *plVar15;
  System_Xml_XmlAttribute_o *pSVar16;
  OCAJCDIOMKB_StaticFields *pOVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  UnityEngine_Vector2_Fields UVar22;
  
  auVar20._8_8_ = method;
  auVar20._0_8_ = AHDGNOJPPIB;
  if ((DAT_0456636a & 1) == 0) {
    FUN_01bab630(&StringLiteral_6524/*"FontScale"*/);
    FUN_01bab630(&StringLiteral_10574/*"PulseAmp"*/);
    FUN_01bab630(&StringLiteral_12331/*"StackShiftX"*/);
    FUN_01bab630(&StringLiteral_12240/*"Spacing"*/);
    FUN_01bab630(&StringLiteral_10573/*"PulseAccel"*/);
    FUN_01bab630(&StringLiteral_6100/*"ExpirationOpacity"*/);
    FUN_01bab630(&StringLiteral_10575/*"PulseFrames"*/);
    FUN_01bab630(&StringLiteral_14694/*"Value"*/);
    FUN_01bab630(&StringLiteral_12332/*"StackShiftY"*/);
    FUN_01bab630(&StringLiteral_6200/*"FadeFrames"*/);
    FUN_01bab630(&StringLiteral_11450/*"RowCapacity"*/);
    FUN_01bab630(&StringLiteral_15134/*"Y"*/);
    auVar20 = FUN_01bab630(&StringLiteral_15021/*"X"*/);
    DAT_0456636a = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar14 = (System_Xml_XmlNode_o *)
              (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                        (AHDGNOJPPIB,StringLiteral_6200/*"FadeFrames"*/,
                         (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
    UVar22 = (UnityEngine_Vector2_Fields)GIAMPEGMNHE__OKCALGFAMFA(pSVar14,0.0,0.0,(MethodInfo *)0x0)
    ;
    if (DAT_045663a9 == '\0') {
      FUN_01bab630(&OCAJCDIOMKB_TypeInfo);
      DAT_045663a9 = '\x01';
    }
    (OCAJCDIOMKB_TypeInfo->static_fields->_CLAAJDABDPF_k__BackingField).fields = UVar22;
    pSVar14 = (System_Xml_XmlNode_o *)
              (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                        (AHDGNOJPPIB,StringLiteral_10573/*"PulseAccel"*/,
                         (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
    UVar22 = (UnityEngine_Vector2_Fields)GIAMPEGMNHE__OKCALGFAMFA(pSVar14,0.0,0.0,(MethodInfo *)0x0)
    ;
    if (DAT_045663aa == '\0') {
      FUN_01bab630(&OCAJCDIOMKB_TypeInfo);
      DAT_045663aa = '\x01';
    }
    (OCAJCDIOMKB_TypeInfo->static_fields->_GCNJFEKMABG_k__BackingField).fields = UVar22;
    pSVar14 = (System_Xml_XmlNode_o *)
              (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                        (AHDGNOJPPIB,StringLiteral_10575/*"PulseFrames"*/,
                         (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
    UVar22 = (UnityEngine_Vector2_Fields)GIAMPEGMNHE__OKCALGFAMFA(pSVar14,0.0,0.0,(MethodInfo *)0x0)
    ;
    if (DAT_045663ab == '\0') {
      FUN_01bab630(&OCAJCDIOMKB_TypeInfo);
      DAT_045663ab = '\x01';
    }
    (OCAJCDIOMKB_TypeInfo->static_fields->_MKEOMKHIEHM_k__BackingField).fields = UVar22;
    auVar20 = (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                        (AHDGNOJPPIB,StringLiteral_12240/*"Spacing"*/,
                         (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
    plVar15 = auVar20._0_8_;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = auVar20._8_8_;
    auVar20 = auVar21 << 0x40;
    if (plVar15 != (long *)0x0) {
      auVar21 = (**(code **)(*plVar15 + 0x238))(plVar15,*(undefined8 *)(*plVar15 + 0x240));
      auVar1._8_8_ = 0;
      auVar1._0_8_ = auVar21._8_8_;
      auVar20 = auVar1 << 0x40;
      if (auVar21._0_8_ != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar16 = System_Xml_XmlAttributeCollection__get_ItemOf
                            (auVar21._0_8_,StringLiteral_15021/*"X"*/,(MethodInfo *)0x0);
        fVar18 = EIABCPKDEBD__GICIEKCGOHA(pSVar16,0.0,(MethodInfo *)0x0);
        auVar20 = (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                            (AHDGNOJPPIB,StringLiteral_12240/*"Spacing"*/,
                             (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
        plVar15 = auVar20._0_8_;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = auVar20._8_8_;
        auVar20 = auVar2 << 0x40;
        if (plVar15 != (long *)0x0) {
          auVar21 = (**(code **)(*plVar15 + 0x238))(plVar15,*(undefined8 *)(*plVar15 + 0x240));
          auVar3._8_8_ = 0;
          auVar3._0_8_ = auVar21._8_8_;
          auVar20 = auVar3 << 0x40;
          if (auVar21._0_8_ != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar16 = System_Xml_XmlAttributeCollection__get_ItemOf
                                (auVar21._0_8_,StringLiteral_15134/*"Y"*/,(MethodInfo *)0x0);
            fVar19 = EIABCPKDEBD__GICIEKCGOHA(pSVar16,0.0,(MethodInfo *)0x0);
            if (DAT_045663ac == '\0') {
              FUN_01bab630(&OCAJCDIOMKB_TypeInfo);
              DAT_045663ac = '\x01';
            }
            pOVar17 = OCAJCDIOMKB_TypeInfo->static_fields;
            (pOVar17->_BDJJHPAGEEM_k__BackingField).fields.x = fVar18;
            (pOVar17->_BDJJHPAGEEM_k__BackingField).fields.y = fVar19;
            pSVar14 = (System_Xml_XmlNode_o *)
                      (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                                (AHDGNOJPPIB,StringLiteral_10574/*"PulseAmp"*/,
                                 (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
            pSVar16 = EIABCPKDEBD__IOBEKBNCOMI(pSVar14,(MethodInfo *)0x0);
            fVar18 = EIABCPKDEBD__GICIEKCGOHA(pSVar16,0.0,(MethodInfo *)0x0);
            if (DAT_045663ad == '\0') {
              FUN_01bab630(&OCAJCDIOMKB_TypeInfo);
              DAT_045663ad = '\x01';
            }
            OCAJCDIOMKB_TypeInfo->static_fields->_IDJGFJJAADF_k__BackingField = fVar18;
            auVar20 = (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                                (AHDGNOJPPIB,StringLiteral_11450/*"RowCapacity"*/,
                                 (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
            plVar15 = auVar20._0_8_;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = auVar20._8_8_;
            auVar20 = auVar4 << 0x40;
            if (plVar15 != (long *)0x0) {
              auVar21 = (**(code **)(*plVar15 + 0x238))(plVar15,*(undefined8 *)(*plVar15 + 0x240));
              auVar5._8_8_ = 0;
              auVar5._0_8_ = auVar21._8_8_;
              auVar20 = auVar5 << 0x40;
              if (auVar21._0_8_ != (System_Xml_XmlAttributeCollection_o *)0x0) {
                pSVar16 = System_Xml_XmlAttributeCollection__get_ItemOf
                                    (auVar21._0_8_,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
                fVar18 = EIABCPKDEBD__GICIEKCGOHA(pSVar16,0.0,(MethodInfo *)0x0);
                if (DAT_045663ae == '\0') {
                  FUN_01bab630(&OCAJCDIOMKB_TypeInfo);
                  DAT_045663ae = '\x01';
                }
                OCAJCDIOMKB_TypeInfo->static_fields->_ENCFDOKPLHH_k__BackingField = fVar18;
                auVar20 = (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                                    (AHDGNOJPPIB,StringLiteral_6100/*"ExpirationOpacity"*/,
                                     (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
                plVar15 = auVar20._0_8_;
                auVar6._8_8_ = 0;
                auVar6._0_8_ = auVar20._8_8_;
                auVar20 = auVar6 << 0x40;
                if (plVar15 != (long *)0x0) {
                  auVar21 = (**(code **)(*plVar15 + 0x238))
                                      (plVar15,*(undefined8 *)(*plVar15 + 0x240));
                  auVar7._8_8_ = 0;
                  auVar7._0_8_ = auVar21._8_8_;
                  auVar20 = auVar7 << 0x40;
                  if (auVar21._0_8_ != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    pSVar16 = System_Xml_XmlAttributeCollection__get_ItemOf
                                        (auVar21._0_8_,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
                    fVar18 = EIABCPKDEBD__GICIEKCGOHA(pSVar16,0.0,(MethodInfo *)0x0);
                    if (DAT_045663af == '\0') {
                      FUN_01bab630(&OCAJCDIOMKB_TypeInfo);
                      DAT_045663af = '\x01';
                    }
                    OCAJCDIOMKB_TypeInfo->static_fields->_DPAPNHPIMMC_k__BackingField = fVar18;
                    auVar20 = (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                                        (AHDGNOJPPIB,StringLiteral_12331/*"StackShiftX"*/,
                                         (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
                    plVar15 = auVar20._0_8_;
                    auVar8._8_8_ = 0;
                    auVar8._0_8_ = auVar20._8_8_;
                    auVar20 = auVar8 << 0x40;
                    if (plVar15 != (long *)0x0) {
                      auVar21 = (**(code **)(*plVar15 + 0x238))
                                          (plVar15,*(undefined8 *)(*plVar15 + 0x240));
                      auVar9._8_8_ = 0;
                      auVar9._0_8_ = auVar21._8_8_;
                      auVar20 = auVar9 << 0x40;
                      if (auVar21._0_8_ != (System_Xml_XmlAttributeCollection_o *)0x0) {
                        pSVar16 = System_Xml_XmlAttributeCollection__get_ItemOf
                                            (auVar21._0_8_,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
                        fVar18 = EIABCPKDEBD__GICIEKCGOHA(pSVar16,0.0,(MethodInfo *)0x0);
                        if (DAT_045663b0 == '\0') {
                          FUN_01bab630(&OCAJCDIOMKB_TypeInfo);
                          DAT_045663b0 = '\x01';
                        }
                        OCAJCDIOMKB_TypeInfo->static_fields->_BJHEHECNLOC_k__BackingField = fVar18;
                        auVar20 = (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                                            (AHDGNOJPPIB,StringLiteral_12332/*"StackShiftY"*/,
                                             (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
                        plVar15 = auVar20._0_8_;
                        auVar10._8_8_ = 0;
                        auVar10._0_8_ = auVar20._8_8_;
                        auVar20 = auVar10 << 0x40;
                        if (plVar15 != (long *)0x0) {
                          auVar21 = (**(code **)(*plVar15 + 0x238))
                                              (plVar15,*(undefined8 *)(*plVar15 + 0x240));
                          auVar11._8_8_ = 0;
                          auVar11._0_8_ = auVar21._8_8_;
                          auVar20 = auVar11 << 0x40;
                          if (auVar21._0_8_ != (System_Xml_XmlAttributeCollection_o *)0x0) {
                            pSVar16 = System_Xml_XmlAttributeCollection__get_ItemOf
                                                (auVar21._0_8_,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0
                                                );
                            fVar18 = EIABCPKDEBD__GICIEKCGOHA(pSVar16,0.0,(MethodInfo *)0x0);
                            if (DAT_045663b1 == '\0') {
                              FUN_01bab630(&OCAJCDIOMKB_TypeInfo);
                              DAT_045663b1 = '\x01';
                            }
                            OCAJCDIOMKB_TypeInfo->static_fields->_PJBFHCHGIDP_k__BackingField =
                                 fVar18;
                            auVar20 = (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                                                (AHDGNOJPPIB,StringLiteral_6524/*"FontScale"*/,
                                                 (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
                            plVar15 = auVar20._0_8_;
                            auVar12._8_8_ = 0;
                            auVar12._0_8_ = auVar20._8_8_;
                            auVar20 = auVar12 << 0x40;
                            if (plVar15 != (long *)0x0) {
                              auVar21 = (**(code **)(*plVar15 + 0x238))
                                                  (plVar15,*(undefined8 *)(*plVar15 + 0x240));
                              auVar13._8_8_ = 0;
                              auVar13._0_8_ = auVar21._8_8_;
                              auVar20 = auVar13 << 0x40;
                              if (auVar21._0_8_ != (System_Xml_XmlAttributeCollection_o *)0x0) {
                                pSVar16 = System_Xml_XmlAttributeCollection__get_ItemOf
                                                    (auVar21._0_8_,StringLiteral_14694/*"Value"*/,
                                                     (MethodInfo *)0x0);
                                fVar18 = EIABCPKDEBD__GICIEKCGOHA(pSVar16,0.0,(MethodInfo *)0x0);
                                if (DAT_045663b2 == '\0') {
                                  FUN_01bab630(&OCAJCDIOMKB_TypeInfo);
                                  DAT_045663b2 = '\x01';
                                }
                                OCAJCDIOMKB_TypeInfo->static_fields->_IDGHHGFGFMO_k__BackingField =
                                     fVar18;
                                return;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar20._0_8_,auVar20._8_8_);
}


// ===== public static float DBOMNJNCAIB()  [RVA 0x30DDA98]
// OCAJCDIOMKB$$DBOMNJNCAIB @ RVA 0x30DDA98

float OCAJCDIOMKB__DBOMNJNCAIB(MethodInfo *method)

{
  if ((DAT_0456636b & 1) == 0) {
    FUN_01bab630(&OCAJCDIOMKB_TypeInfo);
    DAT_0456636b = 1;
  }
  return OCAJCDIOMKB_TypeInfo->static_fields->_ENCFDOKPLHH_k__BackingField;
}


// ===== public static float OGDFFFNMIOH()  [RVA 0x30DDAE0]
// OCAJCDIOMKB$$OGDFFFNMIOH @ RVA 0x30DDAE0

float OCAJCDIOMKB__OGDFFFNMIOH(MethodInfo *method)

{
  if ((DAT_0456636c & 1) == 0) {
    FUN_01bab630(&OCAJCDIOMKB_TypeInfo);
    DAT_0456636c = 1;
  }
  return OCAJCDIOMKB_TypeInfo->static_fields->_DPAPNHPIMMC_k__BackingField;
}


// ===== public static float HNFMLEPDMDF()  [RVA 0x30DDB28]
// OCAJCDIOMKB$$HNFMLEPDMDF @ RVA 0x30DDB28

float OCAJCDIOMKB__HNFMLEPDMDF(MethodInfo *method)

{
  if ((DAT_0456636d & 1) == 0) {
    FUN_01bab630(&OCAJCDIOMKB_TypeInfo);
    DAT_0456636d = 1;
  }
  return OCAJCDIOMKB_TypeInfo->static_fields->_IDGHHGFGFMO_k__BackingField;
}


// ===== private static void NEHGDABENGG(Vector2 CJNHFNHJHPE)  [RVA 0x30DDB70]
// OCAJCDIOMKB$$NEHGDABENGG @ RVA 0x30DDB70

void OCAJCDIOMKB__NEHGDABENGG(UnityEngine_Vector2_o CJNHFNHJHPE,MethodInfo *method)

{
  OCAJCDIOMKB_StaticFields *pOVar1;
  
                    /* try { // try from 031ddb74 to 032ddbf3 has its CatchHandler @ 031ddb74
                       catch() { ... } // from try @ 031ddb74 with catch @ 031ddb74
                       catch() { ... } // from try @ 031ddc40 with catch @ 031ddb74
                       catch() { ... } // from try @ 031ddd18 with catch @ 031ddb74
                       catch() { ... } // from try @ 031ddd4c with catch @ 031ddb74
                       catch() { ... } // from try @ 031dddec with catch @ 031ddb74 */
  if ((DAT_0456636e & 1) == 0) {
    FUN_01bab630(&OCAJCDIOMKB_TypeInfo);
    DAT_0456636e = 1;
  }
  pOVar1 = OCAJCDIOMKB_TypeInfo->static_fields;
  (pOVar1->_BDJJHPAGEEM_k__BackingField).fields.x = CJNHFNHJHPE.fields.x;
  (pOVar1->_BDJJHPAGEEM_k__BackingField).fields.y = CJNHFNHJHPE.fields.y;
  return;
}


// ===== private static void KHMNGNLJGPE(float CJNHFNHJHPE)  [RVA 0x30DDBC8]
// OCAJCDIOMKB$$KHMNGNLJGPE @ RVA 0x30DDBC8

void OCAJCDIOMKB__KHMNGNLJGPE(float CJNHFNHJHPE,MethodInfo *method)

{
  if ((DAT_0456636f & 1) == 0) {
                    /* try { // try from 031ddbf4 to 032ddbfb has its CatchHandler @ 031ddd18 */
    FUN_01bab630(&OCAJCDIOMKB_TypeInfo);
    DAT_0456636f = 1;
  }
                    /* try { // try from 031ddc0c to 032ddc3f has its CatchHandler @ 031ddd1c */
  OCAJCDIOMKB_TypeInfo->static_fields->_IDGHHGFGFMO_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== private static void OMPDFAGFEHJ(Vector2 CJNHFNHJHPE)  [RVA 0x30DDC1C]
// OCAJCDIOMKB$$OMPDFAGFEHJ @ RVA 0x30DDC1C

void OCAJCDIOMKB__OMPDFAGFEHJ(UnityEngine_Vector2_o CJNHFNHJHPE,MethodInfo *method)

{
  OCAJCDIOMKB_StaticFields *pOVar1;
  
                    /* try { // try from 031ddc40 to 032ddd0f has its CatchHandler @ 031ddb74 */
  if ((DAT_04566370 & 1) == 0) {
    FUN_01bab630(&OCAJCDIOMKB_TypeInfo);
    DAT_04566370 = 1;
  }
  pOVar1 = OCAJCDIOMKB_TypeInfo->static_fields;
  (pOVar1->_MKEOMKHIEHM_k__BackingField).fields.x = CJNHFNHJHPE.fields.x;
  (pOVar1->_MKEOMKHIEHM_k__BackingField).fields.y = CJNHFNHJHPE.fields.y;
  return;
}


// ===== public static Vector2 GADGFPPHENK()  [RVA 0x30DDC74]
// OCAJCDIOMKB$$GADGFPPHENK @ RVA 0x30DDC74

UnityEngine_Vector2_o OCAJCDIOMKB__GADGFPPHENK(MethodInfo *method)

{
  if ((DAT_04566371 & 1) == 0) {
    FUN_01bab630(&OCAJCDIOMKB_TypeInfo);
    DAT_04566371 = 1;
  }
  return (UnityEngine_Vector2_o)
         (OCAJCDIOMKB_TypeInfo->static_fields->_CLAAJDABDPF_k__BackingField).fields;
}


// ===== private static void HNCFONOGLNN(float CJNHFNHJHPE)  [RVA 0x30DDCBC]
// OCAJCDIOMKB$$HNCFONOGLNN @ RVA 0x30DDCBC

void OCAJCDIOMKB__HNCFONOGLNN(float CJNHFNHJHPE,MethodInfo *method)

{
  if ((DAT_04566372 & 1) == 0) {
    FUN_01bab630(&OCAJCDIOMKB_TypeInfo);
    DAT_04566372 = 1;
  }
  OCAJCDIOMKB_TypeInfo->static_fields->_PJBFHCHGIDP_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== private static void PCLIKKAECEK(Vector2 CJNHFNHJHPE)  [RVA 0x30DDD10]
// OCAJCDIOMKB$$PCLIKKAECEK @ RVA 0x30DDD10

void OCAJCDIOMKB__PCLIKKAECEK(UnityEngine_Vector2_o CJNHFNHJHPE,MethodInfo *method)

{
  OCAJCDIOMKB_StaticFields *pOVar1;
  
                    /* try { // try from 031ddd10 to 032ddd17 has its CatchHandler @ 031ddd1c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031ddbf4 with catch @ 031ddd18
                       try { // try from 031ddd18 to 032ddd33 has its CatchHandler @ 031ddb74 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031ddc0c with catch @ 031ddd1c
                       catch(type#1 @ 03f99f68) { ... } // from try @ 031ddd10 with catch @ 031ddd1c
                        */
                    /* try { // try from 031ddd34 to 032ddd4b has its CatchHandler @ 031ddde4 */
  if ((DAT_04566373 & 1) == 0) {
    FUN_01bab630(&OCAJCDIOMKB_TypeInfo);
    DAT_04566373 = 1;
  }
                    /* try { // try from 031ddd4c to 032dddd3 has its CatchHandler @ 031ddb74 */
  pOVar1 = OCAJCDIOMKB_TypeInfo->static_fields;
  (pOVar1->_GCNJFEKMABG_k__BackingField).fields.x = CJNHFNHJHPE.fields.x;
  (pOVar1->_GCNJFEKMABG_k__BackingField).fields.y = CJNHFNHJHPE.fields.y;
  return;
}


// ===== public static float JHMPFAOKBEI()  [RVA 0x30DDD68]
// OCAJCDIOMKB$$JHMPFAOKBEI @ RVA 0x30DDD68

float OCAJCDIOMKB__JHMPFAOKBEI(MethodInfo *method)

{
  if ((DAT_04566374 & 1) == 0) {
    FUN_01bab630(&OCAJCDIOMKB_TypeInfo);
    DAT_04566374 = 1;
  }
  return OCAJCDIOMKB_TypeInfo->static_fields->_PJBFHCHGIDP_k__BackingField;
}


// ===== public static Vector2 BMPAIEMDPIG()  [RVA 0x30DDDB0]
// OCAJCDIOMKB$$BMPAIEMDPIG @ RVA 0x30DDDB0

UnityEngine_Vector2_o OCAJCDIOMKB__BMPAIEMDPIG(MethodInfo *method)

{
  if ((DAT_04566375 & 1) == 0) {
                    /* try { // try from 031dddd4 to 032ddde3 has its CatchHandler @ 031ddde4 */
    FUN_01bab630(&OCAJCDIOMKB_TypeInfo);
    DAT_04566375 = 1;
  }
                    /* catch() { ... } // from try @ 031ddd34 with catch @ 031ddde4
                       catch() { ... } // from try @ 031dddd4 with catch @ 031ddde4 */
                    /* try { // try from 031ddde8 to 032dddeb has its CatchHandler @ 031dddf4 */
                    /* try { // try from 031dddec to 032dddf7 has its CatchHandler @ 031ddb74 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031ddde8 with catch @ 031dddf4
                        */
  return (UnityEngine_Vector2_o)
         (OCAJCDIOMKB_TypeInfo->static_fields->_MKEOMKHIEHM_k__BackingField).fields;
}


// ===== public static float CIDHBGAPMAL()  [RVA 0x30DDDF8]
// OCAJCDIOMKB$$CIDHBGAPMAL @ RVA 0x30DDDF8

float OCAJCDIOMKB__CIDHBGAPMAL(MethodInfo *method)

{
  if ((DAT_04566376 & 1) == 0) {
    FUN_01bab630(&OCAJCDIOMKB_TypeInfo);
    DAT_04566376 = 1;
  }
  return OCAJCDIOMKB_TypeInfo->static_fields->_IDJGFJJAADF_k__BackingField;
}


// ===== public static float KBGKPHNOLKC()  [RVA 0x30DDE40]
// OCAJCDIOMKB$$KBGKPHNOLKC @ RVA 0x30DDE40

float OCAJCDIOMKB__KBGKPHNOLKC(MethodInfo *method)

{
  if ((DAT_04566377 & 1) == 0) {
    FUN_01bab630(&OCAJCDIOMKB_TypeInfo);
    DAT_04566377 = 1;
  }
  return OCAJCDIOMKB_TypeInfo->static_fields->_BJHEHECNLOC_k__BackingField;
}


// ===== private static void CDKCALOHNOB(float CJNHFNHJHPE)  [RVA 0x30DDE88]
// OCAJCDIOMKB$$CDKCALOHNOB @ RVA 0x30DDE88

void OCAJCDIOMKB__CDKCALOHNOB(float CJNHFNHJHPE,MethodInfo *method)

{
  if ((DAT_04566378 & 1) == 0) {
    FUN_01bab630(&OCAJCDIOMKB_TypeInfo);
    DAT_04566378 = 1;
  }
  OCAJCDIOMKB_TypeInfo->static_fields->_IDJGFJJAADF_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== private static void NGJOCOLLCKI(Vector2 CJNHFNHJHPE)  [RVA 0x30DDEDC]
// OCAJCDIOMKB$$NGJOCOLLCKI @ RVA 0x30DDEDC

void OCAJCDIOMKB__NGJOCOLLCKI(UnityEngine_Vector2_o CJNHFNHJHPE,MethodInfo *method)

{
  OCAJCDIOMKB_StaticFields *pOVar1;
  
  if ((DAT_04566379 & 1) == 0) {
    FUN_01bab630(&OCAJCDIOMKB_TypeInfo);
    DAT_04566379 = 1;
  }
  pOVar1 = OCAJCDIOMKB_TypeInfo->static_fields;
  (pOVar1->_CLAAJDABDPF_k__BackingField).fields.x = CJNHFNHJHPE.fields.x;
  (pOVar1->_CLAAJDABDPF_k__BackingField).fields.y = CJNHFNHJHPE.fields.y;
  return;
}


// ===== private static void FDKGAEEJPOI(float CJNHFNHJHPE)  [RVA 0x30DDF34]
// OCAJCDIOMKB$$FDKGAEEJPOI @ RVA 0x30DDF34

void OCAJCDIOMKB__FDKGAEEJPOI(float CJNHFNHJHPE,MethodInfo *method)

{
  if ((DAT_0456637a & 1) == 0) {
    FUN_01bab630(&OCAJCDIOMKB_TypeInfo);
    DAT_0456637a = 1;
  }
  OCAJCDIOMKB_TypeInfo->static_fields->_ENCFDOKPLHH_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public static Vector2 IFLGBNFHDIG()  [RVA 0x30DDF88]
// OCAJCDIOMKB$$IFLGBNFHDIG @ RVA 0x30DDF88

UnityEngine_Vector2_o OCAJCDIOMKB__IFLGBNFHDIG(MethodInfo *method)

{
  if ((DAT_0456637b & 1) == 0) {
    FUN_01bab630(&OCAJCDIOMKB_TypeInfo);
    DAT_0456637b = 1;
  }
  return (UnityEngine_Vector2_o)
         (OCAJCDIOMKB_TypeInfo->static_fields->_BDJJHPAGEEM_k__BackingField).fields;
}


// ===== private static void BKAACNOBNPH(float CJNHFNHJHPE)  [RVA 0x30DDFD0]
// OCAJCDIOMKB$$BKAACNOBNPH @ RVA 0x30DDFD0

void OCAJCDIOMKB__BKAACNOBNPH(float CJNHFNHJHPE,MethodInfo *method)

{
  if ((DAT_0456637c & 1) == 0) {
    FUN_01bab630(&OCAJCDIOMKB_TypeInfo);
    DAT_0456637c = 1;
  }
  OCAJCDIOMKB_TypeInfo->static_fields->_BJHEHECNLOC_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== private static void FOLGGCLOIKC(float CJNHFNHJHPE)  [RVA 0x30DE024]
// OCAJCDIOMKB$$FOLGGCLOIKC @ RVA 0x30DE024

void OCAJCDIOMKB__FOLGGCLOIKC(float CJNHFNHJHPE,MethodInfo *method)

{
  if ((DAT_0456637d & 1) == 0) {
    FUN_01bab630(&OCAJCDIOMKB_TypeInfo);
    DAT_0456637d = 1;
  }
  OCAJCDIOMKB_TypeInfo->static_fields->_DPAPNHPIMMC_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public static Vector2 DPCIEJDKLFP()  [RVA 0x30DE078]
// OCAJCDIOMKB$$DPCIEJDKLFP @ RVA 0x30DE078

UnityEngine_Vector2_o OCAJCDIOMKB__DPCIEJDKLFP(MethodInfo *method)

{
  if ((DAT_0456637e & 1) == 0) {
    FUN_01bab630(&OCAJCDIOMKB_TypeInfo);
    DAT_0456637e = 1;
  }
  return (UnityEngine_Vector2_o)
         (OCAJCDIOMKB_TypeInfo->static_fields->_GCNJFEKMABG_k__BackingField).fields;
}

