// MGJNNCKDJCP$$HNIHOIAMDPC @ RVA 0x35C4680

void MGJNNCKDJCP__HNIHOIAMDPC
               (MGJNNCKDJCP_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  MGJNNCKDJCP_o *__this_00;
  MethodInfo *in_x3;
  System_String_o **ppSVar4;
  
  if ((DAT_04568f53 & 1) == 0) {
    FUN_01bab630(&StringLiteral_3023);
    FUN_01bab630(&StringLiteral_8095);
    FUN_01bab630(&StringLiteral_1);
    DAT_04568f53 = 1;
  }
  BOFEMGGNODC__HNIHOIAMDPC((BOFEMGGNODC_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                       (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_3023,(MethodInfo *)0x0);
      pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1,(MethodInfo *)0x0);
      (__this->fields).IDNBELKLCEL = pSVar3;
      thunk_FUN_01c20e04();
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                         (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_8095,(MethodInfo *)0x0);
        pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1,(MethodInfo *)0x0);
        ppSVar4 = &(__this->fields).MHDJAEILAJL;
        *ppSVar4 = pSVar3;
        __this_00 = (MGJNNCKDJCP_o *)thunk_FUN_01c20e04(ppSVar4,pSVar3);
        MGJNNCKDJCP__MNDFPLAFICI
                  (__this_00,NPLGCIFGFOK,(System_Xml_XmlNode_o *)(__this->fields).HJKLIDCAEOE,in_x3)
        ;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

