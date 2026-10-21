// LPACFIDMJOM$$HKIEJPKHBKG @ RVA 0x347AD14

float LPACFIDMJOM__HKIEJPKHBKG
                (System_Xml_XmlNode_o *DMDFAKNEPGH,LDHGBBPECKF_o *HJCLPBKNLDP,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  float fVar3;
  
  if ((DAT_04568345 & 1) == 0) {
    FUN_01bab630(&StringLiteral_3265);
    FUN_01bab630(&StringLiteral_11102);
    FUN_01bab630(&StringLiteral_8785);
    DAT_04568345 = 1;
  }
  if (DMDFAKNEPGH != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(DMDFAKNEPGH->klass->vtable)._16_get_Attributes.methodPtr)
                       (DMDFAKNEPGH,(DMDFAKNEPGH->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_3265,(MethodInfo *)0x0);
      fVar3 = GIAMPEGMNHE__FOKFAIPDIMB(pSVar2,0.0,(MethodInfo *)0x0);
      if (HJCLPBKNLDP != (LDHGBBPECKF_o *)0x0) {
        (HJCLPBKNLDP->fields).JFILIGMAEAL = fVar3;
        pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                 (*(DMDFAKNEPGH->klass->vtable)._16_get_Attributes.methodPtr)
                           (DMDFAKNEPGH,(DMDFAKNEPGH->klass->vtable)._16_get_Attributes.method);
        if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar1,StringLiteral_11102,(MethodInfo *)0x0);
          fVar3 = GIAMPEGMNHE__FOKFAIPDIMB(pSVar2,0.0,(MethodInfo *)0x0);
          (HJCLPBKNLDP->fields).HIILEMCLEPD = fVar3;
          pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                   (*(DMDFAKNEPGH->klass->vtable)._16_get_Attributes.methodPtr)
                             (DMDFAKNEPGH,(DMDFAKNEPGH->klass->vtable)._16_get_Attributes.method);
          if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar1,StringLiteral_8785,(MethodInfo *)0x0);
            fVar3 = GIAMPEGMNHE__FOKFAIPDIMB(pSVar2,0.0,(MethodInfo *)0x0);
            (HJCLPBKNLDP->fields).MKAOIILMGCG = fVar3;
            return (HJCLPBKNLDP->fields).JFILIGMAEAL;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

