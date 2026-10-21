// LPACFIDMJOM$$MFCLMHKBBGH @ RVA 0x347A758

float LPACFIDMJOM__MFCLMHKBBGH
                (System_Xml_XmlNode_o *DMDFAKNEPGH,LDHGBBPECKF_o *HJCLPBKNLDP,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  float fVar1;
  
  if ((DAT_04568341 & 1) == 0) {
    FUN_01bab630(&StringLiteral_3266);
    DAT_04568341 = 1;
  }
  if (DMDFAKNEPGH != (System_Xml_XmlNode_o *)0x0) {
    __this = (System_Xml_XmlAttributeCollection_o *)
             (*(DMDFAKNEPGH->klass->vtable)._16_get_Attributes.methodPtr)
                       (DMDFAKNEPGH,(DMDFAKNEPGH->klass->vtable)._16_get_Attributes.method);
    if (__this != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this,StringLiteral_3266,(MethodInfo *)0x0);
      fVar1 = GIAMPEGMNHE__FOKFAIPDIMB(LBJNDMNEJJB,0.0,(MethodInfo *)0x0);
      if (HJCLPBKNLDP != (LDHGBBPECKF_o *)0x0) {
        (HJCLPBKNLDP->fields).HLIONLGKLPH = fVar1;
        return fVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

