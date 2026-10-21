// GLDKIFOLMAO$$.ctor @ RVA 0x32945D0

void GLDKIFOLMAO___ctor(GLDKIFOLMAO_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *PIGAGEDBOPC;
  System_String_o *GMCFOKPADCA;
  System_String_o *DKIIJGOLNGG;
  System_String_o *GHNAOGLCDFJ;
  MethodInfo *in_x5;
  
  if ((DAT_04567353 & 1) == 0) {
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_10454);
    FUN_01bab630(&StringLiteral_4924);
    FUN_01bab630(&StringLiteral_7293);
    FUN_01bab630(&StringLiteral_10462);
    DAT_04567353 = 1;
  }
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                       (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_7293,(MethodInfo *)0x0);
      PIGAGEDBOPC = EIABCPKDEBD__JPKEHIBGOEM
                              (pSVar2,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                         (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_10454,(MethodInfo *)0x0);
        GMCFOKPADCA = EIABCPKDEBD__JPKEHIBGOEM
                                (pSVar2,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
        pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                 (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                           (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
        if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar1,StringLiteral_10462,(MethodInfo *)0x0);
          DKIIJGOLNGG = EIABCPKDEBD__JPKEHIBGOEM
                                  (pSVar2,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
          pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                   (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                             (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
          if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar1,StringLiteral_4924,(MethodInfo *)0x0);
            GHNAOGLCDFJ = EIABCPKDEBD__JPKEHIBGOEM
                                    (pSVar2,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0)
            ;
            GLDKIFOLMAO___ctor(__this,PIGAGEDBOPC,GMCFOKPADCA,DKIIJGOLNGG,GHNAOGLCDFJ,in_x5);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

