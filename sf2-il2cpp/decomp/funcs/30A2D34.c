// IGFGDDANEPE$$CCOEOCPGJBG @ RVA 0x30A2D34

void IGFGDDANEPE__CCOEOCPGJBG(IGFGDDANEPE_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o **ppSVar4;
  
  if ((DAT_04566155 & 1) == 0) {
    FUN_01bab630(&StringLiteral_2724);
    DAT_04566155 = 1;
  }
  ppSVar4 = &(__this->fields).MLEHIIGFDKM;
  *ppSVar4 = CJNHFNHJHPE;
  thunk_FUN_01c20e04(ppSVar4,CJNHFNHJHPE);
  if ((__this->fields).MMNCAIGLMJB != false) {
    pSVar1 = (__this->fields).DMLGJFCNNJF;
    if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                         (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_2724,(MethodInfo *)0x0);
        if (pSVar3 == (System_Xml_XmlAttribute_o *)0x0) {
          EIABCPKDEBD__HBGAGFJBGKD
                    ((__this->fields).DMLGJFCNNJF,StringLiteral_2724,(MethodInfo *)0x0);
        }
        pSVar1 = (__this->fields).DMLGJFCNNJF;
        if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
          pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                   (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                             (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method);
          if ((pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) &&
             (pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar2,StringLiteral_2724,(MethodInfo *)0x0),
             pSVar3 != (System_Xml_XmlAttribute_o *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x031a2e04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(pSVar3->klass->vtable)._10_set_Value.methodPtr)
                      (pSVar3,*ppSVar4,(pSVar3->klass->vtable)._10_set_Value.method);
            return;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

