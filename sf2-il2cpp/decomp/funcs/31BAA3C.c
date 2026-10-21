// DBIINAFCKME$$MLDEHFFGJDP @ RVA 0x31BAA3C

void DBIINAFCKME__MLDEHFFGJDP
               (DBIINAFCKME_o *__this,System_String_o *KGLJICLJHEL,System_String_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Xml_XmlNode_o *pSVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  
  if ((DAT_04566bd9 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1);
    DAT_04566bd9 = 1;
  }
  pSVar2 = (__this->fields).DMLGJFCNNJF;
  pSVar1 = StringLiteral_1;
  if (CJNHFNHJHPE != (System_String_o *)0x0) {
    pSVar1 = CJNHFNHJHPE;
  }
  if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                       (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method);
    if (pSVar3 == (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = (__this->fields).DMLGJFCNNJF;
    }
    else {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf(pSVar3,KGLJICLJHEL,(MethodInfo *)0x0);
      pSVar2 = (__this->fields).DMLGJFCNNJF;
      if (pSVar4 != (System_Xml_XmlAttribute_o *)0x0) {
        if (((pSVar2 == (System_Xml_XmlNode_o *)0x0) ||
            (pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                      (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                                (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method),
            pSVar3 == (System_Xml_XmlAttributeCollection_o *)0x0)) ||
           (pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar3,KGLJICLJHEL,(MethodInfo *)0x0),
           pSVar4 == (System_Xml_XmlAttribute_o *)0x0)) goto LAB_032baae4;
        goto LAB_032bab00;
      }
    }
    pSVar4 = EIABCPKDEBD__HBGAGFJBGKD(pSVar2,KGLJICLJHEL,(MethodInfo *)0x0);
    if (pSVar4 != (System_Xml_XmlAttribute_o *)0x0) {
LAB_032bab00:
      (*(pSVar4->klass->vtable)._10_set_Value.methodPtr)
                (pSVar4,pSVar1,(pSVar4->klass->vtable)._10_set_Value.method);
      CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this,false,(MethodInfo *)0x0);
      return;
    }
  }
LAB_032baae4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

