// IDLLJHPDAHE.GEBJFKLEAMM$$HNIHOIAMDPC @ RVA 0x315EE20

void IDLLJHPDAHE_GEBJFKLEAMM__HNIHOIAMDPC
               (IDLLJHPDAHE_GEBJFKLEAMM_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,
               MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o **ppSVar4;
  float fVar5;
  
  if ((DAT_04566881 & 1) == 0) {
    FUN_01bab630(&StringLiteral_3202);
    FUN_01bab630(&StringLiteral_3400);
    DAT_04566881 = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_String_o *)
             (*(AHDGNOJPPIB->klass->vtable)._8_unknown.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._8_unknown.method);
    (__this->fields).NPFMOEOIEKM = pSVar1;
    thunk_FUN_01c20e04();
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_3400,(MethodInfo *)0x0);
      fVar5 = GIAMPEGMNHE__FOKFAIPDIMB(pSVar3,0.0,(MethodInfo *)0x0);
      (__this->fields).EDJNGCBGHAC = fVar5;
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_3202,(MethodInfo *)0x0);
        pSVar1 = GIAMPEGMNHE__LFCNNAGLPHO(pSVar3,(System_String_o *)0x0,(MethodInfo *)0x0);
        ppSVar4 = &(__this->fields).KEAMOFCKGHH;
        *ppSVar4 = pSVar1;
        thunk_FUN_01c20e04(ppSVar4,pSVar1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

