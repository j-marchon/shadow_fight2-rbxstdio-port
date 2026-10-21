// JGIFDELCGOJ$$HNIHOIAMDPC @ RVA 0x333A638

void JGIFDELCGOJ__HNIHOIAMDPC
               (JGIFDELCGOJ_o *__this,System_Xml_XmlNode_o *ELOCKFLGKNO,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  float fVar4;
  
  if ((DAT_04567967 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_14694);
    DAT_04567967 = 1;
  }
  if (ELOCKFLGKNO != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(ELOCKFLGKNO->klass->vtable)._16_get_Attributes.methodPtr)
                       (ELOCKFLGKNO,(ELOCKFLGKNO->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_9327,(MethodInfo *)0x0);
      pSVar3 = GIAMPEGMNHE__LFCNNAGLPHO(pSVar2,(System_String_o *)0x0,(MethodInfo *)0x0);
      (__this->fields).JIJLBFGKNJK = pSVar3;
      thunk_FUN_01c20e04();
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(ELOCKFLGKNO->klass->vtable)._16_get_Attributes.methodPtr)
                         (ELOCKFLGKNO,(ELOCKFLGKNO->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_14694,(MethodInfo *)0x0);
        fVar4 = GIAMPEGMNHE__FOKFAIPDIMB(pSVar2,0.0,(MethodInfo *)0x0);
        (__this->fields).JAICMIMBIOA = fVar4;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

