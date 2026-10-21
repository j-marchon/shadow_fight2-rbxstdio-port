// TypeDefIndex 877
// Namespace: 
// public static class KCNFAADLADJ
// Fields:
//   private const string IILBEIAJACM = "UI/Fonts/";
//   private const string LNBIPDEANJE = "_TMP";

// ===== public static JBEHJGDKPHL FLFEFLPPBLL(XmlNode AHDGNOJPPIB, JBEHJGDKPHL NGHDFKOMKPF)  [RVA 0x3090424]
// KCNFAADLADJ$$FLFEFLPPBLL @ RVA 0x3090424

JBEHJGDKPHL_o *
KCNFAADLADJ__FLFEFLPPBLL
          (System_Xml_XmlNode_o *AHDGNOJPPIB,JBEHJGDKPHL_o *NGHDFKOMKPF,MethodInfo *method)

{
  JBEHJGDKPHL_o *__this;
  UnityEngine_Font_o *pUVar1;
  TMPro_TMP_FontAsset_o *pTVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  MethodInfo *in_x3;
  float fVar5;
  
  if ((DAT_04566096 & 1) == 0) {
    FUN_01bab630(&JBEHJGDKPHL_TypeInfo);
    FUN_01bab630(&StringLiteral_13828/*"TitleFont"*/);
    FUN_01bab630(&StringLiteral_3611/*"ButtonFont"*/);
    FUN_01bab630(&StringLiteral_4966/*"CustomLineSpacingScale"*/);
    FUN_01bab630(&StringLiteral_4649/*"ContentFont"*/);
    FUN_01bab630(&StringLiteral_6526/*"FontSizeScale"*/);
    FUN_01bab630(&StringLiteral_8463/*"LineSpacing"*/);
    FUN_01bab630(&StringLiteral_12265/*"SpecialBestFitFactor"*/);
    DAT_04566096 = 1;
  }
  if (AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) {
    return NGHDFKOMKPF;
  }
  __this = (JBEHJGDKPHL_o *)thunk_FUN_01bda818(JBEHJGDKPHL_TypeInfo);
  JBEHJGDKPHL___ctor(__this,(MethodInfo *)0x0);
  if ((NGHDFKOMKPF != (JBEHJGDKPHL_o *)0x0) &&
     (pUVar1 = KCNFAADLADJ__BHLCLJAKCIL
                         (AHDGNOJPPIB,StringLiteral_4649/*"ContentFont"*/,(NGHDFKOMKPF->fields).LGJBPLPKHPN,in_x3),
     __this != (JBEHJGDKPHL_o *)0x0)) {
    (__this->fields).LGJBPLPKHPN = pUVar1;
    thunk_FUN_01c20e04();
    pUVar1 = KCNFAADLADJ__BHLCLJAKCIL
                       (AHDGNOJPPIB,StringLiteral_13828/*"TitleFont"*/,(NGHDFKOMKPF->fields).AKHNPENIJKJ,in_x3);
    (__this->fields).AKHNPENIJKJ = pUVar1;
    thunk_FUN_01c20e04();
    pUVar1 = KCNFAADLADJ__BHLCLJAKCIL
                       (AHDGNOJPPIB,StringLiteral_3611/*"ButtonFont"*/,(NGHDFKOMKPF->fields).JMKKDKBAMMD,in_x3);
    (__this->fields).JMKKDKBAMMD = pUVar1;
    thunk_FUN_01c20e04();
    pTVar2 = KCNFAADLADJ__GLLIJJJIPPE
                       (AHDGNOJPPIB,StringLiteral_4649/*"ContentFont"*/,(NGHDFKOMKPF->fields).AJMJJOAGGLE,in_x3);
    (__this->fields).AJMJJOAGGLE = pTVar2;
    thunk_FUN_01c20e04();
    pTVar2 = KCNFAADLADJ__GLLIJJJIPPE
                       (AHDGNOJPPIB,StringLiteral_13828/*"TitleFont"*/,(NGHDFKOMKPF->fields).CBFDFBILBMC,in_x3);
    (__this->fields).CBFDFBILBMC = pTVar2;
    thunk_FUN_01c20e04();
    pTVar2 = KCNFAADLADJ__GLLIJJJIPPE
                       (AHDGNOJPPIB,StringLiteral_3611/*"ButtonFont"*/,(NGHDFKOMKPF->fields).GDONOAAGBEP,in_x3);
    (__this->fields).GDONOAAGBEP = pTVar2;
    thunk_FUN_01c20e04();
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_6526/*"FontSizeScale"*/,(MethodInfo *)0x0);
      fVar5 = EIABCPKDEBD__GICIEKCGOHA(pSVar4,(NGHDFKOMKPF->fields).DHMKKNFGGHN,(MethodInfo *)0x0);
      (__this->fields).DHMKKNFGGHN = fVar5;
      pSVar3 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar3,StringLiteral_8463/*"LineSpacing"*/,(MethodInfo *)0x0);
        fVar5 = EIABCPKDEBD__GICIEKCGOHA(pSVar4,(NGHDFKOMKPF->fields).LPOMGFMFKND,(MethodInfo *)0x0)
        ;
        (__this->fields).LPOMGFMFKND = fVar5;
        pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar3,StringLiteral_4966/*"CustomLineSpacingScale"*/,(MethodInfo *)0x0);
          fVar5 = EIABCPKDEBD__GICIEKCGOHA
                            (pSVar4,(NGHDFKOMKPF->fields).PPNIGDOLECH,(MethodInfo *)0x0);
          (__this->fields).PPNIGDOLECH = fVar5;
          pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar3,StringLiteral_12265/*"SpecialBestFitFactor"*/,(MethodInfo *)0x0);
            fVar5 = EIABCPKDEBD__GICIEKCGOHA
                              (pSVar4,(NGHDFKOMKPF->fields).PFHPMEPMFIB,(MethodInfo *)0x0);
            (__this->fields).PFHPMEPMFIB = fVar5;
            return __this;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static TMP_FontAsset GLLIJJJIPPE(XmlNode AHDGNOJPPIB, string AGPODGHEAIO, TMP_FontAsset KADJHMJEFOF)  [RVA 0x3090804]
