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
    FUN_01bab630(&StringLiteral_14099);
    FUN_01bab630(&StringLiteral_16036);
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
                         (StringLiteral_14099,pSVar2,StringLiteral_16036,(MethodInfo *)0x0);
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

