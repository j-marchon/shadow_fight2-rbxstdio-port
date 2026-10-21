// KIHIPAJGNBF$$MLDEHFFGJDP @ RVA 0x30DE64C

void KIHIPAJGNBF__MLDEHFFGJDP
               (KIHIPAJGNBF_o *__this,System_String_o *KGLJICLJHEL,System_String_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  
  pSVar1 = (__this->fields).HJKLIDCAEOE;
  if ((pSVar1 != (System_Xml_XmlNode_o *)0x0) &&
     (pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                         (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method),
     pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf(pSVar2,KGLJICLJHEL,(MethodInfo *)0x0);
    pSVar1 = (__this->fields).HJKLIDCAEOE;
    if (pSVar3 == (System_Xml_XmlAttribute_o *)0x0) {
      pSVar3 = EIABCPKDEBD__HBGAGFJBGKD(pSVar1,KGLJICLJHEL,(MethodInfo *)0x0);
    }
    else {
      if ((pSVar1 == (System_Xml_XmlNode_o *)0x0) ||
         (pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                   (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                             (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method),
         pSVar2 == (System_Xml_XmlAttributeCollection_o *)0x0)) goto LAB_031de6f8;
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf(pSVar2,KGLJICLJHEL,(MethodInfo *)0x0);
    }
    if (pSVar3 != (System_Xml_XmlAttribute_o *)0x0) {
      (*(pSVar3->klass->vtable)._10_set_Value.methodPtr)
                (pSVar3,CJNHFNHJHPE,(pSVar3->klass->vtable)._10_set_Value.method);
      CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this,false,(MethodInfo *)0x0);
      return;
    }
  }
LAB_031de6f8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

