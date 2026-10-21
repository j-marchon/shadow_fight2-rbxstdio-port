// ACHLOMELAJE$$PHCMABDBLJH @ RVA 0x3059F10

void ACHLOMELAJE__PHCMABDBLJH
               (ACHLOMELAJE_o *__this,System_String_o *KGLJICLJHEL,System_String_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  System_Xml_XmlElement_o *JHMENEKPIBO;
  System_Xml_XmlElement_o *JHMENEKPIBO_00;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *pSVar2;
  
  if ((DAT_04565e80 & 1) == 0) {
    FUN_01bab630(&StringLiteral_11874);
    FUN_01bab630(&StringLiteral_14694);
    DAT_04565e80 = 1;
  }
  pSVar1 = (__this->fields).super.HJKLIDCAEOE;
  if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
    JHMENEKPIBO = (System_Xml_XmlElement_o *)
                  (*(pSVar1->klass->vtable)._51_get_Item.methodPtr)
                            (pSVar1,StringLiteral_11874,(pSVar1->klass->vtable)._51_get_Item.method)
    ;
    if ((JHMENEKPIBO != (System_Xml_XmlElement_o *)0x0) ||
       (JHMENEKPIBO = EIABCPKDEBD__BHPIHHJHELJ
                                ((__this->fields).super.HJKLIDCAEOE,StringLiteral_11874,
                                 (MethodInfo *)0x0), JHMENEKPIBO != (System_Xml_XmlElement_o *)0x0))
    {
      JHMENEKPIBO_00 =
           (System_Xml_XmlElement_o *)
           (*(JHMENEKPIBO->klass->vtable)._51_get_Item.methodPtr)
                     (JHMENEKPIBO,KGLJICLJHEL,(JHMENEKPIBO->klass->vtable)._51_get_Item.method);
      if ((JHMENEKPIBO_00 != (System_Xml_XmlElement_o *)0x0) ||
         (JHMENEKPIBO_00 =
               EIABCPKDEBD__BHPIHHJHELJ
                         ((System_Xml_XmlNode_o *)JHMENEKPIBO,KGLJICLJHEL,(MethodInfo *)0x0),
         JHMENEKPIBO_00 != (System_Xml_XmlElement_o *)0x0)) {
        __this_00 = (System_Xml_XmlAttributeCollection_o *)
                    (*(JHMENEKPIBO_00->klass->vtable)._16_get_Attributes.methodPtr)
                              (JHMENEKPIBO_00,
                               (JHMENEKPIBO_00->klass->vtable)._16_get_Attributes.method);
        if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (__this_00,StringLiteral_14694,(MethodInfo *)0x0);
          if ((pSVar2 != (System_Xml_XmlAttribute_o *)0x0) ||
             (pSVar2 = EIABCPKDEBD__HBGAGFJBGKD
                                 ((System_Xml_XmlNode_o *)JHMENEKPIBO_00,StringLiteral_14694,
                                  (MethodInfo *)0x0), pSVar2 != (System_Xml_XmlAttribute_o *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0315a02c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(pSVar2->klass->vtable)._10_set_Value.methodPtr)
                      (pSVar2,CJNHFNHJHPE,(pSVar2->klass->vtable)._10_set_Value.method);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

