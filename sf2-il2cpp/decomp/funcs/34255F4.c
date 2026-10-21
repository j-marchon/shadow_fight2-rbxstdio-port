// ECGPIFIJMFF$$HNIHOIAMDPC @ RVA 0x34255F4

void ECGPIFIJMFF__HNIHOIAMDPC
               (ECGPIFIJMFF_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  int32_t iVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  
  if ((DAT_04568104 & 1) == 0) {
    FUN_01bab630(&StringLiteral_11442);
    FUN_01bab630(&StringLiteral_11445);
    DAT_04568104 = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_11445,(MethodInfo *)0x0);
      iVar1 = EIABCPKDEBD__EHJNCGCICMP(pSVar3,-1,(MethodInfo *)0x0);
      (__this->fields).DKGMKHOOHBI = iVar1;
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_11442,(MethodInfo *)0x0);
        iVar1 = EIABCPKDEBD__EHJNCGCICMP(pSVar3,-1,(MethodInfo *)0x0);
        (__this->fields).FGPEKOKDCNB = iVar1;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

