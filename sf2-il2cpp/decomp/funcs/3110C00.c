// DDMHMABAHHD$$.ctor @ RVA 0x3110C00

void DDMHMABAHHD___ctor(DDMHMABAHHD_o *__this,System_Xml_XmlNode_o *PPOGPLAOHGI,MethodInfo *method)

{
  int32_t iVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  float fVar5;
  
  if ((DAT_04566580 & 1) == 0) {
    FUN_01bab630(&Method_PCOEHCPGBBG_AICKIDLLIBK<DDMHMABAHHD_AJKNCGANAMJ>__);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_14694);
    FUN_01bab630(&StringLiteral_14891);
    FUN_01bab630(&StringLiteral_10477);
    DAT_04566580 = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (PPOGPLAOHGI != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(PPOGPLAOHGI->klass->vtable)._16_get_Attributes.methodPtr)
                       (PPOGPLAOHGI,(PPOGPLAOHGI->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_9327,(MethodInfo *)0x0);
      pSVar4 = (System_String_o *)
               (*(PPOGPLAOHGI->klass->vtable)._8_unknown.methodPtr)
                         (PPOGPLAOHGI,(PPOGPLAOHGI->klass->vtable)._8_unknown.method);
      pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,pSVar4,(MethodInfo *)0x0);
      (__this->fields)._COIPKAKHDFP_k__BackingField = pSVar4;
      thunk_FUN_01c20e04();
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(PPOGPLAOHGI->klass->vtable)._16_get_Attributes.methodPtr)
                         (PPOGPLAOHGI,(PPOGPLAOHGI->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_14694,(MethodInfo *)0x0);
        iVar1 = EIABCPKDEBD__EHJNCGCICMP(pSVar3,0,(MethodInfo *)0x0);
        (__this->fields)._HFPMLGFDOKC_k__BackingField = iVar1;
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(PPOGPLAOHGI->klass->vtable)._16_get_Attributes.methodPtr)
                           (PPOGPLAOHGI,(PPOGPLAOHGI->klass->vtable)._16_get_Attributes.method);
        if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar2,StringLiteral_14891,(MethodInfo *)0x0);
          fVar5 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,0.0,(MethodInfo *)0x0);
          (__this->fields)._GOPKIGPPKCB_k__BackingField = fVar5;
          pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                   (*(PPOGPLAOHGI->klass->vtable)._16_get_Attributes.methodPtr)
                             (PPOGPLAOHGI,(PPOGPLAOHGI->klass->vtable)._16_get_Attributes.method);
          if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar2,StringLiteral_10477,(MethodInfo *)0x0);
            fVar5 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,1.0,(MethodInfo *)0x0);
            (__this->fields)._BKOJHCAOKBO_k__BackingField = fVar5;
            pSVar4 = (System_String_o *)
                     (*(PPOGPLAOHGI->klass->vtable)._8_unknown.methodPtr)
                               (PPOGPLAOHGI,(PPOGPLAOHGI->klass->vtable)._8_unknown.method);
            iVar1 = PCOEHCPGBBG__AICKIDLLIBK<Int32Enum>
                              (pSVar4,0,Method_PCOEHCPGBBG_AICKIDLLIBK<DDMHMABAHHD_AJKNCGANAMJ>__);
            (__this->fields)._GMPAEDFIIHF_k__BackingField = iVar1;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

