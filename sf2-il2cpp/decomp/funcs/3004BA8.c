// PHGEMMOPIFJ$$.ctor @ RVA 0x3004BA8

void PHGEMMOPIFJ___ctor(PHGEMMOPIFJ_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *a;
  System_String_o *a_00;
  int32_t iVar4;
  
  if ((DAT_04565b42 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_14784);
    FUN_01bab630(&StringLiteral_13991);
    FUN_01bab630(&StringLiteral_13809);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_5265);
    FUN_01bab630(&StringLiteral_11392);
    DAT_04565b42 = 1;
  }
  IENLNOEDCFF___ctor((IENLNOEDCFF_o *)__this,0xc,(MethodInfo *)0x0);
  if ((AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) ||
     (pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method),
     pSVar2 == (System_Xml_XmlAttributeCollection_o *)0x0)) {
LAB_03104d68:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                     (pSVar2,StringLiteral_9327,(MethodInfo *)0x0);
  a = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1,(MethodInfo *)0x0);
  pSVar2 = (System_Xml_XmlAttributeCollection_o *)
           (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                     (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
  if (pSVar2 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03104d68;
  pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                     (pSVar2,StringLiteral_13991,(MethodInfo *)0x0);
  a_00 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1,(MethodInfo *)0x0);
  bVar1 = System_String__op_Equality(a,StringLiteral_14784,(MethodInfo *)0x0);
  if (bVar1) {
    iVar4 = 1;
  }
  else {
    bVar1 = System_String__op_Equality(a,StringLiteral_5265,(MethodInfo *)0x0);
    if (!bVar1) {
      (__this->fields).JBNGADJBDHB = 0;
      goto LAB_03104d10;
    }
    iVar4 = 2;
  }
  (__this->fields).JBNGADJBDHB = iVar4;
LAB_03104d10:
  bVar1 = System_String__op_Equality(a_00,StringLiteral_13809,(MethodInfo *)0x0);
  if (bVar1) {
    iVar4 = 1;
  }
  else {
    bVar1 = System_String__op_Equality(a_00,StringLiteral_11392,(MethodInfo *)0x0);
    if (!bVar1) {
      (__this->fields).ABLHFFFHAMP = 0;
      return;
    }
    iVar4 = 2;
  }
  (__this->fields).ABLHFFFHAMP = iVar4;
  return;
}

