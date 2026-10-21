// EKGDLIKHEMA$$.ctor @ RVA 0x3331178

void EKGDLIKHEMA___ctor(EKGDLIKHEMA_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  System_String_o **ppSVar5;
  
  if ((DAT_04567906 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9788);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_21605);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_1606);
    DAT_04567906 = 1;
  }
  ppSVar5 = &(__this->fields).DEKCPPOJFEH;
  *ppSVar5 = StringLiteral_1;
  thunk_FUN_01c20e04(ppSVar5);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).HJKLIDCAEOE = AHDGNOJPPIB;
  thunk_FUN_01c20e04(&__this->fields,AHDGNOJPPIB);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_9327,(MethodInfo *)0x0);
      pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1,(MethodInfo *)0x0);
      *ppSVar5 = pSVar4;
      thunk_FUN_01c20e04(ppSVar5,pSVar4);
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_9788,(MethodInfo *)0x0);
        pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1,(MethodInfo *)0x0);
        if (pSVar4 != (System_String_o *)0x0) {
          pSVar4 = System_String__ToLower(pSVar4,(MethodInfo *)0x0);
          bVar1 = System_String__op_Equality(pSVar4,StringLiteral_21605,(MethodInfo *)0x0);
          if (bVar1) {
            bVar1 = true;
          }
          else {
            bVar1 = System_String__op_Equality(pSVar4,StringLiteral_1606,(MethodInfo *)0x0);
          }
          (__this->fields).LDBJGDMBCKM = bVar1;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

