// GIAMPEGMNHE$$OKCALGFAMFA @ RVA 0x330CB88

UnityEngine_Vector2_o
GIAMPEGMNHE__OKCALGFAMFA
          (System_Xml_XmlNode_o *JHMENEKPIBO,float KJBOKJNJBEK,float IKNINMHPJEI,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  UnityEngine_Vector2_o UVar3;
  
  if ((DAT_0456778f & 1) == 0) {
    FUN_01bab630(&StringLiteral_7359);
    FUN_01bab630(&StringLiteral_9996);
    DAT_0456778f = 1;
  }
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                       (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_7359,(MethodInfo *)0x0);
      KJBOKJNJBEK = EIABCPKDEBD__GICIEKCGOHA(pSVar2,KJBOKJNJBEK,(MethodInfo *)0x0);
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                         (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_9996,(MethodInfo *)0x0);
        IKNINMHPJEI = EIABCPKDEBD__GICIEKCGOHA(pSVar2,IKNINMHPJEI,(MethodInfo *)0x0);
        goto LAB_0340cc48;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_0340cc48:
  UVar3.fields.y = IKNINMHPJEI;
  UVar3.fields.x = KJBOKJNJBEK;
  return (UnityEngine_Vector2_o)UVar3.fields;
}

