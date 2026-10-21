// NLPJLHOEAOE$$BGCLIIHJPHJ @ RVA 0x32043DC

bool NLPJLHOEAOE__BGCLIIHJPHJ
               (NLPJLHOEAOE_o *__this,System_Xml_XmlNode_o *LEDJDDKHNMI,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  
  if ((DAT_04566e3a & 1) == 0) {
    FUN_01bab630(&StringLiteral_14619);
    __this = (NLPJLHOEAOE_o *)FUN_01bab630(&StringLiteral_13850);
    DAT_04566e3a = 1;
  }
  if (LEDJDDKHNMI != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(LEDJDDKHNMI->klass->vtable)._16_get_Attributes.methodPtr)
                       (LEDJDDKHNMI,(LEDJDDKHNMI->klass->vtable)._16_get_Attributes.method);
    __this = (NLPJLHOEAOE_o *)0x0;
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_13850,(MethodInfo *)0x0);
      if (pSVar2 != (System_Xml_XmlAttribute_o *)0x0) {
        EIABCPKDEBD__GDAEOIJNJMO(LEDJDDKHNMI,StringLiteral_13850,(MethodInfo *)0x0);
      }
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(LEDJDDKHNMI->klass->vtable)._16_get_Attributes.methodPtr)
                         (LEDJDDKHNMI,(LEDJDDKHNMI->klass->vtable)._16_get_Attributes.method);
      __this = (NLPJLHOEAOE_o *)0x0;
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_14619,(MethodInfo *)0x0);
        if (pSVar3 != (System_Xml_XmlAttribute_o *)0x0) {
          EIABCPKDEBD__GDAEOIJNJMO(LEDJDDKHNMI,StringLiteral_14619,(MethodInfo *)0x0);
        }
        return pSVar3 != (System_Xml_XmlAttribute_o *)0x0 ||
               pSVar2 != (System_Xml_XmlAttribute_o *)0x0;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