// KCNFAADLADJ$$GLLIJJJIPPE @ RVA 0x3090804

TMPro_TMP_FontAsset_o *
KCNFAADLADJ__GLLIJJJIPPE
          (System_Xml_XmlNode_o *AHDGNOJPPIB,System_String_o *AGPODGHEAIO,
          TMPro_TMP_FontAsset_o *KADJHMJEFOF,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *__this;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar2;
  TMPro_TMP_FontAsset_o *exists;
  
  if ((DAT_04566097 & 1) == 0) {
    FUN_01bab630(&NAEFACJHPAL_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_14099/*"UI/Fonts/"*/);
    FUN_01bab630(&StringLiteral_16036/*"_TMP"*/);
    DAT_04566097 = 1;
  }
  exists = KADJHMJEFOF;
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                            (__this,AGPODGHEAIO,(MethodInfo *)0x0);
    pSVar2 = EIABCPKDEBD__JPKEHIBGOEM
                       (LBJNDMNEJJB,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
    bVar1 = PCOEHCPGBBG__EDHHJAMCOJH(pSVar2,(MethodInfo *)0x0);
    if (!bVar1) {
      pSVar2 = System_String__Concat
                         (StringLiteral_14099/*"UI/Fonts/"*/,pSVar2,StringLiteral_16036/*"_TMP"*/,(MethodInfo *)0x0);
      if ((NAEFACJHPAL_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(NAEFACJHPAL_TypeInfo);
      }
      exists = NAEFACJHPAL__CGOFELFENKA(pSVar2,(MethodInfo *)0x0);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
      bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)exists,(MethodInfo *)0x0);
      if (!bVar1) {
        exists = KADJHMJEFOF;
      }
    }
  }
  return exists;
}


// ===== private static Font BHLCLJAKCIL(XmlNode AHDGNOJPPIB, string AGPODGHEAIO, Font KADJHMJEFOF)  [RVA 0x30906C0]
// KCNFAADLADJ$$BHLCLJAKCIL @ RVA 0x30906C0

UnityEngine_Font_o *
KCNFAADLADJ__BHLCLJAKCIL
          (System_Xml_XmlNode_o *AHDGNOJPPIB,System_String_o *AGPODGHEAIO,
          UnityEngine_Font_o *KADJHMJEFOF,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *__this;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar2;
  UnityEngine_Font_o *exists;
  
  if ((DAT_04566098 & 1) == 0) {
    FUN_01bab630(&NAEFACJHPAL_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_14099/*"UI/Fonts/"*/);
    DAT_04566098 = 1;
  }
  exists = KADJHMJEFOF;
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                            (__this,AGPODGHEAIO,(MethodInfo *)0x0);
    pSVar2 = EIABCPKDEBD__JPKEHIBGOEM
                       (LBJNDMNEJJB,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
    bVar1 = PCOEHCPGBBG__EDHHJAMCOJH(pSVar2,(MethodInfo *)0x0);
    if (!bVar1) {
      pSVar2 = System_String__Concat(StringLiteral_14099/*"UI/Fonts/"*/,pSVar2,(MethodInfo *)0x0);
      if ((NAEFACJHPAL_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(NAEFACJHPAL_TypeInfo);
      }
      exists = NAEFACJHPAL__FFDEIMBGICG(pSVar2,(MethodInfo *)0x0);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
      bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)exists,(MethodInfo *)0x0);
      if (!bVar1) {
        exists = KADJHMJEFOF;
      }
    }
  }
  return exists;
}

