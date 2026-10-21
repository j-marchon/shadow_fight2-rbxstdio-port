// TypeDefIndex 714
// Namespace: 
// public class AMJMGFCCAKN : HOOAAGABMBL
// Fields:
//   private GGLKHCAIGDI PHAGOJCOMPN; // 0x330
//   private BFBONKPKBNL MHJAFBPAKEG; // 0x338
//   private IGFGDDANEPE MNELBNHIKGH; // 0x340
//   private int PFNIFGEBIAC; // 0x348
//   private int BMPFHIJEDOD; // 0x34C
//   private long CJKLJJIMECK; // 0x350

// ===== public BFBONKPKBNL MPEBFOKMCCH()  [RVA 0x303BAD4]
// AMJMGFCCAKN$$MPEBFOKMCCH @ RVA 0x303BAD4

BFBONKPKBNL_o * AMJMGFCCAKN__MPEBFOKMCCH(AMJMGFCCAKN_o *__this,MethodInfo *method)

{
  return (__this->fields).MHJAFBPAKEG;
}


// ===== public void .ctor(XmlNode JHMENEKPIBO, IGFGDDANEPE NKCMBEFHFII)  [RVA 0x303BADC]
// AMJMGFCCAKN$$.ctor @ RVA 0x303BADC

void AMJMGFCCAKN___ctor(AMJMGFCCAKN_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,
                       IGFGDDANEPE_o *NKCMBEFHFII,MethodInfo *method)

