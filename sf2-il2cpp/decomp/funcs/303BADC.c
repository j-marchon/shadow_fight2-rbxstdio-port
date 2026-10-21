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
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_10317);
    FUN_01bab630(&StringLiteral_5292);
    FUN_01bab630(&StringLiteral_8108);
    FUN_01bab630(&StringLiteral_1);
    DAT_04565d87 = 1;
  }
  HOOAAGABMBL___ctor((HOOAAGABMBL_o *)__this,(MethodInfo *)0x0);
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                       (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_9327,(MethodInfo *)0x0);
      AFKICLAFDKC = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1,(MethodInfo *)0x0);
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
                             (pSVar2,StringLiteral_8108,(MethodInfo *)0x0);
          iVar1 = EIABCPKDEBD__EHJNCGCICMP(pSVar3,0,(MethodInfo *)0x0);
          (__this->fields).PFNIFGEBIAC = iVar1;
          pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                   (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                             (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
          if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar2,StringLiteral_10317,(MethodInfo *)0x0);
            iVar1 = EIABCPKDEBD__EHJNCGCICMP(pSVar3,0,(MethodInfo *)0x0);
            (__this->fields).BMPFHIJEDOD = iVar1;
            pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                     (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                               (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
            if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar2,StringLiteral_5292,(MethodInfo *)0x0);
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

