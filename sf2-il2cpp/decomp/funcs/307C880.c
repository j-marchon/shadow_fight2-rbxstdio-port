// CNDPAJOLKFN$$EOHMFJFFFIN @ RVA 0x307C880

CNDPAJOLKFN_o * CNDPAJOLKFN__EOHMFJFFFIN(System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  CNDPAJOLKFN_o *__this;
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  MethodInfo *extraout_x1;
  float fVar4;
  
  if ((DAT_04565fe1 & 1) == 0) {
    FUN_01bab630(&CNDPAJOLKFN_TypeInfo);
    FUN_01bab630(&PNPPAHHCBOM_TypeInfo);
    FUN_01bab630(&StringLiteral_15134);
    FUN_01bab630(&StringLiteral_15021);
    DAT_04565fe1 = 1;
    method = extraout_x1;
  }
  if (JHMENEKPIBO == (System_Xml_XmlNode_o *)0x0) {
    __this = (CNDPAJOLKFN_o *)0x0;
  }
  else {
    __this = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo,method);
    PKHLGDMJPMF___ctor((PKHLGDMJPMF_o *)__this,0.0,0.0,(MethodInfo *)0x0);
    (__this->fields).PPOPAMHBMGG = 0.0;
    (__this->fields).super.OHHDBINAJCB = 0.0;
    (__this->fields).super.JOLEIODMLFL = 0.0;
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                       (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar1,StringLiteral_15021,(MethodInfo *)0x0);
    if (pSVar2 == (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar3 = (System_String_o *)
             (*(pSVar2->klass->vtable)._9_get_Value.methodPtr)
                       (pSVar2,(pSVar2->klass->vtable)._9_get_Value.method);
    if ((PNPPAHHCBOM_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    fVar4 = PNPPAHHCBOM__HNIHOIAMDPC(pSVar3,(MethodInfo *)0x0);
    (__this->fields).super.OHHDBINAJCB = fVar4;
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                       (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar1,StringLiteral_15134,(MethodInfo *)0x0);
    if (pSVar2 == (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar3 = (System_String_o *)
             (*(pSVar2->klass->vtable)._9_get_Value.methodPtr)
                       (pSVar2,(pSVar2->klass->vtable)._9_get_Value.method);
    if ((PNPPAHHCBOM_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    fVar4 = PNPPAHHCBOM__HNIHOIAMDPC(pSVar3,(MethodInfo *)0x0);
    (__this->fields).super.JOLEIODMLFL = fVar4;
  }
  return __this;
}

