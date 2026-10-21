// AEKKBHAJLKG$$HNIHOIAMDPC @ RVA 0x3338968

void AEKKBHAJLKG__HNIHOIAMDPC
               (AEKKBHAJLKG_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  int64_t iVar4;
  
  if ((DAT_0456795e & 1) == 0) {
    FUN_01bab630(&StringLiteral_10071);
    FUN_01bab630(&StringLiteral_5750);
    FUN_01bab630(&StringLiteral_12374);
    FUN_01bab630(&StringLiteral_1);
    DAT_0456795e = 1;
  }
  BOFEMGGNODC__HNIHOIAMDPC((BOFEMGGNODC_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                       (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_10071,(MethodInfo *)0x0);
      pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1,(MethodInfo *)0x0);
      (__this->fields).MABIHPGHPLG = pSVar3;
      thunk_FUN_01c20e04();
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                         (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_12374,(MethodInfo *)0x0);
        iVar4 = EIABCPKDEBD__HNIGPBMJJOL(pSVar2,0,(MethodInfo *)0x0);
        (__this->fields).BHDPJJAEHNG = iVar4;
        pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                 (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                           (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
        if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar1,StringLiteral_5750,(MethodInfo *)0x0);
          iVar4 = EIABCPKDEBD__HNIGPBMJJOL(pSVar2,0,(MethodInfo *)0x0);
          (__this->fields).OIJNHBIFOAM = iVar4;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