{
  int32_t iVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *AFKICLAFDKC;
  DEKKGJNMFEB_o *__this_00;
  GGLKHCAIGDI_o *pGVar4;
  int64_t iVar5;
  
  if ((DAT_04565d87 & 1) == 0) {
    FUN_01bab630(&DEKKGJNMFEB_TypeInfo);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_10317/*"PlayerLevel"*/);
    FUN_01bab630(&StringLiteral_5292/*"DeliveryTime"*/);
    FUN_01bab630(&StringLiteral_8108/*"ItemLevel"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04565d87 = 1;
  }
  HOOAAGABMBL___ctor((HOOAAGABMBL_o *)__this,(MethodInfo *)0x0);
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                       (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      AFKICLAFDKC = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      if ((DEKKGJNMFEB_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(DEKKGJNMFEB_TypeInfo);
      }
      __this_00 = DEKKGJNMFEB__AIHNLLGNBLC((MethodInfo *)0x0);
      if (__this_00 != (DEKKGJNMFEB_o *)0x0) {
        pGVar4 = DEKKGJNMFEB__LDGJEEGACHJ(__this_00,AFKICLAFDKC,(MethodInfo *)0x0);
        (__this->fields).PHAGOJCOMPN = pGVar4;
        thunk_FUN_01c20e04(&(__this->fields).PHAGOJCOMPN);
        (__this->fields).MNELBNHIKGH = NKCMBEFHFII;
        thunk_FUN_01c20e04(&(__this->fields).MNELBNHIKGH,NKCMBEFHFII);
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                           (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
        if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar2,StringLiteral_8108/*"ItemLevel"*/,(MethodInfo *)0x0);
          iVar1 = EIABCPKDEBD__EHJNCGCICMP(pSVar3,0,(MethodInfo *)0x0);
          (__this->fields).PFNIFGEBIAC = iVar1;
          pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                   (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                             (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
          if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar2,StringLiteral_10317/*"PlayerLevel"*/,(MethodInfo *)0x0);
            iVar1 = EIABCPKDEBD__EHJNCGCICMP(pSVar3,0,(MethodInfo *)0x0);
            (__this->fields).BMPFHIJEDOD = iVar1;
            pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                     (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                               (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
            if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar2,StringLiteral_5292/*"DeliveryTime"*/,(MethodInfo *)0x0);
              iVar5 = EIABCPKDEBD__HNIGPBMJJOL(pSVar3,0,(MethodInfo *)0x0);
              (__this->fields).CJKLJJIMECK = iVar5;
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string FDPFMIPBLPH()  [RVA 0x303BCC0]
// AMJMGFCCAKN$$FDPFMIPBLPH @ RVA 0x303BCC0

System_String_o * AMJMGFCCAKN__FDPFMIPBLPH(AMJMGFCCAKN_o *__this,MethodInfo *method)

{
  Il2CppObject *arg2;
  MethodInfo *extraout_x1;
  IGFGDDANEPE_o *pIVar1;
  GGLKHCAIGDI_o *pGVar2;
  System_String_o *pSVar3;
  System_String_o *arg1;
  int64_t local_38;
  
  if ((DAT_04565d88 & 1) == 0) {
    FUN_01bab630(&long_TypeInfo);
    FUN_01bab630(&StringLiteral_22461/*"{0}|{1}|{2}"*/);
    DAT_04565d88 = 1;
    method = extraout_x1;
  }
  pIVar1 = (__this->fields).MNELBNHIKGH;
  if ((pIVar1 != (IGFGDDANEPE_o *)0x0) &&
     (pGVar2 = (__this->fields).PHAGOJCOMPN, pGVar2 != (GGLKHCAIGDI_o *)0x0)) {
    pSVar3 = (pIVar1->fields).NPFMOEOIEKM;
    arg1 = (pGVar2->fields)._COIPKAKHDFP_k__BackingField;
    local_38 = AMJMGFCCAKN__IEMNJCLKOIP(__this,method);
    arg2 = (Il2CppObject *)thunk_FUN_01bda448(long_TypeInfo,&local_38);
    pSVar3 = System_String__Format
                       (StringLiteral_22461/*"{0}|{1}|{2}"*/,(Il2CppObject *)pSVar3,(Il2CppObject *)arg1,arg2,
                        (MethodInfo *)0x0);
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public long IEMNJCLKOIP()  [RVA 0x303BD78]
// AMJMGFCCAKN$$IEMNJCLKOIP @ RVA 0x303BD78

int64_t AMJMGFCCAKN__IEMNJCLKOIP(AMJMGFCCAKN_o *__this,MethodInfo *method)

{
  int64_t iVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  long lVar2;
  
  if ((DAT_04565d89 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565d89 = 1;
    method = extraout_x1;
  }
  lVar2 = (__this->fields).CJKLJJIMECK;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b87 == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b87 = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_02;
  }
  if (NLPJLHOEAOE_TypeInfo->static_fields->CBPPFGLIODM < lVar2) {
    lVar2 = (__this->fields).CJKLJJIMECK;
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    }
    if (DAT_04565b87 == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b87 = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar1 = lVar2 - NLPJLHOEAOE_TypeInfo->static_fields->CBPPFGLIODM;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}


// ===== public void .ctor(GGLKHCAIGDI NDLOGJOGFCA, IGFGDDANEPE NKCMBEFHFII, BFBONKPKBNL GMCFOKPADCA)  [RVA 0x303BE6C]
// AMJMGFCCAKN$$.ctor @ RVA 0x303BE6C

void AMJMGFCCAKN___ctor(AMJMGFCCAKN_o *__this,GGLKHCAIGDI_o *NDLOGJOGFCA,IGFGDDANEPE_o *NKCMBEFHFII,
                       BFBONKPKBNL_o *GMCFOKPADCA,MethodInfo *method)

{
  AMJMGFCCAKN_Fields *pAVar1;
  bool_conflict bVar2;
  bool_conflict bVar3;
  undefined6 uVar4;
  int32_t iVar5;
  HOOAAGABMBL_o *pHVar6;
  Roster_o *__this_00;
  System_String_o *pSVar7;
  System_String_o **ppSVar8;
  long lVar9;
  int64_t iVar10;
  int64_t iVar11;
  
  if ((DAT_04565d8a & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 0313beb0 to 0323bf33 has its CatchHandler @ 0313beb0
                       catch() { ... } // from try @ 0313beb0 with catch @ 0313beb0
                       catch() { ... } // from try @ 0313bf8c with catch @ 0313beb0
                       catch() { ... } // from try @ 0313c1bc with catch @ 0313beb0
                       catch() { ... } // from try @ 0313c234 with catch @ 0313beb0
                       catch() { ... } // from try @ 0313c258 with catch @ 0313beb0
                       catch() { ... } // from try @ 0313c300 with catch @ 0313beb0
                       catch() { ... } // from try @ 0313c374 with catch @ 0313beb0 */
    FUN_01bab630(&StringLiteral_11106/*"Recipe"*/);
    FUN_01bab630(&StringLiteral_22485/*"|"*/);
    DAT_04565d8a = 1;
  }
  HOOAAGABMBL___ctor((HOOAAGABMBL_o *)__this,(MethodInfo *)0x0);
  ppSVar8 = &(__this->fields).super._GMPAEDFIIHF_k__BackingField;
  *ppSVar8 = StringLiteral_11106/*"Recipe"*/;
  thunk_FUN_01c20e04(ppSVar8);
  (__this->fields).PHAGOJCOMPN = NDLOGJOGFCA;
  thunk_FUN_01c20e04(&(__this->fields).PHAGOJCOMPN,NDLOGJOGFCA);
  (__this->fields).MNELBNHIKGH = NKCMBEFHFII;
  thunk_FUN_01c20e04(&(__this->fields).MNELBNHIKGH,NKCMBEFHFII);
  (__this->fields).MHJAFBPAKEG = GMCFOKPADCA;
  thunk_FUN_01c20e04(&(__this->fields).MHJAFBPAKEG,GMCFOKPADCA);
  if (NKCMBEFHFII != (IGFGDDANEPE_o *)0x0) {
    pHVar6 = IGFGDDANEPE__JPNNODJPOCL(NKCMBEFHFII,false,(MethodInfo *)0x0);
    if (pHVar6 == (HOOAAGABMBL_o *)0x0) goto LAB_0313c068;
                    /* try { // try from 0313bf34 to 0323bf43 has its CatchHandler @ 0313c2a0 */
    (__this->fields).PFNIFGEBIAC = (pHVar6->fields)._JDEHPJEIOCI_k__BackingField;
  }
                    /* try { // try from 0313bf48 to 0323bf4b has its CatchHandler @ 0313c298 */
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 0313bf5c to 0323bf5f has its CatchHandler @ 0313c270 */
  if (DAT_04565b7d == '\0') {
                    /* try { // try from 0313bf64 to 0323bf6b has its CatchHandler @ 0313c28c */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
                    /* try { // try from 0313bf78 to 0323bf7b has its CatchHandler @ 0313c26c */
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0313bf80 to 0323bf83 has its CatchHandler @ 0313c268 */
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 0313bf88 to 0323bf8b has its CatchHandler @ 0313c260 */
                    /* try { // try from 0313bf8c to 0323c03f has its CatchHandler @ 0313beb0 */
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this_00 != (Roster_o *)0x0) {
    iVar5 = Roster__EOEAKGGDBFH(__this_00,(MethodInfo *)0x0);
    (__this->fields).BMPFHIJEDOD = iVar5;
    if (GMCFOKPADCA != (BFBONKPKBNL_o *)0x0) {
      iVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         (GMCFOKPADCA->fields)._LAOFJOMPFDL_k__BackingField.fields,(MethodInfo *)0x0
                        );
      if (0 < iVar5) {
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (DAT_04565b87 == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b87 = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        lVar9 = NLPJLHOEAOE_TypeInfo->static_fields->CBPPFGLIODM;
        iVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                           (GMCFOKPADCA->fields)._LAOFJOMPFDL_k__BackingField.fields,
                           (MethodInfo *)0x0);
        (__this->fields).CJKLJJIMECK = lVar9 + iVar5;
        iVar10 = (GMCFOKPADCA->fields)._BGAELGPOEHE_k__BackingField.fields.currentCryptoKey;
        bVar2 = (GMCFOKPADCA->fields)._BGAELGPOEHE_k__BackingField.fields.fakeValueActive;
        bVar3 = (GMCFOKPADCA->fields)._BGAELGPOEHE_k__BackingField.fields.inited;
        uVar4 = *(undefined6 *)&(GMCFOKPADCA->fields)._BGAELGPOEHE_k__BackingField.fields.field_0x1a
        ;
        iVar11 = (GMCFOKPADCA->fields)._BGAELGPOEHE_k__BackingField.fields.fakeValue;
        (__this->fields).super._BGAELGPOEHE_k__BackingField.fields.hiddenValue =
             (GMCFOKPADCA->fields)._BGAELGPOEHE_k__BackingField.fields.hiddenValue;
        (__this->fields).super._BGAELGPOEHE_k__BackingField.fields.currentCryptoKey = iVar10;
        pAVar1 = &__this->fields;
        (pAVar1->super)._BGAELGPOEHE_k__BackingField.fields.fakeValueActive = bVar2;
        (pAVar1->super)._BGAELGPOEHE_k__BackingField.fields.inited = bVar3;
        *(undefined6 *)&(pAVar1->super)._BGAELGPOEHE_k__BackingField.fields.field_0x1a = uVar4;
        (__this->fields).super._BGAELGPOEHE_k__BackingField.fields.fakeValue = iVar11;
      }
    }
    if ((NKCMBEFHFII != (IGFGDDANEPE_o *)0x0) && (NDLOGJOGFCA != (GGLKHCAIGDI_o *)0x0)) {
                    /* try { // try from 0313c040 to 0323c04f has its CatchHandler @ 0313c29c */
      pSVar7 = System_String__Concat
                         ((NKCMBEFHFII->fields).NPFMOEOIEKM,StringLiteral_22485/*"|"*/,
                          (NDLOGJOGFCA->fields)._COIPKAKHDFP_k__BackingField,(MethodInfo *)0x0);
      ppSVar8 = &(__this->fields).super._COIPKAKHDFP_k__BackingField;
      *ppSVar8 = pSVar7;
                    /* try { // try from 0313c054 to 0323c057 has its CatchHandler @ 0313c294 */
                    /* try { // try from 0313c05c to 0323c05f has its CatchHandler @ 0313c290 */
                    /* try { // try from 0313c064 to 0323c067 has its CatchHandler @ 0313c288 */
      thunk_FUN_01c20e04(ppSVar8,pSVar7);
      return;
    }
  }
LAB_0313c068:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public long HJNDKMKFGIP()  [RVA 0x303C06C]
// AMJMGFCCAKN$$HJNDKMKFGIP @ RVA 0x303C06C

int64_t AMJMGFCCAKN__HJNDKMKFGIP(AMJMGFCCAKN_o *__this,MethodInfo *method)

{
                    /* try { // try from 0313c06c to 0323c06f has its CatchHandler @ 0313c284 */
  return (__this->fields).CJKLJJIMECK;
}


// ===== public int EIBPNLPNNCD()  [RVA 0x303C074]
// AMJMGFCCAKN$$EIBPNLPNNCD @ RVA 0x303C074

int32_t AMJMGFCCAKN__EIBPNLPNNCD(AMJMGFCCAKN_o *__this,MethodInfo *method)

{
  return (__this->fields).BMPFHIJEDOD;
}


// ===== public bool FLMFEBPHFIP()  [RVA 0x303C07C]
// AMJMGFCCAKN$$FLMFEBPHFIP @ RVA 0x303C07C

bool AMJMGFCCAKN__FLMFEBPHFIP(AMJMGFCCAKN_o *__this,MethodInfo *method)

{
  int64_t iVar1;
  
  iVar1 = AMJMGFCCAKN__IEMNJCLKOIP(__this,method);
                    /* try { // try from 0313c084 to 0323c087 has its CatchHandler @ 0313c280 */
  return 0 < iVar1;
}


// ===== public IGFGDDANEPE DCFNBJCLAGP()  [RVA 0x303C094]
// AMJMGFCCAKN$$DCFNBJCLAGP @ RVA 0x303C094

IGFGDDANEPE_o * AMJMGFCCAKN__DCFNBJCLAGP(AMJMGFCCAKN_o *__this,MethodInfo *method)

{
  return (__this->fields).MNELBNHIKGH;
}


// ===== public int FCKKBHDIFGB()  [RVA 0x303C09C]
// AMJMGFCCAKN$$FCKKBHDIFGB @ RVA 0x303C09C

int32_t AMJMGFCCAKN__FCKKBHDIFGB(AMJMGFCCAKN_o *__this,MethodInfo *method)

{
                    /* try { // try from 0313c0a0 to 0323c0a3 has its CatchHandler @ 0313c25c */
  return (__this->fields).PFNIFGEBIAC;
}


// ===== public void JONJCPBEJDP(long CJNHFNHJHPE)  [RVA 0x303C0A4]
// AMJMGFCCAKN$$JONJCPBEJDP @ RVA 0x303C0A4

void AMJMGFCCAKN__JONJCPBEJDP(AMJMGFCCAKN_o *__this,int64_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).CJKLJJIMECK = CJNHFNHJHPE;
  return;
}


// ===== public GGLKHCAIGDI EJIOIDAJOEL()  [RVA 0x303C0AC]
// AMJMGFCCAKN$$EJIOIDAJOEL @ RVA 0x303C0AC

GGLKHCAIGDI_o * AMJMGFCCAKN__EJIOIDAJOEL(AMJMGFCCAKN_o *__this,MethodInfo *method)

{
  return (__this->fields).PHAGOJCOMPN;
}

